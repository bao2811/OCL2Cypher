package org.uet.dse.ocl2cypher.input.uml;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import javax.xml.XMLConstants;
import javax.xml.parsers.DocumentBuilderFactory;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.diagnostics.Stage;
import org.uet.dse.ocl2cypher.input.UmlOclInputBundle;
import org.uet.dse.ocl2cypher.runtime.OclType;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;
import org.uet.dse.ocl2cypher.source.model.UmlAssociation;
import org.uet.dse.ocl2cypher.source.model.UmlAttribute;
import org.uet.dse.ocl2cypher.source.model.UmlClass;
import org.uet.dse.ocl2cypher.source.model.UmlQualifier;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;

/**
 * Strict UML2-XMI class-diagram adapter for the executable OCL2Cypher profile.
 *
 * <p>The adapter intentionally reads only the structural information consumed
 * by {@link SchemaModel}: classes, binary associations, one-end scalar
 * qualifiers, association classes, scalar attributes and direct generalizations.
 * Unsupported UML constructs are rejected at the file
 * boundary instead of being silently omitted. It has no dependency on a
 * runtime snapshot and therefore can be used by query generation alone.
 */
public final class UmlOclInputAdapter {
    private static final String XMI_NS = "http://www.omg.org/XMI";
    private static final String XSI_NS = XMLConstants.W3C_XML_SCHEMA_INSTANCE_NS_URI;

    private UmlOclInputAdapter() {
    }

    public static Result<UmlOclInputBundle> load(Path umlPath, Path oclPath,
                                                  String modelKey) {
        Objects.requireNonNull(umlPath, "UML path");
        Objects.requireNonNull(oclPath, "OCL path");
        Objects.requireNonNull(modelKey, "model key");
        Path umlFile = umlPath.toAbsolutePath().normalize();
        Path oclFile = oclPath.toAbsolutePath().normalize();
        try {
            requireReadable(umlFile, "UML diagram");
            requireReadable(oclFile, "OCL source");
            if (modelKey.isBlank()) {
                throw new InputException("model key must not be blank");
            }
            Document document = parse(umlFile);
            SchemaModel schema = toSchema(document, modelKey);
            String oclText = Files.readString(oclFile, StandardCharsets.UTF_8);
            if (oclText.isBlank()) {
                throw new InputException("OCL source is empty: " + oclFile);
            }
            return Result.success(new UmlOclInputBundle(
                    umlFile, oclFile, schema, oclText));
        } catch (IOException | RuntimeException e) {
            String message = e.getMessage() == null ? e.getClass().getSimpleName()
                    : e.getMessage();
            return Result.failure(Stage.E_SM, "E_UML_OCL_INPUT", message);
        }
    }

    private static SchemaModel toSchema(Document document, String modelKey) {
        List<Element> elements = descendants(document.getDocumentElement());
        Map<String, Element> byId = indexById(elements);
        List<Element> classElements = elements.stream()
                .filter(element -> isType(element, "Class")
                        || isType(element, "AssociationClass"))
                .toList();
        if (classElements.isEmpty()) {
            throw new InputException("UML diagram declares no Class");
        }

        Map<String, String> classKeyById = new LinkedHashMap<>();
        Set<String> classKeys = new LinkedHashSet<>();
        for (Element classifier : classElements) {
            String id = requireId(classifier, "UML class");
            String key = requireAttribute(classifier, "name", "UML class " + id);
            if (!classKeys.add(key)) {
                throw new InputException("duplicate UML class name is outside the supported "
                        + "unqualified-name profile: " + key);
            }
            classKeyById.put(id, key);
        }

        Set<String> associationEndIds = associationEndIds(elements);
        SchemaModel.Builder builder = SchemaModel.builder(modelKey);
        for (Element classifier : classElements) {
            String key = classKeyById.get(requireId(classifier, "UML class"));
            List<String> parents = directParents(classifier, classKeyById);
            builder.clazz(new UmlClass(key, qualifiedName(classifier),
                    booleanAttribute(classifier, "isAbstract", false),
                    isType(classifier, "AssociationClass"), parents));
        }

        Map<String, Element> primitiveTypes = primitiveTypes(elements);
        for (Element classifier : classElements) {
            String owner = classKeyById.get(requireId(classifier, "UML class"));
            for (Element property : directChildren(classifier, "ownedAttribute")) {
                String propertyId = optionalId(property);
                if ((propertyId != null && associationEndIds.contains(propertyId))
                        || property.hasAttribute("association")) {
                    continue;
                }
                String name = requireAttribute(property, "name",
                        "attribute owned by " + owner);
                int upper = upper(property);
                if (upper != 1) {
                    throw new InputException("multi-valued UML attribute is outside the "
                            + "supported scalar profile: " + owner + "::" + name);
                }
                String typeName = referencedTypeName(property, byId, primitiveTypes);
                builder.attribute(UmlAttribute.of(owner, name, scalarType(typeName)));
            }
        }

        for (Element association : elements) {
            if (!isType(association, "Association")
                    && !isType(association, "AssociationClass")) {
                continue;
            }
            addAssociation(builder, association, byId, classKeyById, primitiveTypes);
        }
        return builder.build();
    }

    private static void addAssociation(SchemaModel.Builder builder, Element association,
                                       Map<String, Element> byId,
                                       Map<String, String> classKeyById,
                                       Map<String, Element> primitiveTypes) {
        String associationId = requireId(association, "UML association");
        String name = requireAttribute(association, "name",
                "UML association " + associationId);
        List<Element> ends = memberEnds(association, byId);
        if (ends.size() != 2) {
            throw new InputException("only binary UML associations are supported: " + name);
        }
        Element sourceEnd = ends.get(0);
        Element targetEnd = ends.get(1);
        List<UmlQualifier> sourceQualifiers = qualifiers(sourceEnd, name, byId, primitiveTypes);
        List<UmlQualifier> targetQualifiers = qualifiers(targetEnd, name, byId, primitiveTypes);
        String sourceClass = referencedClassKey(sourceEnd, classKeyById);
        String targetClass = referencedClassKey(targetEnd, classKeyById);
        String sourceRole = requireAttribute(sourceEnd, "name",
                "source end of association " + name);
        String targetRole = requireAttribute(targetEnd, "name",
                "target end of association " + name);
        boolean sourceOrdered = booleanAttribute(sourceEnd, "isOrdered", false);
        boolean targetOrdered = booleanAttribute(targetEnd, "isOrdered", false);
        boolean sourceUnique = booleanAttribute(sourceEnd, "isUnique", true);
        boolean targetUnique = booleanAttribute(targetEnd, "isUnique", true);
        if (sourceOrdered != targetOrdered || sourceUnique != targetUnique) {
            throw new InputException("asymmetric ordered/unique association ends cannot be "
                    + "represented by SchemaModel: " + name);
        }
        String key = isType(association, "AssociationClass")
                ? classKeyById.get(associationId) : name;
        if (key == null) {
            throw new InputException("association class has no classifier identity: " + name);
        }
        UmlAssociation.AssociationKind associationKind = associationKind(sourceEnd, targetEnd);
        builder.association(new UmlAssociation(key, name,
                sourceClass, sourceRole, lower(sourceEnd), upper(sourceEnd),
                targetClass, targetRole, lower(targetEnd), upper(targetEnd),
                sourceQualifiers, targetQualifiers,
                targetOrdered, targetUnique, associationKind));
    }

    private static UmlAssociation.AssociationKind associationKind(Element sourceEnd,
                                                                   Element targetEnd) {
        String source = sourceEnd.getAttribute("aggregation");
        String target = targetEnd.getAttribute("aggregation");
        if ("composite".equalsIgnoreCase(source) || "composite".equalsIgnoreCase(target)) {
            return UmlAssociation.AssociationKind.COMPOSITION;
        }
        if ("shared".equalsIgnoreCase(source) || "shared".equalsIgnoreCase(target)) {
            return UmlAssociation.AssociationKind.AGGREGATION;
        }
        return UmlAssociation.AssociationKind.ASSOCIATION;
    }

    private static List<Element> memberEnds(Element association,
                                            Map<String, Element> byId) {
        String references = association.getAttribute("memberEnd").trim();
        List<Element> result = new ArrayList<>();
        if (!references.isEmpty()) {
            for (String reference : references.split("\\s+")) {
                Element end = byId.get(localReference(reference));
                if (end == null) {
                    throw new InputException("unresolved UML association end: " + reference);
                }
                result.add(end);
            }
            return List.copyOf(result);
        }
        result.addAll(directChildren(association, "ownedEnd"));
        return List.copyOf(result);
    }

    private static Set<String> associationEndIds(List<Element> elements) {
        Set<String> result = new LinkedHashSet<>();
        Map<String, Element> byId = indexById(elements);
        for (Element association : elements) {
            if (!isType(association, "Association")
                    && !isType(association, "AssociationClass")) {
                continue;
            }
            for (Element end : memberEnds(association, byId)) {
                String id = optionalId(end);
                if (id != null) {
                    result.add(id);
                }
            }
        }
        return result;
    }

    private static List<String> directParents(Element classifier,
                                               Map<String, String> classKeyById) {
        List<String> result = new ArrayList<>();
        for (Element generalization : directChildren(classifier, "generalization")) {
            String reference = requireAttribute(generalization, "general",
                    "generalization of " + classifier.getAttribute("name"));
            String parent = classKeyById.get(localReference(reference));
            if (parent == null) {
                throw new InputException("generalization references an unsupported or external "
                        + "classifier: " + reference);
            }
            result.add(parent);
        }
        return List.copyOf(result);
    }

    private static String referencedClassKey(Element property,
                                             Map<String, String> classKeyById) {
        String reference = property.getAttribute("type").trim();
        if (reference.isEmpty()) {
            throw new InputException("association end has no class type: "
                    + property.getAttribute("name"));
        }
        String key = classKeyById.get(localReference(reference));
        if (key == null) {
            throw new InputException("association end references an unsupported or external "
                    + "class: " + reference);
        }
        return key;
    }

    private static Map<String, Element> primitiveTypes(List<Element> elements) {
        Map<String, Element> result = new LinkedHashMap<>();
        for (Element element : elements) {
            if (isType(element, "PrimitiveType") || isType(element, "DataType")) {
                String id = optionalId(element);
                if (id != null) {
                    result.put(id, element);
                }
            }
        }
        return result;
    }

    private static String referencedTypeName(Element property,
                                             Map<String, Element> byId,
                                             Map<String, Element> primitiveTypes) {
        String reference = property.getAttribute("type").trim();
        if (!reference.isEmpty()) {
            String local = localReference(reference);
            Element type = primitiveTypes.get(local);
            if (type == null) {
                type = byId.get(local);
            }
            if (type != null) {
                return requireAttribute(type, "name", "type " + reference);
            }
            return local;
        }
        for (Element child : directChildren(property, "type")) {
            String href = child.getAttribute("href").trim();
            if (!href.isEmpty()) {
                return localReference(href);
            }
        }
        throw new InputException("attribute has no declared type: "
                + property.getAttribute("name"));
    }

    private static OclType scalarType(String umlType) {
        return switch (umlType) {
            case "Boolean", "EBoolean", "EBooleanObject" -> OclType.BOOLEAN;
            case "Integer", "UnlimitedNatural", "Natural", "EInt", "ELong",
                    "EBigInteger" -> OclType.INTEGER;
            case "Real", "EFloat", "EDouble", "EBigDecimal" -> OclType.REAL;
            case "String", "EString" -> OclType.STRING;
            default -> throw new InputException("unsupported UML scalar type: " + umlType);
        };
    }

    private static int lower(Element property) {
        String direct = property.getAttribute("lower").trim();
        if (!direct.isEmpty()) {
            return nonNegativeInteger(direct, "lower multiplicity");
        }
        List<Element> values = directChildren(property, "lowerValue");
        if (values.isEmpty()) {
            return 1;
        }
        String value = values.get(0).getAttribute("value").trim();
        return value.isEmpty() ? 0 : nonNegativeInteger(value, "lower multiplicity");
    }

    private static int upper(Element property) {
        String direct = property.getAttribute("upper").trim();
        if (!direct.isEmpty()) {
            return unlimitedNatural(direct);
        }
        List<Element> values = directChildren(property, "upperValue");
        if (values.isEmpty()) {
            return 1;
        }
        String value = values.get(0).getAttribute("value").trim();
        return value.isEmpty() ? 1 : unlimitedNatural(value);
    }

    private static int unlimitedNatural(String value) {
        if ("*".equals(value) || "-1".equals(value)) {
            return -1;
        }
        return nonNegativeInteger(value, "upper multiplicity");
    }

    private static int nonNegativeInteger(String value, String label) {
        try {
            int parsed = Integer.parseInt(value);
            if (parsed < 0) {
                throw new NumberFormatException();
            }
            return parsed;
        } catch (NumberFormatException e) {
            throw new InputException("invalid " + label + ": " + value);
        }
    }

    private static List<UmlQualifier> qualifiers(Element end, String association,
                                                  Map<String, Element> byId,
                                                  Map<String, Element> primitiveTypes) {
        List<UmlQualifier> result = new ArrayList<>();
        Set<String> names = new LinkedHashSet<>();
        for (Element qualifier : directChildren(end, "qualifier")) {
            String name = requireAttribute(qualifier, "name",
                    "qualifier of association " + association);
            if (!names.add(name)) {
                throw new InputException("duplicate qualifier name on association "
                        + association + ": " + name);
            }
            if (lower(qualifier) != 1 || upper(qualifier) != 1) {
                throw new InputException("qualifier must be scalar [1]: "
                        + association + "::" + name);
            }
            result.add(UmlQualifier.typed(name,
                    scalarType(referencedTypeName(qualifier, byId, primitiveTypes))));
        }
        return List.copyOf(result);
    }

    private static Document parse(Path path) throws IOException {
        try {
            DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
            factory.setNamespaceAware(true);
            factory.setXIncludeAware(false);
            factory.setExpandEntityReferences(false);
            factory.setFeature("http://apache.org/xml/features/disallow-doctype-decl", true);
            factory.setFeature("http://xml.org/sax/features/external-general-entities", false);
            factory.setFeature("http://xml.org/sax/features/external-parameter-entities", false);
            // Xerces 2.12, supplied by the USE runtime, rejects these standard
            // JAXP properties via setAttribute even though the equivalent SAX
            // features above are supported. Keep the additional JDK hardening
            // when available without making parser compatibility depend on it.
            setOptionalAttribute(factory, XMLConstants.ACCESS_EXTERNAL_DTD, "");
            setOptionalAttribute(factory, XMLConstants.ACCESS_EXTERNAL_SCHEMA, "");
            var builder = factory.newDocumentBuilder();
            builder.setEntityResolver((publicId, systemId) -> {
                throw new org.xml.sax.SAXException(
                        "external entity resolution is disabled: " + systemId);
            });
            Document document = builder.parse(path.toFile());
            String rootType = localType(document.getDocumentElement());
            if (!"Model".equals(rootType) && !"Package".equals(rootType)) {
                throw new InputException("UML file root must be uml:Model or uml:Package");
            }
            return document;
        } catch (InputException e) {
            throw e;
        } catch (Exception e) {
            throw new IOException("cannot parse UML XMI: " + e.getMessage(), e);
        }
    }

    private static void setOptionalAttribute(DocumentBuilderFactory factory,
                                             String name, String value) {
        try {
            factory.setAttribute(name, value);
        } catch (IllegalArgumentException ignored) {
            // The mandatory DOCTYPE/entity features and rejecting resolver
            // remain active on factories that do not expose the JAXP property.
        }
    }

    private static List<Element> descendants(Element root) {
        List<Element> result = new ArrayList<>();
        collect(root, result);
        return List.copyOf(result);
    }

    private static void collect(Element element, List<Element> result) {
        result.add(element);
        for (Node child = element.getFirstChild(); child != null;
                child = child.getNextSibling()) {
            if (child instanceof Element childElement) {
                collect(childElement, result);
            }
        }
    }

    private static List<Element> directChildren(Element parent, String localName) {
        List<Element> result = new ArrayList<>();
        for (Node child = parent.getFirstChild(); child != null;
                child = child.getNextSibling()) {
            if (child instanceof Element element && localName.equals(element.getLocalName())) {
                result.add(element);
            }
        }
        return List.copyOf(result);
    }

    private static Map<String, Element> indexById(List<Element> elements) {
        Map<String, Element> result = new LinkedHashMap<>();
        for (Element element : elements) {
            String id = optionalId(element);
            if (id != null && result.putIfAbsent(id, element) != null) {
                throw new InputException("duplicate xmi:id in UML file: " + id);
            }
        }
        return result;
    }

    private static boolean isType(Element element, String expected) {
        return expected.equals(localType(element));
    }

    private static String localType(Element element) {
        String type = element.getAttributeNS(XMI_NS, "type");
        if (type.isBlank()) {
            type = element.getAttributeNS(XSI_NS, "type");
        }
        if (type.isBlank() && element == element.getOwnerDocument().getDocumentElement()) {
            type = element.getTagName();
        }
        int colon = type.indexOf(':');
        return colon >= 0 ? type.substring(colon + 1) : type;
    }

    private static String optionalId(Element element) {
        String id = element.getAttributeNS(XMI_NS, "id");
        if (id.isBlank()) {
            id = element.getAttribute("xmi:id");
        }
        return id.isBlank() ? null : id;
    }

    private static String requireId(Element element, String label) {
        String id = optionalId(element);
        if (id == null) {
            throw new InputException(label + " has no xmi:id");
        }
        return id;
    }

    private static String requireAttribute(Element element, String name, String label) {
        String value = element.getAttribute(name).trim();
        if (value.isEmpty()) {
            throw new InputException(label + " has no " + name);
        }
        return value;
    }

    private static boolean booleanAttribute(Element element, String name,
                                            boolean defaultValue) {
        String value = element.getAttribute(name).trim();
        if (value.isEmpty()) {
            return defaultValue;
        }
        if (!"true".equals(value) && !"false".equals(value)) {
            throw new InputException("invalid Boolean " + name + "=" + value);
        }
        return Boolean.parseBoolean(value);
    }

    private static String localReference(String reference) {
        String normalized = reference.trim();
        int hash = normalized.lastIndexOf('#');
        if (hash >= 0) {
            normalized = normalized.substring(hash + 1);
        }
        int slash = normalized.lastIndexOf('/');
        if (slash >= 0) {
            normalized = normalized.substring(slash + 1);
        }
        return normalized;
    }

    private static String qualifiedName(Element classifier) {
        List<String> parts = new ArrayList<>();
        Node current = classifier;
        while (current instanceof Element element) {
            String name = element.getAttribute("name").trim();
            String type = localType(element);
            if (!name.isEmpty() && ("Model".equals(type) || "Package".equals(type)
                    || "Class".equals(type) || "AssociationClass".equals(type))) {
                parts.add(0, name);
            }
            current = element.getParentNode();
        }
        return String.join("::", parts);
    }

    private static void requireReadable(Path path, String label) {
        if (!Files.isRegularFile(path) || !Files.isReadable(path)) {
            throw new InputException(label + " is not a readable file: " + path);
        }
    }

    private static final class InputException extends RuntimeException {
        private static final long serialVersionUID = 1L;

        private InputException(String message) {
            super(message);
        }
    }
}
