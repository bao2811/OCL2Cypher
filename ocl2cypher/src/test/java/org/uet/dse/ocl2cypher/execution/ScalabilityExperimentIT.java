package org.uet.dse.ocl2cypher.execution;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.io.PrintWriter;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.time.Duration;
import java.time.Instant;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Collectors;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.neo4j.driver.AuthTokens;
import org.neo4j.driver.Driver;
import org.neo4j.driver.GraphDatabase;
import org.neo4j.driver.Session;
import org.neo4j.driver.SessionConfig;
import org.neo4j.driver.TransactionConfig;
import org.neo4j.driver.summary.ResultSummary;
import org.neo4j.driver.summary.ProfiledPlan;
import org.tzi.use.parser.shell.ShellCommandCompiler;
import org.tzi.use.parser.use.USECompiler;
import org.tzi.use.uml.mm.MClassInvariant;
import org.tzi.use.uml.mm.MModel;
import org.tzi.use.uml.mm.ModelFactory;
import org.tzi.use.uml.ocl.expr.Evaluator;
import org.tzi.use.uml.ocl.value.BooleanValue;
import org.tzi.use.uml.ocl.value.Value;
import org.tzi.use.uml.ocl.value.VarBindings;
import org.tzi.use.uml.sys.MObject;
import org.tzi.use.uml.sys.MSystem;
import org.tzi.use.uml.sys.MSystemException;
import org.tzi.use.uml.sys.soil.MStatement;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.graph.GraphBuilder;
import org.uet.dse.ocl2cypher.graph.GraphModel;
import org.uet.dse.ocl2cypher.input.FileCompilation;
import org.uet.dse.ocl2cypher.input.ModelInputCompiler;
import org.uet.dse.ocl2cypher.input.UseSoilInput;
import org.uet.dse.ocl2cypher.qcyp.QInterpreter;

/**
 * Opt-in scale experiment with generated, conforming Company snapshots.
 *
 * <p>The experiment reports single-run phase timings separately from repeated
 * query samples. Primary Neo4j samples use server-reported result timing;
 * client end-to-end latency is recorded separately. Neither includes graph
 * validation, serialization or materialization. Not in the default test suite.
 */
final class ScalabilityExperimentIT {
    private static final Path EXAMPLE = Path.of("..", "example",
            "ocl2cypher-correctness-case-study").toAbsolutePath().normalize();
    private static final Pattern MODEL_DECLARATION = Pattern.compile(
            "(?m)^(\\s*model\\s+)[A-Za-z_][A-Za-z0-9_]*\\s*$");
    private static final Map<String, String> EXPECTED_REJECTIONS = Map.of(
            "Company::AgeIntersection", "E_TYPE",
            "Person::HighRating", "R-REAL-EXACT-UNSUPPORTED",
            "Person::NumericSetMembership", "E_TYPE");
    private static final Set<String> EXCLUDED_IMPLEMENTATION_EXTENSIONS = Set.of(
            "Company::UniqueEmployeeNames");
    private static final int EXPECTED_DEFINITIONS = 26;
    private static final int EXPECTED_ADMITTED = 22;

    @TempDir
    Path temporaryDirectory;

    @Test
    void measureGeneratedCompanySnapshotsOnLiveNeo4j() throws Exception {
        assertTrue(Boolean.parseBoolean(env("OCL2CYPHER_SCALE_LIVE", "false")),
                "Set OCL2CYPHER_SCALE_LIVE=true; scale measurements require live Neo4j");
        List<Integer> sizes = parseSizes(System.getProperty(
                "ocl2cypher.scaleSizes", "50,200,500"));
        int warmups = positiveOrZero("ocl2cypher.scaleWarmups", 3);
        int repetitions = positive("ocl2cypher.scaleRepetitions", 10);
        int timeoutSeconds = positive("ocl2cypher.scaleQueryTimeoutSeconds", 60);
        boolean profileQueries = Boolean.parseBoolean(System.getProperty(
                "ocl2cypher.scaleProfileQueries", "false"));
        boolean largeMode = Boolean.parseBoolean(System.getProperty(
                "ocl2cypher.scaleLargeMode", "false"));
        String runId = System.getProperty("ocl2cypher.scaleRunId",
                "scale-" + UUID.randomUUID().toString().replace("-", ""));
        Path output = Path.of(System.getProperty("ocl2cypher.scaleOutput",
                        "target/experiments/" + runId + "/scale"))
                .toAbsolutePath().normalize();
        Files.createDirectories(output);
        Files.createDirectories(output.resolve("generated-inputs"));
        Files.createDirectories(output.resolve("queries"));

        List<PhaseRow> phases = new ArrayList<>();
        List<QuerySample> neo4jSamples = new ArrayList<>();
        List<QuerySample> useSamples = new ArrayList<>();
        List<QuerySample> validationSamples = new ArrayList<>();
        List<String> failures = new ArrayList<>();
        List<String> components = new ArrayList<>();
        List<String> indexes = new ArrayList<>();

        try (Driver driver = GraphDatabase.driver(requiredEnv("NEO4J_URI"),
                     AuthTokens.basic(requiredEnv("NEO4J_USER"),
                             requiredEnv("NEO4J_PASSWORD")))) {
            driver.verifyConnectivity();
            try (Session session = driver.session(SessionConfig.forDatabase(
                    requiredEnv("NEO4J_DB")))) {
                Neo4jExecutionAdapter.ensureRecommendedIndexes(session);
                if (largeMode) {
                    // _stableKey exists only during materialization. Indexing it avoids
                    // repeated endpoint scans without changing the stored graph/query.
                    session.run("CREATE INDEX ocl2cypher_scale_stable_key IF NOT EXISTS "
                            + "FOR (n:`OCL2CypherManaged`) "
                            + "ON (n.`modelKey`, n.`_stableKey`)").consume();
                    session.run("CALL db.awaitIndexes()").consume();
                }
                components.addAll(session.run(
                                "CALL dbms.components() YIELD name, versions, edition "
                                        + "RETURN name, versions, edition")
                        .list(record -> record.get("name").asString() + "|"
                                + record.get("versions").asList() + "|"
                                + record.get("edition").asString()));
                indexes.addAll(session.run(
                                "SHOW INDEXES YIELD name, state, type, entityType, "
                                        + "labelsOrTypes, properties "
                                        + "RETURN name, state, type, entityType, "
                                        + "labelsOrTypes, properties ORDER BY name")
                        .list(record -> record.get("name").asString() + "|"
                                + record.get("state").asString() + "|"
                                + record.get("type").asString() + "|"
                                + record.get("entityType").asString() + "|"
                                + nullableList(record.get("labelsOrTypes")) + "|"
                                + nullableList(record.get("properties"))));
                for (int size : sizes) {
                    try {
                        evaluateSize(size, runId, warmups, repetitions, timeoutSeconds,
                                profileQueries, largeMode,
                                session, output, phases, neo4jSamples, useSamples,
                                validationSamples);
                    } catch (Exception error) {
                        failures.add("size=" + size + ": " + safeMessage(error));
                    }
                }
            }
        } finally {
            Files.write(output.resolve("neo4j-components.txt"), components,
                    StandardCharsets.UTF_8);
            Files.write(output.resolve("neo4j-indexes.txt"), indexes,
                    StandardCharsets.UTF_8);
            writeReports(output, runId, sizes, warmups, repetitions, timeoutSeconds,
                    phases, neo4jSamples, useSamples, validationSamples, failures);
        }

        int expectedSamples = sizes.size() * EXPECTED_ADMITTED * repetitions;
        assertEquals(expectedSamples, neo4jSamples.size(),
                "missing measured Neo4j query samples");
        assertEquals(expectedSamples, useSamples.size(),
                "missing measured USE query samples");
        assertTrue(failures.isEmpty(), () -> "scale experiment failures:\n"
                + String.join("\n", failures) + "\nevidence=" + output);
    }

    private void evaluateSize(int personCount, String runId, int warmups,
            int repetitions, int timeoutSeconds, boolean profileQueries,
            boolean largeMode,
            Session session, Path output,
            List<PhaseRow> phases, List<QuerySample> neo4jSamples,
            List<QuerySample> useSamples, List<QuerySample> validationSamples)
            throws Exception {
        String modelKey = namespace(personCount, runId);
        long generationStarted = System.nanoTime();
        PreparedInput prepared = generateInput(personCount, modelKey, output);
        long generationNanos = System.nanoTime() - generationStarted;

        long useStarted = System.nanoTime();
        UseEvaluationAdapter.Result use = UseEvaluationAdapter.evaluate(
                prepared.useFile(), prepared.soilFile());
        long useNanos = System.nanoTime() - useStarted;

        long loadStarted = System.nanoTime();
        var loaded = UseSoilInput.load(prepared.useFile(), prepared.soilFile());
        long loadNanos = System.nanoTime() - loadStarted;
        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        var input = loaded.value();
        assertEquals(EXPECTED_DEFINITIONS, input.invariants().size());
        assertEquals(personCount + 1, input.snapshot().objects().size());
        assertEquals(personCount + 1, input.snapshot().links().size());

        long graphStarted = System.nanoTime();
        var built = GraphBuilder.build(input.schema(), input.snapshot());
        long graphNanos = System.nanoTime() - graphStarted;
        assertTrue(built.isSuccess(), () -> built.diagnostics().toString());
        GraphModel graph = built.value().graph();

        long compilationStarted = System.nanoTime();
        List<CompiledCase> compiledCases = new ArrayList<>();
        int rejections = 0;
        int excludedExtensions = 0;
        for (var invariant : input.invariants()) {
            String key = invariant.contextClassKey() + "::" + invariant.name();
            if (EXCLUDED_IMPLEMENTATION_EXTENSIONS.contains(key)) {
                excludedExtensions++;
                continue;
            }
            var compiled = largeMode
                    ? ModelInputCompiler.compile(input, key,
                            CypherAst.Dialect.CYPHER_5, built.value())
                    : ModelInputCompiler.compile(input, key,
                            CypherAst.Dialect.CYPHER_5);
            String expectedRejection = EXPECTED_REJECTIONS.get(key);
            if (compiled.isFailure()) {
                assertEquals(expectedRejection, compiled.primaryDiagnostic().code(),
                        () -> key + ": " + compiled.primaryDiagnostic());
                rejections++;
                continue;
            }
            assertTrue(expectedRejection == null,
                    () -> key + " unexpectedly crossed its declared rejection boundary "
                            + expectedRejection);
            Set<String> expectedIds = use.violationsFor(key);
            Set<String> qIds = Set.copyOf(QInterpreter.violations(
                    input.schema(), compiled.value().graph().graph(),
                    compiled.value().core(), compiled.value().query()));
            assertEquals(expectedIds, qIds, "USE/Q disagreement at " + key);
            compiledCases.add(new CompiledCase(key, compiled.value(), expectedIds));

            Path queryDirectory = output.resolve("queries")
                    .resolve(Integer.toString(personCount));
            Files.createDirectories(queryDirectory);
            Files.writeString(queryDirectory.resolve(fileName(key) + ".cypher"),
                    compiled.value().serializedCypher().cypherText(),
                    StandardCharsets.UTF_8);
        }
        long compilationNanos = System.nanoTime() - compilationStarted;
        assertEquals(EXPECTED_REJECTIONS.size(), rejections);
        assertEquals(EXCLUDED_IMPLEMENTATION_EXTENSIONS.size(), excludedExtensions);
        assertEquals(EXPECTED_ADMITTED, compiledCases.size());

        long useQueryPreparationStarted = System.nanoTime();
        UseQueryRunner useQueryRunner = UseQueryRunner.prepare(
                prepared.useFile(), prepared.soilFile());
        long useQueryPreparationNanos = System.nanoTime() - useQueryPreparationStarted;

        long useWarmupStarted = System.nanoTime();
        for (int repetition = 0; repetition < warmups; repetition++) {
            for (CompiledCase compiled : compiledCases) {
                assertEquals(compiled.expectedIds(), useQueryRunner.execute(compiled.key()),
                        "USE warm-up result at " + compiled.key());
            }
        }
        long useWarmupNanos = System.nanoTime() - useWarmupStarted;

        long measuredUseStarted = System.nanoTime();
        for (int repetition = 1; repetition <= repetitions; repetition++) {
            for (CompiledCase compiled : compiledCases) {
                long queryStarted = System.nanoTime();
                Set<String> actual = useQueryRunner.execute(compiled.key());
                long queryNanos = System.nanoTime() - queryStarted;
                assertEquals(compiled.expectedIds(), actual,
                        "measured USE result at " + compiled.key());
                useSamples.add(new QuerySample(personCount, compiled.key(), repetition,
                        queryNanos, actual.size(),
                        compiled.compilation().serializedCypher().cypherText().length(),
                        null, null, queryNanos));
            }
        }
        long measuredUseNanos = System.nanoTime() - measuredUseStarted;

        long materializationStarted = System.nanoTime();
        Neo4jExecutionAdapter.materializeGraph(session, graph);
        long materializationNanos = System.nanoTime() - materializationStarted;
        long validationNanos = 0;
        long warmupNanos = 0;
        long measuredNanos = 0;
        try {
            long validationStarted = System.nanoTime();
            for (CompiledCase compiled : compiledCases) {
                long queryStarted = System.nanoTime();
                RawQueryResult result = executeRaw(session, compiled.compilation(), graph,
                        timeoutSeconds);
                long queryNanos = System.nanoTime() - queryStarted;
                validationSamples.add(new QuerySample(personCount, compiled.key(), 0,
                        result.serverNanos(), result.ids().size(),
                        compiled.compilation().serializedCypher().cypherText().length(),
                        result.availableNanos(), result.consumedNanos(), queryNanos));
                assertEquals(compiled.expectedIds(), result.ids(),
                        "adapter correctness run at " + compiled.key());
            }
            validationNanos = System.nanoTime() - validationStarted;

            long warmupStarted = System.nanoTime();
            for (int repetition = 0; repetition < warmups; repetition++) {
                for (CompiledCase compiled : compiledCases) {
                    assertEquals(compiled.expectedIds(),
                            executeRaw(session, compiled.compilation(), graph,
                                    timeoutSeconds).ids(),
                            "warm-up result at " + compiled.key());
                }
            }
            warmupNanos = System.nanoTime() - warmupStarted;

            long measuredStarted = System.nanoTime();
            for (int repetition = 1; repetition <= repetitions; repetition++) {
                for (CompiledCase compiled : compiledCases) {
                    long queryStarted = System.nanoTime();
                    RawQueryResult result = executeRaw(session, compiled.compilation(), graph,
                            timeoutSeconds);
                    long queryNanos = System.nanoTime() - queryStarted;
                    assertEquals(compiled.expectedIds(), result.ids(),
                            "measured result at " + compiled.key());
                    neo4jSamples.add(new QuerySample(personCount, compiled.key(), repetition,
                            result.serverNanos(), result.ids().size(),
                            compiled.compilation().serializedCypher().cypherText().length(),
                            result.availableNanos(), result.consumedNanos(), queryNanos));
                }
            }
            measuredNanos = System.nanoTime() - measuredStarted;
            if (profileQueries) {
                writeDiagnosticProfiles(session, compiledCases, graph,
                        timeoutSeconds, personCount, output);
            }
        } finally {
            long cleanupStarted = System.nanoTime();
            session.run("MATCH (n {modelKey:$modelKey}) DETACH DELETE n",
                    Map.of("modelKey", modelKey)).consume();
            long cleanupNanos = System.nanoTime() - cleanupStarted;
            phases.add(new PhaseRow(personCount, modelKey,
                    input.snapshot().objects().size(), input.snapshot().links().size(),
                    graph.nodes().size(), graph.relationships().size(),
                    use.objectEvaluations(), compiledCases.size(), rejections,
                    generationNanos, useNanos, loadNanos, graphNanos,
                    compilationNanos, useQueryPreparationNanos, useWarmupNanos,
                    measuredUseNanos, materializationNanos, validationNanos,
                    warmupNanos, measuredNanos, cleanupNanos));
        }
    }

    private PreparedInput generateInput(int personCount, String modelKey,
            Path output) throws Exception {
        Path directory = temporaryDirectory.resolve(Integer.toString(personCount));
        Files.createDirectories(directory);
        String model = Files.readString(EXAMPLE.resolve("company.use"),
                StandardCharsets.UTF_8);
        Matcher matcher = MODEL_DECLARATION.matcher(model);
        if (!matcher.find()) throw new IllegalStateException("Company model declaration missing");
        model = matcher.replaceFirst(Matcher.quoteReplacement(matcher.group(1) + modelKey));
        model += System.lineSeparator() + "constraints" + System.lineSeparator()
                + Files.readString(EXAMPLE.resolve("invariants.ocl"), StandardCharsets.UTF_8);

        List<String> soil = new ArrayList<>();
        soil.add("!new Company('scale_company')");
        soil.add("!set scale_company.name := 'Scale Company'");
        soil.add("!set scale_company.active := true");
        soil.add("!set scale_company.revenue := 1000000.0");
        for (int index = 0; index < personCount; index++) {
            String id = "person_" + index;
            boolean manager = index % 20 == 0;
            boolean employee = manager || index % 2 == 0;
            String type = manager ? "Manager" : employee ? "Employee" : "Person";
            soil.add("!new " + type + "('" + id + "')");
            soil.add("!set " + id + ".name := 'Name" + (index % 50) + "'");
            soil.add("!set " + id + ".age := " + (16 + index % 60));
            // Keep one non-binary64-exact decimal witness so the Real
            // ReadAttribute boundary remains identical at every scale.
            String rating = index == 0 ? "4.8" : (3 + index % 5) + ".5";
            soil.add("!set " + id + ".rating := " + rating);
            soil.add("!set " + id + ".active := " + (index % 3 != 0));
            if (employee) {
                soil.add("!set " + id + ".salary := " + (1000 + index) + ".0");
            }
            if (manager) {
                soil.add("!set " + id + ".level := " + (1 + index % 5));
            }
            soil.add("!insert (scale_company," + id + ") into Employment");
        }
        soil.add("!insert (scale_company,person_0) into CompanyManagement");

        Path useFile = directory.resolve("scale.use");
        Path soilFile = directory.resolve("scale.soil");
        Files.writeString(useFile, model, StandardCharsets.UTF_8);
        Files.write(soilFile, soil, StandardCharsets.UTF_8);

        Path evidenceDirectory = output.resolve("generated-inputs")
                .resolve(Integer.toString(personCount));
        Files.createDirectories(evidenceDirectory);
        Files.writeString(evidenceDirectory.resolve("scale.use"), model,
                StandardCharsets.UTF_8);
        Files.write(evidenceDirectory.resolve("scale.soil"), soil,
                StandardCharsets.UTF_8);
        return new PreparedInput(useFile, soilFile);
    }

    private static RawQueryResult executeRaw(Session session, FileCompilation compilation,
            GraphModel graph, int timeoutSeconds) {
        var serialized = compilation.serializedCypher();
        Map<String, Object> parameters = Neo4jExecutionAdapter.buildParamMap(
                compilation.cypherAst(), Map.of(), graph);
        TransactionConfig timeout = TransactionConfig.builder()
                .withTimeout(Duration.ofSeconds(timeoutSeconds)).build();
        RawResponse response = session.executeRead(transaction -> {
            var result = transaction.run(serialized.cypherText(), parameters);
            var records = result.list();
            ResultSummary summary = result.consume();
            return new RawResponse(records, summary.resultAvailableAfter(TimeUnit.NANOSECONDS),
                    summary.resultConsumedAfter(TimeUnit.NANOSECONDS));
        }, timeout);
        List<String> ids = response.records().stream()
                .map(record -> record.get(serialized.contract().resultVariable())
                        .asString(null))
                .filter(value -> value != null)
                .toList();
        Set<String> unique = new LinkedHashSet<>(ids);
        if (unique.size() != ids.size()) {
            throw new IllegalStateException("duplicate violation IDs returned by Neo4j");
        }
        return new RawQueryResult(Set.copyOf(unique), response.availableNanos(),
                response.consumedNanos());
    }

    /** Profiles selected read-only queries after timing, never inside measured samples. */
    private static void writeDiagnosticProfiles(Session session,
            List<CompiledCase> compiledCases, GraphModel graph, int timeoutSeconds,
            int personCount, Path output) throws Exception {
        Set<String> selected = Set.of("Person::Adult", "Person::ActiveXorAdult",
                "Company::AllEmployeesWorkingAge", "Company::EmployeePartition",
                "Company::RevenuePolicy");
        List<String> lines = new ArrayList<>();
        Path report = output.resolve("diagnostic-profiles.csv");
        if (!Files.exists(report)) {
            lines.add("personCount,invariant,depth,operator,rows,dbHits,operatorTimeRaw,"
                + "pageCacheHits,pageCacheMisses");
        }
        TransactionConfig timeout = TransactionConfig.builder()
                .withTimeout(Duration.ofSeconds(timeoutSeconds)).build();
        for (CompiledCase compiled : compiledCases) {
            if (!selected.contains(compiled.key())) continue;
            var serialized = compiled.compilation().serializedCypher();
            String query = serialized.cypherText().replaceFirst(
                    "^CYPHER 5\\s+", "CYPHER 5\nPROFILE\n");
            Map<String, Object> parameters = Neo4jExecutionAdapter.buildParamMap(
                    compiled.compilation().cypherAst(), Map.of(), graph);
            ProfiledPlan plan = session.executeRead(transaction -> transaction.run(
                    query, parameters).consume().profile(), timeout);
            appendProfile(lines, personCount, compiled.key(), 0, plan);
        }
        Files.write(report, lines, StandardCharsets.UTF_8,
                java.nio.file.StandardOpenOption.CREATE,
                java.nio.file.StandardOpenOption.APPEND);
    }

    private static void appendProfile(List<String> lines, int personCount,
            String invariant, int depth, ProfiledPlan plan) {
        lines.add(csv(personCount, invariant, depth, plan.operatorType(),
                plan.records(), plan.dbHits(), plan.time(),
                plan.hasPageCacheStats() ? plan.pageCacheHits() : "",
                plan.hasPageCacheStats() ? plan.pageCacheMisses() : ""));
        for (ProfiledPlan child : plan.children()) {
            appendProfile(lines, personCount, invariant, depth + 1, child);
        }
    }

    /** Prepared USE runtime used to time evaluation only, not parsing or SOIL replay. */
    private static final class UseQueryRunner {
        private final MSystem system;
        private final Map<String, MClassInvariant> invariants;

        private UseQueryRunner(MSystem system, Map<String, MClassInvariant> invariants) {
            this.system = system;
            this.invariants = invariants;
        }

        static UseQueryRunner prepare(Path modelFile, Path soilFile) throws Exception {
            StringWriter diagnostics = new StringWriter();
            MModel model = USECompiler.compileSpecification(
                    Files.readString(modelFile, StandardCharsets.UTF_8),
                    modelFile.toString(), new PrintWriter(diagnostics, true),
                    new ModelFactory());
            if (model == null) {
                throw new IllegalArgumentException("USE specification compilation failed:\n"
                        + diagnostics);
            }
            MSystem system = new MSystem(model);
            replaySoil(system, soilFile);
            Map<String, MClassInvariant> invariants = new LinkedHashMap<>();
            for (MClassInvariant invariant : model.classInvariants()) {
                if (invariants.putIfAbsent(invariant.qualifiedName(), invariant) != null) {
                    throw new IllegalStateException("duplicate USE invariant key: "
                            + invariant.qualifiedName());
                }
            }
            return new UseQueryRunner(system, invariants);
        }

        Set<String> execute(String qualifiedName) {
            MClassInvariant invariant = invariants.get(qualifiedName);
            if (invariant == null) {
                throw new IllegalArgumentException("USE invariant not found: " + qualifiedName);
            }
            Set<String> ids = new LinkedHashSet<>();
            for (MObject object : system.state()
                    .objectsOfClassAndSubClasses(invariant.cls())) {
                VarBindings bindings = new VarBindings(system.varBindings());
                bindings.push("self", object.value());
                Value value = new Evaluator().eval(
                        invariant.bodyExpression(), system.state(), bindings);
                if (value.isUndefined()
                        || value instanceof BooleanValue booleanValue
                        && !booleanValue.value()) {
                    ids.add(object.name());
                } else if (!(value instanceof BooleanValue)) {
                    throw new IllegalStateException("USE invariant " + qualifiedName
                            + " returned non-Boolean value " + value + " : " + value.type());
                }
            }
            return Set.copyOf(ids);
        }

        private static void replaySoil(MSystem system, Path soilFile) throws Exception {
            int lineNumber = 0;
            for (String rawLine : Files.readAllLines(soilFile, StandardCharsets.UTF_8)) {
                lineNumber++;
                String line = rawLine.strip();
                if (line.isEmpty() || line.startsWith("--")) continue;
                if (!line.startsWith("!")) {
                    throw new IllegalArgumentException(soilFile + ":" + lineNumber
                            + ": expected a SOIL command beginning with '!'");
                }
                String command = line.substring(line.startsWith("!!") ? 2 : 1).strip();
                StringWriter diagnostics = new StringWriter();
                MStatement statement = ShellCommandCompiler.compileShellCommand(
                        system.model(), system.state(), system.getVariableEnvironment(),
                        command, soilFile + ":" + lineNumber,
                        new PrintWriter(diagnostics, true), false);
                if (statement == null) {
                    throw new IllegalArgumentException(soilFile + ":" + lineNumber
                            + ": USE rejected SOIL command `" + command + "`:\n"
                            + diagnostics);
                }
                try {
                    system.execute(statement);
                } catch (MSystemException exception) {
                    throw new IllegalArgumentException(soilFile + ":" + lineNumber
                            + ": USE failed to execute SOIL command `" + command + "`",
                            exception);
                }
            }
        }
    }

    private static void writeReports(Path output, String runId, List<Integer> sizes,
            int warmups, int repetitions, int timeoutSeconds, List<PhaseRow> phases,
            List<QuerySample> neo4jSamples, List<QuerySample> useSamples,
            List<QuerySample> validationSamples, List<String> failures) throws Exception {
        writeCsv(output.resolve("phase-timings.csv"), PhaseRow.header(), phases);
        writeCsv(output.resolve("query-samples.csv"), QuerySample.header(), neo4jSamples);
        writeCsv(output.resolve("use-query-samples.csv"), QuerySample.header(), useSamples);
        writeCsv(output.resolve("validation-query-samples.csv"), QuerySample.header(),
                validationSamples);
        List<QueryAggregate> aggregates = aggregate(neo4jSamples);
        List<QueryAggregate> useAggregates = aggregate(useSamples);
        writeCsv(output.resolve("query-aggregates.csv"),
                QueryAggregate.header(), aggregates);
        writeCsv(output.resolve("use-query-aggregates.csv"),
                QueryAggregate.header(), useAggregates);
        writeCsv(output.resolve("backend-comparison.csv"), BackendComparison.header(),
                compare(aggregates, useAggregates));
        Files.write(output.resolve("failures.txt"), failures, StandardCharsets.UTF_8);
        String json = "{\n"
                + "  \"runId\": \"" + json(runId) + "\",\n"
                + "  \"completedUtc\": \"" + Instant.now() + "\",\n"
                + "  \"personCounts\": [" + sizes.stream().map(String::valueOf)
                        .collect(Collectors.joining(", ")) + "],\n"
                + "  \"warmupsPerQuery\": " + warmups + ",\n"
                + "  \"measuredRepetitionsPerQuery\": " + repetitions + ",\n"
                + "  \"queryTimeoutSeconds\": " + timeoutSeconds + ",\n"
                + "  \"admittedQueriesPerSize\": " + EXPECTED_ADMITTED + ",\n"
                + "  \"querySamples\": " + neo4jSamples.size() + ",\n"
                + "  \"useQuerySamples\": " + useSamples.size() + ",\n"
                + "  \"failureCount\": " + failures.size() + ",\n"
                + "  \"status\": \"" + (failures.isEmpty() ? "PASS" : "FAIL") + "\",\n"
                + "  \"timingScope\": \"Both backends evaluate the same 22 in-scope invariants and materialize complete violation-ID sets. USE elapsedNanos is in-process evaluation and ID-set construction. Neo4j elapsedNanos is server-reported resultAvailableAfter plus resultConsumedAfter, covering complete result production; clientElapsedNanos separately includes parameters, driver read transaction, fetch and ID conversion. Neither includes model preparation or graph materialization. PROFILE is outside measured samples. Phase times are single observations.\"\n"
                + "}\n";
        Files.writeString(output.resolve("scale-summary.json"), json,
                StandardCharsets.UTF_8);
    }

    private static List<QueryAggregate> aggregate(List<QuerySample> samples) {
        Map<String, List<QuerySample>> groups = new LinkedHashMap<>();
        samples.stream().sorted(Comparator.comparingInt(QuerySample::personCount)
                        .thenComparing(QuerySample::invariant)
                        .thenComparingInt(QuerySample::repetition))
                .forEach(sample -> {
                    groups.computeIfAbsent(sample.personCount() + "\u0000" + sample.invariant(),
                            ignored -> new ArrayList<>()).add(sample);
                    groups.computeIfAbsent(sample.personCount() + "\u0000__ALL__",
                            ignored -> new ArrayList<>()).add(sample);
                });
        List<QueryAggregate> result = new ArrayList<>();
        groups.forEach((group, rows) -> {
            String[] fields = group.split("\\u0000", -1);
            List<Long> nanos = rows.stream().map(QuerySample::elapsedNanos)
                    .sorted().toList();
            long sum = nanos.stream().mapToLong(Long::longValue).sum();
            result.add(new QueryAggregate(Integer.parseInt(fields[0]), fields[1],
                    nanos.size(), nanos.get(0), percentile(nanos, 0.50),
                    percentile(nanos, 0.95), nanos.get(nanos.size() - 1),
                    sum / nanos.size()));
        });
        return result;
    }

    private static List<BackendComparison> compare(List<QueryAggregate> neo4j,
            List<QueryAggregate> use) {
        Map<String, QueryAggregate> useByKey = use.stream().collect(Collectors.toMap(
                row -> row.personCount() + "\u0000" + row.invariant(), row -> row));
        return neo4j.stream().map(neo -> {
            QueryAggregate useRow = useByKey.get(
                    neo.personCount() + "\u0000" + neo.invariant());
            if (useRow == null) {
                throw new IllegalStateException("missing USE aggregate for "
                        + neo.personCount() + ":" + neo.invariant());
            }
            return new BackendComparison(neo.personCount(), neo.invariant(),
                    useRow.samples(), neo.samples(), useRow.p50Nanos(), neo.p50Nanos(),
                    ratio(neo.p50Nanos(), useRow.p50Nanos()),
                    useRow.p95Nanos(), neo.p95Nanos(),
                    ratio(neo.p95Nanos(), useRow.p95Nanos()),
                    useRow.meanNanos(), neo.meanNanos(),
                    ratio(neo.meanNanos(), useRow.meanNanos()));
        }).toList();
    }

    private static double ratio(long numerator, long denominator) {
        return denominator == 0 ? Double.NaN : (double) numerator / denominator;
    }

    private static long percentile(List<Long> sorted, double percentile) {
        int index = Math.max(0, (int) Math.ceil(percentile * sorted.size()) - 1);
        return sorted.get(index);
    }

    private static List<Integer> parseSizes(String value) {
        List<Integer> result = Arrays.stream(value.split(","))
                .map(String::trim).filter(part -> !part.isEmpty())
                .map(Integer::parseInt).distinct().sorted().toList();
        if (result.isEmpty() || result.stream().anyMatch(size -> size <= 0 || size > 20_000)) {
            throw new IllegalArgumentException(
                    "scale sizes must be distinct values in 1..20000");
        }
        return result;
    }

    private static int positive(String property, int fallback) {
        int value = Integer.parseInt(System.getProperty(property,
                Integer.toString(fallback)));
        if (value <= 0) throw new IllegalArgumentException(property + " must be positive");
        return value;
    }

    private static int positiveOrZero(String property, int fallback) {
        int value = Integer.parseInt(System.getProperty(property,
                Integer.toString(fallback)));
        if (value < 0) throw new IllegalArgumentException(property + " must not be negative");
        return value;
    }

    private static String namespace(int size, String runId) {
        String suffix = ("Scale" + size + runId).replaceAll("[^A-Za-z0-9]", "");
        if (suffix.length() > 52) suffix = suffix.substring(suffix.length() - 52);
        return "Exp" + suffix;
    }

    private static String fileName(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]", "_");
    }

    private static String env(String key, String fallback) {
        String value = System.getenv(key);
        return value == null || value.isBlank() ? fallback : value;
    }

    private static String requiredEnv(String key) {
        String value = env(key, null);
        if (value == null) throw new IllegalStateException("scale experiment requires " + key);
        return value;
    }

    private static String safeMessage(Exception error) {
        String message = error.getMessage();
        return message == null ? error.getClass().getName()
                : message.replaceAll("[\\r\\n]+", " ");
    }

    private static List<Object> nullableList(org.neo4j.driver.Value value) {
        return value.isNull() ? List.of() : value.asList();
    }

    private static String json(String text) {
        return text.replace("\\", "\\\\").replace("\"", "\\\"");
    }

    private static String csv(Object... values) {
        return Arrays.stream(values).map(value -> {
            String text = String.valueOf(value == null ? "" : value);
            return "\"" + text.replace("\"", "\"\"") + "\"";
        }).collect(Collectors.joining(","));
    }

    private static <T extends CsvRow> void writeCsv(Path path, String header,
            List<T> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        lines.add(header);
        rows.stream().map(CsvRow::csv).forEach(lines::add);
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private sealed interface CsvRow permits PhaseRow, QuerySample, QueryAggregate,
            BackendComparison {
        String csv();
    }

    private record PreparedInput(Path useFile, Path soilFile) {
    }

    private record CompiledCase(String key, FileCompilation compilation,
                                Set<String> expectedIds) {
    }

    private record RawResponse(List<org.neo4j.driver.Record> records,
                               long availableNanos, long consumedNanos) {
    }

    private record RawQueryResult(Set<String> ids, long availableNanos,
                                  long consumedNanos) {
        long serverNanos() {
            return Math.addExact(availableNanos, consumedNanos);
        }
    }

    private record PhaseRow(int personCount, String modelKey, int objects, int links,
                            int graphNodes, int graphRelationships,
                            int useObjectEvaluations, int admittedQueries, int rejections,
                            long generationNanos, long useEvaluationNanos,
                            long inputLoadNanos, long graphBuildNanos,
                            long fullPipelineCompilationNanos,
                             long useQueryPreparationNanos, long useWarmupNanos,
                             long measuredUseQueriesNanos,
                            long materializationNanos, long correctnessValidationNanos,
                            long warmupNanos, long measuredQueriesNanos,
                            long cleanupNanos) implements CsvRow {
        static String header() {
            return "personCount,modelKey,objects,links,graphNodes,graphRelationships,"
                    + "useObjectEvaluations,admittedQueries,rejections,generationNanos,"
                    + "useEvaluationNanos,inputLoadNanos,graphBuildNanos,"
                    + "fullPipelineCompilationNanos,useQueryPreparationNanos,"
                    + "useWarmupNanos,measuredUseQueriesNanos,materializationNanos,"
                    + "correctnessValidationNanos,warmupNanos,measuredQueriesNanos,cleanupNanos";
        }

        @Override public String csv() {
            return ScalabilityExperimentIT.csv(personCount, modelKey, objects, links,
                    graphNodes, graphRelationships, useObjectEvaluations, admittedQueries,
                    rejections, generationNanos, useEvaluationNanos, inputLoadNanos,
                    graphBuildNanos, fullPipelineCompilationNanos,
                    useQueryPreparationNanos, useWarmupNanos, measuredUseQueriesNanos,
                    materializationNanos,
                    correctnessValidationNanos, warmupNanos, measuredQueriesNanos,
                    cleanupNanos);
        }
    }

    private record QuerySample(int personCount, String invariant, int repetition,
                               long elapsedNanos, int resultCount,
                               int queryCharacters, Long serverAvailableNanos,
                               Long serverConsumedNanos, long clientElapsedNanos)
            implements CsvRow {
        static String header() {
            return "personCount,invariant,repetition,elapsedNanos,resultCount,queryCharacters,"
                    + "serverAvailableNanos,serverConsumedNanos,clientElapsedNanos";
        }

        @Override public String csv() {
            return ScalabilityExperimentIT.csv(personCount, invariant, repetition,
                    elapsedNanos, resultCount, queryCharacters,
                    serverAvailableNanos, serverConsumedNanos, clientElapsedNanos);
        }
    }

    private record QueryAggregate(int personCount, String invariant, int samples,
                                  long minNanos, long p50Nanos, long p95Nanos,
                                  long maxNanos, long meanNanos) implements CsvRow {
        static String header() {
            return "personCount,invariant,samples,minNanos,p50Nanos,p95Nanos,maxNanos,meanNanos";
        }

        @Override public String csv() {
            return ScalabilityExperimentIT.csv(personCount, invariant, samples,
                    minNanos, p50Nanos, p95Nanos, maxNanos, meanNanos);
        }
    }

    private record BackendComparison(int personCount, String invariant,
                                     int useSamples, int neo4jSamples,
                                     long useP50Nanos, long neo4jP50Nanos,
                                     double neo4jToUseP50,
                                     long useP95Nanos, long neo4jP95Nanos,
                                     double neo4jToUseP95,
                                     long useMeanNanos, long neo4jMeanNanos,
                                     double neo4jToUseMean) implements CsvRow {
        static String header() {
            return "personCount,invariant,useSamples,neo4jSamples,useP50Nanos,"
                    + "neo4jP50Nanos,neo4jToUseP50,useP95Nanos,neo4jP95Nanos,"
                    + "neo4jToUseP95,useMeanNanos,neo4jMeanNanos,neo4jToUseMean";
        }

        @Override public String csv() {
            return ScalabilityExperimentIT.csv(personCount, invariant, useSamples,
                    neo4jSamples, useP50Nanos, neo4jP50Nanos, neo4jToUseP50,
                    useP95Nanos, neo4jP95Nanos, neo4jToUseP95,
                    useMeanNanos, neo4jMeanNanos, neo4jToUseMean);
        }
    }
}
