package org.uet.dse.ocl2cypher.input.emf;

import java.util.Objects;
import org.eclipse.emf.ecore.util.EcoreUtil;

/** Policy choices for the Ecore/XMI input boundary. */
public record EcoreXmiOptions(String modelKey,
                              StableIdProvider stableIdProvider,
                              AssociationNameProvider associationNameProvider,
                              boolean validateSnapshot) {

    public EcoreXmiOptions {
        Objects.requireNonNull(modelKey, "model key");
        if (modelKey.isBlank()) {
            throw new IllegalArgumentException("model key must not be blank");
        }
        Objects.requireNonNull(stableIdProvider, "stable ID provider");
        Objects.requireNonNull(associationNameProvider, "association name provider");
    }

    public static EcoreXmiOptions defaults(String modelKey) {
        return new EcoreXmiOptions(modelKey,
                (object, resource) -> {
                    String explicit = EcoreUtil.getID(object);
                    return explicit == null || explicit.isBlank()
                            ? resource.getURIFragment(object) : explicit;
                },
                (end, opposite) -> end.getEContainingClass().getName()
                        + "::" + end.getName(),
                true);
    }

    public EcoreXmiOptions withStableIdProvider(StableIdProvider provider) {
        return new EcoreXmiOptions(modelKey, provider, associationNameProvider,
                validateSnapshot);
    }

    public EcoreXmiOptions withAssociationNameProvider(AssociationNameProvider provider) {
        return new EcoreXmiOptions(modelKey, stableIdProvider, provider,
                validateSnapshot);
    }

    public EcoreXmiOptions withoutSnapshotValidation() {
        return new EcoreXmiOptions(modelKey, stableIdProvider,
                associationNameProvider, false);
    }
}
