package org.uet.dse.ocl2cypher.input;

import java.nio.file.Path;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.input.emf.EcoreXmiOptions;

/** One-call integration of the Ecore/XMI boundary with OCL-to-Cypher. */
public final class EcoreXmiCompiler {
    private EcoreXmiCompiler() {
    }

    public static Result<FileCompilation> compile(Path ecorePath, Path xmiPath,
                                                   String invariantName) {
        String fileName = ecorePath.getFileName().toString();
        int dot = fileName.lastIndexOf('.');
        String modelKey = dot > 0 ? fileName.substring(0, dot) : fileName;
        return compile(ecorePath, xmiPath, invariantName,
                EcoreXmiOptions.defaults(modelKey), CypherAst.Dialect.CYPHER_5);
    }

    public static Result<FileCompilation> compile(Path ecorePath, Path xmiPath,
                                                   String invariantName,
                                                   EcoreXmiOptions options,
                                                   CypherAst.Dialect dialect) {
        Result<ModelInputBundle> loaded = EcoreXmiInput.load(ecorePath, xmiPath, options);
        if (loaded.isFailure()) {
            return Result.failure(loaded.diagnostics());
        }
        return compile(loaded.value(), invariantName, dialect);
    }

    public static Result<FileCompilation> compile(ModelInputBundle input,
                                                   String invariantName,
                                                   CypherAst.Dialect dialect) {
        return ModelInputCompiler.compile(input, invariantName, dialect);
    }
}
