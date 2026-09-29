package org.uet.dse.ocl2cypher.execution;

import java.util.*;
import org.neo4j.driver.AuthTokens;
import org.neo4j.driver.Driver;
import org.neo4j.driver.GraphDatabase;
import org.neo4j.driver.Session;
import org.neo4j.driver.SessionConfig;
import org.neo4j.driver.TransactionContext;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.cypher.CypherArtifacts;
import org.uet.dse.ocl2cypher.cypher.Serializer;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.diagnostics.Stage;
import org.uet.dse.ocl2cypher.graph.GraphModel;
import org.uet.dse.ocl2cypher.graph.GraphKey;
import org.uet.dse.ocl2cypher.graph.GraphFingerprint;
import org.uet.dse.ocl2cypher.graph.GraphObservation;
import org.uet.dse.ocl2cypher.runtime.OclEquality;
import org.uet.dse.ocl2cypher.runtime.OclType;
import org.uet.dse.ocl2cypher.runtime.OclValue;

/**
 * Execution adapter: bind {@code π = π_public ⊎ π_gen}, run the read-only
 * Cypher text, and decode the tagged result. The driver is a backend — it
 * never decides OCL semantics. On failure the adapter reports an
 * {@code EXECUTION} diagnostic, never a bottom value; callers distinguish
 * "no rows but violation-set empty" from "whole-collection bottom" solely by
 * the tagged __oclBottom flag, not by row count.
 *
 * <p>The reference test graph is materialized deterministically by writing
 * {@code GraphModel G} into Neo4j via the same bolt session that the query
 * later uses. Every written node carries its source {@code objectKey} as the
 * stable id so {@code use_id} projection is exactly the surface identity.
 * Ownership is represented by a technical node label rather than a Boolean
 * property.  Materialization also writes a presentation-only {@code name}
 * alias: object nodes use {@code use_id}, while schema and slot nodes use a
 * concise declaration/value caption.  The alias is not observed by the OCL
 * semantics, but prevents Neo4j Browser/Desktop from choosing the common
 * {@code modelKey} namespace as every node's visible caption.
 */
public final class Neo4jExecutionAdapter {

    public static final String MANAGED_PROPERTY = "_ocl2cypherManaged";
    public static final String MANAGED_LABEL = "OCL2CypherManaged";
    private static final String MATERIALIZATION_VERSION_PROPERTY =
            "materializationVersion";
    private static final String MATERIALIZATION_VERSION = "2";
    private static final String TRANSIENT_STABLE_KEY = "_stableKey";
    private static final String GRAPH_FINGERPRINT = "graphFingerprint";

    enum MaterializationPhase {
        SCHEMA,
        OBJECT_SNAPSHOT
    }

    /** Prevent two in-process integration runs from replacing the same model scope. */
    private static final java.util.concurrent.ConcurrentMap<String,
            java.util.concurrent.locks.ReentrantLock> MATERIALIZATION_LOCKS =
            new java.util.concurrent.ConcurrentHashMap<>();

    private Neo4jExecutionAdapter() {
    }

    public static final String DEFAULT_URI = "bolt://localhost:7687";
    public static final String DEFAULT_DATABASE = "neo4j";
    public static final String DEFAULT_USER = "neo4j";
    public static final String DEFAULT_PASSWORD = "neo4j";

    public record ExecutionConfig(String uri, String database, String user, String password) {
        public ExecutionConfig {
            Objects.requireNonNull(uri, "Neo4j URI");
            Objects.requireNonNull(user, "Neo4j user");
            Objects.requireNonNull(password, "Neo4j password");
            database = normalizedDatabase(database);
        }
    }

    public record ExecutionRequest(CypherAst.GeneratedArtifact artifact,
                                  GraphModel graph,
                                  String uri, String database, String user, String password,
                                  Map<String, Object> extraParameters) {

        public ExecutionRequest {
            Objects.requireNonNull(artifact, "generated artifact");
            Objects.requireNonNull(graph, "graph");
            Objects.requireNonNull(uri, "Neo4j URI");
            Objects.requireNonNull(user, "Neo4j user");
            Objects.requireNonNull(password, "Neo4j password");
            Objects.requireNonNull(extraParameters, "extra parameters");
            database = normalizedDatabase(database);
        }

        public static ExecutionRequest of(CypherAst.GeneratedArtifact artifact, GraphModel graph) {
            return new ExecutionRequest(artifact, graph,
                    DEFAULT_URI, DEFAULT_DATABASE, DEFAULT_USER, DEFAULT_PASSWORD, Map.of());
        }
    }

    public record ExecutionResult(List<String> violationIds,
                                  OclValue value,
                                  CypherAst.GeneratedArtifact artifact) {
    }

    /** Probe both server connectivity and the selected database. */
    public static Result<Boolean> checkAvailability(ExecutionConfig config) {
        try (Driver driver = GraphDatabase.driver(config.uri(),
                AuthTokens.basic(config.user(), config.password()));
             Session session = driver.session(SessionConfig.forDatabase(config.database()))) {
            driver.verifyConnectivity();
            session.run("RETURN 1 AS available").consume();
            return Result.success(Boolean.TRUE);
        } catch (RuntimeException e) {
            return Result.failure(Stage.EXECUTION, "NEO4J_UNAVAILABLE",
                    "Neo4j connectivity check failed: " + e.getMessage());
        }
    }

    /**
     * Run on an already-open session that the caller already wiped/seeded: only
     * executes the compiled query and decodes the {@code IDS} violation rows
     * (each row is a single string stable id).
     */
    public static Result<ExecutionResult> execute(Session session,
                                                  CypherAst.GeneratedArtifact artifact,
                                                  Map<String, Object> extraParams) {
        return execute(session, artifact, extraParams, null);
    }

    public static Result<ExecutionResult> execute(Session session,
                                                  CypherAst.GeneratedArtifact artifact,
                                                  Map<String, Object> extraParams,
                                                  GraphModel graph) {
        try {
            if (graph != null) requireCompatibleEncoding(session, graph);
            Serializer.Serialized s = Serializer.serialize(artifact);
            Map<String, Object> params = buildParamMap(s.parameters(), extraParams, graph);
            var rec = session.executeRead(tx -> tx.run(s.cypherText(), params).list());
            return Result.success(decodeRecords(rec, s.contract(), artifact));
        } catch (RuntimeException e) {
            return Result.failure(Stage.EXECUTION, "EXECUTION_FAILED",
                    "Cypher execution failed: " + e.getMessage());
        }
    }

    /** Materialize {@code G} on a wiped database, then run the query. */
    public static Result<ExecutionResult> executeWithMaterializedGraph(ExecutionRequest req) {
        String lockKey = req.uri() + "\u0000" + String.valueOf(req.database())
                + "\u0000" + req.graph().modelKey();
        java.util.concurrent.locks.ReentrantLock lock = MATERIALIZATION_LOCKS.computeIfAbsent(
                lockKey, ignored -> new java.util.concurrent.locks.ReentrantLock());
        lock.lock();
        try {
            try (Driver driver = GraphDatabase.driver(req.uri(),
                    AuthTokens.basic(req.user(), req.password()))) {
                try (Session session = driver.session(
                        SessionConfig.forDatabase(req.database()))) {
                    return executeGraphMaterialized(session, req);
                }
            }
        } catch (RuntimeException e) {
            return Result.failure(Stage.EXECUTION, "EXECUTION_FAILED",
                    "driver/connect failed: " + e.getMessage());
        } finally {
            lock.unlock();
        }
    }

    /** Blank/null configuration means the explicit project default, never driver-dependent DB. */
    public static String normalizedDatabase(String database) {
        return database == null || database.isBlank() ? DEFAULT_DATABASE : database.trim();
    }

    private static Result<ExecutionResult> executeGraphMaterialized(Session session,
                                                                     ExecutionRequest req) {
        materializeGraph(session, req.graph());
        return execute(session, req.artifact(), req.extraParameters(), req.graph());
    }

    /**
     * Replace only this graph's model namespace in one atomic write transaction.
     * Repository/schema nodes and relationships are created first; object,
     * attribute-slot, typing and link occurrences are created second. A final
     * cardinality check runs before commit, so a failed snapshot phase rolls
     * the schema phase back as well.
     */
    public static boolean materializeGraph(Session session, GraphModel g) {
        return session.executeWrite(tx -> {
            // Refuse a namespace containing foreign nodes, then replace only our nodes.
            String fingerprint = GraphFingerprint.sha256(g);
            Map<String, Object> model = Map.of(
                "modelKey", g.modelKey(),
                "encodingProfile", GraphModel.ENCODING_PROFILE,
                "encodingVersion", GraphModel.ENCODING_VERSION,
                MATERIALIZATION_VERSION_PROPERTY, MATERIALIZATION_VERSION,
                "graphFingerprint", fingerprint);
            long current = tx.run("MATCH (m:Model:" + quote(MANAGED_LABEL)
                        + " {modelKey:$modelKey, encodingProfile:$encodingProfile, "
                        + "encodingVersion:$encodingVersion, "
                        + MATERIALIZATION_VERSION_PROPERTY + ":$"
                        + MATERIALIZATION_VERSION_PROPERTY + ", "
                        + "graphFingerprint:$graphFingerprint}) "
                        + "RETURN count(m) AS count", model)
                .single().get("count").asLong();
            if (current == 1 && materializedCardinality(tx, g).matches(g)) {
                return Boolean.FALSE;
            }
            long foreignNodes = tx.run(
                "MATCH (n {modelKey: $modelKey}) "
                        + "WHERE NOT n:" + quote(MANAGED_LABEL) + " "
                        + "AND (n." + MANAGED_PROPERTY + " IS NULL "
                        + "OR n." + MANAGED_PROPERTY + " <> true) "
                        + "RETURN count(n) AS foreignCount", model)
                .single().get("foreignCount").asLong();
            if (foreignNodes != 0) {
                throw new IllegalStateException("MODEL_NAMESPACE_NOT_OWNED: namespace '"
                    + g.modelKey() + "' contains " + foreignNodes
                    + " node(s) not created by OCL2Cypher");
            }
            // Accept and replace both the current label-based ownership marker and
            // the property marker written by releases before canonical-v1.1.
            tx.run("MATCH (n {modelKey: $modelKey}) WHERE n:" + quote(MANAGED_LABEL)
                        + " OR n." + MANAGED_PROPERTY + " = true DETACH DELETE n",
                model).consume();
            materializeNodes(tx, g, MaterializationPhase.SCHEMA);
            materializeRelationships(tx, g, MaterializationPhase.SCHEMA);
            materializeNodes(tx, g, MaterializationPhase.OBJECT_SNAPSHOT);
            materializeRelationships(tx, g, MaterializationPhase.OBJECT_SNAPSHOT);

            validateMaterializedCardinality(tx, g);
            // Endpoint matching needs this key only while the two phases are being
            // built. Removing it keeps technical data out of Browser captions.
            tx.run("MATCH (n:" + quote(MANAGED_LABEL) + " {modelKey:$modelKey}) "
                        + "REMOVE n." + TRANSIENT_STABLE_KEY,
                model).consume();
            return Boolean.TRUE;
        });
    }

    private static void materializeNodes(TransactionContext tx, GraphModel graph,
                                         MaterializationPhase phase) {
        Map<List<String>, List<Map<String, Object>>> nodeBatches = new LinkedHashMap<>();
        for (var node : graph.nodes()) {
            if (phaseOf(node) != phase) continue;
            Map<String, Object> props = materializedNodeProperties(graph, node);
            nodeBatches.computeIfAbsent(materializedNodeLabels(node), ignored -> new ArrayList<>())
                    .add(props);
        }
        for (Map.Entry<List<String>, List<Map<String, Object>>> batch : nodeBatches.entrySet()) {
            String labels = batch.getKey().isEmpty() ? ""
                    : ":" + String.join(":", batch.getKey().stream()
                            .map(Neo4jExecutionAdapter::quote).toList());
            tx.run("UNWIND $rows AS row CREATE (n" + labels + ") SET n += row",
                    Map.of("rows", batch.getValue())).consume();
        }
    }

    private static void requireCompatibleEncoding(Session session, GraphModel graph) {
        Map<String, Object> parameters = Map.of(
                "modelKey", graph.modelKey(),
                "encodingProfile", GraphModel.ENCODING_PROFILE,
                "encodingVersion", GraphModel.ENCODING_VERSION,
                MATERIALIZATION_VERSION_PROPERTY, MATERIALIZATION_VERSION,
                "graphFingerprint", GraphFingerprint.sha256(graph));
        long matches = session.executeRead(tx -> tx.run(
                        "MATCH (m:Model:" + quote(MANAGED_LABEL)
                                + " {modelKey:$modelKey, encodingProfile:$encodingProfile, "
                                + "encodingVersion:$encodingVersion, "
                                + MATERIALIZATION_VERSION_PROPERTY + ":$"
                                + MATERIALIZATION_VERSION_PROPERTY + ", "
                                + "graphFingerprint:$graphFingerprint}) "
                                + "RETURN count(m) AS count", parameters)
                .single().get("count").asLong());
        if (matches != 1) {
            throw new IllegalStateException("GRAPH_ENCODING_MISMATCH: expected "
                    + GraphModel.ENCODING_PROFILE + " " + GraphModel.ENCODING_VERSION
                    + " for namespace '" + graph.modelKey() + "'");
        }
    }

    private static void materializeRelationships(TransactionContext tx, GraphModel graph,
                                                  MaterializationPhase phase) {
        Map<String, List<Map<String, Object>>> relationshipBatches = new LinkedHashMap<>();
        for (var relationship : graph.relationships()) {
            if (phaseOf(relationship) != phase) continue;
            Map<String, Object> props = new LinkedHashMap<>(relationship.properties());
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("src", relationship.sourceKey());
            row.put("tgt", relationship.targetKey());
            row.put("props", props);
            relationshipBatches.computeIfAbsent(
                            relationship.physicalType(), ignored -> new ArrayList<>())
                    .add(row);
        }
        for (Map.Entry<String, List<Map<String, Object>>> batch
                 : relationshipBatches.entrySet()) {
            String q = "UNWIND $rows AS row "
                    + "MATCH (a:" + quote(MANAGED_LABEL)
                    + " { _stableKey: row.src, modelKey: $modelKey }) "
                    + "MATCH (b:" + quote(MANAGED_LABEL)
                    + " { _stableKey: row.tgt, modelKey: $modelKey }) "
                    + "CREATE (a)-[x:" + quote(batch.getKey()) + "]->(b) "
                    + "SET x += row.props";
            tx.run(q, Map.of("rows", batch.getValue(),
                    "modelKey", graph.modelKey())).consume();
        }
    }

    private static void validateMaterializedCardinality(TransactionContext tx, GraphModel graph) {
        MaterializedCardinality actual = materializedCardinality(tx, graph);
        if (!actual.matches(graph)) {
            throw new IllegalStateException("MATERIALIZATION_CARDINALITY: expected "
                    + graph.nodes().size() + " node(s)/" + graph.relationships().size()
                    + " relationship(s), found " + actual.nodes() + "/"
                    + actual.relationships());
        }
    }

    private static MaterializedCardinality materializedCardinality(
            TransactionContext tx, GraphModel graph) {
        Map<String, Object> model = Map.of("modelKey", graph.modelKey());
        long nodes = tx.run("MATCH (n:" + quote(MANAGED_LABEL)
                        + " {modelKey:$modelKey}) RETURN count(n) AS count", model)
                .single().get("count").asLong();
        long relationships = tx.run("MATCH (a:" + quote(MANAGED_LABEL)
                        + " {modelKey:$modelKey})-[r {modelKey:$modelKey}]->"
                        + "(b:" + quote(MANAGED_LABEL) + " {modelKey:$modelKey}) "
                        + "RETURN count(r) AS count", model)
                .single().get("count").asLong();
        return new MaterializedCardinality(nodes, relationships);
    }

    private record MaterializedCardinality(long nodes, long relationships) {
        boolean matches(GraphModel graph) {
            return nodes == graph.nodes().size()
                    && relationships == graph.relationships().size();
        }
    }

    static MaterializationPhase phaseOf(GraphModel.Node node) {
        return switch (node.projection()) {
            case SCHEMA, REPOSITORY_CONTROL -> MaterializationPhase.SCHEMA;
            case INSTANCE, TYPING -> MaterializationPhase.OBJECT_SNAPSHOT;
        };
    }

    static MaterializationPhase phaseOf(GraphModel.Relationship relationship) {
        return switch (relationship.projection()) {
            case SCHEMA, REPOSITORY_CONTROL -> MaterializationPhase.SCHEMA;
            case INSTANCE, TYPING -> MaterializationPhase.OBJECT_SNAPSHOT;
        };
    }

    static List<String> materializedNodeLabels(GraphModel.Node node) {
        List<String> labels = new ArrayList<>(node.labels());
        if (!labels.contains(MANAGED_LABEL)) labels.add(MANAGED_LABEL);
        return List.copyOf(labels);
    }

    static Map<String, Object> materializedNodeProperties(GraphModel graph,
                                                           GraphModel.Node node) {
        // Keep this conventional property first and stable. Neo4j's visual
        // clients commonly prefer `name` as a node caption. It is deliberately
        // added only at the physical materialization boundary, so it does not
        // enlarge the canonical GraphModel or its formal observers.
        Map<String, Object> props = new LinkedHashMap<>();
        props.put("name", displayLabel(node));
        node.properties().forEach((key, value) -> {
            if (!"name".equals(key)) props.put(key, value);
        });
        scopePhysicalNodeKeys(graph, props);
        if (node.labels().contains("Model")) {
            props.put("encodingProfile", GraphModel.ENCODING_PROFILE);
            props.put("encodingVersion", GraphModel.ENCODING_VERSION);
            props.put(MATERIALIZATION_VERSION_PROPERTY, MATERIALIZATION_VERSION);
            props.put(GRAPH_FINGERPRINT, GraphFingerprint.sha256(graph));
        }
        props.put(TRANSIENT_STABLE_KEY, node.stableKey());
        props.remove(MANAGED_PROPERTY);
        return props;
    }

    /** Human-readable, non-semantic caption shared by Neo4j and the plugin graph view. */
    public static String displayLabel(GraphModel.Node node) {
        Objects.requireNonNull(node, "node");
        Map<String, String> properties = node.properties();
        String objectId = properties.get("use_id");
        if (objectId != null && !objectId.isBlank()) return objectId;

        if (properties.containsKey("slotKey")) {
            String attribute = simpleQualifiedName(properties.get("attributeKey"));
            String state = properties.get("valueState");
            String value = properties.get("value");
            if ("BOTTOM".equals(state)) return attribute + " = ⊥";
            if (value != null) return attribute + " = " + (value.isEmpty() ? "''" : value);
            return attribute + " (slot)";
        }

        for (String key : List.of("name", "qualifiedName", "classKey",
                "associationKey", "attributeKey")) {
            String value = properties.get(key);
            if (value != null && !value.isBlank()) return simpleQualifiedName(value);
        }
        if (node.labels().contains("Model")) return node.modelKey();
        String stable = node.stableKey();
        int separator = Math.max(stable.lastIndexOf('/'), stable.lastIndexOf(':'));
        return separator < 0 ? stable : stable.substring(separator + 1);
    }

    private static String simpleQualifiedName(String value) {
        if (value == null) return "?";
        int separator = Math.max(value.lastIndexOf("::"),
                Math.max(value.lastIndexOf('/'), value.lastIndexOf('#')));
        return separator < 0 ? value
                : value.substring(separator + (value.startsWith("::", separator) ? 2 : 1));
    }

    private static void scopePhysicalNodeKeys(GraphModel graph, Map<String, Object> props) {
        Object classKey = props.get("classKey");
        if (classKey instanceof String value) {
            props.put("classKey", GraphKey.clazz(graph.modelKey(), value));
        }
        Object attributeKey = props.get("attributeKey");
        if (attributeKey instanceof String value) {
            props.put("attributeKey", GraphKey.attribute(graph.modelKey(), value));
        }
        Object objectKey = props.get("objectKey");
        if (objectKey instanceof String value) {
            props.put("objectKey", GraphKey.object(graph.modelKey(), value));
        }
    }

    private static ExecutionResult decodeRecords(List<org.neo4j.driver.Record> records,
                                                   CypherAst.ResultContract contract,
                                                   CypherAst.GeneratedArtifact artifact) {
        if (contract.shape() == CypherAst.ResultShape.IDS) {
            List<String> ids = new ArrayList<>();
            for (var record : records) {
                String id = record.get(contract.resultVariable()).asString(null);
                if (id != null) {
                    ids.add(id);
                }
            }
            Collections.sort(ids);
            return new ExecutionResult(List.copyOf(ids), null, artifact);
        }
        if (records.size() != 1) {
            throw new IllegalArgumentException("VALUE query must return exactly one row, found "
                    + records.size());
        }
        Object raw = records.get(0).get(contract.resultVariable()).asObject();
        OclValue decoded = decodeTagged(raw, parseTypeTag(contract.elementTypeTag()));
        return new ExecutionResult(List.of(), decoded, artifact);
    }

    /** Decode the tagged carrier returned by R/S without collapsing bottom into null/empty. */
    static OclValue decodeTagged(Object raw, OclType expectedType) {
        if (!(raw instanceof Map<?, ?> map)) {
            throw new IllegalArgumentException("tagged OCL value must be a map");
        }
        Object bottomRaw = map.get("__oclBottom");
        if (!(bottomRaw instanceof Boolean bottom)) {
            throw new IllegalArgumentException("tagged OCL value lacks Boolean __oclBottom");
        }
        Object encodedTypeRaw = map.get(CypherArtifacts.OCL_TYPE);
        if (!(encodedTypeRaw instanceof String encodedType)) {
            throw new IllegalArgumentException("tagged OCL value lacks String __oclType");
        }
        String expectedTag = CypherArtifacts.carrierTypeTag(expectedType, bottom);
        if (!expectedTag.equals(encodedType)) {
            throw new IllegalArgumentException("tagged type mismatch: expected " + expectedTag
                    + ", found " + encodedType);
        }
        if (bottom) {
            if (expectedType.isCollection()) {
                requireExactCarrierKeys(map, Set.of(CypherArtifacts.OCL_BOTTOM,
                        CypherArtifacts.OCL_KIND, CypherArtifacts.OCL_TYPE,
                        CypherArtifacts.OCL_ITEMS));
                String expectedKind = expectedType.kind() == OclType.Kind.SET ? "SET" : "BAG";
                if (!expectedKind.equals(map.get(CypherArtifacts.OCL_KIND))) {
                    throw new IllegalArgumentException("bottom collection kind mismatch");
                }
                Object rawItems = map.get(CypherArtifacts.OCL_ITEMS);
                if (!(rawItems instanceof List<?> items) || !items.isEmpty()) {
                    throw new IllegalArgumentException(
                            "bottom collection must have empty __oclItems");
                }
            } else {
                requireExactCarrierKeys(map, Set.of(CypherArtifacts.OCL_BOTTOM,
                        CypherArtifacts.OCL_TYPE, CypherArtifacts.OCL_VALUE));
                if (map.get(CypherArtifacts.OCL_VALUE) != null) {
                    throw new IllegalArgumentException(
                            "bottom scalar must have null __oclValue");
                }
            }
            return new OclValue.BottomValue(expectedType);
        }
        if (expectedType.isCollection()) {
            requireExactCarrierKeys(map, Set.of(CypherArtifacts.OCL_BOTTOM,
                    CypherArtifacts.OCL_KIND, CypherArtifacts.OCL_TYPE,
                    CypherArtifacts.OCL_ITEMS));
            String expectedKind = expectedType.kind() == OclType.Kind.SET ? "SET" : "BAG";
            if (!expectedKind.equals(map.get(CypherArtifacts.OCL_KIND))) {
                throw new IllegalArgumentException("tagged collection kind mismatch");
            }
            Object rawItems = map.get(CypherArtifacts.OCL_ITEMS);
            if (!(rawItems instanceof List<?> items)) {
                throw new IllegalArgumentException("tagged collection lacks __oclItems list");
            }
            List<OclValue> decoded = items.stream()
                    .map(item -> decodeTagged(item, expectedType.elementType()))
                    .toList();
            if (expectedType.kind() == OclType.Kind.SET) {
                for (int i = 0; i < decoded.size(); i++) {
                    for (int j = i + 1; j < decoded.size(); j++) {
                        if (OclEquality.equal(decoded.get(i), decoded.get(j))
                                == OclEquality.BoolKind.TRUE) {
                            throw new IllegalArgumentException(
                                    "tagged Set contains a duplicate under typed OCL equality");
                        }
                    }
                }
                return new OclValue.SetValue(expectedType, decoded);
            }
            return new OclValue.BagValue(expectedType, decoded);
        }
        requireExactCarrierKeys(map, Set.of(CypherArtifacts.OCL_BOTTOM,
                CypherArtifacts.OCL_TYPE, CypherArtifacts.OCL_VALUE));
        Object payload = map.get(CypherArtifacts.OCL_VALUE);
        if (payload == null) {
            throw new IllegalArgumentException("defined tagged value has null payload");
        }
        return switch (expectedType.kind()) {
            case BOOLEAN -> {
                if (!(payload instanceof Boolean value)) {
                    throw new IllegalArgumentException("Boolean payload expected");
                }
                yield new OclValue.BooleanValue(OclType.BOOLEAN,
                        value ? OclValue.BooleanValue.Bool3.TRUE
                                : OclValue.BooleanValue.Bool3.FALSE);
            }
            case INTEGER -> {
                if (payload instanceof java.math.BigInteger bi) {
                    if (bi.compareTo(java.math.BigInteger.valueOf(Long.MIN_VALUE)) < 0
                            || bi.compareTo(java.math.BigInteger.valueOf(Long.MAX_VALUE)) > 0) {
                        throw new IllegalArgumentException(
                                "Integer payload lies outside signed Cypher INT64");
                    }
                    yield new OclValue.IntegerValue(bi);
                }
                if (payload instanceof Long || payload instanceof Integer
                        || payload instanceof Short || payload instanceof Byte) {
                    yield new OclValue.IntegerValue(
                            java.math.BigInteger.valueOf(((Number) payload).longValue()));
                }
                throw new IllegalArgumentException(
                        "Integer payload must be an integral type, found "
                                + payload.getClass().getSimpleName() + ": " + payload);
            }
            case REAL -> {
                if (payload instanceof java.math.BigDecimal bd) {
                    requireExactFiniteBinary64(bd);
                    yield new OclValue.RealValue(bd);
                }
                if (payload instanceof Double d) {
                    if (!Double.isFinite(d)) {
                        throw new IllegalArgumentException(
                                "Real payload must be finite, found " + d);
                    }
                    requireExactFiniteBinary64(java.math.BigDecimal.valueOf(d));
                    yield new OclValue.RealValue(java.math.BigDecimal.valueOf(d));
                }
                if (payload instanceof Float f) {
                    if (!Float.isFinite(f)) {
                        throw new IllegalArgumentException(
                                "Real payload must be finite, found " + f);
                    }
                    java.math.BigDecimal value = java.math.BigDecimal.valueOf(f.doubleValue());
                    requireExactFiniteBinary64(value);
                    yield new OclValue.RealValue(value);
                }
                throw new IllegalArgumentException(
                        "Real payload must be Double/Float/BigDecimal, found "
                                + payload.getClass().getSimpleName() + ": " + payload);
            }
            case STRING -> {
                if (!(payload instanceof String value)) {
                    throw new IllegalArgumentException("String payload expected");
                }
                yield new OclValue.StringValue(value);
            }
            case CLASS -> {
                if (!(payload instanceof String value) || value.isEmpty()) {
                    throw new IllegalArgumentException(
                            "Object payload must be a non-empty stable id");
                }
                yield new OclValue.ObjectValue(expectedType, value);
            }
            case SET, BAG -> throw new IllegalStateException("collection handled above");
        };
    }

    private static void requireExactCarrierKeys(Map<?, ?> map, Set<String> expected) {
        if (!map.keySet().equals(expected)) {
            throw new IllegalArgumentException("tagged carrier keys mismatch: expected "
                    + expected + ", found " + map.keySet());
        }
    }

    private static void requireExactFiniteBinary64(java.math.BigDecimal value) {
        double encoded = value.doubleValue();
        if (!Double.isFinite(encoded)
                || new java.math.BigDecimal(encoded).compareTo(value) != 0) {
            throw new IllegalArgumentException(
                    "Real payload is not exactly representable as finite binary64: " + value);
        }
    }

    private static OclType parseTypeTag(String tag) {
        if (tag == null) {
            throw new IllegalArgumentException("result contract has no element type");
        }
        if (tag.equals("Boolean") || tag.equals("Boolean3")) return OclType.BOOLEAN;
        if (tag.equals("Integer")) return OclType.INTEGER;
        if (tag.equals("Real")) return OclType.REAL;
        if (tag.equals("String")) return OclType.STRING;
        if (tag.startsWith("Class(") && tag.endsWith(")")) {
            return OclType.clazz(tag.substring(6, tag.length() - 1));
        }
        // CypherArtifacts uses the compact Class:<key> spelling for tagged
        // object values.  Accept it here as well as the parenthesized spelling
        // used by older artifacts, otherwise VALUE decoding of object results
        // would fail even though the generated query is semantically valid.
        if (tag.startsWith("Class:") && tag.length() > "Class:".length()) {
            return OclType.clazz(tag.substring("Class:".length()));
        }
        if ((tag.startsWith("Set(") || tag.startsWith("Bag(")) && tag.endsWith(")")) {
            boolean set = tag.startsWith("Set(");
            OclType element = parseTypeTag(tag.substring(4, tag.length() - 1));
            return set ? OclType.set(element) : OclType.bag(element);
        }
        // Rule/06 angle-bracket format: Set<...> / Bag<...>
        if ((tag.startsWith("Set<") || tag.startsWith("Bag<")) && tag.endsWith(">")) {
            boolean set = tag.startsWith("Set<");
            OclType element = parseTypeTag(tag.substring(4, tag.length() - 1));
            return set ? OclType.set(element) : OclType.bag(element);
        }
        throw new IllegalArgumentException("unsupported result type tag: " + tag);
    }

    static Map<String, Object> buildParamMap(CypherAst.GeneratedArtifact artifact,
                                             Map<String, Object> extra) {
        return buildParamMap(artifact, extra, null);
    }

    static Map<String, Object> buildParamMap(CypherAst.GeneratedArtifact artifact,
                                             Map<String, Object> extra,
                                             GraphModel graph) {
        return buildParamMap(artifact.parameters(), extra, graph);
    }

    private static Map<String, Object> buildParamMap(
            List<CypherAst.QueryParameter> parameters,
            Map<String, Object> extra,
            GraphModel graph) {
        Map<String, Object> out = new LinkedHashMap<>();
        Map<String, CypherAst.QueryParameter> declared = new LinkedHashMap<>();
        for (CypherAst.QueryParameter p : parameters) {
            if (declared.putIfAbsent(p.name(), p) != null) {
                throw new IllegalArgumentException("duplicate parameter declaration: " + p.name());
            }
            if (p.origin() == CypherAst.QueryParameter.Origin.GENERATED) {
                if (p.canonicalValue() == null) {
                    throw new IllegalArgumentException(
                            "generated parameter has no canonical value: " + p.name());
                }
                requireGeneratedParameterKind(p);
                out.put(p.name(), physicalGeneratedValue(p, graph));
            }
        }
        if (extra != null) {
            for (Map.Entry<String, Object> entry : extra.entrySet()) {
                CypherAst.QueryParameter p = declared.get(entry.getKey());
                if (p == null) {
                    throw new IllegalArgumentException(
                            "undeclared public parameter: " + entry.getKey());
                }
                if (p.origin() != CypherAst.QueryParameter.Origin.PUBLIC) {
                    throw new IllegalArgumentException(
                            "caller cannot override generated parameter: " + entry.getKey());
                }
                requireParameterKind(p, entry.getValue(), graph);
                out.put(entry.getKey(), entry.getValue());
            }
        }
        for (CypherAst.QueryParameter p : parameters) {
            if (p.origin() == CypherAst.QueryParameter.Origin.PUBLIC
                    && !out.containsKey(p.name())) {
                throw new IllegalArgumentException("missing public parameter: " + p.name());
            }
        }
        return Collections.unmodifiableMap(out);
    }

    private static Object physicalGeneratedValue(CypherAst.QueryParameter parameter,
                                                  GraphModel graph) {
        Object value = parameter.canonicalValue();
        if (graph == null || !(value instanceof String text)) return value;
        return switch (parameter.logicalTypeTag()) {
            case "Physical:ClassKey" -> GraphKey.clazz(graph.modelKey(), text);
            case "Physical:AttributeKey" -> GraphKey.attribute(graph.modelKey(), text);
            default -> value;
        };
    }

    private static void requireParameterKind(CypherAst.QueryParameter parameter, Object value,
                                             GraphModel graph) {
        String tag = parameter.logicalTypeTag();
        if (value == null) {
            throw new IllegalArgumentException("public parameter cannot be null: "
                    + parameter.name());
        }
        boolean physical = switch (tag == null ? "" : tag) {
            case "Physical:StableObjectId", "Physical:ModelKey", "Physical:ClassKey",
                    "Physical:AttributeKey", "Physical:Role" -> true;
            default -> false;
        };
        if (physical) {
            if (value instanceof String) {
                return;
            }
            throw new IllegalArgumentException("wrong value kind for " + parameter.name()
                    + ": expected " + tag + ", found " + value.getClass().getSimpleName());
        }
        OclType expected = parseTypeTag(tag);
        if (!CypherArtifacts.typeTag(expected).equals(tag)) {
            throw new IllegalArgumentException("non-canonical public parameter type tag: " + tag);
        }
        decodePublicParameter(value, expected, graph);
    }

    private static void requireGeneratedParameterKind(CypherAst.QueryParameter parameter) {
        String tag = parameter.logicalTypeTag();
        boolean supported = switch (tag == null ? "" : tag) {
            case "Physical:StableObjectId", "Physical:ModelKey", "Physical:ClassKey",
                    "Physical:AttributeKey", "Physical:Role" -> true;
            default -> false;
        };
        if (!supported) {
            throw new IllegalArgumentException("unknown generated physical parameter type: "
                    + tag);
        }
    }

    /** Decode and validate the exact public wire contract before Cypher execution. */
    static OclValue decodePublicParameter(Object raw, OclType expectedType, GraphModel graph) {
        if (!(raw instanceof Map<?, ?> map)) {
            throw new IllegalArgumentException("public OCL parameter must be a tagged map");
        }
        Object bottomRaw = map.get(CypherArtifacts.OCL_BOTTOM);
        if (!(bottomRaw instanceof Boolean bottom)) {
            throw new IllegalArgumentException("public parameter lacks Boolean __oclBottom");
        }
        String expectedTag = expectedType.isCollection() && !bottom
                ? CypherArtifacts.typeTag(expectedType.elementType())
                : CypherArtifacts.typeTag(expectedType);
        if (!expectedTag.equals(map.get(CypherArtifacts.OCL_TYPE))) {
            throw new IllegalArgumentException("public parameter type mismatch: expected "
                    + expectedTag + ", found " + map.get(CypherArtifacts.OCL_TYPE));
        }
        if (bottom) {
            if (expectedType.isCollection()) {
                requireCollectionShape(map, expectedType, true);
            } else {
                if (!map.containsKey(CypherArtifacts.OCL_VALUE)
                        || map.get(CypherArtifacts.OCL_VALUE) != null
                        || map.containsKey(CypherArtifacts.OCL_KIND)
                        || map.containsKey(CypherArtifacts.OCL_ITEMS)) {
                    throw new IllegalArgumentException("malformed scalar parameter bottom");
                }
            }
            return new OclValue.BottomValue(expectedType);
        }
        if (expectedType.isCollection()) {
            List<?> items = requireCollectionShape(map, expectedType, false);
            List<OclValue> decoded = new ArrayList<>(items.size());
            for (Object item : items) {
                decoded.add(decodePublicParameter(item, expectedType.elementType(), graph));
            }
            if (expectedType.kind() == OclType.Kind.SET) {
                for (int i = 0; i < decoded.size(); i++) {
                    for (int j = i + 1; j < decoded.size(); j++) {
                        if (OclEquality.equal(decoded.get(i), decoded.get(j))
                                == OclEquality.BoolKind.TRUE) {
                            throw new IllegalArgumentException(
                                    "public Set parameter contains a typed-equality duplicate");
                        }
                    }
                }
                return new OclValue.SetValue(expectedType, decoded);
            }
            return new OclValue.BagValue(expectedType, decoded);
        }
        if (map.containsKey(CypherArtifacts.OCL_KIND)
                || map.containsKey(CypherArtifacts.OCL_ITEMS)
                || !map.containsKey(CypherArtifacts.OCL_VALUE)) {
            throw new IllegalArgumentException("malformed defined scalar parameter");
        }
        Object payload = map.get(CypherArtifacts.OCL_VALUE);
        if (payload == null) {
            throw new IllegalArgumentException("defined public parameter has null payload");
        }
        return decodePublicScalar(payload, expectedType, graph);
    }

    private static List<?> requireCollectionShape(Map<?, ?> map, OclType expectedType,
                                                  boolean bottom) {
        String kind = expectedType.kind() == OclType.Kind.SET ? "SET" : "BAG";
        if (!kind.equals(map.get(CypherArtifacts.OCL_KIND))) {
            throw new IllegalArgumentException("public collection parameter kind mismatch");
        }
        Object rawItems = map.get(CypherArtifacts.OCL_ITEMS);
        if (!(rawItems instanceof List<?> items)) {
            throw new IllegalArgumentException("public collection parameter lacks item list");
        }
        if (map.containsKey(CypherArtifacts.OCL_VALUE) || bottom && !items.isEmpty()) {
            throw new IllegalArgumentException("malformed public collection parameter");
        }
        return items;
    }

    private static OclValue decodePublicScalar(Object payload, OclType expectedType,
                                               GraphModel graph) {
        return switch (expectedType.kind()) {
            case BOOLEAN -> {
                if (!(payload instanceof Boolean value)) {
                    throw new IllegalArgumentException("Boolean public payload expected");
                }
                yield new OclValue.BooleanValue(OclType.BOOLEAN,
                        value ? OclValue.BooleanValue.Bool3.TRUE
                                : OclValue.BooleanValue.Bool3.FALSE);
            }
            case INTEGER -> {
                if (!(payload instanceof String text)
                        || !text.matches("-?(0|[1-9][0-9]*)") || text.equals("-0")) {
                    throw new IllegalArgumentException(
                            "Integer public payload must be a canonical decimal string");
                }
                java.math.BigInteger value = new java.math.BigInteger(text);
                if (value.compareTo(java.math.BigInteger.valueOf(Long.MIN_VALUE)) < 0
                        || value.compareTo(java.math.BigInteger.valueOf(Long.MAX_VALUE)) > 0) {
                    throw new IllegalArgumentException(
                            "Integer public payload is outside the certified INT64 domain");
                }
                yield new OclValue.IntegerValue(value);
            }
            case REAL -> {
                if (!(payload instanceof String text)
                        || !text.matches("-?(0|[1-9][0-9]*)([.][0-9]+)?")) {
                    throw new IllegalArgumentException(
                            "Real public payload must be a canonical finite decimal string");
                }
                java.math.BigDecimal decimal = new java.math.BigDecimal(text);
                double binary = decimal.doubleValue();
                if (!Double.isFinite(binary)
                        || new java.math.BigDecimal(binary).compareTo(decimal) != 0) {
                    throw new IllegalArgumentException(
                            "Real public payload has no exact binary64 certificate");
                }
                yield new OclValue.RealValue(decimal);
            }
            case STRING -> {
                if (!(payload instanceof String text)) {
                    throw new IllegalArgumentException("String public payload expected");
                }
                yield new OclValue.StringValue(text);
            }
            case CLASS -> {
                if (!(payload instanceof String stableId)) {
                    throw new IllegalArgumentException("Object public payload must be a stable ID");
                }
                if (graph == null) {
                    throw new IllegalArgumentException(
                            "logical object parameter requires a graph-scoped execution request");
                }
                String direct;
                try {
                    direct = GraphObservation.directType(graph, stableId);
                } catch (RuntimeException missing) {
                    throw new IllegalArgumentException(
                            "object parameter does not resolve in model scope: " + stableId,
                            missing);
                }
                String expectedClass = GraphKey.clazz(graph.modelKey(), expectedType.className());
                String directClass = GraphKey.clazz(graph.modelKey(), direct);
                if (!graph.subclassClosure(expectedClass).contains(directClass)) {
                    throw new IllegalArgumentException("object parameter " + stableId
                            + " does not conform to " + expectedType.className());
                }
                yield new OclValue.ObjectValue(expectedType, stableId);
            }
            case SET, BAG -> throw new IllegalStateException("collection handled above");
        };
    }

    private static String quote(String name) {
        if (name == null) {
            return "";
        }
        return "`" + name.replace("`", "``") + "`";
    }
}
