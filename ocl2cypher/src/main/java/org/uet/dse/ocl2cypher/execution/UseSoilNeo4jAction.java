package org.uet.dse.ocl2cypher.execution;

import java.nio.file.Path;
import java.util.Objects;
import org.neo4j.driver.AuthTokens;
import org.neo4j.driver.GraphDatabase;
import org.neo4j.driver.Session;
import org.neo4j.driver.SessionConfig;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.diagnostics.Stage;
import org.uet.dse.ocl2cypher.graph.GraphBuilder;
import org.uet.dse.ocl2cypher.input.ModelInputBundle;
import org.uet.dse.ocl2cypher.input.UseSoilInput;

/**
 * File action {@code (.use,.soil) -> (SchemaModel,Snapshot) -> GraphModel -> Neo4j}.
 *
 * <p>Materialization replaces only nodes in the loaded model's
 * {@code modelKey} namespace; it does not wipe unrelated Neo4j data.
 */
public final class UseSoilNeo4jAction {
    private UseSoilNeo4jAction() {
    }

    public record Request(Path usePath,
                          Path soilPath,
                          Neo4jExecutionAdapter.ExecutionConfig execution) {
        public Request {
            Objects.requireNonNull(usePath, "USE path");
            Objects.requireNonNull(soilPath, "SOIL path");
            Objects.requireNonNull(execution, "execution configuration");
        }

        public static Request local(Path usePath, Path soilPath) {
            return new Request(usePath, soilPath,
                    new Neo4jExecutionAdapter.ExecutionConfig(
                            Neo4jExecutionAdapter.DEFAULT_URI,
                            Neo4jExecutionAdapter.DEFAULT_DATABASE,
                            Neo4jExecutionAdapter.DEFAULT_USER,
                            Neo4jExecutionAdapter.DEFAULT_PASSWORD));
        }
    }

    public record Prepared(ModelInputBundle input,
                           GraphBuilder.GraphBuildArtifact graph) {
        public Prepared {
            Objects.requireNonNull(input, "input");
            Objects.requireNonNull(graph, "graph");
        }
    }

    /** Read, validate, and construct the graph without touching Neo4j. */
    public static Result<Prepared> prepare(Path usePath, Path soilPath) {
        Result<ModelInputBundle> loaded = UseSoilInput.load(usePath, soilPath);
        if (loaded.isFailure()) {
            return Result.failure(loaded.diagnostics());
        }
        Result<GraphBuilder.GraphBuildArtifact> graph = GraphBuilder.build(
                loaded.value().schema(), loaded.value().snapshot());
        if (graph.isFailure()) {
            return Result.failure(graph.diagnostics());
        }
        return Result.success(new Prepared(loaded.value(), graph.value()));
    }

    /** Read the files and materialize their canonical graph in Neo4j. */
    public static Result<Prepared> execute(Request request) {
        Objects.requireNonNull(request, "request");
        Result<Prepared> prepared = prepare(request.usePath(), request.soilPath());
        if (prepared.isFailure()) {
            return prepared;
        }
        Neo4jExecutionAdapter.ExecutionConfig config = request.execution();
        try (var driver = GraphDatabase.driver(config.uri(),
                AuthTokens.basic(config.user(), config.password()));
             Session session = driver.session(SessionConfig.forDatabase(config.database()))) {
            Neo4jExecutionAdapter.materializeGraph(session,
                    prepared.value().graph().graph());
            return prepared;
        } catch (RuntimeException e) {
            return Result.failure(Stage.EXECUTION, "USE_SOIL_MATERIALIZATION_FAILED",
                    "USE/SOIL graph materialization failed: " + e.getMessage());
        }
    }
}
