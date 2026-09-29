package org.uet.dse.ocl2cypher.execution;

import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.cypher.Serializer;
import org.uet.dse.ocl2cypher.graph.GraphKey;
import org.uet.dse.ocl2cypher.graph.GraphModel;

import java.util.List;
import java.util.Map;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

class Neo4jBrowserScriptTest {
    @Test
    void createsSelfContainedDesktopQueryUsingPhysicalGraphKeys() {
        GraphModel graph = new GraphModel("demo-model");
        var parameters = List.of(
                generated("__oclModelKey", "Physical:ModelKey", "demo-model"),
                generated("__oclContextClassKey", "Physical:ClassKey", "Person"),
                generated("__oclRole_2", "Physical:Role", "ObjectInstanceOf"));
        var query = new CypherAst.CypherQuery(List.of(new CypherAst.ReturnClause(false,
                List.of(
                        item("__oclModelKey", "result"),
                        item("__oclContextClassKey", "classKey"),
                        item("__oclRole_2", "role")))), true);
        var artifact = artifact(query, parameters);

        String script = Neo4jBrowserScript.selfContained(
                Serializer.serialize(artifact), artifact, graph);

        assertFalse(script.contains("$__ocl"));
        assertTrue(script.contains("'demo-model'"));
        assertTrue(script.contains("'" + GraphKey.clazz("demo-model", "Person") + "'"));
        assertTrue(script.contains("'ObjectInstanceOf'"));
    }

    @Test
    void doesNotSubstituteParameterLookingTextInsideStringsOrIdentifiers() {
        String query = "RETURN '$p' AS `literal`, `$p` AS `identifier`, $p AS `parameter`\n";
        String inlined = Neo4jBrowserScript.inlineParameters(query, Map.of("p", "a'b"));
        assertTrue(inlined.contains("'$p' AS `literal`"));
        assertTrue(inlined.contains("`$p` AS `identifier`"));
        assertTrue(inlined.contains("'a\\'b' AS `parameter`"));
    }

    @Test
    void refusesToInventMissingPublicParameterValue() {
        var parameter = new CypherAst.QueryParameter("limit", "Integer",
                CypherAst.QueryParameter.Origin.PUBLIC, null);
        var query = new CypherAst.CypherQuery(List.of(new CypherAst.ReturnClause(false,
                List.of(item("limit", "result")))), true);
        var artifact = artifact(query, List.of(parameter));
        assertThrows(IllegalArgumentException.class, () -> Neo4jBrowserScript.selfContained(
                Serializer.serialize(artifact), artifact, new GraphModel("model")));
    }

    private static CypherAst.QueryParameter generated(String name, String type, String value) {
        return new CypherAst.QueryParameter(name, type,
                CypherAst.QueryParameter.Origin.GENERATED, value);
    }

    private static CypherAst.ProjectionItem item(String parameter, String alias) {
        return new CypherAst.ProjectionItem(new CypherAst.ParameterExpr(parameter), alias);
    }

    private static CypherAst.GeneratedArtifact artifact(CypherAst.CypherQuery query,
                                                         List<CypherAst.QueryParameter> parameters) {
        return new CypherAst.GeneratedArtifact(CypherAst.Dialect.CYPHER_5, query,
                new CypherAst.ResultContract(CypherAst.ResultShape.SCALAR,
                        "result", "String", false, null), parameters);
    }
}
