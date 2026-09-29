package org.uet.dse.ocl2cypher.input;

import java.nio.file.Path;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.api.FrontendCompiler;
import org.uet.dse.ocl2cypher.graph.GraphBuilder;
import org.uet.dse.ocl2cypher.runtime.OclValue;

import static org.junit.jupiter.api.Assertions.*;

class EcoreXmiInputTest {

    @Test
    void loadsSchemaSnapshotLinksDefaultsAndInvariants() throws Exception {
        var loaded = EcoreXmiInput.load(example("shop-ecore-xmi", "shop.ecore"),
                example("shop-ecore-xmi", "shop.xmi"));

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        ModelInputBundle input = loaded.value();
        assertEquals(2, input.schema().classes().size());
        assertEquals(2, input.snapshot().objects().size());
        assertEquals(2, input.invariants().size());
        assertEquals("context Catalog inv HasItems: self.items->size() > 0",
                input.invariants().get(0).oclText());

        OclValue active = input.snapshot().attributeSlot("item-1", "active")
                .orElseThrow();
        assertEquals(OclValue.BooleanValue.Bool3.FALSE,
                ((OclValue.BooleanValue) active).bool(),
                "an omitted non-unsettable EBoolean denotes its Ecore default, not bottom");
        assertEquals(java.util.List.of("item-1"),
                input.snapshot().linkTargets(input.schema(), "items", "catalog-1"));

        for (SourceInvariant invariant : input.invariants()) {
            var compiled = FrontendCompiler.compile(invariant.oclText(), input.schema());
            assertTrue(compiled.isSuccess(), () -> invariant.name() + ": "
                    + compiled.diagnostics());
        }
        var graph = GraphBuilder.build(input.schema(), input.snapshot());
        assertTrue(graph.isSuccess(), () -> graph.diagnostics().toString());
    }

    @Test
    void supportsAnApplicationStableIdPolicy() throws Exception {
        var options = org.uet.dse.ocl2cypher.input.emf.EcoreXmiOptions
                .defaults("shop")
                .withStableIdProvider((object, resource) -> object.eClass().getName()
                        + ":" + resource.getURIFragment(object));
        var loaded = EcoreXmiInput.load(example("shop-ecore-xmi", "shop.ecore"),
                example("shop-ecore-xmi", "shop.xmi"), options);

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        assertTrue(loaded.value().snapshot().hasObject("Catalog:catalog-1"));
        assertTrue(loaded.value().snapshot().hasObject("Item:item-1"));
    }

    @Test
    void duplicateApplicationStableIdsUseTheCanonicalDoubleUnderscoreSuffix()
            throws Exception {
        var options = org.uet.dse.ocl2cypher.input.emf.EcoreXmiOptions
                .defaults("shop")
                .withStableIdProvider((object, resource) -> "duplicate");
        var loaded = EcoreXmiInput.load(example("shop-ecore-xmi", "shop.ecore"),
                example("shop-ecore-xmi", "shop.xmi"), options);

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        assertTrue(loaded.value().snapshot().hasObject("duplicate"));
        assertTrue(loaded.value().snapshot().hasObject("duplicate__1"));
        assertEquals(java.util.List.of("duplicate__1"),
                loaded.value().snapshot().linkTargets(
                        loaded.value().schema(), "items", "duplicate"));
    }

    @Test
    void compilesAnExtractedInvariantThroughCoreQAndCypher() throws Exception {
        var compiled = EcoreXmiCompiler.compile(
                example("shop-ecore-xmi", "shop.ecore"),
                example("shop-ecore-xmi", "shop.xmi"), "HasItems");

        assertTrue(compiled.isSuccess(), () -> compiled.diagnostics().toString());
        FileCompilation result = compiled.value();
        assertEquals("HasItems", result.core().invariantName());
        assertFalse(result.serializedCypher().cypherText().isBlank());
        assertTrue(result.serializedCypher().cypherText().contains("RETURN"));
    }

    @Test
    void reportsMissingFilesAsAnInputBoundaryFailure() {
        var result = EcoreXmiInput.load(Path.of("missing.ecore"), Path.of("missing.xmi"));
        assertTrue(result.isFailure());
        assertEquals("E_ECORE_XMI_INPUT", result.primaryDiagnostic().code());
    }

    private static Path example(String directory, String fileName) {
        return Path.of("..", "example", directory, fileName)
                .toAbsolutePath().normalize();
    }
}
