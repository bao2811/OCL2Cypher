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
        SourceInvariant source = input.invariants().stream()
                .filter(invariant -> invariant.name().equals(invariantName))
                .findFirst().orElse(null);
        if (source == null) {
            return Result.failure(Stage.E_SM, "E_INVARIANT_NOT_FOUND",
                    "no invariant named '" + invariantName + "' is declared in "
                            + input.schemaPath());
        }
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
        var graph = GraphBuilder.build(input.schema(), input.snapshot());
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
}
