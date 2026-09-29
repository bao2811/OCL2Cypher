package org.uet.dse.ocl2cypher.caseStudy;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.nio.file.Path;
import java.util.List;
import java.util.Set;

import org.eclipse.emf.ecore.EObject;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.api.CoreOracle;
import org.uet.dse.ocl2cypher.input.EcoreXmiInput;
import org.uet.dse.ocl2cypher.input.emf.EcoreXmiOptions;
import org.uet.dse.ocl2cypher.execution.UseEvaluationAdapter;

/** Independent USE evaluations for the ER2REL worked case study. */
class Er2RelUseOracleTest {

    private static final Path FIXTURES = Path.of("..", "research", "Case Study",
            "ER2REL", "use-oracle");
    private static final Path CASE = FIXTURES.getParent();
    private static final Path ECORE = Path.of("..", "example", "ER2REL", "REL.ecore");
    private static final String INVARIANT = "Relation::REL_K";
    private static final String OCL =
            "context Relation inv REL_K: self.attrs->exists(a | a.isKey)";

    @Test
    void useFindsNoViolationInAtlProducedSnapshot() throws Exception {
        var result = evaluate("valid.soil");
        assertEquals(Set.of(), result.violations().get(INVARIANT));
        assertEquals(3, result.objectEvaluations());
        assertEquals(project(result), core(CASE.resolve("output/rel-valid.xmi")));
    }

    @Test
    void useFindsPlacesInNegativeSnapshot() throws Exception {
        var result = evaluate("negative-no-key.soil");
        assertEquals(Set.of("relation_Places"), result.violations().get(INVARIANT));
        assertEquals(3, result.objectEvaluations());
        assertEquals(project(result), core(CASE.resolve("input/rel-negative-no-key.xmi")));
    }

    private static UseEvaluationAdapter.Result evaluate(String soil) throws Exception {
        return UseEvaluationAdapter.evaluate(FIXTURES.resolve("REL.use"),
                FIXTURES.resolve("REL_K.ocl"), FIXTURES.resolve(soil));
    }

    private static Set<String> project(UseEvaluationAdapter.Result result) {
        return result.violations().get(INVARIANT).stream()
                .map(name -> "relation:" + name.substring("relation_".length()))
                .collect(java.util.stream.Collectors.toUnmodifiableSet());
    }

    private static Set<String> core(Path xmi) {
        EcoreXmiOptions options = EcoreXmiOptions.defaults("er2rel-use-differential")
                .withStableIdProvider((object, resource) -> stableId(object));
        var loaded = EcoreXmiInput.load(ECORE, xmi, options);
        if (loaded.isFailure()) {
            throw new AssertionError(loaded.diagnostics().toString());
        }
        List<String> violations = CoreOracle.violationsOclEq(OCL,
                loaded.value().schema(), loaded.value().snapshot());
        return Set.copyOf(violations);
    }

    private static String stableId(EObject object) {
        if (object.eClass().getName().equals("Relation")) {
            Object name = object.eGet(object.eClass().getEStructuralFeature("name"));
            return "relation:" + name;
        }
        return object.eResource().getURIFragment(object);
    }
}
