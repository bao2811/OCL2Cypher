package org.uet.dse.ocl2cypher.graph;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.List;
import java.util.Map;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.runtime.OclType;
import org.uet.dse.ocl2cypher.runtime.OclValue;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;
import org.uet.dse.ocl2cypher.source.model.Snapshot;
import org.uet.dse.ocl2cypher.source.model.UmlAssociation;
import org.uet.dse.ocl2cypher.source.model.UmlAttribute;
import org.uet.dse.ocl2cypher.source.model.UmlClass;

class Uml2GraphEncodingContractTest {

    @Test
    void canonicalBuilderProducesAClosedV74ContractArtifact() {
        SchemaModel schema = schema("contract");
        Snapshot snapshot = Snapshot.builder()
                .object("alice", "Person")
                .attribute("alice", "name", new OclValue.StringValue("Alice"))
                .object("team", "Team")
                .link("Membership", "team", "alice")
                .build();

        var built = GraphBuilder.build(schema, snapshot);
        assertTrue(built.isSuccess(), () -> built.diagnostics().toString());
        var checked = Uml2GraphEncodingContract.validate(built.value().graph());

        assertTrue(checked.isSuccess(), () -> checked.diagnostics().toString());
        assertEquals(Uml2GraphEncodingContract.PROFILE, GraphModel.ENCODING_PROFILE);
        assertEquals(Uml2GraphEncodingContract.VERSION, GraphModel.ENCODING_VERSION);
        assertEquals(2, checked.value().objectCount());
        assertEquals(1, checked.value().slotCount());
        assertEquals(2, built.value().graph().relationships().stream()
                .filter(edge -> GraphModel.OBJECT_INSTANCE_OF.equals(edge.physicalType()))
                .count(), "one direct typing edge per object");
    }

    @Test
    void contractRejectsASecondDirectTypingEdgeEvenWhenTheKeyIsWellFormed() {
        SchemaModel schema = SchemaModel.builder("typing")
                .clazz(UmlClass.of("Person"))
                .build();
        GraphModel original = GraphBuilder.build(schema,
                Snapshot.builder().object("alice", "Person").build()).value().graph();
        GraphModel corrupted = copy(original);
        corrupted.addRelationship(new GraphModel.Relationship(
                GraphKey.of("typing", GraphKey.Kind.OBJECT_TYPING, "ghost"),
                "typing", GraphModel.Projection.TYPING,
                GraphModel.OBJECT_INSTANCE_OF,
                GraphKey.object("typing", "alice"),
                GraphKey.clazz("typing", "Person"),
                Map.of(Uml2GraphEncodingContract.Property.MODEL_KEY, "typing")));

        var checked = Uml2GraphEncodingContract.validate(corrupted);
        assertTrue(checked.isFailure());
        assertEquals("G_OBJECT_TYPING", checked.primaryDiagnostic().code());
    }

    @Test
    void stableKeysCannotEscapeTheDeclaredModelScope() {
        GraphModel graph = new GraphModel("expected");
        graph.addNode(new GraphModel.Node(GraphKey.model("foreign"), "expected",
                GraphModel.Projection.REPOSITORY_CONTROL, "MODEL_ROOT",
                List.of(Uml2GraphEncodingContract.Label.MODEL), Map.of(
                        Uml2GraphEncodingContract.Property.MODEL_KEY, "expected",
                        Uml2GraphEncodingContract.Property.ENCODING_PROFILE,
                        Uml2GraphEncodingContract.PROFILE,
                        Uml2GraphEncodingContract.Property.ENCODING_VERSION,
                        Uml2GraphEncodingContract.VERSION)));

        var checked = Uml2GraphEncodingContract.validate(graph);
        assertTrue(checked.isFailure());
        assertEquals("G_KEY_CONTRACT", checked.primaryDiagnostic().code());
    }

    @Test
    void associationAndCodecPropertyNamesComeFromOneContract() {
        SchemaModel schema = schema("metadata");
        GraphModel graph = GraphBuilder.build(schema, Snapshot.builder()
                .object("alice", "Person")
                .attribute("alice", "name", new OclValue.StringValue("Alice"))
                .object("team", "Team")
                .link("Membership", "team", "alice")
                .build()).value().graph();

        GraphModel.Relationship declaration = graph.relationships().stream()
                .filter(edge -> GraphModel.ASSOCIATE_WITH.equals(edge.physicalType()))
                .findFirst().orElseThrow();
        assertEquals("Membership", declaration.properties().get(
                Uml2GraphEncodingContract.Property.ASSOCIATION_KEY));
        assertEquals("members", declaration.properties().get(
                Uml2GraphEncodingContract.Property.TARGET_ROLE));

        GraphModel.Node slot = graph.nodes().stream()
                .filter(node -> "ATTRIBUTE_VALUE".equals(node.observationRole()))
                .findFirst().orElseThrow();
        assertEquals(Uml2GraphEncodingContract.Codec.DEFINED,
                slot.properties().get(Uml2GraphEncodingContract.Codec.VALUE_STATE));
        assertEquals(Uml2GraphEncodingContract.Codec.STRING,
                slot.properties().get(Uml2GraphEncodingContract.Codec.CODEC_ID));
    }

    private static SchemaModel schema(String modelKey) {
        return SchemaModel.builder(modelKey)
                .clazz(UmlClass.of("Team"))
                .clazz(UmlClass.of("Person"))
                .attribute(UmlAttribute.of("Person", "name", OclType.STRING))
                .association(UmlAssociation.binary("Membership", "Team",
                        "team", "Person", "members"))
                .build();
    }

    private static GraphModel copy(GraphModel original) {
        GraphModel copy = new GraphModel(original.modelKey());
        original.nodes().forEach(copy::addNode);
        original.relationships().forEach(copy::addRelationship);
        return copy;
    }
}
