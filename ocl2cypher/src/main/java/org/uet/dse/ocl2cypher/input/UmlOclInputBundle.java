package org.uet.dse.ocl2cypher.input;

import java.nio.file.Path;
import java.util.Objects;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;

/** UML class-diagram schema and OCL source loaded from user-facing files. */
public record UmlOclInputBundle(Path umlPath,
                                Path oclPath,
                                SchemaModel schema,
                                String oclText) {
    public UmlOclInputBundle {
        umlPath = Objects.requireNonNull(umlPath, "UML path")
                .toAbsolutePath().normalize();
        oclPath = Objects.requireNonNull(oclPath, "OCL path")
                .toAbsolutePath().normalize();
        Objects.requireNonNull(schema, "schema");
        Objects.requireNonNull(oclText, "OCL text");
        if (oclText.isBlank()) {
            throw new IllegalArgumentException("OCL text must not be blank");
        }
    }
}
