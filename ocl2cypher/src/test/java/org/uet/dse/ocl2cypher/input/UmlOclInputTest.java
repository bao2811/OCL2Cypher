package org.uet.dse.ocl2cypher.input;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.nio.file.Files;
import java.nio.file.Path;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.uet.dse.ocl2cypher.api.FrontendCompiler;
import org.uet.dse.ocl2cypher.runtime.OclType;
import org.uet.dse.ocl2cypher.source.model.UmlAssociation;

class UmlOclInputTest {

    @Test
    void loadsUmlClassDiagramAndExternalOclIntoSchemaModel() throws Exception {
        var loaded = UmlOclInput.load(example("shop-uml-ocl", "shop.uml"),
                example("shop-uml-ocl", "shop-external.ocl"));

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        UmlOclInputBundle input = loaded.value();
        assertEquals("shop", input.schema().modelKey());
        assertEquals(2, input.schema().classes().size());
        assertEquals(OclType.STRING,
                input.schema().attribute("Item", "name").declaredType());
        assertEquals(OclType.BOOLEAN,
                input.schema().attribute("Item", "active").declaredType());

        var navigation = input.schema().navigation("Catalog", "items");
        assertNotNull(navigation);
        assertEquals("Item", navigation.targetClassKey());
        assertEquals(-1, navigation.targetUpper());
        assertTrue(navigation.unique());

        var frontend = FrontendCompiler.compile(input.oclText(), input.schema());
        assertTrue(frontend.isSuccess(), () -> frontend.diagnostics().toString());
        assertEquals(2, frontend.value().size());
    }

    @Test
    void reportsMissingUmlFileAtTheInputBoundary() {
        var loaded = UmlOclInput.load(Path.of("missing.uml"),
                Path.of("missing.ocl"));

        assertTrue(loaded.isFailure());
        assertEquals("E_UML_OCL_INPUT", loaded.primaryDiagnostic().code());
    }

    @Test
    void loadsTargetQualifiersAndAssociationClassesFromUmlXmi() throws Exception {
        var loaded = UmlOclInput.load(example("advanced-adapters", "advanced.uml"),
                example("advanced-adapters", "advanced.ocl"));

        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        var schema = loaded.value().schema();
        assertEquals("shelf", schema.associationByName("Catalog")
                .qualifiers().get(0).name());
        assertEquals(OclType.STRING, schema.associationByName("Catalog")
                .qualifiers().get(0).declaredType());
        assertEquals(UmlAssociation.QualifierEnd.TARGET,
                schema.associationByName("Catalog").qualifierEnd());
        assertTrue(schema.clazz("Loan").isAssociationClass());
        assertEquals("Loan", schema.associationByName("Loan").key());
        assertEquals(OclType.STRING, schema.attribute("Loan", "note").declaredType());
        assertTrue(FrontendCompiler.compile(loaded.value().oclText(), schema).isSuccess());
        assertTrue(FrontendCompiler.compile(
                "context Book inv ReverseCatalog: self.library->notEmpty()", schema)
                .isSuccess());
        assertTrue(FrontendCompiler.compile(
                "context Book inv WrongDirection: self.library['A']->notEmpty()", schema)
                .isFailure());
    }

    @Test
    void rejectsDoctypeEvenWhenUseSuppliesTheXercesFactory(@TempDir Path temp)
            throws Exception {
        Path uml = temp.resolve("xxe.uml");
        Path ocl = temp.resolve("xxe.ocl");
        Files.writeString(uml, """
                <?xml version="1.0"?>
                <!DOCTYPE model [<!ENTITY xxe SYSTEM "file:///definitely-not-readable">]>
                <uml:Model xmlns:uml="http://www.eclipse.org/uml2/5.0.0/UML"
                           xmlns:xmi="http://www.omg.org/spec/XMI/20131001"
                           xmi:type="uml:Model" xmi:id="m" name="unsafe"/>
                """);
        Files.writeString(ocl, "context Dummy inv Safe: true");

        var loaded = UmlOclInput.load(uml, ocl);

        assertTrue(loaded.isFailure());
        assertEquals("E_UML_OCL_INPUT", loaded.primaryDiagnostic().code());
    }

    private static Path example(String directory, String fileName) {
        return Path.of("..", "example", directory, fileName)
                .toAbsolutePath().normalize();
    }
}
