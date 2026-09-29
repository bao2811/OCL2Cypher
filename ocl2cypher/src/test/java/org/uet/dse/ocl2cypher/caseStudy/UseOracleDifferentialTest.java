package org.uet.dse.ocl2cypher.caseStudy;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.nio.file.Files;
import java.nio.file.Path;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;

import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.api.CoreOracle;
import org.uet.dse.ocl2cypher.execution.UseEvaluationAdapter;

/**
 * Differential source-oracle checks against the independent USE evaluator.
 * These tests do not use the generated graph or Cypher execution as an oracle.
 */
class UseOracleDifferentialTest {

    private static final Path MEDICAL = Path.of("..", "example", "medical");
    private static final Path CAR_RENTAL = Path.of("..", "example", "carrental", "umlmm");
    private static final Path LIBRARY = Path.of("..", "research", "Case Study");
    private static final Set<String> CAR_RENTAL_FRONTEND_BOUNDARY = Set.of();

    @Test
    void useAgreesWithMedicalForEveryInvariant() throws Exception {
        var use = UseEvaluationAdapter.evaluate(
                MEDICAL.resolve("medical.use"),
                MEDICAL.resolve("invariants.ocl"),
                MEDICAL.resolve("medical.soil"));
        Map<String, Set<String>> expected = expected(
                MEDICAL.resolve("expected-violations.csv"));
        assertEquals(expected, use.violations(), "V_USE vs reviewed Medical CSV");

        var fixture = CarRentalFixture.read(
                MEDICAL.resolve("medical.use"), MEDICAL.resolve("medical.soil"))
                .toExecutable();
        var specs = CaseStudyReplayer.loadInvariants(MEDICAL.resolve("invariants.ocl"));
        assertEquals(expected.size(), specs.size());
        for (var spec : specs) {
            String key = spec.context() + "::" + spec.name();
            Set<String> core = Set.copyOf(CoreOracle.violationsOclEq(
                    spec.source(), fixture.schema(), fixture.snapshot()));
            assertEquals(use.violations().get(key), core,
                    "V_USE vs CoreOracle: " + key);
        }
        assertTrue(use.objectEvaluations() > specs.size(),
                "USE must evaluate invariant bodies on concrete context objects");
        System.out.println("PASS: V_USE Medical: 36 invariants; 36 exact "
                + "Core agreements; no typed-bottom refinement differences; "
                + use.objectEvaluations() + " USE object evaluations");
    }

    @Test
    void useAgreesWithCarRentalExpectedIdsAndAdmittedCoreOracleCases() throws Exception {
        Path invariants = CAR_RENTAL.resolve("invariants-extended.ocl");
        var use = UseEvaluationAdapter.evaluate(
                CAR_RENTAL.resolve("carrentalmodel.use"), invariants,
                CAR_RENTAL.resolve("carrental-experiment.soil"));
        Map<String, Set<String>> expected = expected(
                CAR_RENTAL.resolve("expected-violations-extended.csv"));
        assertEquals(expected, use.violations(), "V_USE vs reviewed CarRental CSV");

        var fixture = CarRentalFixture.read(
                CAR_RENTAL.resolve("carrentalmodel.use"),
                CAR_RENTAL.resolve("carrental-experiment.soil")).toExecutable();
        var specs = CaseStudyReplayer.loadInvariants(invariants);
        int compared = 0;
        for (var spec : specs) {
            String key = spec.context() + "::" + spec.name();
            if (CAR_RENTAL_FRONTEND_BOUNDARY.contains(key)) {
                continue;
            }
            assertEquals(use.violations().get(key), Set.copyOf(CoreOracle.violationsOclEq(
                    spec.source(), fixture.schema(), fixture.snapshot())),
                    "V_USE vs CoreOracle: " + key);
            compared++;
        }
        assertEquals(25, compared, "unexpected admitted CarRental comparison count");
        System.out.println("PASS: V_USE CarRental: 25 invariants match reviewed IDs; "
                + "25 exact Core agreements; no compiler-boundary cases; "
                + use.objectEvaluations() + " USE object evaluations");
    }

    @Test
    void useAgreesWithLibraryExpectedIdsOnEverySnapshot() throws Exception {
        Map<String, Path> snapshots = new LinkedHashMap<>();
        snapshots.put("SN1", LIBRARY.resolve("snapshot-main.soil"));
        snapshots.put("SN2", LIBRARY.resolve("snapshot-empty.soil"));
        snapshots.put("SN3", LIBRARY.resolve("snapshot-bottom.soil"));
        Map<String, Map<String, Set<String>>> expected = expectedBySnapshot(
                LIBRARY.resolve("expected-violations.csv"));
        int evaluations = 0;
        for (var snapshot : snapshots.entrySet()) {
            var use = UseEvaluationAdapter.evaluate(
                    LIBRARY.resolve("library.use"),
                    LIBRARY.resolve("invariants.ocl"), snapshot.getValue());
            assertEquals(expected.get(snapshot.getKey()), use.violations(),
                    "V_USE vs reviewed Library CSV for " + snapshot.getKey());
            evaluations += use.objectEvaluations();
        }
        System.out.println("PASS: V_USE Library: 26 invariants over 3 snapshots; "
                + evaluations + " USE object evaluations");
    }

    private static Map<String, Set<String>> expected(Path csv) throws Exception {
        var lines = Files.readAllLines(csv);
        assertEquals("invariant,ids,classification", lines.get(0));
        Map<String, Set<String>> result = new LinkedHashMap<>();
        for (String line : lines.subList(1, lines.size())) {
            if (line.isBlank()) {
                continue;
            }
            String[] fields = line.split(",", -1);
            assertEquals(3, fields.length, line);
            Set<String> ids = fields[1].isEmpty()
                    ? Set.of() : Set.of(fields[1].split(";"));
            assertEquals(null, result.putIfAbsent(fields[0], ids),
                    "duplicate expected row: " + fields[0]);
        }
        return result;
    }

    private static Map<String, Map<String, Set<String>>> expectedBySnapshot(Path csv)
            throws Exception {
        var lines = Files.readAllLines(csv);
        assertEquals("snapshot,invariant,ids", lines.get(0));
        Map<String, Map<String, Set<String>>> result = new LinkedHashMap<>();
        for (String line : lines.subList(1, lines.size())) {
            if (line.isBlank()) continue;
            String[] fields = line.split(",", -1);
            assertEquals(3, fields.length, line);
            Set<String> ids = fields[2].isEmpty()
                    ? Set.of() : Set.of(fields[2].split("\\|"));
            assertEquals(null, result.computeIfAbsent(fields[0], ignored ->
                            new LinkedHashMap<>()).putIfAbsent(fields[1], ids),
                    "duplicate expected row: " + fields[0] + "/" + fields[1]);
        }
        return result;
    }
}
