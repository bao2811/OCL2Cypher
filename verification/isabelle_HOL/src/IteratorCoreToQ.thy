theory IteratorCoreToQ
  imports IteratorFront CoreToQ
begin

text \<open>
Second compiler integration step for the V1 quantifiers.  The public
Translate function remains unchanged: this separate, fail-closed entry point
maps precisely the Core iterator terms produced by IteratorFront to the
existing Q Exists3/ForAll3 constructors.  It is merged into the public
pipeline only after Target realization and serialization are checked.
\<close>

fun WF_Q_Quantifier :: "q_expr \<Rightarrow> bool" where
  "WF_Q_Quantifier
     (QE_Exists3
       (QP_Nav receiver [] property observer kind (QT_Class target))
       declaration body) =
     (Q_ObjectCollectionExpr
        (QE_MaterializePlan
          (QP_Nav receiver [] property observer kind (QT_Class target))) \<and>
      Core.cv_kind declaration = CBK_Iterator \<and>
      Core.cv_name declaration \<noteq> '''' \<and>
      Core.cv_type declaration = Ty_Class target \<and>
      Q_BoolExpr body)"
| "WF_Q_Quantifier
     (QE_ForAll3
       (QP_Nav receiver [] property observer kind (QT_Class target))
       declaration body) =
     (Q_ObjectCollectionExpr
        (QE_MaterializePlan
          (QP_Nav receiver [] property observer kind (QT_Class target))) \<and>
      Core.cv_kind declaration = CBK_Iterator \<and>
      Core.cv_name declaration \<noteq> '''' \<and>
      Core.cv_type declaration = Ty_Class target \<and>
      Q_BoolExpr body)"
| "WF_Q_Quantifier _ = False"

lemma WF_Q_Quantifier_is_standard_WF:
  assumes "WF_Q_Quantifier q"
  shows "WF_QExpr q"
  using assms
  by (induction q rule: WF_Q_Quantifier.induct)
     (auto simp: WF_QExpr_def)

definition admit_q_quantifier :: "q_expr \<Rightarrow> q_expr option" where
  "admit_q_quantifier result =
     (if WF_Q_Quantifier result then Some result else None)"

lemma admit_q_quantifier_success:
  assumes "admit_q_quantifier result = Some q"
  shows "q = result \<and> WF_Q_Quantifier q"
  using assms
  unfolding admit_q_quantifier_def
  by (cases "WF_Q_Quantifier result"; simp_all)

fun Translate_Quantifier_Q :: "core_exp \<Rightarrow> q_expr option" where
  "Translate_Quantifier_Q
     (Core.CE_Iter CIK_Exists source_kind source binder
       (Ty_Class binder_class) body) =
     (if binder \<noteq> '''' \<and>
         core_type_of source =
           Some (Ty_Coll
             (if source_kind = CCK_Set then CK_Set else CK_Bag)
             (Ty_Class binder_class))
      then case (Translate source, Translate body) of
        (Some (QE_MaterializePlan plan), Some qbody) \<Rightarrow>
          (let declaration =
             \<lparr>Core.core_var_decl.cv_name = binder,
              cv_kind = CBK_Iterator, cv_type = Ty_Class binder_class\<rparr>;
               result = QE_Exists3 plan declaration qbody
           in admit_q_quantifier result)
      | _ \<Rightarrow> None
      else None)"
| "Translate_Quantifier_Q
     (Core.CE_Iter CIK_ForAll source_kind source binder
       (Ty_Class binder_class) body) =
     (if binder \<noteq> '''' \<and>
         core_type_of source =
           Some (Ty_Coll
             (if source_kind = CCK_Set then CK_Set else CK_Bag)
             (Ty_Class binder_class))
      then case (Translate source, Translate body) of
        (Some (QE_MaterializePlan plan), Some qbody) \<Rightarrow>
          (let declaration =
             \<lparr>Core.core_var_decl.cv_name = binder,
              cv_kind = CBK_Iterator, cv_type = Ty_Class binder_class\<rparr>;
               result = QE_ForAll3 plan declaration qbody
           in admit_q_quantifier result)
      | _ \<Rightarrow> None
      else None)"
| "Translate_Quantifier_Q _ = None"

fun eval_q_quantifier_at ::
  "navigation_store \<Rightarrow> bool_env \<Rightarrow> object_env \<Rightarrow>
   int_attribute_store \<Rightarrow> q_expr \<Rightarrow> bool3" where
  "eval_q_quantifier_at navigation booleans objects store
     (QE_Exists3 plan declaration body) =
     eval_quantifier3 IK_Exists
       (\<lambda>identifier. eval_q_bool_at booleans
          (objects(Core.cv_name declaration := Some identifier)) store body)
       (eval_q_object_collection objects navigation
          (QE_MaterializePlan plan))"
| "eval_q_quantifier_at navigation booleans objects store
     (QE_ForAll3 plan declaration body) =
     eval_quantifier3 IK_ForAll
       (\<lambda>identifier. eval_q_bool_at booleans
          (objects(Core.cv_name declaration := Some identifier)) store body)
       (eval_q_object_collection objects navigation
          (QE_MaterializePlan plan))"
| "eval_q_quantifier_at _ _ _ _ _ = B3_Bottom"

theorem Translate_Quantifier_Q_wf:
  assumes "Translate_Quantifier_Q core = Some q"
  shows "WF_QExpr q"
proof (rule WF_Q_Quantifier_is_standard_WF)
  show "WF_Q_Quantifier q"
    using assms
    by (induction core arbitrary: q rule: Translate_Quantifier_Q.induct)
       (auto dest: admit_q_quantifier_success
             split: core_coll_kind.splits ocl_type.splits option.splits
                    q_expr.splits prod.splits if_splits)
qed

lemma translate_quantifier_components_preserve:
  assumes source: "Translate core_source = Some qsource"
      and body: "Translate core_body = Some qbody"
  shows
    "eval_quantifier3 iterator
       (\<lambda>identifier. eval_core_bool_at booleans
          (objects(binder := Some identifier)) store core_body)
       (eval_core_object_collection objects navigation core_source) =
     eval_quantifier3 iterator
       (\<lambda>identifier. eval_q_bool_at booleans
          (objects(binder := Some identifier)) store qbody)
       (eval_q_object_collection objects navigation qsource)"
proof (rule eval_quantifier3_cong)
  show
    "eval_core_object_collection objects navigation core_source =
     eval_q_object_collection objects navigation qsource"
    using Translate_preserves_object_collection[OF source] by simp
next
  fix occurrences oid
  assume
    "eval_core_object_collection objects navigation core_source =
       Some occurrences"
    "oid \<in> set occurrences"
  show
    "eval_core_bool_at booleans (objects(binder := Some oid))
       store core_body =
     eval_q_bool_at booleans (objects(binder := Some oid))
       store qbody"
    using Translate_preserves_at[OF body] by simp
qed

theorem Translate_Quantifier_Q_preserves:
  assumes compiled: "Translate_Quantifier_Q core = Some q"
  shows
    "eval_q_quantifier_at navigation booleans objects store q =
     eval_core_quantifier_at navigation booleans objects store core"
  using compiled
  by (induction core arbitrary: q rule: Translate_Quantifier_Q.induct)
     (auto dest: admit_q_quantifier_success
           simp: translate_quantifier_components_preserve
           split: core_coll_kind.splits core_iterator_kind.splits
                  ocl_type.splits option.splits q_expr.splits
                  q_plan.splits prod.splits if_splits)

theorem Front_Core_Q_Quantifier_preserves:
  assumes front: "Front_Quantifier source = Some core"
      and translated: "Translate_Quantifier_Q core = Some q"
  shows
    "eval_q_quantifier_at navigation booleans objects store q =
     eval_source_quantifier_at navigation booleans objects store source"
  using Translate_Quantifier_Q_preserves[OF translated]
        Front_Quantifier_preserves[OF front]
  by simp

end
