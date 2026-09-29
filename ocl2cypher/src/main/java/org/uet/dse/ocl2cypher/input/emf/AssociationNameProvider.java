package org.uet.dse.ocl2cypher.input.emf;

import org.eclipse.emf.ecore.EReference;

/** Chooses the canonical name/key of a paired EReference association. */
@FunctionalInterface
public interface AssociationNameProvider {
    String associationName(EReference canonicalEnd, EReference oppositeEnd);
}
