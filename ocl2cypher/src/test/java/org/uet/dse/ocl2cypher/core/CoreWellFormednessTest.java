package org.uet.dse.ocl2cypher.core;

import static org.junit.jupiter.api.Assertions.assertEquals;
import org.junit.jupiter.api.Test;

class CoreWellFormednessTest {
    @Test
    void productionCatalogueIsWellFormedAndMalformedTreesAreRejected() {
        CoreWellFormednessCorpus.Counts counts = CoreWellFormednessCorpus.run();
        assertEquals(56, counts.acceptedProductionTrees());
        assertEquals(14, counts.rejectedMalformedTrees());
    }
}
