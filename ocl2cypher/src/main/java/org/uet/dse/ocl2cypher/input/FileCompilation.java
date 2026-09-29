package org.uet.dse.ocl2cypher.input;

import java.util.Objects;
import org.uet.dse.ocl2cypher.core.CoreInvariant;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.cypher.Serializer;
import org.uet.dse.ocl2cypher.graph.GraphBuilder;
import org.uet.dse.ocl2cypher.qcyp.QQuery;
import org.uet.dse.ocl2cypher.source.omg.OmgAs;

/** Observable intermediate and final artifacts of one file-based compilation. */
public record FileCompilation(ModelInputBundle input,
                              SourceInvariant sourceInvariant,
                              OmgAs.OmgDocument resolvedOcl,
                              CoreInvariant core,
                              GraphBuilder.GraphBuildArtifact graph,
                              QQuery query,
                              CypherAst.GeneratedArtifact cypherAst,
                              Serializer.Serialized serializedCypher) {
    public FileCompilation {
        Objects.requireNonNull(input, "input");
        Objects.requireNonNull(sourceInvariant, "source invariant");
        Objects.requireNonNull(resolvedOcl, "resolved OCL");
        Objects.requireNonNull(core, "Core invariant");
        Objects.requireNonNull(graph, "graph artifact");
        Objects.requireNonNull(query, "Q query");
        Objects.requireNonNull(cypherAst, "Cypher AST");
        Objects.requireNonNull(serializedCypher, "serialized Cypher");
    }
}
