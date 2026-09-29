package org.uet.dse.ocl2cypher.input;

import java.nio.file.Path;
import java.util.List;
import java.util.Objects;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;
import org.uet.dse.ocl2cypher.source.model.Snapshot;

/** Canonical input delivered to the existing OCL2Cypher pipeline. */
public record ModelInputBundle(Path schemaPath,
                               Path snapshotPath,
                               SchemaModel schema,
                               Snapshot snapshot,
                               List<SourceInvariant> invariants) {
    public ModelInputBundle {
        schemaPath = Objects.requireNonNull(schemaPath, "schema path")
                .toAbsolutePath().normalize();
        snapshotPath = Objects.requireNonNull(snapshotPath, "snapshot path")
                .toAbsolutePath().normalize();
        Objects.requireNonNull(schema, "schema");
        Objects.requireNonNull(snapshot, "snapshot");
        invariants = List.copyOf(Objects.requireNonNull(invariants, "invariants"));
    }
}
