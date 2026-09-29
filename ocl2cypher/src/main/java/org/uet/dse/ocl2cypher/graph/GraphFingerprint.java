package org.uet.dse.ocl2cypher.graph;

import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Map;

/** Deterministic content identity for one fully built canonical graph. */
public final class GraphFingerprint {
    private GraphFingerprint() {
    }

    public static String sha256(GraphModel graph) {
        try {
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            append(digest, "profile", GraphModel.ENCODING_PROFILE);
            append(digest, "version", GraphModel.ENCODING_VERSION);
            append(digest, "model", graph.modelKey());
            List<GraphModel.Node> nodes = new ArrayList<>(graph.nodes());
            nodes.sort(Comparator.comparing(GraphModel.Node::stableKey));
            for (GraphModel.Node node : nodes) {
                append(digest, "node", node.stableKey());
                append(digest, "projection", node.projection().name());
                append(digest, "role", node.observationRole());
                for (String label : node.labels().stream().sorted().toList()) {
                    append(digest, "label", label);
                }
                appendProperties(digest, node.properties());
            }
            List<GraphModel.Relationship> relationships = new ArrayList<>(
                    graph.relationships());
            relationships.sort(Comparator.comparing(GraphModel.Relationship::stableKey));
            for (GraphModel.Relationship relationship : relationships) {
                append(digest, "relationship", relationship.stableKey());
                append(digest, "projection", relationship.projection().name());
                append(digest, "type", relationship.physicalType());
                append(digest, "source", relationship.sourceKey());
                append(digest, "target", relationship.targetKey());
                appendProperties(digest, relationship.properties());
            }
            return java.util.HexFormat.of().formatHex(digest.digest());
        } catch (NoSuchAlgorithmException impossible) {
            throw new IllegalStateException("SHA-256 is unavailable", impossible);
        }
    }

    private static void appendProperties(MessageDigest digest, Map<String, String> properties) {
        properties.entrySet().stream().sorted(Map.Entry.comparingByKey()).forEach(entry -> {
            append(digest, "property-key", entry.getKey());
            append(digest, "property-value", entry.getValue());
        });
    }

    private static void append(MessageDigest digest, String tag, String value) {
        byte[] tagBytes = tag.getBytes(StandardCharsets.UTF_8);
        byte[] valueBytes = value.getBytes(StandardCharsets.UTF_8);
        updateLength(digest, tagBytes.length);
        digest.update(tagBytes);
        updateLength(digest, valueBytes.length);
        digest.update(valueBytes);
    }

    private static void updateLength(MessageDigest digest, int value) {
        digest.update((byte) (value >>> 24));
        digest.update((byte) (value >>> 16));
        digest.update((byte) (value >>> 8));
        digest.update((byte) value);
    }
}
