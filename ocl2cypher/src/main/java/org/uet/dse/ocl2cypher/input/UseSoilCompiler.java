package org.uet.dse.ocl2cypher.input;

import java.nio.file.Path;
import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.diagnostics.Result;

/** One-call integration of the USE/SOIL input boundary with OCL-to-Cypher. */
public final class UseSoilCompiler {
    private UseSoilCompiler() {
    }

    public static Result<FileCompilation> compile(Path usePath, Path soilPath,
                                                   String invariantName) {
        return compile(usePath, soilPath, invariantName,
                CypherAst.Dialect.CYPHER_5);
    }

    public static Result<FileCompilation> compile(Path usePath, Path soilPath,
                                                   String invariantName,
                                                   CypherAst.Dialect dialect) {
        Result<ModelInputBundle> loaded = UseSoilInput.load(usePath, soilPath);
        if (loaded.isFailure()) {
            return Result.failure(loaded.diagnostics());
        }
        return ModelInputCompiler.compile(loaded.value(), invariantName, dialect);
    }
}
