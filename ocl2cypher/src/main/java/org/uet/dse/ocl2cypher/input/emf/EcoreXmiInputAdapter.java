package org.uet.dse.ocl2cypher.input.emf;

import java.io.IOException;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.IdentityHashMap;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import org.eclipse.emf.common.util.EList;
import org.eclipse.emf.common.util.TreeIterator;
import org.eclipse.emf.common.util.URI;
import org.eclipse.emf.ecore.EAnnotation;
import org.eclipse.emf.ecore.EAttribute;
import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EClassifier;
import org.eclipse.emf.ecore.EDataType;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;
import org.eclipse.emf.ecore.EReference;
import org.eclipse.emf.ecore.EStructuralFeature;
import org.eclipse.emf.ecore.EcorePackage;
import org.eclipse.emf.ecore.resource.Resource;
import org.eclipse.emf.ecore.resource.impl.ResourceSetImpl;
import org.eclipse.emf.ecore.util.EcoreUtil;
import org.eclipse.emf.ecore.xmi.impl.EcoreResourceFactoryImpl;
import org.eclipse.emf.ecore.xmi.impl.XMIResourceFactoryImpl;
import org.uet.dse.ocl2cypher.diagnostics.Result;
import org.uet.dse.ocl2cypher.diagnostics.Stage;
import org.uet.dse.ocl2cypher.input.ModelInputBundle;
import org.uet.dse.ocl2cypher.input.SourceInvariant;
import org.uet.dse.ocl2cypher.input.StableIdDisambiguator;
import org.uet.dse.ocl2cypher.runtime.OclType;
import org.uet.dse.ocl2cypher.runtime.OclValue;
import org.uet.dse.ocl2cypher.source.model.SchemaModel;
import org.uet.dse.ocl2cypher.source.model.Snapshot;
import org.uet.dse.ocl2cypher.source.model.UmlAssociation;
import org.uet.dse.ocl2cypher.source.model.UmlAttribute;
import org.uet.dse.ocl2cypher.source.model.UmlClass;

/**
 * Converts a dynamic Ecore schema and an XMI model instance into the canonical
 * source structures consumed by OCL2Cypher.
 *
 * <p>The adapter is deliberately strict. It accepts scalar primitive
 * attributes and paired binary {@link EReference}s. Unsupported Ecore
 * constructs fail at {@link Stage#E_SM}; they are never silently erased.
 */
public final class EcoreXmiInputAdapter {
    private static final String ECORE_ANNOTATION =
            "http://www.eclipse.org/emf/2002/Ecore";
    private static final String PIVOT_OCL_ANNOTATION =
            "http://www.eclipse.org/emf/2002/Ecore/OCL/Pivot";

    private EcoreXmiInputAdapter() {
    }

    public static Result<ModelInputBundle> load(Path ecorePath, Path xmiPath,
                                                 EcoreXmiOptions options) {
        Objects.requireNonNull(ecorePath, "Ecore path");
        Objects.requireNonNull(xmiPath, "XMI path");
        Objects.requireNonNull(options, "options");
        Path schemaFile = ecorePath.toAbsolutePath().normalize();
        Path snapshotFile = xmiPath.toAbsolutePath().normalize();
        try {
            requireReadable(schemaFile, "Ecore schema");
            requireReadable(snapshotFile, "XMI snapshot");

            ResourceSetImpl resources = new ResourceSetImpl();
            resources.getResourceFactoryRegistry().getExtensionToFactoryMap()
                    .put("ecore", new EcoreResourceFactoryImpl());
            resources.getResourceFactoryRegistry().getExtensionToFactoryMap()
                    .put("xmi", new XMIResourceFactoryImpl());

            Resource schemaResource = resources.getResource(fileUri(schemaFile), true);
            requireNoLoadErrors(schemaResource, "Ecore schema");
            if (schemaResource.getContents().size() != 1
                    || !(schemaResource.getContents().get(0) instanceof EPackage rootPackage)) {
                throw new InputException("Ecore schema must contain exactly one root EPackage");
            }
            List<EPackage> packages = packages(rootPackage);
            for (EPackage pkg : packages) {
                if (pkg.getNsURI() == null || pkg.getNsURI().isBlank()) {
                    throw new InputException("EPackage " + pkg.getName()
                            + " has no namespace URI");
                }
                resources.getPackageRegistry().put(pkg.getNsURI(), pkg);
            }

            Resource snapshotResource = resources.getResource(fileUri(snapshotFile), true);
            EcoreUtil.resolveAll(resources);
            requireNoLoadErrors(snapshotResource, "XMI snapshot");
            var unresolved = EcoreUtil.UnresolvedProxyCrossReferencer.find(snapshotResource);
            if (!unresolved.isEmpty()) {
                EObject proxy = unresolved.keySet().iterator().next();
                throw new InputException("XMI snapshot contains an unresolved reference to "
                        + EcoreUtil.getURI(proxy));
            }

            Map<String, EClass> classes = classes(packages);
            List<AssociationBinding> associations = associations(classes.values(), options);
            SchemaModel schema = toSchema(options.modelKey(), classes, associations);
            List<EObject> objects = objects(snapshotResource);
            if (options.validateSnapshot()) {
                validateSnapshot(objects, new LinkedHashSet<>(packages));
            }
            Snapshot snapshot = toSnapshot(snapshotResource, objects, classes,
                    associations, options);
            List<SourceInvariant> invariants = invariants(classes.values());
            return Result.success(new ModelInputBundle(schemaFile, snapshotFile,
                    schema, snapshot, invariants));
        } catch (IOException | RuntimeException e) {
            String message = e.getMessage() == null ? e.getClass().getSimpleName()
                    : e.getMessage();
            return Result.failure(Stage.E_SM, "E_ECORE_XMI_INPUT", message);
        }
    }

    private static SchemaModel toSchema(String modelKey, Map<String, EClass> classes,
                                        List<AssociationBinding> associations) {
        SchemaModel.Builder builder = SchemaModel.builder(modelKey);
        for (EClass eClass : classes.values()) {
            List<String> parents = eClass.getESuperTypes().stream()
                    .map(EClass::getName).toList();
            builder.clazz(new UmlClass(eClass.getName(), qualifiedName(eClass),
                    eClass.isAbstract(), false, parents));
        }
        for (EClass eClass : classes.values()) {
            for (EAttribute attribute : eClass.getEAttributes()) {
                if (attribute.getUpperBound() != 1) {
                    throw new InputException("multi-valued EAttribute is outside the supported "
                            + "fragment: " + eClass.getName() + "::" + attribute.getName());
                }
                builder.attribute(UmlAttribute.of(eClass.getName(), attribute.getName(),
                        oclType(attribute.getEAttributeType())));
            }
        }
        for (AssociationBinding binding : associations) {
            EReference end = binding.canonicalEnd();
            EReference opposite = binding.oppositeEnd();
            if ((end.isMany() || opposite.isMany())
                    && (end.isOrdered() != opposite.isOrdered()
                    || end.isUnique() != opposite.isUnique())) {
                throw new InputException("asymmetric ordered/unique collection metadata cannot "
                        + "be represented for association " + binding.name());
            }
            builder.association(new UmlAssociation(binding.name(), binding.name(),
                    end.getEContainingClass().getName(), opposite.getName(),
                    opposite.getLowerBound(), upper(opposite),
                    end.getEReferenceType().getName(), end.getName(),
                    end.getLowerBound(), upper(end), List.of(), List.of(),
                    end.isOrdered(), end.isUnique(),
                    end.isContainment() || opposite.isContainment()
                            ? UmlAssociation.AssociationKind.COMPOSITION
                            : UmlAssociation.AssociationKind.ASSOCIATION));
        }
        return builder.build();
    }

    private static Snapshot toSnapshot(Resource resource, List<EObject> objects,
                                       Map<String, EClass> classes,
                                       List<AssociationBinding> associations,
                                       EcoreXmiOptions options) {
        Snapshot.Builder builder = Snapshot.builder();
        Map<EObject, String> ids = new IdentityHashMap<>();
        StableIdDisambiguator disambiguator = new StableIdDisambiguator();
        for (EObject object : objects) {
            EClass eClass = object.eClass();
            if (classes.get(eClass.getName()) != eClass) {
                throw new InputException("snapshot object uses a classifier outside the loaded "
                        + "Ecore schema: " + qualifiedName(eClass));
            }
            String rawId = options.stableIdProvider().stableId(object, resource);
            if (rawId == null || rawId.isBlank()) {
                throw new InputException("stable ID provider returned no identity for "
                        + EcoreUtil.getURI(object));
            }
            // Preserve every occurrence. Duplicate raw identities are normalized
            // in deterministic XMI traversal order as raw, raw__1, raw__2, ... .
            String id = disambiguator.disambiguate(rawId);
            ids.put(object, id);
            builder.object(id, eClass.getName());
        }

        for (EObject object : objects) {
            String id = ids.get(object);
            for (EAttribute attribute : object.eClass().getEAllAttributes()) {
                if (attribute.isUnsettable() && !object.eIsSet(attribute)) {
                    continue; // absent slot denotes typed bottom in the source semantics
                }
                Object raw = object.eGet(attribute, true);
                if (raw != null) {
                    builder.attribute(id, attribute.getName(), value(attribute, raw));
                }
            }
        }

        for (AssociationBinding binding : associations) {
            EReference end = binding.canonicalEnd();
            for (EObject source : objects) {
                if (!end.getEContainingClass().isSuperTypeOf(source.eClass())) {
                    continue;
                }
                Object raw = source.eGet(end, true);
                if (raw instanceof Collection<?> targets) {
                    for (Object target : targets) {
                        addLink(builder, binding.name(), source, target, ids);
                    }
                } else if (raw != null) {
                    addLink(builder, binding.name(), source, raw, ids);
                }
            }
        }
        return builder.build();
    }

    private static void addLink(Snapshot.Builder builder, String association,
                                EObject source, Object rawTarget,
                                Map<EObject, String> ids) {
        if (!(rawTarget instanceof EObject target) || !ids.containsKey(target)) {
            throw new InputException("association " + association
                    + " references an object outside the loaded XMI snapshot");
        }
        builder.link(association, ids.get(source), ids.get(target));
    }

    private static List<AssociationBinding> associations(Collection<EClass> classes,
                                                          EcoreXmiOptions options) {
        Set<EReference> visited = java.util.Collections.newSetFromMap(
                new IdentityHashMap<>());
        List<AssociationBinding> result = new ArrayList<>();
        for (EClass eClass : classes) {
            for (EReference reference : eClass.getEReferences()) {
                if (visited.contains(reference)) {
                    continue;
                }
                EReference opposite = reference.getEOpposite();
                if (opposite == null) {
                    throw new InputException("unidirectional EReference is outside the supported "
                            + "binary-association profile: " + qualifiedName(reference));
                }
                EReference canonical = canonical(reference, opposite);
                EReference reverse = canonical == reference ? opposite : reference;
                String name = options.associationNameProvider()
                        .associationName(canonical, reverse);
                if (name == null || name.isBlank()) {
                    throw new InputException("association name provider returned a blank name for "
                            + qualifiedName(canonical));
                }
                result.add(new AssociationBinding(canonical, reverse, name));
                visited.add(reference);
                visited.add(opposite);
            }
        }
        result.sort(Comparator.comparing(AssociationBinding::name));
        return List.copyOf(result);
    }

    private static EReference canonical(EReference left, EReference right) {
        if (left.isContainment() != right.isContainment()) {
            return left.isContainment() ? left : right;
        }
        return qualifiedName(left).compareTo(qualifiedName(right)) <= 0 ? left : right;
    }

    private static Map<String, EClass> classes(List<EPackage> packages) {
        Map<String, EClass> result = new LinkedHashMap<>();
        for (EPackage pkg : packages) {
            for (EClassifier classifier : pkg.getEClassifiers()) {
                if (!(classifier instanceof EClass eClass)) {
                    continue;
                }
                EClass previous = result.putIfAbsent(eClass.getName(), eClass);
                if (previous != null) {
                    throw new InputException("duplicate EClass name cannot be resolved by the "
                            + "OCL frontend: " + eClass.getName());
                }
            }
        }
        if (result.isEmpty()) {
            throw new InputException("Ecore schema declares no EClass");
        }
        return result;
    }

    private static List<EPackage> packages(EPackage root) {
        List<EPackage> result = new ArrayList<>();
        collectPackages(root, result);
        return List.copyOf(result);
    }

    private static void collectPackages(EPackage pkg, List<EPackage> result) {
        result.add(pkg);
        for (EPackage nested : pkg.getESubpackages()) {
            collectPackages(nested, result);
        }
    }

    private static List<EObject> objects(Resource resource) {
        List<EObject> result = new ArrayList<>();
        for (EObject root : resource.getContents()) {
            result.add(root);
            TreeIterator<EObject> descendants = root.eAllContents();
            while (descendants.hasNext()) {
                result.add(descendants.next());
            }
        }
        if (result.isEmpty()) {
            throw new InputException("XMI snapshot contains no model objects");
        }
        return List.copyOf(result);
    }

    private static void validateSnapshot(List<EObject> objects, Set<EPackage> packages) {
        for (EObject object : objects) {
            if (!packages.contains(object.eClass().getEPackage())) {
                throw new InputException("snapshot classifier is outside the loaded package: "
                        + qualifiedName(object.eClass()));
            }
            for (EStructuralFeature feature : object.eClass().getEAllStructuralFeatures()) {
                Object value = object.eGet(feature, true);
                int count = feature.isMany()
                        ? ((Collection<?>) value).size() : (value == null ? 0 : 1);
                if (count < feature.getLowerBound()) {
                    throw new InputException("lower multiplicity violated at "
                            + EcoreUtil.getURI(object) + "." + feature.getName()
                            + ": expected at least " + feature.getLowerBound()
                            + " value(s), found " + count);
                }
                if (feature.getUpperBound() >= 0 && count > feature.getUpperBound()) {
                    throw new InputException("upper multiplicity violated at "
                            + EcoreUtil.getURI(object) + "." + feature.getName());
                }
            }
        }
    }

    private static List<SourceInvariant> invariants(Collection<EClass> classes) {
        List<SourceInvariant> result = new ArrayList<>();
        for (EClass eClass : classes) {
            EAnnotation pivot = eClass.getEAnnotation(PIVOT_OCL_ANNOTATION);
            if (pivot == null) {
                continue;
            }
            Set<String> declared = declaredConstraintNames(eClass);
            if (declared.isEmpty()) {
                declared.addAll(pivot.getDetails().keySet());
            }
            for (String name : declared) {
                String body = pivot.getDetails().get(name);
                if (body == null || body.isBlank()) {
                    throw new InputException("constraint " + eClass.getName() + "::" + name
                            + " is declared but has no Pivot OCL body");
                }
                result.add(new SourceInvariant(eClass.getName(), name, body));
            }
        }
        return List.copyOf(result);
    }

    private static Set<String> declaredConstraintNames(EClass eClass) {
        Set<String> result = new LinkedHashSet<>();
        EAnnotation annotation = eClass.getEAnnotation(ECORE_ANNOTATION);
        if (annotation == null) {
            return result;
        }
        String names = annotation.getDetails().get("constraints");
        if (names != null) {
            for (String name : names.trim().split("\\s+")) {
                if (!name.isBlank()) {
                    result.add(name);
                }
            }
        }
        return result;
    }

    private static OclValue value(EAttribute attribute, Object raw) {
        OclType type = oclType(attribute.getEAttributeType());
        return switch (type.kind()) {
            case BOOLEAN -> new OclValue.BooleanValue(OclType.BOOLEAN,
                    Boolean.TRUE.equals(raw) ? OclValue.BooleanValue.Bool3.TRUE
                            : OclValue.BooleanValue.Bool3.FALSE);
            case INTEGER -> new OclValue.IntegerValue(raw instanceof BigInteger integer
                    ? integer : new BigInteger(raw.toString()));
            case REAL -> new OclValue.RealValue(raw instanceof BigDecimal decimal
                    ? decimal : new BigDecimal(raw.toString()));
            case STRING -> new OclValue.StringValue(raw.toString());
            default -> throw new InputException("unsupported scalar value type for "
                    + qualifiedName(attribute));
        };
    }

    private static OclType oclType(EDataType dataType) {
        if (dataType == EcorePackage.Literals.EBOOLEAN
                || dataType == EcorePackage.Literals.EBOOLEAN_OBJECT) {
            return OclType.BOOLEAN;
        }
        if (dataType == EcorePackage.Literals.EBYTE
                || dataType == EcorePackage.Literals.EBYTE_OBJECT
                || dataType == EcorePackage.Literals.ESHORT
                || dataType == EcorePackage.Literals.ESHORT_OBJECT
                || dataType == EcorePackage.Literals.EINT
                || dataType == EcorePackage.Literals.EINTEGER_OBJECT
                || dataType == EcorePackage.Literals.ELONG
                || dataType == EcorePackage.Literals.ELONG_OBJECT
                || dataType == EcorePackage.Literals.EBIG_INTEGER) {
            return OclType.INTEGER;
        }
        if (dataType == EcorePackage.Literals.EFLOAT
                || dataType == EcorePackage.Literals.EFLOAT_OBJECT
                || dataType == EcorePackage.Literals.EDOUBLE
                || dataType == EcorePackage.Literals.EDOUBLE_OBJECT
                || dataType == EcorePackage.Literals.EBIG_DECIMAL) {
            return OclType.REAL;
        }
        if (dataType == EcorePackage.Literals.ESTRING
                || dataType == EcorePackage.Literals.ECHAR
                || dataType == EcorePackage.Literals.ECHARACTER_OBJECT) {
            return OclType.STRING;
        }
        throw new InputException("EDataType is outside the supported scalar fragment: "
                + qualifiedName(dataType));
    }

    private static int upper(EStructuralFeature feature) {
        return feature.getUpperBound() == EStructuralFeature.UNBOUNDED_MULTIPLICITY
                ? -1 : feature.getUpperBound();
    }

    private static String qualifiedName(EClassifier classifier) {
        return classifier.getEPackage().getName() + "::" + classifier.getName();
    }

    private static String qualifiedName(EStructuralFeature feature) {
        return feature.getEContainingClass().getName() + "::" + feature.getName();
    }

    private static URI fileUri(Path path) {
        return URI.createFileURI(path.toString());
    }

    private static void requireReadable(Path path, String label) throws IOException {
        if (!Files.isRegularFile(path) || !Files.isReadable(path)) {
            throw new IOException(label + " is not a readable file: " + path);
        }
    }

    private static void requireNoLoadErrors(Resource resource, String label) {
        EList<Resource.Diagnostic> errors = resource.getErrors();
        if (!errors.isEmpty()) {
            Resource.Diagnostic first = errors.get(0);
            throw new InputException(label + " could not be loaded: " + first.getMessage()
                    + " (line " + first.getLine() + ", column " + first.getColumn() + ")");
        }
    }

    private record AssociationBinding(EReference canonicalEnd,
                                      EReference oppositeEnd,
                                      String name) {
    }

    private static final class InputException extends IllegalArgumentException {
        private InputException(String message) {
            super(message);
        }
    }
}
