package org.uet.dse.ocl2cypher.input.emf;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.resource.Resource;

/** Chooses the model-scoped stable identity used for one XMI object. */
@FunctionalInterface
public interface StableIdProvider {
    String stableId(EObject object, Resource resource);
}
