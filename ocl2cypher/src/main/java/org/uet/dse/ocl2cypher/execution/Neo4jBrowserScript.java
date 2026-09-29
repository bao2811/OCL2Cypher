package org.uet.dse.ocl2cypher.execution;

import org.uet.dse.ocl2cypher.cypher.CypherAst;
import org.uet.dse.ocl2cypher.cypher.Serializer;
import org.uet.dse.ocl2cypher.graph.GraphModel;

import java.lang.reflect.Array;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;

/**
 * Produces a self-contained Cypher query for Neo4j Browser/Desktop.
 *
 * <p>The certified serializer deliberately emits parameters. The driver adapter
 * supplies those parameters separately at execution time, while text copied to
 * Neo4j Browser has no accompanying driver parameter map. This exporter resolves
 * the exact same physical parameter values and safely inlines them as Cypher
 * literals. The compiler artifact itself remains parameterized.</p>
 */
public final class Neo4jBrowserScript {
    private Neo4jBrowserScript() {
    }

    public static String selfContained(Serializer.Serialized serialized,
                                       CypherAst.GeneratedArtifact artifact,
                                       GraphModel graph) {
        return selfContained(serialized, artifact, graph, Map.of());
    }

    public static String selfContained(Serializer.Serialized serialized,
                                       CypherAst.GeneratedArtifact artifact,
                                       GraphModel graph,
                                       Map<String, Object> publicParameters) {
        Objects.requireNonNull(serialized, "serialized");
        Objects.requireNonNull(artifact, "artifact");
        Objects.requireNonNull(graph, "graph");
        Map<String, Object> parameters = Neo4jExecutionAdapter.buildParamMap(
                artifact, publicParameters, graph);
        return inlineParameters(serialized.cypherText(), parameters);
    }

    static String inlineParameters(String cypher, Map<String, Object> parameters) {
        Objects.requireNonNull(cypher, "cypher");
        Objects.requireNonNull(parameters, "parameters");
        StringBuilder out = new StringBuilder(cypher.length() + parameters.size() * 16);
        boolean inString = false;
        boolean inIdentifier = false;
        for (int i = 0; i < cypher.length();) {
            char current = cypher.charAt(i);
            if (inString) {
                out.append(current);
                if (current == '\\' && i + 1 < cypher.length()) {
                    out.append(cypher.charAt(i + 1));
                    i += 2;
                    continue;
                }
                if (current == '\'') inString = false;
                i++;
                continue;
            }
            if (inIdentifier) {
                out.append(current);
                if (current == '`') {
                    if (i + 1 < cypher.length() && cypher.charAt(i + 1) == '`') {
                        out.append('`');
                        i += 2;
                        continue;
                    }
                    inIdentifier = false;
                }
                i++;
                continue;
            }
            if (current == '\'') {
                inString = true;
                out.append(current);
                i++;
                continue;
            }
            if (current == '`') {
                inIdentifier = true;
                out.append(current);
                i++;
                continue;
            }
            if (current == '$' && i + 1 < cypher.length()
                    && isParameterStart(cypher.charAt(i + 1))) {
                int end = i + 2;
                while (end < cypher.length() && isParameterPart(cypher.charAt(end))) end++;
                String name = cypher.substring(i + 1, end);
                if (parameters.containsKey(name)) {
                    out.append(literal(parameters.get(name)));
                    i = end;
                    continue;
                }
            }
            out.append(current);
            i++;
        }
        return out.toString();
    }

    private static boolean isParameterStart(char value) {
        return value == '_' || Character.isLetter(value);
    }

    private static boolean isParameterPart(char value) {
        return value == '_' || Character.isLetterOrDigit(value);
    }

    private static String literal(Object value) {
        if (value == null) return "null";
        if (value instanceof String text) return stringLiteral(text);
        if (value instanceof Boolean bool) return bool ? "true" : "false";
        if (value instanceof BigDecimal decimal) {
            String text = decimal.stripTrailingZeros().toPlainString();
            return text.contains(".") ? text : text + ".0";
        }
        if (value instanceof BigInteger || value instanceof Byte || value instanceof Short
                || value instanceof Integer || value instanceof Long) return value.toString();
        if (value instanceof Float number) {
            if (!Float.isFinite(number)) throw unsupported(value);
            return BigDecimal.valueOf(number.doubleValue()).stripTrailingZeros().toPlainString();
        }
        if (value instanceof Double number) {
            if (!Double.isFinite(number)) throw unsupported(value);
            return BigDecimal.valueOf(number).stripTrailingZeros().toPlainString();
        }
        if (value instanceof Map<?, ?> map) {
            Map<String, Object> ordered = new LinkedHashMap<>();
            map.entrySet().stream()
                    .sorted(Comparator.comparing(entry -> String.valueOf(entry.getKey())))
                    .forEach(entry -> ordered.put(String.valueOf(entry.getKey()), entry.getValue()));
            List<String> entries = new ArrayList<>();
            ordered.forEach((key, item) -> entries.add(identifier(key) + ": " + literal(item)));
            return "{" + String.join(", ", entries) + "}";
        }
        if (value instanceof Iterable<?> iterable) {
            List<String> items = new ArrayList<>();
            iterable.forEach(item -> items.add(literal(item)));
            return "[" + String.join(", ", items) + "]";
        }
        if (value.getClass().isArray()) {
            List<String> items = new ArrayList<>();
            for (int i = 0; i < Array.getLength(value); i++) {
                items.add(literal(Array.get(value, i)));
            }
            return "[" + String.join(", ", items) + "]";
        }
        throw unsupported(value);
    }

    private static String identifier(String value) {
        return "`" + value.replace("`", "``") + "`";
    }

    private static String stringLiteral(String value) {
        StringBuilder out = new StringBuilder(value.length() + 2).append('\'');
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            switch (c) {
                case '\\' -> out.append("\\\\");
                case '\'' -> out.append("\\'");
                case '\b' -> out.append("\\b");
                case '\f' -> out.append("\\f");
                case '\n' -> out.append("\\n");
                case '\r' -> out.append("\\r");
                case '\t' -> out.append("\\t");
                default -> {
                    if (Character.isISOControl(c)) out.append(String.format("\\u%04X", (int) c));
                    else out.append(c);
                }
            }
        }
        return out.append('\'').toString();
    }

    private static IllegalArgumentException unsupported(Object value) {
        return new IllegalArgumentException("cannot encode Neo4j Browser parameter value of type "
                + value.getClass().getName());
    }
}
