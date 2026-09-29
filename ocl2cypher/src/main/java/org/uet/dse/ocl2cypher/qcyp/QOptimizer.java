package org.uet.dse.ocl2cypher.qcyp;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.uet.dse.ocl2cypher.core.CoreDeclaration;

/**
 * Scope-preserving optimizations from {@code Q} to {@code Q_opt}.
 *
 * <p>The first deliberately small pass shares an identical to-one navigation
 * occurring in both operands of a binary expression.  It introduces a typed
 * Q {@code Let}; consequently realization serializes the navigation once and
 * both occurrences read the same bound value.  Candidate discovery never
 * crosses a lexical binder, a conditional branch, a fold, or a materialized
 * plan.  This makes the rewrite local and prevents capture or speculative
 * evaluation across a semantic boundary.
 */
public final class QOptimizer {
    private int nextDeclarationId;

    private QOptimizer(int nextDeclarationId) {
        this.nextDeclarationId = nextDeclarationId;
    }

    /** Optimize a well-formed query while preserving all root contracts. */
    public static QQuery optimize(QQuery query) {
        if (query == null) throw new IllegalArgumentException("Q query is required");
        QOptimizer optimizer = new QOptimizer(maxDeclarationId(query) + 1);
        QNode.QExpr expression = query.expressionBody() == null
                ? null : optimizer.expression(query.expressionBody());
        QNode.QPlan plan = query.planBody() == null
                ? null : optimizer.plan(query.planBody());
        if (expression == query.expressionBody() && plan == query.planBody()) return query;
        return new QQuery(expression, plan, query.resultShape(), query.mode(),
                query.resultType(), query.contextClassKey(), query.selfVariable(),
                query.identityProjection());
    }

    private QNode.QExpr expression(QNode.QExpr e) {
        if (e instanceof QNode.QExpr.Let x) {
            QNode.QExpr value = expression(x.value);
            QNode.QExpr body = expression(x.body);
            return value == x.value && body == x.body ? e
                    : new QNode.QExpr.Let(x.span, x.binder, value, body);
        }
        if (e instanceof QNode.QExpr.IfExpr x) {
            QNode.QExpr condition = expression(x.condition);
            QNode.QExpr thenExpr = expression(x.thenExpr);
            QNode.QExpr elseExpr = expression(x.elseExpr);
            return condition == x.condition && thenExpr == x.thenExpr && elseExpr == x.elseExpr
                    ? e : new QNode.QExpr.IfExpr(x.span, condition, thenExpr, elseExpr, x.type);
        }
        if (e instanceof QNode.QExpr.ReadAttribute x) {
            QNode.QExpr source = expression(x.source);
            return source == x.source ? e : new QNode.QExpr.ReadAttribute(x.span, source,
                    x.ownerClassKey, x.attributeName, x.type);
        }
        if (e instanceof QNode.QExpr.NavigateOne x) {
            QNode.QExpr source = expression(x.source);
            List<QNode.QExpr> qualifiers = expressions(x.qualifiers);
            return source == x.source && qualifiers == x.qualifiers ? e
                    : new QNode.QExpr.NavigateOne(x.span, source, x.associationKey,
                            x.roleName, qualifiers, x.type, x.reverse,
                            x.associationClass, x.viaAssociationClass);
        }
        if (e instanceof QNode.QExpr.TypeTest x) {
            QNode.QExpr source = expression(x.source);
            return source == x.source ? e
                    : new QNode.QExpr.TypeTest(x.span, x.testKind, source, x.targetClassKey);
        }
        if (e instanceof QNode.QExpr.TypeCast x) {
            QNode.QExpr source = expression(x.source);
            return source == x.source ? e
                    : new QNode.QExpr.TypeCast(x.span, source, x.targetClassKey);
        }
        if (e instanceof QNode.QExpr.Unary x) {
            QNode.QExpr operand = expression(x.operand);
            return operand == x.operand ? e
                    : new QNode.QExpr.Unary(x.span, x.operator, operand, x.type);
        }
        if (e instanceof QNode.QExpr.Binary x) {
            QNode.QExpr left = expression(x.left);
            QNode.QExpr right = expression(x.right);
            QNode.QExpr.Binary binary = new QNode.QExpr.Binary(
                    x.span, x.operator, left, right, x.type);
            QNode.QExpr sharedCollection = shareIsUniqueImages(binary);
            if (sharedCollection != binary) return sharedCollection;
            return shareNavigationAcrossOperands(binary);
        }
        if (e instanceof QNode.QExpr.Coerce x) {
            QNode.QExpr source = expression(x.source);
            return source == x.source ? e
                    : new QNode.QExpr.Coerce(x.span, x.kind, x.sourceType, source, x.type);
        }
        if (e instanceof QNode.QExpr.Exists3 x) {
            QNode.QPlan source = plan(x.source);
            QNode.QExpr predicate = expression(x.predicate);
            return source == x.source && predicate == x.predicate ? e
                    : new QNode.QExpr.Exists3(x.span, source, x.iterator, predicate);
        }
        if (e instanceof QNode.QExpr.ForAll3 x) {
            QNode.QPlan source = plan(x.source);
            QNode.QExpr predicate = expression(x.predicate);
            return source == x.source && predicate == x.predicate ? e
                    : new QNode.QExpr.ForAll3(x.span, source, x.iterator, predicate);
        }
        if (e instanceof QNode.QExpr.CollectionLiteral x) {
            List<QNode.QExpr> elements = expressions(x.elements);
            return elements == x.elements ? e
                    : new QNode.QExpr.CollectionLiteral(x.span, x.collectionKind,
                            elements, x.type);
        }
        if (e instanceof QNode.QExpr.IncludesFamily x) {
            QNode.QExpr source = expression(x.source);
            QNode.QExpr element = expression(x.element);
            return source == x.source && element == x.element ? e
                    : new QNode.QExpr.IncludesFamily(x.span, x.includesKind,
                            source, element, x.type);
        }
        if (e instanceof QNode.QExpr.CountFamily x) {
            QNode.QExpr source = expression(x.source);
            QNode.QExpr element = x.element == null ? null : expression(x.element);
            return source == x.source && element == x.element ? e
                    : new QNode.QExpr.CountFamily(x.span, x.countKind,
                            source, element, x.type);
        }
        if (e instanceof QNode.QExpr.SetAlgebra x) {
            QNode.QExpr left = expression(x.left);
            QNode.QExpr right = expression(x.right);
            return left == x.left && right == x.right ? e
                    : new QNode.QExpr.SetAlgebra(x.span, x.operator, left, right, x.type);
        }
        if (e instanceof QNode.QExpr.Materialize x) {
            QNode.QPlan p = plan(x.plan);
            return p == x.plan ? e : new QNode.QExpr.Materialize(x.span, p);
        }
        return e;
    }

    private QNode.QPlan plan(QNode.QPlan p) {
        if (p instanceof QNode.QPlan.FromCollection x) {
            QNode.QExpr collection = expression(x.collection);
            return collection == x.collection ? p
                    : new QNode.QPlan.FromCollection(x.span, collection);
        }
        if (p instanceof QNode.QPlan.NavigateMany x) {
            QNode.QExpr source = expression(x.source);
            List<QNode.QExpr> qualifiers = expressions(x.qualifiers);
            return source == x.source && qualifiers == x.qualifiers ? p
                    : new QNode.QPlan.NavigateMany(x.span, source, x.associationKey,
                            x.roleName, qualifiers, x.type, x.reverse,
                            x.associationClass, x.viaAssociationClass);
        }
        if (p instanceof QNode.QPlan.Filter x) {
            QNode.QPlan source = plan(x.source);
            QNode.QExpr predicate = expression(x.predicate);
            return source == x.source && predicate == x.predicate ? p
                    : new QNode.QPlan.Filter(x.span, source, x.iterator,
                            predicate, x.isSelect);
        }
        if (p instanceof QNode.QPlan.Collect x) {
            QNode.QPlan source = plan(x.source);
            QNode.QExpr body = expression(x.body);
            return source == x.source && body == x.body ? p
                    : new QNode.QPlan.Collect(x.span, source, x.iterator, body);
        }
        if (p instanceof QNode.QPlan.Distinct x) {
            QNode.QPlan source = plan(x.source);
            return source == x.source ? p : new QNode.QPlan.Distinct(x.span, source);
        }
        if (p instanceof QNode.QPlan.PlanLet x) {
            QNode.QExpr value = expression(x.value);
            QNode.QPlan body = plan(x.body);
            return value == x.value && body == x.body ? p
                    : new QNode.QPlan.PlanLet(x.span, x.binder, value, body);
        }
        return p;
    }

    private List<QNode.QExpr> expressions(List<QNode.QExpr> input) {
        List<QNode.QExpr> output = new ArrayList<>(input.size());
        boolean changed = false;
        for (QNode.QExpr expression : input) {
            QNode.QExpr optimized = expression(expression);
            output.add(optimized);
            changed |= optimized != expression;
        }
        return changed ? List.copyOf(output) : input;
    }

    private QNode.QExpr shareNavigationAcrossOperands(QNode.QExpr.Binary binary) {
        Map<String, QNode.QExpr.NavigateOne> left = new LinkedHashMap<>();
        Map<String, QNode.QExpr.NavigateOne> right = new LinkedHashMap<>();
        collectLocalNavigations(binary.left, left);
        collectLocalNavigations(binary.right, right);

        String selected = null;
        for (String key : left.keySet()) {
            if (right.containsKey(key) && (selected == null || key.length() > selected.length())) {
                selected = key;
            }
        }
        if (selected == null) return binary;

        QNode.QExpr.NavigateOne value = left.get(selected);
        CoreDeclaration binder = new CoreDeclaration(nextDeclarationId++,
                "qSharedNavigation", CoreDeclaration.Kind.LET, value.type);
        QNode.QExpr variable = new QNode.QExpr.Variable(value.span, binder);
        QNode.QExpr newLeft = replaceLocalNavigation(binary.left, selected, variable);
        QNode.QExpr newRight = replaceLocalNavigation(binary.right, selected, variable);
        QNode.QExpr body = new QNode.QExpr.Binary(binary.span, binary.operator,
                newLeft, newRight, binary.type);
        return new QNode.QExpr.Let(binary.span, binder, value, body);
    }

    /**
     * Canonicalize the isUnique cardinality pattern so its projected Bag is
     * evaluated once and its iterator declaration has exactly one owner.
     */
    private QNode.QExpr shareIsUniqueImages(QNode.QExpr.Binary binary) {
        if (binary.operator != org.uet.dse.ocl2cypher.core.CoreExpr.BinaryOp.VALUE_EQUAL
                || !(binary.left instanceof QNode.QExpr.Unary leftSize)
                || !(binary.right instanceof QNode.QExpr.Unary rightSize)
                || leftSize.operator
                        != org.uet.dse.ocl2cypher.core.CoreExpr.UnaryOp.COLLECTION_SIZE
                || rightSize.operator
                        != org.uet.dse.ocl2cypher.core.CoreExpr.UnaryOp.COLLECTION_SIZE
                || !(leftSize.operand instanceof QNode.QExpr.Materialize allImages)
                || !(rightSize.operand instanceof QNode.QExpr.Materialize distinctImages)
                || !(distinctImages.plan instanceof QNode.QPlan.Distinct distinct)
                || !NormQ.structuralKey(allImages.plan)
                        .equals(NormQ.structuralKey(distinct.source))) {
            return binary;
        }

        CoreDeclaration binder = new CoreDeclaration(nextDeclarationId++,
                "__oclIsUniqueImages", CoreDeclaration.Kind.LET, allImages.type);
        QNode.QExpr variable = new QNode.QExpr.Variable(binary.span, binder);
        QNode.QExpr sharedLeftSize = new QNode.QExpr.Unary(binary.span,
                org.uet.dse.ocl2cypher.core.CoreExpr.UnaryOp.COLLECTION_SIZE,
                variable, org.uet.dse.ocl2cypher.runtime.OclType.INTEGER);
        QNode.QPlan distinctFromVariable = new QNode.QPlan.Distinct(binary.span,
                new QNode.QPlan.FromCollection(binary.span, variable));
        QNode.QExpr sharedRightSize = new QNode.QExpr.Unary(binary.span,
                org.uet.dse.ocl2cypher.core.CoreExpr.UnaryOp.COLLECTION_SIZE,
                new QNode.QExpr.Materialize(binary.span, distinctFromVariable),
                org.uet.dse.ocl2cypher.runtime.OclType.INTEGER);
        QNode.QExpr comparison = new QNode.QExpr.Binary(binary.span, binary.operator,
                sharedLeftSize, sharedRightSize, binary.type);
        return new QNode.QExpr.Let(binary.span, binder, allImages, comparison);
    }

    /** Collect only inside the current lexical/evaluation region. */
    private static void collectLocalNavigations(QNode.QExpr e,
                                                 Map<String, QNode.QExpr.NavigateOne> out) {
        if (e instanceof QNode.QExpr.NavigateOne x) {
            out.putIfAbsent(NormQ.structuralKey(x), x);
            collectLocalNavigations(x.source, out);
            x.qualifiers.forEach(q -> collectLocalNavigations(q, out));
        } else if (e instanceof QNode.QExpr.ReadAttribute x) {
            collectLocalNavigations(x.source, out);
        } else if (e instanceof QNode.QExpr.TypeTest x) {
            collectLocalNavigations(x.source, out);
        } else if (e instanceof QNode.QExpr.TypeCast x) {
            collectLocalNavigations(x.source, out);
        } else if (e instanceof QNode.QExpr.Unary x) {
            collectLocalNavigations(x.operand, out);
        } else if (e instanceof QNode.QExpr.Binary x) {
            collectLocalNavigations(x.left, out);
            collectLocalNavigations(x.right, out);
        } else if (e instanceof QNode.QExpr.Coerce x) {
            collectLocalNavigations(x.source, out);
        } else if (e instanceof QNode.QExpr.CollectionLiteral x) {
            x.elements.forEach(q -> collectLocalNavigations(q, out));
        } else if (e instanceof QNode.QExpr.IncludesFamily x) {
            collectLocalNavigations(x.source, out);
            collectLocalNavigations(x.element, out);
        } else if (e instanceof QNode.QExpr.CountFamily x) {
            collectLocalNavigations(x.source, out);
            if (x.element != null) collectLocalNavigations(x.element, out);
        } else if (e instanceof QNode.QExpr.SetAlgebra x) {
            collectLocalNavigations(x.left, out);
            collectLocalNavigations(x.right, out);
        }
        // Let, IfExpr, folds and Materialize are intentional boundaries.
    }

    private static QNode.QExpr replaceLocalNavigation(QNode.QExpr e, String key,
                                                       QNode.QExpr variable) {
        if (e instanceof QNode.QExpr.NavigateOne x) {
            if (NormQ.structuralKey(x).equals(key)) return variable;
            QNode.QExpr source = replaceLocalNavigation(x.source, key, variable);
            List<QNode.QExpr> qualifiers = replaceLocalNavigations(x.qualifiers, key, variable);
            return source == x.source && qualifiers == x.qualifiers ? e
                    : new QNode.QExpr.NavigateOne(x.span, source, x.associationKey,
                            x.roleName, qualifiers, x.type, x.reverse,
                            x.associationClass, x.viaAssociationClass);
        }
        if (e instanceof QNode.QExpr.ReadAttribute x) {
            QNode.QExpr source = replaceLocalNavigation(x.source, key, variable);
            return source == x.source ? e : new QNode.QExpr.ReadAttribute(x.span, source,
                    x.ownerClassKey, x.attributeName, x.type);
        }
        if (e instanceof QNode.QExpr.TypeTest x) {
            QNode.QExpr source = replaceLocalNavigation(x.source, key, variable);
            return source == x.source ? e
                    : new QNode.QExpr.TypeTest(x.span, x.testKind, source, x.targetClassKey);
        }
        if (e instanceof QNode.QExpr.TypeCast x) {
            QNode.QExpr source = replaceLocalNavigation(x.source, key, variable);
            return source == x.source ? e
                    : new QNode.QExpr.TypeCast(x.span, source, x.targetClassKey);
        }
        if (e instanceof QNode.QExpr.Unary x) {
            QNode.QExpr operand = replaceLocalNavigation(x.operand, key, variable);
            return operand == x.operand ? e
                    : new QNode.QExpr.Unary(x.span, x.operator, operand, x.type);
        }
        if (e instanceof QNode.QExpr.Binary x) {
            QNode.QExpr left = replaceLocalNavigation(x.left, key, variable);
            QNode.QExpr right = replaceLocalNavigation(x.right, key, variable);
            return left == x.left && right == x.right ? e
                    : new QNode.QExpr.Binary(x.span, x.operator, left, right, x.type);
        }
        if (e instanceof QNode.QExpr.Coerce x) {
            QNode.QExpr source = replaceLocalNavigation(x.source, key, variable);
            return source == x.source ? e
                    : new QNode.QExpr.Coerce(x.span, x.kind, x.sourceType, source, x.type);
        }
        if (e instanceof QNode.QExpr.CollectionLiteral x) {
            List<QNode.QExpr> elements = replaceLocalNavigations(x.elements, key, variable);
            return elements == x.elements ? e
                    : new QNode.QExpr.CollectionLiteral(x.span, x.collectionKind,
                            elements, x.type);
        }
        if (e instanceof QNode.QExpr.IncludesFamily x) {
            QNode.QExpr source = replaceLocalNavigation(x.source, key, variable);
            QNode.QExpr element = replaceLocalNavigation(x.element, key, variable);
            return source == x.source && element == x.element ? e
                    : new QNode.QExpr.IncludesFamily(x.span, x.includesKind,
                            source, element, x.type);
        }
        if (e instanceof QNode.QExpr.CountFamily x) {
            QNode.QExpr source = replaceLocalNavigation(x.source, key, variable);
            QNode.QExpr element = x.element == null ? null
                    : replaceLocalNavigation(x.element, key, variable);
            return source == x.source && element == x.element ? e
                    : new QNode.QExpr.CountFamily(x.span, x.countKind,
                            source, element, x.type);
        }
        if (e instanceof QNode.QExpr.SetAlgebra x) {
            QNode.QExpr left = replaceLocalNavigation(x.left, key, variable);
            QNode.QExpr right = replaceLocalNavigation(x.right, key, variable);
            return left == x.left && right == x.right ? e
                    : new QNode.QExpr.SetAlgebra(x.span, x.operator, left, right, x.type);
        }
        return e;
    }

    private static List<QNode.QExpr> replaceLocalNavigations(List<QNode.QExpr> input,
                                                              String key,
                                                              QNode.QExpr variable) {
        List<QNode.QExpr> output = new ArrayList<>(input.size());
        boolean changed = false;
        for (QNode.QExpr expression : input) {
            QNode.QExpr replaced = replaceLocalNavigation(expression, key, variable);
            output.add(replaced);
            changed |= replaced != expression;
        }
        return changed ? List.copyOf(output) : input;
    }

    private static int maxDeclarationId(QQuery query) {
        int max = query.selfVariable() == null ? 0 : query.selfVariable().id();
        if (query.expressionBody() != null) max = max(max, query.expressionBody());
        if (query.planBody() != null) max = max(max, query.planBody());
        return max;
    }

    private static int max(int current, QNode.QExpr e) {
        if (e instanceof QNode.QExpr.Variable x) return Math.max(current, x.declaration.id());
        if (e instanceof QNode.QExpr.Let x) {
            return max(max(Math.max(current, x.binder.id()), x.value), x.body);
        }
        if (e instanceof QNode.QExpr.IfExpr x) {
            return max(max(max(current, x.condition), x.thenExpr), x.elseExpr);
        }
        if (e instanceof QNode.QExpr.ReadAttribute x) return max(current, x.source);
        if (e instanceof QNode.QExpr.NavigateOne x) {
            int result = max(current, x.source);
            for (QNode.QExpr q : x.qualifiers) result = max(result, q);
            return result;
        }
        if (e instanceof QNode.QExpr.TypeTest x) return max(current, x.source);
        if (e instanceof QNode.QExpr.TypeCast x) return max(current, x.source);
        if (e instanceof QNode.QExpr.Unary x) return max(current, x.operand);
        if (e instanceof QNode.QExpr.Binary x) return max(max(current, x.left), x.right);
        if (e instanceof QNode.QExpr.Coerce x) return max(current, x.source);
        if (e instanceof QNode.QExpr.Exists3 x) {
            return max(max(Math.max(current, x.iterator.id()), x.source), x.predicate);
        }
        if (e instanceof QNode.QExpr.ForAll3 x) {
            return max(max(Math.max(current, x.iterator.id()), x.source), x.predicate);
        }
        if (e instanceof QNode.QExpr.CollectionLiteral x) {
            int result = current;
            for (QNode.QExpr q : x.elements) result = max(result, q);
            return result;
        }
        if (e instanceof QNode.QExpr.IncludesFamily x) return max(max(current, x.source), x.element);
        if (e instanceof QNode.QExpr.CountFamily x) {
            int result = max(current, x.source);
            return x.element == null ? result : max(result, x.element);
        }
        if (e instanceof QNode.QExpr.SetAlgebra x) return max(max(current, x.left), x.right);
        if (e instanceof QNode.QExpr.Materialize x) return max(current, x.plan);
        return current;
    }

    private static int max(int current, QNode.QPlan p) {
        if (p instanceof QNode.QPlan.FromCollection x) return max(current, x.collection);
        if (p instanceof QNode.QPlan.ScanClass x) return Math.max(current, x.variable.id());
        if (p instanceof QNode.QPlan.NavigateMany x) {
            int result = max(current, x.source);
            for (QNode.QExpr q : x.qualifiers) result = max(result, q);
            return result;
        }
        if (p instanceof QNode.QPlan.Filter x) {
            return max(max(Math.max(current, x.iterator.id()), x.source), x.predicate);
        }
        if (p instanceof QNode.QPlan.Collect x) {
            return max(max(Math.max(current, x.iterator.id()), x.source), x.body);
        }
        if (p instanceof QNode.QPlan.Distinct x) return max(current, x.source);
        if (p instanceof QNode.QPlan.PlanLet x) {
            return max(max(Math.max(current, x.binder.id()), x.value), x.body);
        }
        return current;
    }
}
