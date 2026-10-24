package org.uet.dse.ocl2cypher.input;

import org.uet.dse.ocl2cypher.api.FrontendCompiler;
import org.uet.dse.ocl2cypher.core.CoreLowering;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.cypher.Realization;
import org.uet.dse.ocl2cypher.cypher.Serializer;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.diagnostics.Stage;
import org.uet.dse.ocl2cypher.graph.GraphBuilder;
import org.uet.dse.ocl2cypher.qcyp.QCypTranslator;

/** Format-neutral compilation of a canonical file-input bundle. */
public final class ModelInputCompiler {
    private ModelInputCompiler() {
    }

    public static Result<FileCompilation> compile(ModelInputBundle input,
                                                   String invariantName,
                                                   CypherAst.Dialect dialect) {
        return compile(input, invariantName, dialect, null);
    }

    /** Compile against a graph already built from this input; useful for invariant batches. */
    public static Result<FileCompilation> compile(ModelInputBundle input,
                                                   String invariantName,
                                                   CypherAst.Dialect dialect,
                                                   GraphBuilder.GraphBuildArtifact preparedGraph) {
        if (preparedGraph != null
                && !input.schema().modelKey().equals(preparedGraph.graph().modelKey())) {
            return Result.failure(Stage.E_SM, "E_GRAPH_MODEL_KEY",
                    "prepared graph belongs to a different model namespace");
        }
        var matches = input.invariants().stream()
                .filter(invariant -> qualifiedName(invariant).equals(invariantName)
                        || invariant.name().equals(invariantName))
                .toList();
        if (matches.isEmpty()) {
            return Result.failure(Stage.E_SM, "E_INVARIANT_NOT_FOUND",
                    "no invariant named '" + invariantName + "' is declared in "
                            + input.schemaPath());
        }
        if (matches.size() != 1) {
            return Result.failure(Stage.E_SM, "E_INVARIANT_AMBIGUOUS",
                    "invariant name '" + invariantName + "' is ambiguous in "
                            + input.schemaPath() + "; use Context::InvariantName");
        }
        SourceInvariant source = matches.get(0);
        var frontend = FrontendCompiler.compile(source.oclText(), input.schema());
        if (frontend.isFailure()) {
            return Result.failure(frontend.diagnostics());
        }
        if (frontend.value().size() != 1
                || frontend.value().get(0).constraints.size() != 1) {
            return Result.failure(Stage.E_SM, "E_INVARIANT_SHAPE",
                    "one extracted invariant must elaborate to one OCL document and constraint");
        }
        var document = frontend.value().get(0);
        var core = CoreLowering.lower(input.schema(), document,
                document.constraints.get(0));
        if (core.isFailure()) {
            return Result.failure(core.diagnostics());
        }
        Result<GraphBuilder.GraphBuildArtifact> graph = preparedGraph == null
                ? GraphBuilder.build(input.schema(), input.snapshot())
                : Result.success(preparedGraph);
        if (graph.isFailure()) {
            return Result.failure(graph.diagnostics());
        }
        var query = QCypTranslator.translate(core.value());
        if (query.isFailure()) {
            return Result.failure(query.diagnostics());
        }
        var realized = Realization.realize(query.value(), graph.value().graph(), dialect);
        if (realized.isFailure()) {
            return Result.failure(realized.diagnostics());
        }
        var serialized = Serializer.serialize(realized.value());
        return Result.success(new FileCompilation(input, source, document, core.value(),
                graph.value(), query.value(), realized.value(), serialized));
    }

    private static String qualifiedName(SourceInvariant invariant) {
        return invariant.contextClassKey() + "::" + invariant.name();
    }
}
