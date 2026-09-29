package org.uet.dse.ocl2cypher.graph;

import java.util.*;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.diagnostics.Stage;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;
import org.uet.dse.ocl2cypher.source.model.Snapshot;

/**
 * {@code F_G^{T_MM}}: schema/snapshot to a single {@link GraphModel}.
 *
 * <p>The construction is parameterized by the witness
 * {@code M = rules(T_MM)} in the simple but exact sense that the four
 * partitions are built in tandem from one catalog: the schema fragment from
 * {@code SM}, the snapshot fragment from {@code SN} linked by the typing
 * fragment, and no node/relationship has a type outside the catalog.
 */
public final class GraphBuilder {

    private GraphBuilder() {
    }

    /** One build outcome whose {@code correspondence} is already the {@code ValidRep} witness {@code mu}. */
    public record GraphBuildArtifact(GraphModel graph,
                                     Map<String, String> correspondence,
                                     MetamodelTranslator.Catalogue catalogue) {
        public GraphBuildArtifact {
            Objects.requireNonNull(graph);
            correspondence = Map.copyOf(correspondence);
            Objects.requireNonNull(catalogue);
        }
    }

    public static Result<GraphBuildArtifact> build(SchemaModel sm, Snapshot sn) {
        Result<MetamodelTranslator.Catalogue> translated =
                MetamodelTranslator.translate(sm);
        if (translated.isFailure()) {
            return Result.failure(translated.primaryDiagnostic());
        }
        MetamodelTranslator.Catalogue catalogue = translated.value();
        MetamodelMapping mapping = catalogue.mapping();
        String modelKey = sm.modelKey();
        GraphModel g = new GraphModel(modelKey);
        Map<String, String> mu = new LinkedHashMap<>();

        // G_repository
        var modelNode = mapping.node(MetamodelMapping.NodeKind.MODEL);
        g.addNode(new GraphModel.Node(GraphKey.model(modelKey), modelKey,
                modelNode.projection(), modelNode.observationRole(),
                modelNode.labels(), Map.of(
                        "modelKey", modelKey,
                        "encodingProfile", GraphModel.ENCODING_PROFILE,
                        "encodingVersion", GraphModel.ENCODING_VERSION)));

        // G_schema: classes, attribute declarations with MIME-controlled typing,
        // and generalization. The caller there relies solely on one closed
        // catalogue; the construction there relies solely on that
        // designated witness binding.
        var generalization = mapping.relationship(
                MetamodelMapping.RelationshipKind.GENERALIZATION);
        for (var c : sm.classes()) {
            var classBinding = catalogue.clazz(c.key());
            g.addNode(new GraphModel.Node(GraphKey.clazz(modelKey, c.key()), modelKey,
                    classBinding.declarationNode().projection(),
                    classBinding.declarationNode().observationRole(),
                    classBinding.declarationNode().labels(),
                    Map.of("modelKey", modelKey,
                            "classKey", c.key(),
                            "qualifiedName", c.qualifiedName(),
                            "isAbstract", String.valueOf(c.isAbstract()),
                            "isAssociationClass", String.valueOf(c.isAssociationClass()))));
        }
        for (var c : sm.classes()) {
            for (String sup : c.directSuperclassKeys()) {
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey, GraphKey.Kind.GENERALIZATION,
                                c.key(), sup), modelKey,
                        generalization.projection(), generalization.physicalType(),
                        GraphKey.clazz(modelKey, c.key()), GraphKey.clazz(modelKey, sup),
                        Map.of("modelKey", modelKey)));
            }
            for (var attr : sm.ownAttributes(c.key())) {
                var attribute = catalogue.attribute(attr.key());
                var declarationNode = attribute.declarationNode();
                g.addNode(new GraphModel.Node(GraphKey.attribute(modelKey, attr.key()), modelKey,
                        declarationNode.projection(), declarationNode.observationRole(),
                        declarationNode.labels(), Map.of("modelKey", modelKey,
                                "attributeKey", attr.key(),
                                "ownerClassKey", attr.ownerClassKey(),
                                "name", attr.name(),
                                "declaredType", attr.declaredType().toString())));
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey, GraphKey.Kind.CLASS_ATTRIBUTE,
                                c.key(), attr.key()), modelKey,
                        attribute.ownership().projection(),
                        attribute.ownership().physicalType(),
                        GraphKey.clazz(modelKey, c.key()),
                        GraphKey.attribute(modelKey, attr.key()), Map.of("modelKey", modelKey)));
            }
        }

        // Ordinary binary associations are schema relationships, not reified
        // declaration nodes. Association classes reuse their UML class node as
        // the schema hub. Link occurrences below carry the same associationKey.
        for (var association : sm.associations()) {
            var binding = catalogue.association(association.key());
            Map<String, String> declarationProperties =
                    associationProperties(modelKey, association,
                            binding.associationClass().isPresent());
            if (binding.associationClass().isPresent()) {
                var associationClass = binding.associationClass().orElseThrow();
                String associationClassKey = GraphKey.clazz(modelKey, association.key());
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey, GraphKey.Kind.ASSOCIATION_END,
                                association.key(), "source"), modelKey,
                        associationClass.schemaSource().projection(),
                        associationClass.schemaSource().physicalType(),
                        GraphKey.clazz(modelKey, association.sourceClassKey()),
                        associationClassKey,
                        withEndPosition(declarationProperties, "source")));
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey, GraphKey.Kind.ASSOCIATION_END,
                                association.key(), "target"), modelKey,
                        associationClass.schemaTarget().projection(),
                        associationClass.schemaTarget().physicalType(),
                        associationClassKey,
                        GraphKey.clazz(modelKey, association.targetClassKey()),
                        withEndPosition(declarationProperties, "target")));
            } else {
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.association(modelKey, association.key()), modelKey,
                        binding.declaration().projection(),
                        binding.declaration().physicalType(),
                        GraphKey.clazz(modelKey, association.sourceClassKey()),
                        GraphKey.clazz(modelKey, association.targetClassKey()),
                        declarationProperties));
            }
        }

        Map<String, Snapshot.LinkDef> associationClassLinks = new LinkedHashMap<>();
        for (Snapshot.LinkDef link : sn.links()) {
            if (link.associationClassObjectStableId != null) {
                if (associationClassLinks.putIfAbsent(link.associationClassObjectStableId, link)
                        != null) {
                    return Result.failure(Stage.F_G, "G_ASSOCIATION_CLASS_ENCODING",
                            "association-class object is bound to more than one link: "
                                    + link.associationClassObjectStableId);
                }
            }
        }

        // G_snapshot + G_type
        for (var obj : sn.objects()) {
            if (!sm.hasClass(obj.dynamicClassKey)) {
                return Result.failure(Stage.F_G, "G_SOURCE_WF",
                        "dynamic class not in SM: " + obj.dynamicClassKey);
            }
            if (sm.clazz(obj.dynamicClassKey).isAbstract()) {
                return Result.failure(Stage.F_G, "G_SOURCE_WF",
                        "object cannot instantiate abstract class: "
                                + obj.stableId + " : " + obj.dynamicClassKey);
            }
            String nodeKey = GraphKey.object(modelKey, obj.stableId);
            var dynamicClass = sm.clazz(obj.dynamicClassKey);
            boolean associationClassObject = dynamicClass.isAssociationClass();
            Snapshot.LinkDef associationClassLink = associationClassLinks.get(obj.stableId);
            if (associationClassObject != (associationClassLink != null)) {
                return Result.failure(Stage.F_G, "G_ASSOCIATION_CLASS_ENCODING",
                        associationClassObject
                                ? "association-class object has no link occurrence: " + obj.stableId
                                : "ordinary object is used as an association-class occurrence: "
                                        + obj.stableId);
            }
            Map<String, String> objectProperties = new LinkedHashMap<>();
            objectProperties.put("modelKey", modelKey);
            objectProperties.put("objectKey", obj.stableId);
            objectProperties.put("use_id", obj.stableId);
            objectProperties.put("stableKey", obj.stableId);
            if (associationClassObject) {
                objectProperties.put("associationKey", obj.dynamicClassKey);
            }
            var objectNode = catalogue.clazz(obj.dynamicClassKey).objectNode();
            List<String> objectLabels = new ArrayList<>(objectNode.labels());
            String dynamicClassLabel = simpleClassLabel(dynamicClass.qualifiedName());
            if (!objectLabels.contains(dynamicClassLabel)) {
                objectLabels.add(dynamicClassLabel);
            }
            g.addNode(new GraphModel.Node(nodeKey, modelKey,
                    objectNode.projection(), objectNode.observationRole(), objectLabels,
                    objectProperties));
            var objectTyping = mapping.relationship(
                    MetamodelMapping.RelationshipKind.OBJECT_TYPING);
            g.addRelationship(new GraphModel.Relationship(
                    GraphKey.of(modelKey, GraphKey.Kind.OBJECT_TYPING,
                            obj.stableId), modelKey,
                    objectTyping.projection(), objectTyping.physicalType(),
                    nodeKey, GraphKey.clazz(modelKey, obj.dynamicClassKey),
                    Map.of("modelKey", modelKey)));
            mu.put(obj.stableId, nodeKey);
        }
        for (var obj : sn.objects()) {
            String objKey = mu.get(obj.stableId);
            for (var attr : attrsOf(sm, obj.dynamicClassKey)) {
                var attribute = catalogue.attribute(attr.key());
                var slot = sn.attributeSlot(obj.stableId, attr.name());
                if (slot.isEmpty()) {
                    continue; // absent scalar slot -> typed bottom, not an empty string
                }
                String slotKey = GraphKey.slot(modelKey, obj.stableId, attr.key());
                GraphValueCodec.EncodedValue encoded;
                try {
                    GraphValueCodec.validateObjectReference(
                            attr.declaredType(), slot.get(), sm, sn);
                    encoded = GraphValueCodec.encode(attr.declaredType(), slot.get());
                } catch (GraphValueCodec.CodecException e) {
                    return Result.failure(Stage.F_G, e.code(), e.getMessage());
                }
                Map<String, String> slotProperties = new LinkedHashMap<>();
                slotProperties.put("modelKey", modelKey);
                slotProperties.put("slotKey", slotKey);
                slotProperties.put("attributeKey", attr.key());
                slotProperties.put(GraphValueCodec.VALUE_STATE, encoded.state());
                slotProperties.put(GraphValueCodec.VALUE_TYPE, encoded.typeTag());
                slotProperties.put(GraphValueCodec.CODEC_ID, encoded.codecId());
                if (GraphValueCodec.DEFINED.equals(encoded.state())) {
                    slotProperties.put(attribute.valueProperty().physicalName(),
                            encoded.payload());
                }
                var slotNode = mapping.node(MetamodelMapping.NodeKind.ATTRIBUTE_VALUE);
                g.addNode(new GraphModel.Node(slotKey, modelKey,
                        slotNode.projection(), slotNode.observationRole(),
                        slotNode.labels(), slotProperties));
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey, GraphKey.Kind.SLOT_OWNERSHIP,
                                obj.stableId, attr.key()), modelKey,
                        attribute.slotOwnership().projection(),
                        attribute.slotOwnership().physicalType(),
                        objKey, slotKey, Map.of("modelKey", modelKey)));
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey, GraphKey.Kind.SLOT_TYPING,
                                obj.stableId, attr.key()), modelKey,
                        attribute.slotTyping().projection(),
                        attribute.slotTyping().physicalType(),
                        slotKey, GraphKey.attribute(modelKey, attr.key()),
                        Map.of("modelKey", modelKey)));
            }
        }
        // Resolve and canonically order links before assigning graph keys.  A
        // list ordinal is not a source identity: reordering two distinct links
        // must not rename either relationship.  Only occurrences with the
        // same canonical association/endpoints/qualifiers need a local rank.
        record ResolvedLink(Snapshot.LinkDef link,
                            org.uet.dse.ocl2cypher.source.model.UmlAssociation association,
                            String tuple,
                            List<String> sourceQualifierPayloads,
                            List<String> targetQualifierPayloads) {}
        List<ResolvedLink> resolvedLinks = new ArrayList<>();
        for (var link : sn.links()) {
            var assoc = sm.associationByName(link.associationName);
            if (assoc == null) {
                assoc = sm.associationByRole(link.associationName);
            }
            if (assoc == null) {
                return Result.failure(Stage.F_G, "G_UNMAPPED_ASSOCIATION",
                        "no association for link " + link.associationName);
            }
            String srcKey = mu.get(link.sourceStableId);
            String tgtKey = mu.get(link.targetStableId);
            if (srcKey == null || tgtKey == null) {
                return Result.failure(Stage.F_G, "G_DANGLING_LINK",
                        "link endpoints not in snapshot: " + link.sourceStableId + " -> " + link.targetStableId);
            }
            List<org.uet.dse.ocl2cypher.source.model.QualifierValue> sourceQualifiers =
                    link.qualifierValuesForEnd(assoc, true);
            List<org.uet.dse.ocl2cypher.source.model.QualifierValue> targetQualifiers =
                    link.qualifierValuesForEnd(assoc, false);
            if (sourceQualifiers.size() != assoc.sourceEndQualifiers().size()
                    || targetQualifiers.size() != assoc.targetEndQualifiers().size()) {
                return Result.failure(Stage.F_G, "G_QUALIFIER_ARITY",
                        "qualifier arity differs for " + assoc.name());
            }
            List<String> sourceQualifierPayloads = new ArrayList<>();
            List<String> targetQualifierPayloads = new ArrayList<>();
            try {
                encodeQualifiers(sm, sn, assoc.name(), assoc.sourceEndQualifiers(),
                        sourceQualifiers, sourceQualifierPayloads);
                encodeQualifiers(sm, sn, assoc.name(), assoc.targetEndQualifiers(),
                        targetQualifiers, targetQualifierPayloads);
            } catch (GraphValueCodec.CodecException e) {
                return Result.failure(Stage.F_G, e.code(), e.getMessage());
            }
            resolvedLinks.add(new ResolvedLink(link, assoc,
                    canonicalLinkTuple(assoc, link, sourceQualifierPayloads,
                            targetQualifierPayloads),
                    List.copyOf(sourceQualifierPayloads),
                    List.copyOf(targetQualifierPayloads)));
        }
        resolvedLinks.sort(java.util.Comparator.comparing(ResolvedLink::tuple));
        Map<String, Integer> occurrenceByTuple = new LinkedHashMap<>();
        for (var resolved : resolvedLinks) {
            var link = resolved.link();
            var assoc = resolved.association();
            var associationBinding = catalogue.association(assoc.key());
            String srcKey = mu.get(link.sourceStableId);
            String tgtKey = mu.get(link.targetStableId);
            String tuple = resolved.tuple();
            int occurrence = occurrenceByTuple.merge(tuple, 1, Integer::sum) - 1;
            String linkKey = GraphKey.of(modelKey, GraphKey.Kind.LINK,
                    tuple, String.valueOf(occurrence));
            Map<String, String> linkProps = new LinkedHashMap<>();
            linkProps.put("associationKey", assoc.key());
            linkProps.put("associationName", assoc.name());
            linkProps.put("sourceRole", assoc.sourceRole());
            linkProps.put("targetRole", assoc.targetRole());
            linkProps.put("linkKey", linkKey);
            linkProps.put("modelKey", modelKey);
            for (var qualifier : associationBinding.qualifiers()) {
                List<String> payloads = qualifier.end()
                        == org.uet.dse.ocl2cypher.source.model.UmlAssociation.QualifierEnd.SOURCE
                        ? resolved.sourceQualifierPayloads()
                        : resolved.targetQualifierPayloads();
                linkProps.put(qualifier.storageProperty(), payloads.get(qualifier.index()));
            }
            var associationClass = sm.clazz(assoc.key());
            boolean isAssociationClass = associationClass != null
                    && associationClass.isAssociationClass();
            if (isAssociationClass) {
                var associationClassBinding = associationBinding.associationClass()
                        .orElseThrow(() -> new IllegalStateException(
                                "association class missing from T_MM catalogue: " + assoc.key()));
                String occurrenceId = link.associationClassObjectStableId;
                if (occurrenceId == null || !sn.hasObject(occurrenceId)
                        || !assoc.key().equals(sn.object(occurrenceId).dynamicClassKey())) {
                    return Result.failure(Stage.F_G, "G_ASSOCIATION_CLASS_ENCODING",
                            "association-class link requires an object of " + assoc.key());
                }
                String occurrenceKey = mu.get(occurrenceId);
                linkProps.put("associationClassObjectKey", occurrenceId);
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey,
                                GraphKey.Kind.ASSOCIATION_CLASS_PARTICIPANT,
                                linkKey, "source"), modelKey,
                        associationClassBinding.sourceParticipant().projection(),
                        associationClassBinding.sourceParticipant().physicalType(),
                        occurrenceKey, srcKey, linkProps));
                g.addRelationship(new GraphModel.Relationship(
                        GraphKey.of(modelKey,
                                GraphKey.Kind.ASSOCIATION_CLASS_PARTICIPANT,
                                linkKey, "target"), modelKey,
                        associationClassBinding.targetParticipant().projection(),
                        associationClassBinding.targetParticipant().physicalType(),
                        occurrenceKey, tgtKey, linkProps));
            } else {
                if (link.associationClassObjectStableId != null) {
                    return Result.failure(Stage.F_G, "G_ASSOCIATION_CLASS_ENCODING",
                            "ordinary association cannot own a link object: " + assoc.key());
                }
                g.addRelationship(new GraphModel.Relationship(
                        linkKey, modelKey, associationBinding.link().projection(),
                        associationBinding.link().physicalType(), srcKey, tgtKey,
                        linkProps));
            }
        }
        for (var n : g.nodes()) {
            if (!n.properties().containsKey("modelKey")) {
                return Result.failure(Stage.F_G, "G_MISSING_MODEL_SCOPE",
                        "no modelKey on node " + n.stableKey());
            }
        }
        for (var r : g.relationships()) {
            if (!r.properties().containsKey("modelKey")) {
                return Result.failure(Stage.F_G, "G_MISSING_MODEL_SCOPE",
                        "no modelKey on relationship " + r.stableKey());
            }
        }

        Result<ValidRepChecker.Witness> valid = ValidRepChecker.check(sm, sn, g);
        if (valid.isFailure()) {
            return Result.failure(valid.primaryDiagnostic());
        }
        return Result.success(new GraphBuildArtifact(
                g, valid.value().objectCorrespondence(), catalogue));
    }

    private static String qualifierPayload(
            org.uet.dse.ocl2cypher.runtime.OclType declared,
            org.uet.dse.ocl2cypher.runtime.OclValue value) {
        GraphValueCodec.EncodedValue encoded = GraphValueCodec.encode(declared, value);
        if (!GraphValueCodec.DEFINED.equals(encoded.state())) {
            throw new GraphValueCodec.CodecException("G_CODEC_QUALIFIER_BOTTOM",
                    "qualifiers must be defined scalar values");
        }
        return encoded.payload();
    }

    private static String canonicalLinkTuple(
            org.uet.dse.ocl2cypher.source.model.UmlAssociation association,
            Snapshot.LinkDef link,
            List<String> sourceQualifierPayloads,
            List<String> targetQualifierPayloads) {
        StringBuilder out = new StringBuilder();
        appendKeyPart(out, "a", association.key());
        appendKeyPart(out, "s", link.sourceStableId);
        appendKeyPart(out, "t", link.targetStableId);
        if (link.associationClassObjectStableId != null) {
            // The link object is the source-stable occurrence identity.  Keep
            // it in the tuple so reordering equal-participant AC links cannot
            // rename their participant relationships.
            appendKeyPart(out, "ac", link.associationClassObjectStableId);
        }
        for (int i = 0; i < association.sourceEndQualifiers().size(); i++) {
            appendKeyPart(out, "sqn", association.sourceEndQualifiers().get(i).name());
            appendKeyPart(out, "sqv", sourceQualifierPayloads.get(i));
        }
        for (int i = 0; i < association.targetEndQualifiers().size(); i++) {
            appendKeyPart(out, "tqn", association.targetEndQualifiers().get(i).name());
            appendKeyPart(out, "tqv", targetQualifierPayloads.get(i));
        }
        return out.toString();
    }

    private static void appendKeyPart(StringBuilder out, String label, String value) {
        out.append('|').append(label).append(':').append(value.length()).append(':').append(value);
    }

    private static Map<String, String> associationProperties(
            String modelKey,
            org.uet.dse.ocl2cypher.source.model.UmlAssociation association,
            boolean associationClass) {
        Map<String, String> properties = new LinkedHashMap<>();
        properties.put("modelKey", modelKey);
        properties.put("associationKey", association.key());
        properties.put("associationName", association.name());
        properties.put("associationKind", association.associationKind().name());
        properties.put("sourceClassKey", association.sourceClassKey());
        properties.put("sourceRole", association.sourceRole());
        properties.put("sourceLower", String.valueOf(association.sourceLower()));
        properties.put("sourceUpper", String.valueOf(association.sourceUpper()));
        properties.put("targetClassKey", association.targetClassKey());
        properties.put("targetRole", association.targetRole());
        properties.put("targetLower", String.valueOf(association.targetLower()));
        properties.put("targetUpper", String.valueOf(association.targetUpper()));
        properties.put("ordered", String.valueOf(association.isOrdered()));
        properties.put("unique", String.valueOf(association.isUnique()));
        properties.put("qualifierEnd", association.qualifierEnd().name());
        properties.put("sourceQualifierCount",
                String.valueOf(association.sourceEndQualifiers().size()));
        properties.put("targetQualifierCount",
                String.valueOf(association.targetEndQualifiers().size()));
        properties.put("isAssociationClass", String.valueOf(associationClass));
        for (int index = 0; index < association.sourceEndQualifiers().size(); index++) {
            var qualifier = association.sourceEndQualifiers().get(index);
            properties.put("sourceQualifier::" + index + "::name", qualifier.name());
            properties.put("sourceQualifier::" + index + "::type",
                    qualifier.declaredType().toString());
        }
        for (int index = 0; index < association.targetEndQualifiers().size(); index++) {
            var qualifier = association.targetEndQualifiers().get(index);
            properties.put("targetQualifier::" + index + "::name", qualifier.name());
            properties.put("targetQualifier::" + index + "::type",
                    qualifier.declaredType().toString());
        }
        return Map.copyOf(properties);
    }

    private static void encodeQualifiers(
            SchemaModel sm, Snapshot sn, String associationName,
            List<org.uet.dse.ocl2cypher.source.model.UmlQualifier> declarations,
            List<org.uet.dse.ocl2cypher.source.model.QualifierValue> values,
            List<String> payloads) {
        for (int index = 0; index < values.size(); index++) {
            var declaration = declarations.get(index);
            Object raw = values.get(index).value();
            if (!(raw instanceof org.uet.dse.ocl2cypher.runtime.OclValue value)) {
                throw new GraphValueCodec.CodecException("G_CODEC_CARRIER",
                        "qualifier value is not an OCL scalar: "
                                + associationName + "." + declaration.name());
            }
            GraphValueCodec.validateObjectReference(declaration.declaredType(), value, sm, sn);
            payloads.add(qualifierPayload(declaration.declaredType(), value));
        }
    }

    private static Map<String, String> withEndPosition(
            Map<String, String> properties, String endPosition) {
        Map<String, String> positioned = new LinkedHashMap<>(properties);
        positioned.put("endPosition", endPosition);
        return Map.copyOf(positioned);
    }

    private static String simpleClassLabel(String qualifiedName) {
        String label = qualifiedName;
        for (String separator : List.of("::", "/", "#", ".")) {
            int index = label.lastIndexOf(separator);
            if (index >= 0 && index + separator.length() < label.length()) {
                label = label.substring(index + separator.length());
            }
        }
        return label.isBlank() ? "Object" : label;
    }

    /**
     * Every attribute that the *effective* class seen at runtime declares,
     * including inherited ones. The snapshot fragment there enumerates exactly
     * those slots; no spurious inheritance lookup is needed later.
     */
    private static List<org.uet.dse.ocl2cypher.source.model.UmlAttribute> attrsOf(
            SchemaModel sm, String dynamicClassKey) {
        Set<String> visited = new LinkedHashSet<>();
        List<org.uet.dse.ocl2cypher.source.model.UmlAttribute> out = new ArrayList<>();
        Deque<String> q = new ArrayDeque<>();
        q.add(dynamicClassKey);
        while (!q.isEmpty()) {
            String cur = q.removeFirst();
            if (!visited.add(cur)) {
                continue;
            }
            out.addAll(sm.ownAttributes(cur));
            var klass = sm.clazz(cur);
            if (klass != null) {
                q.addAll(klass.directSuperclassKeys());
            }
        }
        return out;
    }
}
