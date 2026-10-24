package org.uet.dse.ocl2cypher;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Map;
import java.util.Set;
import org.junit.jupiter.api.Assumptions;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.neo4j.driver.AuthTokens;
import org.neo4j.driver.GraphDatabase;
import org.neo4j.driver.SessionConfig;
import org.uet.dse.ocl2cypher.execution.Neo4jExecutionAdapter;
import org.uet.dse.ocl2cypher.execution.UseEvaluationAdapter;
import org.uet.dse.ocl2cypher.input.UseSoilCompiler;
import org.uet.dse.ocl2cypher.input.UseSoilInput;

/**
 * Live closing test for the independent pipeline:
 * USE/SOIL -> canonical graph -> generated Cypher -> Neo4j, compared directly
 * with the official USE evaluator on the same files and snapshot.
 */
class UseSoilNeo4jUseOracleIntegrationTest {

    @TempDir
    Path temporaryDirectory;

    @Test
    void generatedCypherMatchesUseOracleForEveryEmbeddedInvariant() throws Exception {
        Assumptions.assumeTrue("true".equalsIgnoreCase(env(
                        "OCL2CYPHER_RUN_NEO4J_E2E", "false")),
                "Set OCL2CYPHER_RUN_NEO4J_E2E=true to run the live USE/Neo4j oracle test");

        String namespace = "ShopE2E" + java.util.UUID.randomUUID()
                .toString().replace("-", "");
        Path fixture = Path.of("..", "example", "shop-use-soil")
                .toAbsolutePath().normalize();
        Path useFile = temporaryDirectory.resolve("shop-e2e.use");
        Path soilFile = temporaryDirectory.resolve("shop-e2e.soil");
        String useSource = Files.readString(fixture.resolve("shop.use"),
                        StandardCharsets.UTF_8)
                .replaceFirst("(?m)^model\\s+Shop\\s*$", "model " + namespace);
        Files.writeString(useFile, useSource, StandardCharsets.UTF_8);
        Files.copy(fixture.resolve("shop.soil"), soilFile);

        UseEvaluationAdapter.Result useOracle =
                UseEvaluationAdapter.evaluate(useFile, soilFile);
        var loaded = UseSoilInput.load(useFile, soilFile);
        assertTrue(loaded.isSuccess(), () -> loaded.diagnostics().toString());
        assertEquals(namespace, loaded.value().schema().modelKey());

        String uri = requiredEnv("NEO4J_URI");
        String user = requiredEnv("NEO4J_USER");
        String password = requiredEnv("NEO4J_PASSWORD");
        String database = requiredEnv("NEO4J_DB");
        try (var driver = GraphDatabase.driver(uri, AuthTokens.basic(user, password));
             var session = driver.session(SessionConfig.forDatabase(database))) {
            boolean materialized = false;
            try {
                for (var invariant : loaded.value().invariants()) {
                    var compiled = UseSoilCompiler.compile(
                            useFile, soilFile, invariant.name());
                    assertTrue(compiled.isSuccess(), () -> invariant.name() + ": "
                            + compiled.diagnostics());
                    assertEquals(namespace,
                            compiled.value().graph().graph().modelKey());
                    if (!materialized) {
                        Neo4jExecutionAdapter.materializeGraph(
                                session, compiled.value().graph().graph());
                        materialized = true;
                    }
                    var executed = Neo4jExecutionAdapter.execute(
                            session, compiled.value().cypherAst(), Map.of(),
                            compiled.value().graph().graph());
                    assertTrue(executed.isSuccess(), () -> invariant.name() + ": "
                            + executed.diagnostics());
                    assertEquals(useOracle.violationsFor(invariant.name()),
                            Set.copyOf(executed.value().violationIds()),
                            "USE oracle differs from generated Cypher for "
                                    + invariant.contextClassKey() + "::" + invariant.name());
                }
            } finally {
                session.run("MATCH (n {modelKey:$modelKey}) DETACH DELETE n",
                        Map.of("modelKey", namespace)).consume();
            }
        }
    }

    private static String env(String name, String fallback) {
        String value = System.getenv(name);
        return value == null || value.isBlank() ? fallback : value;
    }

    private static String requiredEnv(String name) {
        String value = env(name, null);
        if (value == null) {
            throw new AssertionError("live integration requires " + name);
        }
        return value;
    }
}
