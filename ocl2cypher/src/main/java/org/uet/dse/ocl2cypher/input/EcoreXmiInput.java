package org.uet.dse.ocl2cypher.input;

import java.nio.file.Path;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.input.emf.EcoreXmiInputAdapter;
import org.uet.dse.ocl2cypher.input.emf.EcoreXmiOptions;

/** Public file-input facade for the production Ecore + XMI representation. */
public final class EcoreXmiInput {
    private EcoreXmiInput() {
    }

    public static Result<ModelInputBundle> load(Path ecorePath, Path xmiPath) {
        String fileName = ecorePath.getFileName().toString();
        int dot = fileName.lastIndexOf('.');
        String modelKey = dot > 0 ? fileName.substring(0, dot) : fileName;
        return load(ecorePath, xmiPath, EcoreXmiOptions.defaults(modelKey));
    }

    public static Result<ModelInputBundle> load(Path ecorePath, Path xmiPath,
                                                 EcoreXmiOptions options) {
        return EcoreXmiInputAdapter.load(ecorePath, xmiPath, options);
    }
}
