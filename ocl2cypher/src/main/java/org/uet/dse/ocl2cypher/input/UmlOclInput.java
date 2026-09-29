package org.uet.dse.ocl2cypher.input;

import java.nio.file.Path;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.input.uml.UmlOclInputAdapter;

/** Public file-input boundary for a UML2 class diagram and external OCL text. */
public final class UmlOclInput {
    private UmlOclInput() {
    }

    public static Result<UmlOclInputBundle> load(Path umlPath, Path oclPath) {
        String fileName = umlPath.getFileName().toString();
        int dot = fileName.lastIndexOf('.');
        String modelKey = dot > 0 ? fileName.substring(0, dot) : fileName;
        return load(umlPath, oclPath, modelKey);
    }

    public static Result<UmlOclInputBundle> load(Path umlPath, Path oclPath,
                                                  String modelKey) {
        return UmlOclInputAdapter.load(umlPath, oclPath, modelKey);
    }
}
