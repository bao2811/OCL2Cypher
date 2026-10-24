package org.uet.dse.ocl2cypher;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;

class T2SemanticPreservationTest {
    @Test
    void everyAdmittedConstructorPreservesCoreSemanticsAcrossExpressionAndPlanRoots() {
        T2SemanticPreservationCorpus.Counts counts = T2SemanticPreservationCorpus.run();
        assertEquals(59, counts.expressions());
        assertEquals(118, counts.objectEvaluations());
        assertEquals(59, counts.expressionRoots() + counts.planRoots());
        assertTrue(counts.expressionRoots() > 0);
        assertTrue(counts.planRoots() > 0);
    }
}
