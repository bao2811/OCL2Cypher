package org.uet.dse.ocl2cypher;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.Set;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.api.CoreOracle;
import org.uet.dse.ocl2cypher.api.FrontendCompiler;
import org.uet.dse.ocl2cypher.api.ValueQueryRequest;
import org.uet.dse.ocl2cypher.core.CoreLowering;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.cypher.Neo4jCypherParserGate;
import org.uet.dse.ocl2cypher.cypher.Realization;
import org.uet.dse.ocl2cypher.cypher.Serializer;
import org.uet.dse.ocl2cypher.graph.GraphBuilder;
import org.uet.dse.ocl2cypher.qcyp.QCypTranslator;
import org.uet.dse.ocl2cypher.qcyp.QInterpreter;
import org.uet.dse.ocl2cypher.qcyp.QNode;
import org.uet.dse.ocl2cypher.runtime.OclType;
import org.uet.dse.ocl2cypher.runtime.OclValue;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;
import org.uet.dse.ocl2cypher.source.model.Snapshot;
import org.uet.dse.ocl2cypher.source.model.UmlAssociation;
import org.uet.dse.ocl2cypher.source.model.UmlAttribute;
import org.uet.dse.ocl2cypher.source.model.UmlClass;

/** Regression for the manuscript's central uniqueness invariant. */
class IsUniqueEndToEndTest {

    private static final String OCL = """
            context Relation inv REL_AN:
              self.attrs->isUnique(a | a.name)
            """;

    @Test
    void centralExamplePreservesViolationsThroughCypherSerialization() {
        SchemaModel schema = schema();
        Snapshot snapshot = Snapshot.builder()
                .object("relation_ok", "Relation")
                .object("ok_id", "Attribute")
                .attribute("ok_id", "name", new OclValue.StringValue("id"))
                .object("ok_name", "Attribute")
                .attribute("ok_name", "name", new OclValue.StringValue("name"))
                .link("relationAttrs", "relation_ok", "ok_id")
                .link("relationAttrs", "relation_ok", "ok_name")
                .object("relation_bad", "Relation")
                .object("bad_id_1", "Attribute")
                .attribute("bad_id_1", "name", new OclValue.StringValue("id"))
                .object("bad_id_2", "Attribute")
                .attribute("bad_id_2", "name", new OclValue.StringValue("id"))
                .link("relationAttrs", "relation_bad", "bad_id_1")
                .link("relationAttrs", "relation_bad", "bad_id_2")
                .build();

        var frontend = FrontendCompiler.compile(OCL, schema);
        assertTrue(frontend.isSuccess(), () -> frontend.diagnostics().toString());
        var document = frontend.value().get(0);
        var lowered = CoreLowering.lower(schema, document, document.constraints.get(0));
        assertTrue(lowered.isSuccess(), () -> lowered.diagnostics().toString());

        var graph = GraphBuilder.build(schema, snapshot);
        assertTrue(graph.isSuccess(), () -> graph.diagnostics().toString());
        var query = QCypTranslator.translate(lowered.value());
        assertTrue(query.isSuccess(), () -> query.diagnostics().toString());
        assertTrue(query.value().expressionBody() instanceof QNode.QExpr.Let,
                "isUnique projection must be materialized once and shared");

        Set<String> expected = Set.of("relation_bad");
        assertEquals(expected, Set.copyOf(CoreOracle.violationsOclEq(OCL, schema, snapshot)));
        assertEquals(expected, Set.copyOf(QInterpreter.violations(schema,
                graph.value().graph(), lowered.value(), query.value())));

        var realized = Realization.realize(query.value(), graph.value().graph(),
                CypherAst.Dialect.CYPHER_5);
        assertTrue(realized.isSuccess(), () -> realized.diagnostics().toString());
        String cypher = Serializer.cypherText(realized.value());
        Neo4jCypherParserGate.assertParses(cypher);
        assertTrue(cypher.contains("reduce("), "isUnique must use typed distinct reduction");
        assertTrue(cypher.contains("size("), "isUnique must compare certified cardinalities");
    }

    @Test
    void collectionValuedProjectionRemainsOutsideTheAdmittedFragment() {
        var result = FrontendCompiler.compileValueQuery(
                ValueQueryRequest.contextless("Set{1}->isUnique(x | Set{x})"), schema());
        assertTrue(result.isFailure());
        assertEquals("N_UNSUPPORTED_CONSTRUCT", result.primaryDiagnostic().code());
    }

    private static SchemaModel schema() {
        return SchemaModel.builder("rel")
                .clazz(UmlClass.of("Relation"))
                .clazz(UmlClass.of("Attribute"))
                .attribute(UmlAttribute.of("Attribute", "name", OclType.STRING))
                .association(UmlAssociation.binary("relationAttrs", "Relation", "relation",
                        "Attribute", "attrs"))
                .build();
    }
}
