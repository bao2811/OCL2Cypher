package org.uet.dse.ocl2cypher.graph;

import static org.junit.jupiter.api.Assertions.*;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.runtime.OclType;
import org.uet.dse.ocl2cypher.runtime.OclValue;
import org.uet.dse.ocl2cypher.source.model.QualifierValue;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;
import org.uet.dse.ocl2cypher.source.model.Snapshot;
import org.uet.dse.ocl2cypher.source.model.UmlAssociation;
import org.uet.dse.ocl2cypher.source.model.UmlClass;
import org.uet.dse.ocl2cypher.source.model.UmlQualifier;

class GraphRepresentationV74Test {

    @Test
    void preservesCompositionAndIndependentQualifierEnds() {
        UmlQualifier sourceCode = UmlQualifier.typed("sourceCode", OclType.STRING);
        UmlQualifier targetCode = UmlQualifier.typed("targetCode", OclType.STRING);
        SchemaModel schema = SchemaModel.builder("QualifiedComposition")
                .clazz(new UmlClass("Container", "Container", false, false, List.of()))
                .clazz(new UmlClass("Part", "Part", false, false, List.of()))
                .association(new UmlAssociation("Contains", "Contains",
                        "Container", "container", 0, 1,
                        "Part", "parts", 0, -1,
                        List.of(sourceCode), List.of(targetCode), false, true,
                        UmlAssociation.AssociationKind.COMPOSITION))
                .build();
        OclValue.StringValue sourceValue = new OclValue.StringValue("S");
        OclValue.StringValue targetValue = new OclValue.StringValue("T");
        Snapshot snapshot = Snapshot.builder()
                .object("container1", "Container")
                .object("part1", "Part")
                .linkByEnds("Contains", "container1", "part1",
                        List.of(new QualifierValue("sourceCode", sourceValue)),
                        List.of(new QualifierValue("targetCode", targetValue)))
                .build();

        var built = GraphBuilder.build(schema, snapshot);
        assertTrue(built.isSuccess(), () -> built.diagnostics().toString());
        GraphModel graph = built.value().graph();
        GraphModel.Relationship declaration = graph.relationships().stream()
                .filter(r -> GraphModel.COMPOSE_OF.equals(r.physicalType()))
                .findFirst().orElseThrow();
        GraphModel.Relationship link = graph.relationships().stream()
                .filter(r -> GraphModel.LINK_COMPOSE_OF.equals(r.physicalType()))
                .findFirst().orElseThrow();

        assertEquals("COMPOSITION", declaration.properties().get("associationKind"));
        assertEquals("1", declaration.properties().get("sourceQualifierCount"));
        assertEquals("1", declaration.properties().get("targetQualifierCount"));
        assertEquals("S", link.properties().get("sourceQualifier::0"));
        assertEquals("T", link.properties().get("targetQualifier::0"));
        assertEquals(List.of("part1"), GraphObservation.linkTargets(graph, schema,
                "container1", "parts", false, List.of(targetValue)));
        assertEquals(List.of("container1"), GraphObservation.linkTargets(graph, schema,
                "part1", "container", true, List.of(sourceValue)));
    }

    @Test
    void fingerprintIsStableAndCoversSnapshotContent() {
        SchemaModel schema = SchemaModel.builder("Fingerprint")
                .clazz(new UmlClass("C", "C", false, false, List.of()))
                .build();
        GraphModel first = GraphBuilder.build(schema,
                Snapshot.builder().object("one", "C").build()).value().graph();
        GraphModel same = GraphBuilder.build(schema,
                Snapshot.builder().object("one", "C").build()).value().graph();
        GraphModel changed = GraphBuilder.build(schema,
                Snapshot.builder().object("two", "C").build()).value().graph();

        assertEquals(GraphFingerprint.sha256(first), GraphFingerprint.sha256(same));
        assertNotEquals(GraphFingerprint.sha256(first), GraphFingerprint.sha256(changed));
    }
}
