theory CoreToQ
  imports Semantics
begin

text \<open>
Executable Core-to-Q translation for the admitted Boolean slice.  The
translation is partial and rejects every Core constructor for which this
theory does not yet contain a preservation proof.
\<close>

fun Translate :: "core_exp \<Rightarrow> q_expr option" where
  "Translate (Core.CE_BooleanLit b) = Some (QE_Const (QV_Bool (Some b)))"
| "Translate (Core.CE_IntegerLit n) = Some (QE_Const (QV_Int (Some n)))"
| "Translate (Core.CE_Bottom (Ty_Prim PK_Boolean)) =
     Some (QE_Bottom (QT_Prim QPK_Boolean3))"
| "Translate (Core.CE_Var x (Ty_Prim PK_Boolean)) =
     (if x \<noteq> '''' then Some (QE_Var x (QT_Prim QPK_Boolean3)) else None)"
| "Translate (Core.CE_Var x (Ty_Class classifier)) =
     (if x \<noteq> '''' \<and> classifier \<noteq> ''''
      then Some (QE_Var x (QT_Class classifier)) else None)"
| "Translate (Core.CE_AttrRead receiver property) =
     (if re_prop_k property = RPK_Attribute \<and>
         re_decl_type property = Ty_Prim PK_Integer \<and>
         re_key (re_base property) \<noteq> ''''
      then case Translate receiver of
        Some qreceiver \<Rightarrow>
          (if Q_ObjectExpr qreceiver
           then Some
             (QE_AttrRead qreceiver property (re_key (re_base property)))
           else None)
      | None \<Rightarrow> None
      else None)"
| "Translate (Core.CE_Nav CNK_ToOne receiver property []) =
     (if re_prop_k property = RPK_AssociationEnd \<and>
         Core.re_upper property = 1 \<and>
         re_key (re_base property) \<noteq> ''''
      then case Translate receiver of
        Some qreceiver \<Rightarrow>
          (if Q_ObjectExpr qreceiver
           then Some
             (QE_NavOne qreceiver [] property (re_key (re_base property)))
           else None)
      | None \<Rightarrow> None
      else None)"
| "Translate (Core.CE_Nav CNK_ToMany receiver property []) =
     (if re_prop_k property = RPK_AssociationEnd \<and>
         Core.re_upper property \<noteq> 1 \<and>
         re_key (re_base property) \<noteq> ''''
      then case (Translate receiver, re_decl_type property) of
        (Some qreceiver, Ty_Class target) \<Rightarrow>
          (if Q_ObjectExpr qreceiver \<and> target \<noteq> ''''
           then Some
             (QE_MaterializePlan
               (QP_Nav qreceiver [] property (re_key (re_base property))
                  (if Core.re_unique property then QK_Set else QK_Bag)
                 (QT_Class target)))
           else None)
      | _ \<Rightarrow> None
      else None)"
| "Translate (Core.CE_Let declaration value body) =
     (if Core.cv_type declaration = Ty_Prim PK_Boolean \<and>
         Core.cv_name declaration \<noteq> '''' then
        (case (Translate value, Translate body) of
           (Some qv, Some qb) \<Rightarrow>
             (if Q_BoolExpr qv \<and> Q_BoolExpr qb
              then Some (QE_Let declaration qv qb) else None)
         | _ \<Rightarrow> None)
      else None)"
| "Translate (Core.CE_If condition then_e else_e) =
     (case (Translate condition, Translate then_e, Translate else_e) of
        (Some qc, Some qt, Some qe) \<Rightarrow>
          (if Q_BoolExpr qc \<and> Q_BoolExpr qt \<and> Q_BoolExpr qe
           then Some (QE_If qc qt qe) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Unary CUO_BooleanNot body) =
     (case Translate body of
        Some q \<Rightarrow>
          (if Q_BoolExpr q then Some (QE_Unary QUO_BooleanNot q) else None)
      | None \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_And left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_BoolExpr ql \<and> Q_BoolExpr qr
           then Some (QE_Binary QB_And ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Or left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_BoolExpr ql \<and> Q_BoolExpr qr
           then Some (QE_Binary QB_Or ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Xor left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_BoolExpr ql \<and> Q_BoolExpr qr
           then Some (QE_Binary QB_Xor ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Eq left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_BoolExpr ql \<and> Q_BoolExpr qr
           then Some (QE_Binary QB_Eq ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Neq left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_BoolExpr ql \<and> Q_BoolExpr qr
           then Some (QE_Binary QB_Neq ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Lt left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_IntExpr ql \<and> Q_IntExpr qr
           then Some (QE_Binary QB_Lt ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Le left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_IntExpr ql \<and> Q_IntExpr qr
           then Some (QE_Binary QB_Le ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Gt left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_IntExpr ql \<and> Q_IntExpr qr
           then Some (QE_Binary QB_Gt ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Ge left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_IntExpr ql \<and> Q_IntExpr qr
           then Some (QE_Binary QB_Ge ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate (Core.CE_Binary CB_Implies left right) =
     (case (Translate left, Translate right) of
        (Some ql, Some qr) \<Rightarrow>
          (if Q_BoolExpr ql \<and> Q_BoolExpr qr
           then Some (QE_Binary QB_Implies ql qr) else None)
      | _ \<Rightarrow> None)"
| "Translate _ = None"

lemma Translate_wf_expr:
  assumes "Translate c = Some q"
  shows "WF_QExpr q"
  using assms
  unfolding WF_QExpr_def
  by (induction c arbitrary: q rule: Translate.induct)
     (auto split: ocl_type.splits option.splits prod.splits if_splits)

lemma Translate_preserves_int:
  assumes "Translate c = Some q"
  shows "eval_q_int q = eval_core_int c"
  using assms
  by (induction c arbitrary: q rule: Translate.induct)
     (auto split: ocl_type.splits option.splits prod.splits if_splits)

lemma Translate_preserves_object:
  assumes "Translate c = Some q"
  shows "eval_q_object objects q = eval_core_object objects c"
  using assms
  by (induction c arbitrary: q rule: Translate.induct)
     (auto split: ocl_type.splits option.splits prod.splits if_splits)

lemma Translate_preserves_object_nav:
  assumes "Translate c = Some q"
  shows
    "eval_q_object_nav objects navigation q =
     eval_core_object_nav objects navigation c"
  using assms
  by (induction c arbitrary: q rule: Translate.induct)
     (auto split: ocl_type.splits option.splits prod.splits if_splits)

lemma Translate_preserves_object_collection:
  assumes "Translate c = Some q"
  shows
    "eval_q_object_collection objects navigation q =
     eval_core_object_collection objects navigation c"
  using assms
  by (induction c arbitrary: q rule: Translate.induct)
     (auto simp: normalize_q_occurrences_def
                 Translate_preserves_object_nav
           split: ocl_type.splits option.splits prod.splits if_splits)

lemma Translate_preserves_int_at:
  assumes "Translate c = Some q"
  shows "eval_q_int_at objects store q = eval_core_int_at objects store c"
  using assms
  by (induction c arbitrary: q rule: Translate.induct)
     (auto simp: Translate_preserves_object
           split: ocl_type.splits option.splits prod.splits if_splits)

lemma Translate_preserves:
  assumes "Translate c = Some q"
  shows "eval_q_bool env q = eval_core_bool env c"
  using assms
  by (induction c arbitrary: q env rule: Translate.induct)
     (auto simp: bind_env_def b3_implies_def
           Translate_preserves_int
           split: ocl_type.splits option.splits prod.splits if_splits)

lemma Translate_preserves_at:
  assumes "Translate c = Some q"
  shows
    "eval_q_bool_at env objects store q =
     eval_core_bool_at env objects store c"
  using assms
  by (induction c arbitrary: q env rule: Translate.induct)
     (auto simp: bind_env_def b3_implies_def
           Translate_preserves_int_at
           split: ocl_type.splits option.splits prod.splits if_splits)

definition result_shape_for :: "query_mode \<Rightarrow> q_result_shape" where
  "result_shape_for mode = (if mode = QM_Violations then QS_Ids else QS_Scalar)"

definition result_contract_for :: "query_mode \<Rightarrow> result_contract" where
  "result_contract_for mode =
     \<lparr>rc_shape = result_shape_for mode,
      rc_result_var = ''result'',
      rc_elem_type = (if mode = QM_Violations then ''StableId'' else ''Boolean3''),
      rc_distinct = (mode = QM_Violations),
      rc_whole_bottom = None\<rparr>"

definition translate_root ::
  "core_unit \<Rightarrow> rep_spec \<Rightarrow> query_mode \<Rightarrow> q_query option" where
  "translate_root unit rs mode =
     (case Translate (cu_body unit) of
        None \<Rightarrow> None
      | Some body \<Rightarrow>
          Some \<lparr>qq_rep_key = rs_key rs,
                qq_mode = mode,
                qq_shape = result_shape_for mode,
                qq_context = Some (re_key (Core.resolved_class_elem.re_base (cu_context unit))),
                qq_self = Some (cu_self unit),
                qq_params = [],
                qq_expr = Some body,
                qq_plan = None,
                qq_contract = result_contract_for mode\<rparr>)"

theorem translate_root_wf:
  assumes "translate_root unit rs mode = Some q"
  shows "WF_Q q"
  using assms
  unfolding translate_root_def WF_Q_def wf_exactly_one_body_def
    wf_result_contract_def wf_query_mode_def q_unique_names_def
    result_contract_for_def result_shape_for_def
  by (cases mode; auto split: option.splits)

theorem CoreToQ_wf:
  assumes "Translate c = Some q"
  shows "WF_QExpr q"
  using assms Translate_wf_expr by blast

theorem CoreToQ_preserves:
  assumes "Translate c = Some q"
  shows "eval_q_bool env q = eval_core_bool env c"
  using assms Translate_preserves by blast

theorem CoreToQ_preserves_at:
  assumes "Translate c = Some q"
  shows
    "eval_q_bool_at env objects store q =
     eval_core_bool_at env objects store c"
  using assms Translate_preserves_at by blast

end
