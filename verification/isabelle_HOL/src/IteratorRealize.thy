theory IteratorRealize
  imports IteratorCoreToQ Realize
begin

text \<open>
Third integration step for the V1 quantifiers.  CE_ReduceBool3 is the formal
TargetSigma macro for the finite ReduceExpression expansion prescribed by
Rule 06 R-E-EXISTS3/R-E-FORALL3.  It is deliberately not native Cypher
any/all: its denotation is the tagged three-valued fold, including defined
empty identities and whole-collection bottom propagation.  The concrete
ReduceExpression expansion and its serializer remain the next refinement
step.
\<close>

fun Realize_Quantifier :: "q_expr \<Rightarrow> cy_expr option" where
  "Realize_Quantifier
     (QE_Exists3 plan declaration body) =
     (if WF_Q_Quantifier (QE_Exists3 plan declaration body)
            \<and> Core.cv_name declaration \<noteq> ''''
            \<and> Q_ObjectCollectionExpr (QE_MaterializePlan plan)
            \<and> Q_BoolExpr body
         then case (realize_expr (QE_MaterializePlan plan),
                    realize_expr body) of
           (Some target_source, Some target_body) \<Rightarrow>
             Some (TargetSigma.CE_ReduceBool3 QK_Any
               \<lparr>TargetSigma.cy_var.cv_name = Core.cv_name declaration\<rparr>
               target_source target_body)
         | _ \<Rightarrow> None
         else None)"
| "Realize_Quantifier
     (QE_ForAll3 plan declaration body) =
     (if WF_Q_Quantifier (QE_ForAll3 plan declaration body)
            \<and> Core.cv_name declaration \<noteq> ''''
            \<and> Q_ObjectCollectionExpr (QE_MaterializePlan plan)
            \<and> Q_BoolExpr body
         then case (realize_expr (QE_MaterializePlan plan),
                    realize_expr body) of
           (Some target_source, Some target_body) \<Rightarrow>
             Some (TargetSigma.CE_ReduceBool3 QK_All
               \<lparr>TargetSigma.cy_var.cv_name = Core.cv_name declaration\<rparr>
               target_source target_body)
         | _ \<Rightarrow> None
         else None)"
| "Realize_Quantifier _ = None"

fun eval_target_quantifier_at ::
  "navigation_store \<Rightarrow> bool_env \<Rightarrow> object_env \<Rightarrow>
   int_attribute_store \<Rightarrow> cy_expr \<Rightarrow> bool3" where
  "eval_target_quantifier_at navigation booleans objects store
     (TargetSigma.CE_ReduceBool3 quantifier variable source predicate) =
     eval_quantifier3
       (if quantifier = QK_Any then IK_Exists else IK_ForAll)
       (\<lambda>identifier. eval_cy_bool_at booleans
          (objects(TargetSigma.cv_name variable := Some identifier))
          store predicate)
       (eval_cy_object_collection objects navigation source)"
| "eval_target_quantifier_at _ _ _ _ _ = B3_Bottom"

lemma realize_object_collection_wf:
  assumes source_wf: "Q_ObjectCollectionExpr source"
      and realized: "realize_expr source = Some target"
  shows "Cy_ObjectCollectionExpr target"
  using source_wf realized
  by (induction source arbitrary: target rule: realize_expr.induct)
     (auto split: option.splits prod.splits if_splits)

theorem Realize_Quantifier_wf:
  assumes "Realize_Quantifier q = Some target"
  shows "WF_CyBoolExpr target"
  using assms
  by (cases q)
     (auto intro: realize_expr_wf realize_object_collection_wf
           split: option.splits prod.splits if_splits)

lemma realize_quantifier_components_preserve:
  assumes source_wf: "Q_ObjectCollectionExpr qsource"
      and source: "realize_expr qsource = Some target_source"
      and body_wf: "Q_BoolExpr qbody"
      and body: "realize_expr qbody = Some target_body"
  shows
    "eval_quantifier3 iterator
       (\<lambda>identifier. eval_q_bool_at booleans
          (objects(binder := Some identifier)) store qbody)
       (eval_q_object_collection objects navigation qsource) =
     eval_quantifier3 iterator
       (\<lambda>identifier. eval_cy_bool_at booleans
          (objects(binder := Some identifier)) store target_body)
       (eval_cy_object_collection objects navigation target_source)"
proof (rule eval_quantifier3_cong)
  show
    "eval_q_object_collection objects navigation qsource =
     eval_cy_object_collection objects navigation target_source"
    using realize_expr_preserves_object_collection[OF source_wf source]
    by simp
next
  fix occurrences oid
  assume
    "eval_q_object_collection objects navigation qsource = Some occurrences"
    "oid \<in> set occurrences"
  show
    "eval_q_bool_at booleans (objects(binder := Some oid)) store qbody =
     eval_cy_bool_at booleans (objects(binder := Some oid)) store target_body"
    using realize_expr_preserves_at[OF body_wf body] by simp
qed

theorem Realize_Quantifier_preserves:
  assumes "Realize_Quantifier q = Some target"
  shows
    "eval_target_quantifier_at navigation booleans objects store target =
     eval_q_quantifier_at navigation booleans objects store q"
  using assms
  by (cases q)
     (auto simp: realize_quantifier_components_preserve
           split: option.splits prod.splits if_splits)

theorem Front_Core_Q_Target_Quantifier_preserves:
  assumes front: "Front_Quantifier source = Some core"
      and translated: "Translate_Quantifier_Q core = Some q"
      and realized: "Realize_Quantifier q = Some target"
  shows
    "eval_target_quantifier_at navigation booleans objects store target =
     eval_source_quantifier_at navigation booleans objects store source"
  using Realize_Quantifier_preserves[OF realized]
        Front_Core_Q_Quantifier_preserves[OF front translated]
  by simp

end
