package org.uet.dse.ocl2cypher;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

/** Maven/JUnit gate for the independent N-4 elaborated-source/Core corpus. */
class N4SemanticPreservationTest {

    @Test
    void admittedElaboratedExpressionsAndLoweredCoreHaveTheSameDenotation() {
        N4SemanticPreservationCorpus.Counts counts = N4SemanticPreservationCorpus.run();
        assertEquals(59, counts.expressions());
        assertEquals(118, counts.objectEvaluations());
    }
}
