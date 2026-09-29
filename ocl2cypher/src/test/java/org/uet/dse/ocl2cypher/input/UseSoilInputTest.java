package org.uet.dse.ocl2cypher.input;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.nio.file.Path;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.api.FrontendCompiler;
import org.uet.dse.ocl2cypher.execution.UseSoilNeo4jAction;
import org.uet.dse.ocl2cypher.graph.GraphBuilder;
import org.uet.dse.ocl2cypher.runtime.OclValue;
import org.uet.dse.ocl2cypher.source.model.QualifierValue;
import org.uet.dse.ocl2cypher.source.model.UmlAssociation;

class UseSoilInputTest {

    @Test
    void loadsUseSchemaSoilSnapshotAndEmbeddedInvariants() throws Exception {
        var loaded = UseSoilInput.load(example("shop-use-soil", "shop.use"),
                example("shop-use-soil", "shop.soil"));

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        ModelInputBundle input = loaded.value();
        assertEquals("Shop", input.schema().modelKey());
        assertEquals(2, input.schema().classes().size());
        assertEquals(2, input.snapshot().objects().size());
        assertEquals(2, input.invariants().size());
        assertEquals("context Catalog inv HasItems: self.items->notEmpty()",
                input.invariants().get(0).oclText());
        assertEquals("Main -- catalog",
                ((OclValue.StringValue) input.snapshot()
                        .attributeSlot("catalog1", "name").orElseThrow()).value());
        assertEquals(java.util.List.of("item1"),
                input.snapshot().linkTargets(input.schema(), "items", "catalog1"));

        for (SourceInvariant invariant : input.invariants()) {
            var compiled = FrontendCompiler.compile(invariant.oclText(), input.schema());
            assertTrue(compiled.isSuccess(), () -> invariant.name() + ": "
                    + compiled.diagnostics());
        }
        var graph = GraphBuilder.build(input.schema(), input.snapshot());
        assertTrue(graph.isSuccess(), () -> graph.diagnostics().toString());
    }

    @Test
    void compilesEmbeddedInvariantThroughCoreQAndCypher() throws Exception {
        var compiled = UseSoilCompiler.compile(example("shop-use-soil", "shop.use"),
                example("shop-use-soil", "shop.soil"), "HasItems");

        assertTrue(compiled.isSuccess(), () -> compiled.diagnostics().toString());
        assertEquals("HasItems", compiled.value().core().invariantName());
        assertFalse(compiled.value().serializedCypher().cypherText().isBlank());
        assertTrue(compiled.value().serializedCypher().cypherText().contains("RETURN"));
    }

    @Test
    void reportsMissingFilesAtTheInputBoundary() {
        var loaded = UseSoilInput.load(Path.of("missing.use"),
                Path.of("missing.soil"));

        assertTrue(loaded.isFailure());
        assertEquals("E_USE_SOIL_INPUT", loaded.primaryDiagnostic().code());
    }

    @Test
    void preparesTheUseSoilGraphForNeo4jWithoutOpeningAConnection() throws Exception {
        var prepared = UseSoilNeo4jAction.prepare(example("shop-use-soil", "shop.use"),
                example("shop-use-soil", "shop.soil"));

        assertTrue(prepared.isSuccess(), () -> prepared.diagnostics().toString());
        assertEquals("Shop", prepared.value().graph().graph().modelKey());
        assertFalse(prepared.value().graph().graph().nodes().isEmpty());
    }

    @Test
    void loadsTraditionalUseCreateSyntax() throws Exception {
        var loaded = UseSoilInput.load(example("shop-use-soil", "shop.use"),
                example("shop-use-soil", "shop-traditional.soil"));

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        assertEquals(2, loaded.value().snapshot().objects().size());
        assertEquals("Book", ((OclValue.StringValue) loaded.value().snapshot()
                .attributeSlot("item1", "name").orElseThrow()).value());
        assertEquals(java.util.List.of("item1"), loaded.value().snapshot()
                .linkTargets(loaded.value().schema(), "items", "catalog1"));
    }

    @Test
    void executesMultilineFullSoilBlockWithVariablesAndConditional()
            throws Exception {
        var loaded = UseSoilInput.load(example("shop-use-soil", "shop.use"),
                example("shop-use-soil", "shop-block.soil"));

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        assertEquals(2, loaded.value().snapshot().objects().size());
        assertEquals("Book!", ((OclValue.StringValue) loaded.value().snapshot()
                .attributeSlot("item1", "name").orElseThrow()).value());
        assertEquals(java.util.List.of("item1"), loaded.value().snapshot()
                .linkTargets(loaded.value().schema(), "items", "catalog1"));
    }

    @Test
    void loadsQualifiedLinksAndAssociationClassOccurrencesFromProductionFiles()
            throws Exception {
        var loaded = UseSoilInput.load(example("advanced-adapters", "advanced.use"),
                example("advanced-adapters", "advanced.soil"));

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        ModelInputBundle input = loaded.value();
        var catalog = input.schema().associationByName("Catalog");
        assertEquals(1, catalog.qualifiers().size());
        assertEquals("shelf", catalog.qualifiers().get(0).name());
        assertEquals(UmlAssociation.QualifierEnd.TARGET, catalog.qualifierEnd());
        assertEquals(UmlAssociation.QualifierEnd.SOURCE,
                input.schema().associationByName("Ownership").qualifierEnd());
        assertTrue(input.schema().clazz("Loan").isAssociationClass());
        assertEquals("Loan", input.schema().associationByName("Loan").key());

        var qualified = input.snapshot().links().stream()
                .filter(link -> link.associationName.equals("Catalog"))
                .findFirst().orElseThrow();
        assertEquals(java.util.List.of(new QualifierValue("shelf",
                        new OclValue.StringValue("A"))), qualified.qualifiers);
        var sourceQualified = input.snapshot().links().stream()
                .filter(link -> link.associationName.equals("Ownership"))
                .findFirst().orElseThrow();
        assertEquals(java.util.List.of(new QualifierValue("section",
                        new OclValue.StringValue("X"))), sourceQualified.qualifiers);
        var loan = input.snapshot().links().stream()
                .filter(link -> link.associationName.equals("Loan"))
                .findFirst().orElseThrow();
        assertEquals("loan1", loan.associationClassObjectStableId);
        assertEquals("overnight", ((OclValue.StringValue) input.snapshot()
                .attributeSlot("loan1", "note").orElseThrow()).value());

        for (SourceInvariant invariant : input.invariants()) {
            var compiled = FrontendCompiler.compile(invariant.oclText(), input.schema());
            assertTrue(compiled.isSuccess(), () -> invariant.name() + ": "
                    + compiled.diagnostics());
            var pipeline = UseSoilCompiler.compile(
                    example("advanced-adapters", "advanced.use"),
                    example("advanced-adapters", "advanced.soil"), invariant.name());
            assertTrue(pipeline.isSuccess(), () -> invariant.name() + " pipeline: "
                    + pipeline.diagnostics());
            assertFalse(pipeline.value().serializedCypher().cypherText().isBlank());
        }
        assertTrue(GraphBuilder.build(input.schema(), input.snapshot()).isSuccess());

        assertTrue(FrontendCompiler.compile(
                "context Book inv ReverseCatalog: self.library->notEmpty()",
                input.schema()).isSuccess());
        assertTrue(FrontendCompiler.compile(
                "context Library inv ForwardOwnership: self.ownedBook->notEmpty()",
                input.schema()).isSuccess());
        assertTrue(FrontendCompiler.compile(
                "context Book inv WrongCatalogQualifier: self.library['A']->notEmpty()",
                input.schema()).isFailure());
        assertTrue(FrontendCompiler.compile(
                "context Library inv WrongOwnershipQualifier: self.ownedBook['X']->notEmpty()",
                input.schema()).isFailure());
    }

    @Test
    void rejectsOperationDeclarationsInsteadOfSilentlyErasingThem() throws Exception {
        var loaded = UseSoilInput.load(
                example("unsupported-operations", "operations.use"),
                example("unsupported-operations", "empty.soil"));

        assertTrue(loaded.isFailure());
        assertEquals("E_USE_SOIL_INPUT", loaded.primaryDiagnostic().code());
        assertTrue(loaded.primaryDiagnostic().message().contains("operation declarations"));
    }

    @Test
    void rejectsOperationContextsAndPreconditionsInsteadOfSilentlyErasingThem()
            throws Exception {
        var loaded = UseSoilInput.load(example("unsupported-prepost", "prepost.use"),
                example("unsupported-prepost", "empty.soil"));

        assertTrue(loaded.isFailure());
        assertEquals("E_USE_SOIL_INPUT", loaded.primaryDiagnostic().code());
        assertTrue(loaded.primaryDiagnostic().message().contains("pre/postconditions"));
    }

    private static Path example(String directory, String fileName) {
        return Path.of("..", "example", directory, fileName)
                .toAbsolutePath().normalize();
    }
}
