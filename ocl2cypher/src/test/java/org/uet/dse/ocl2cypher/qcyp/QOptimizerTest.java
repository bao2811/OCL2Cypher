package org.uet.dse.ocl2cypher.qcyp;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.core.CoreDeclaration;
import org.uet.dse.ocl2cypher.core.CoreExpr;
import org.uet.dse.ocl2cypher.diagnostics.SourceSpan;
import org.uet.dse.ocl2cypher.runtime.OclType;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

class QOptimizerTest {
    private static final SourceSpan S = SourceSpan.UNKNOWN;

    @Test
    void sharesRepeatedNavigationWithOneFreshTypedLet() {
        CoreDeclaration self = new CoreDeclaration(
                1, "self", CoreDeclaration.Kind.SELF, OclType.clazz("Branch"));
        QNode.QExpr source = new QNode.QExpr.Variable(S, self);
        QNode.QExpr first = navigation(source);
        QNode.QExpr second = navigation(source);
        QNode.QExpr body = new QNode.QExpr.Binary(S, CoreExpr.BinaryOp.VALUE_EQUAL,
                first, second, OclType.BOOLEAN);
        QQuery query = new QQuery(body, null, QQuery.QResultShape.IDS,
                QQuery.QueryMode.VIOLATIONS, null, "Branch", self, true);

        QQuery optimized = QOptimizer.optimize(query);
        assertTrue(optimized.expressionBody() instanceof QNode.QExpr.Let);
        QNode.QExpr.Let let = (QNode.QExpr.Let) optimized.expressionBody();
        assertEquals(OclType.clazz("Employee"), let.binder.type());
        assertEquals(CoreDeclaration.Kind.LET, let.binder.kind());
        assertEquals(2, let.binder.id());
        assertEquals(1, navigationCount(optimized.expressionBody()));
        assertTrue(QValidator.validate(optimized).isEmpty(),
                () -> QValidator.validate(optimized).toString());
        assertEquals(NormQ.structuralKey(optimized.expressionBody()),
                NormQ.structuralKey(QOptimizer.optimize(optimized).expressionBody()),
                "Q optimization must be idempotent");
    }

    private static QNode.QExpr navigation(QNode.QExpr source) {
        return new QNode.QExpr.NavigateOne(S, source, "BranchManager",
                "manager", List.of(), OclType.clazz("Employee"));
    }

    private static int navigationCount(QNode.QExpr expression) {
        if (expression instanceof QNode.QExpr.NavigateOne x) {
            int count = 1 + navigationCount(x.source);
            for (QNode.QExpr qualifier : x.qualifiers) count += navigationCount(qualifier);
            return count;
        }
        if (expression instanceof QNode.QExpr.Let x) {
            return navigationCount(x.value) + navigationCount(x.body);
        }
        if (expression instanceof QNode.QExpr.Binary x) {
            return navigationCount(x.left) + navigationCount(x.right);
        }
        if (expression instanceof QNode.QExpr.ReadAttribute x) return navigationCount(x.source);
        if (expression instanceof QNode.QExpr.Unary x) return navigationCount(x.operand);
        if (expression instanceof QNode.QExpr.Coerce x) return navigationCount(x.source);
        return 0;
    }
}
