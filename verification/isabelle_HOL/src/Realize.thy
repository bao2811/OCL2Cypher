theory Realize
  imports CoreToQ Representation
begin

text \<open>
Executable Q-to-TargetSigma realization for the admitted Boolean slice.
Implication is realized as NOT-left OR right.  Boolean let is realized by
capture-free inlining after its value and body have been realized.  This is
sound because the admitted TargetSigma expression slice has no binders.
\<close>

fun subst_cy_bool :: "string \<Rightarrow> cy_expr \<Rightarrow> cy_expr \<Rightarrow> cy_expr" where
  "subst_cy_bool x replacement (TargetSigma.CE_VarE v) =
     (if TargetSigma.cv_name v = x then replacement
      else TargetSigma.CE_VarE v)"
| "subst_cy_bool _ _ TargetSigma.CE_Null = TargetSigma.CE_Null"
| "subst_cy_bool _ _ (TargetSigma.CE_BoolLit b) =
     TargetSigma.CE_BoolLit b"
| "subst_cy_bool x replacement (TargetSigma.CE_Unary CUNot body) =
     TargetSigma.CE_Unary CUNot (subst_cy_bool x replacement body)"
| "subst_cy_bool x replacement (TargetSigma.CE_Unary CUIsNull body) =
     TargetSigma.CE_Unary CUIsNull (subst_cy_bool x replacement body)"
| "subst_cy_bool x replacement (TargetSigma.CE_Binary CBX_And left right) =
     TargetSigma.CE_Binary CBX_And
       (subst_cy_bool x replacement left)
       (subst_cy_bool x replacement right)"
| "subst_cy_bool x replacement (TargetSigma.CE_Binary CBX_Or left right) =
     TargetSigma.CE_Binary CBX_Or
       (subst_cy_bool x replacement left)
       (subst_cy_bool x replacement right)"
| "subst_cy_bool x replacement (TargetSigma.CE_Binary CBX_Xor left right) =
     TargetSigma.CE_Binary CBX_Xor
       (subst_cy_bool x replacement left)
       (subst_cy_bool x replacement right)"
| "subst_cy_bool x replacement (TargetSigma.CE_Binary CBX_Equal left right) =
     TargetSigma.CE_Binary CBX_Equal
       (subst_cy_bool x replacement left)
       (subst_cy_bool x replacement right)"
| "subst_cy_bool x replacement
       (TargetSigma.CE_Case [(condition, then_e)] (Some else_e)) =
     TargetSigma.CE_Case
       [(subst_cy_bool x replacement condition,
         subst_cy_bool x replacement then_e)]
       (Some (subst_cy_bool x replacement else_e))"
| "subst_cy_bool _ _ body = body"

lemma subst_cy_bool_wf:
  assumes "WF_CyBoolExpr replacement"
      and "WF_CyBoolExpr body"
  shows "WF_CyBoolExpr (subst_cy_bool x replacement body)"
  using assms
  by (induction x replacement body rule: subst_cy_bool.induct) auto

lemma subst_cy_bool_preserves:
  shows "eval_cy_bool env (subst_cy_bool x replacement body) =
         eval_cy_bool (bind_env env x (eval_cy_bool env replacement)) body"
  unfolding bind_env_def
  by (induction x replacement body arbitrary: env rule: subst_cy_bool.induct) auto

lemma subst_cy_bool_preserves_at:
  shows
    "eval_cy_bool_at env objects store (subst_cy_bool x replacement body) =
     eval_cy_bool_at
       (bind_env env x (eval_cy_bool_at env objects store replacement))
       objects store body"
  unfolding bind_env_def
  by (induction x replacement body arbitrary: env rule: subst_cy_bool.induct)
     auto

definition typed_bool_equal :: "cy_expr \<Rightarrow> cy_expr \<Rightarrow> cy_expr" where
  "typed_bool_equal left right =
     TargetSigma.CE_Case
       [(TargetSigma.CE_Unary CUIsNull left,
         TargetSigma.CE_Unary CUIsNull right)]
       (Some
         (TargetSigma.CE_Case
           [(TargetSigma.CE_Unary CUIsNull right,
             TargetSigma.CE_BoolLit False)]
           (Some (TargetSigma.CE_Binary CBX_Equal left right))))"

lemma typed_bool_equal_wf:
  assumes "WF_CyBoolExpr left" "WF_CyBoolExpr right"
  shows "WF_CyBoolExpr (typed_bool_equal left right)"
  using assms unfolding typed_bool_equal_def by simp

lemma typed_bool_equal_preserves:
  "eval_cy_bool env (typed_bool_equal left right) =
   b3_equal (eval_cy_bool env left) (eval_cy_bool env right)"
  unfolding typed_bool_equal_def b3_equal_def
  by (cases "eval_cy_bool env left";
      cases "eval_cy_bool env right"; simp)

lemma typed_bool_equal_preserves_at:
  "eval_cy_bool_at env objects store (typed_bool_equal left right) =
   b3_equal (eval_cy_bool_at env objects store left)
     (eval_cy_bool_at env objects store right)"
  unfolding typed_bool_equal_def b3_equal_def
  by (cases "eval_cy_bool_at env objects store left";
      cases "eval_cy_bool_at env objects store right"; simp)

fun realize_expr :: "q_expr \<Rightarrow> cy_expr option" where
  "realize_expr (QE_Var x (QT_Prim QPK_Boolean3)) =
     (if x \<noteq> '''' then
        Some (TargetSigma.CE_VarE \<lparr>TargetSigma.cy_var.cv_name = x\<rparr>)
      else None)"
| "realize_expr (QE_Var x (QT_Class classifier)) =
     (if x \<noteq> '''' \<and> classifier \<noteq> ''''
      then Some
        (TargetSigma.CE_VarE \<lparr>TargetSigma.cy_var.cv_name = x\<rparr>)
      else None)"
| "realize_expr (QE_Const (QV_Bool (Some b))) = Some (TargetSigma.CE_BoolLit b)"
| "realize_expr (QE_Const (QV_Bool None)) = Some TargetSigma.CE_Null"
| "realize_expr (QE_Const (QV_Int (Some n))) =
     (if in_int64 n then Some (TargetSigma.CE_IntLit n) else None)"
| "realize_expr (QE_Bottom (QT_Prim QPK_Boolean3)) = Some TargetSigma.CE_Null"
| "realize_expr (QE_AttrRead receiver property observer) =
     (if Q_ObjectExpr receiver \<and>
         re_prop_k property = RPK_Attribute \<and>
         re_decl_type property = Ty_Prim PK_Integer \<and>
         observer = re_key (re_base property) \<and> observer \<noteq> ''''
      then case realize_expr receiver of
        Some target_receiver \<Rightarrow>
          (if Cy_ObjectExpr target_receiver
           then Some (TargetSigma.CE_PropAccess target_receiver observer)
           else None)
      | None \<Rightarrow> None
      else None)"
| "realize_expr (QE_NavOne receiver [] property observer) =
     (if Q_ObjectExpr receiver \<and>
         re_prop_k property = RPK_AssociationEnd \<and>
         Core.re_upper property = 1 \<and>
         observer = re_key (re_base property) \<and> observer \<noteq> ''''
      then case realize_expr receiver of
        Some target_receiver \<Rightarrow>
          (if Cy_ObjectExpr target_receiver
           then Some
             (TargetSigma.CE_NavOneE target_receiver observer)
           else None)
      | None \<Rightarrow> None
      else None)"
| "realize_expr
     (QE_MaterializePlan
       (QP_Nav receiver [] property observer kind (QT_Class target))) =
     (if Q_ObjectExpr receiver \<and>
         re_prop_k property = RPK_AssociationEnd \<and>
         Core.re_upper property \<noteq> 1 \<and>
         re_decl_type property = Ty_Class target \<and>
         observer = re_key (re_base property) \<and> observer \<noteq> ''''
      then case realize_expr receiver of
        Some target_receiver \<Rightarrow>
          (if Cy_ObjectExpr target_receiver
           then Some
             (TargetSigma.CE_NavManyE target_receiver observer
               (if kind = QK_Set then RS_Set else RS_Bag))
           else None)
      | None \<Rightarrow> None
      else None)"
| "realize_expr (QE_Let declaration value body) =
     (if Core.cv_type declaration = Ty_Prim PK_Boolean \<and>
         Core.cv_name declaration \<noteq> '''' \<and>
         Q_BoolExpr value \<and> Q_BoolExpr body
      then
        (case (realize_expr value, realize_expr body) of
           (Some cv, Some cb) \<Rightarrow>
             Some (subst_cy_bool (Core.cv_name declaration) cv cb)
         | _ \<Rightarrow> None)
      else None)"
| "realize_expr (QE_If condition then_e else_e) =
     (case (realize_expr condition, realize_expr then_e, realize_expr else_e) of
        (Some cc, Some ct, Some ce) \<Rightarrow>
          Some (TargetSigma.CE_Case [(cc,ct)] (Some ce))
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Unary QUO_BooleanNot body) =
     map_option (TargetSigma.CE_Unary CUNot) (realize_expr body)"
| "realize_expr (QE_Binary QB_And left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (TargetSigma.CE_Binary CBX_And cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Or left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (TargetSigma.CE_Binary CBX_Or cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Xor left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (TargetSigma.CE_Binary CBX_Xor cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Eq left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (typed_bool_equal cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Neq left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow>
          Some (TargetSigma.CE_Unary CUNot (typed_bool_equal cl cr))
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Lt left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (TargetSigma.CE_Binary CBX_Lt cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Le left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (TargetSigma.CE_Binary CBX_Le cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Gt left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (TargetSigma.CE_Binary CBX_Gt cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Ge left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow> Some (TargetSigma.CE_Binary CBX_Ge cl cr)
      | _ \<Rightarrow> None)"
| "realize_expr (QE_Binary QB_Implies left right) =
     (case (realize_expr left, realize_expr right) of
        (Some cl, Some cr) \<Rightarrow>
          Some (TargetSigma.CE_Binary CBX_Or
                  (TargetSigma.CE_Unary CUNot cl) cr)
      | _ \<Rightarrow> None)"
| "realize_expr _ = None"

lemma realize_expr_wf:
  assumes "realize_expr q = Some target"
  shows "WF_CyBoolExpr target"
  using assms
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto intro!: subst_cy_bool_wf typed_bool_equal_wf
           split: option.splits prod.splits if_splits)

lemma realize_expr_preserves_object:
  assumes wf: "Q_ObjectExpr q"
      and result: "realize_expr q = Some target"
  shows "eval_cy_object objects target = eval_q_object objects q"
  using wf result
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto split: list.splits option.splits prod.splits if_splits)

lemma realize_expr_preserves_object_nav:
  assumes wf: "Q_ObjectExpr q"
      and result: "realize_expr q = Some target"
  shows
    "eval_cy_object_nav objects navigation target =
     eval_q_object_nav objects navigation q"
  using wf result
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto split: option.splits prod.splits if_splits)

lemma realize_expr_preserves_object_collection:
  assumes wf: "Q_ObjectCollectionExpr q"
      and result: "realize_expr q = Some target"
  shows
    "eval_cy_object_collection objects navigation target =
     eval_q_object_collection objects navigation q"
  using wf result
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto simp: normalize_q_occurrences_def normalize_target_occurrences_def
                 realize_expr_preserves_object_nav
           split: option.splits prod.splits if_splits)

lemma subst_cy_bool_not_int:
  assumes replacement: "eval_cy_int replacement = None"
      and body: "eval_cy_int body = None"
  shows "eval_cy_int (subst_cy_bool x replacement body) = None"
  using assms
  by (induction x replacement body rule: subst_cy_bool.induct) auto

lemma subst_cy_bool_not_int_at:
  assumes replacement: "eval_cy_int_at objects store replacement = None"
      and body: "eval_cy_int_at objects store body = None"
  shows
    "eval_cy_int_at objects store (subst_cy_bool x replacement body) = None"
  using assms
  by (induction x replacement body rule: subst_cy_bool.induct) auto

lemma typed_bool_equal_not_int:
  "eval_cy_int (typed_bool_equal left right) = None"
  unfolding typed_bool_equal_def by simp

lemma typed_bool_equal_not_int_at:
  "eval_cy_int_at objects store (typed_bool_equal left right) = None"
  unfolding typed_bool_equal_def by simp

lemma realize_bool_not_int:
  assumes wf: "Q_BoolExpr q"
      and result: "realize_expr q = Some target"
  shows "eval_cy_int target = None"
  using wf result
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto intro: subst_cy_bool_not_int
           simp: typed_bool_equal_not_int
           split: option.splits prod.splits if_splits)

lemma realize_bool_not_int_at:
  assumes wf: "Q_BoolExpr q"
      and result: "realize_expr q = Some target"
  shows "eval_cy_int_at objects store target = None"
  using wf result
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto intro: subst_cy_bool_not_int_at
           simp: typed_bool_equal_not_int_at
           split: option.splits prod.splits if_splits)

lemma realize_expr_preserves_int:
  assumes "realize_expr q = Some target"
  shows "eval_cy_int target = eval_q_int q"
  using assms
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto intro: subst_cy_bool_not_int realize_bool_not_int
           simp: typed_bool_equal_not_int
           split: option.splits prod.splits if_splits)

lemma realize_expr_preserves_int_at:
  assumes "realize_expr q = Some target"
  shows
    "eval_cy_int_at objects store target = eval_q_int_at objects store q"
  using assms
  by (induction q arbitrary: target rule: realize_expr.induct)
     (auto intro: subst_cy_bool_not_int_at realize_bool_not_int_at
           simp: realize_expr_preserves_object typed_bool_equal_not_int_at
           split: option.splits prod.splits if_splits)

lemma realized_integer_is_int64:
  assumes "realize_expr (QE_Const (QV_Int (Some n))) = Some target"
  shows "in_int64 n"
  using assms by (auto split: if_splits)

lemma int64_upper_bound_rejected:
  "realize_expr (QE_Const (QV_Int (Some (2 ^ 63)))) = None"
  by (simp add: in_int64_def int64_min_def int64_max_def)

lemma int64_bounds_accepted:
  "realize_expr (QE_Const (QV_Int (Some int64_min))) =
     Some (TargetSigma.CE_IntLit int64_min)"
  "realize_expr (QE_Const (QV_Int (Some int64_max))) =
     Some (TargetSigma.CE_IntLit int64_max)"
  by (simp_all add: in_int64_def int64_min_def int64_max_def)

lemma realize_expr_preserves:
  assumes wf: "Q_BoolExpr q"
      and result: "realize_expr q = Some target"
  shows "eval_cy_bool env target = eval_q_bool env q"
  using wf result
  by (induction q arbitrary: target env rule: realize_expr.induct)
     (auto simp: b3_implies_def subst_cy_bool_preserves
           typed_bool_equal_preserves
           realize_expr_preserves_int
           split: option.splits prod.splits if_splits)

lemma realize_expr_preserves_at:
  assumes wf: "Q_BoolExpr q"
      and result: "realize_expr q = Some target"
  shows
    "eval_cy_bool_at env objects store target =
     eval_q_bool_at env objects store q"
  using wf result
  by (induction q arbitrary: target env rule: realize_expr.induct)
     (auto simp: b3_implies_def subst_cy_bool_preserves_at
           typed_bool_equal_preserves_at
           realize_expr_preserves_int_at
           split: option.splits prod.splits if_splits)

fun target_shape :: "q_result_shape \<Rightarrow> result_shape" where
  "target_shape QS_Scalar = RS_Scalar"
| "target_shape QS_Set = RS_Set"
| "target_shape QS_Bag = RS_Bag"
| "target_shape QS_Ids = RS_Ids"

definition target_contract :: "result_contract \<Rightarrow> result_contract_ts" where
  "target_contract rc =
     \<lparr>rc_shape_ts = target_shape (rc_shape rc),
      rc_result_var_ts =
        \<lparr>TargetSigma.cy_var.cv_name = rc_result_var rc\<rparr>,
      rc_elem_type_ts = rc_elem_type rc,
      rc_distinct_ts = rc_distinct rc,
      rc_whole_bottom_ts = rc_whole_bottom rc\<rparr>"

definition mk_artifact :: "q_query \<Rightarrow> cy_expr \<Rightarrow> generated_artifact" where
  "mk_artifact q ce =
     \<lparr>ga_dialect = C5_Cypher5,
      ga_rep_key = qq_rep_key q,
      ga_params = [],
      ga_gen_bindings = [],
      ga_contract = target_contract (qq_contract q),
      ga_query = CQ_Query []
        [CC_Return (rc_distinct_ts (target_contract (qq_contract q)))
          [CPI_Item ce
            (Some (rc_result_var_ts (target_contract (qq_contract q))))]] True\<rparr>"

definition Realize :: "q_query \<Rightarrow> generated_artifact option" where
  "Realize q =
     (case qq_expr q of
        None \<Rightarrow> None
      | Some qe \<Rightarrow>
          (if Q_BoolExpr qe then
             (case realize_expr qe of
                None \<Rightarrow> None
              | Some ce \<Rightarrow> Some (mk_artifact q ce))
           else None))"

lemma target_contract_wf:
  assumes "wf_result_contract rc"
  shows "wf_ts_result_contract (target_contract rc)"
  using assms
  unfolding wf_result_contract_def wf_ts_result_contract_def target_contract_def
  by (cases "rc_shape rc"; simp)

theorem Realize_wf:
  assumes "WF_Q q" and "Realize q = Some p"
  shows "WF_Target_Sigma p"
proof -
  from assms(1) have source_contract: "wf_result_contract (qq_contract q)"
    unfolding WF_Q_def by blast
  have realized_contract:
    "wf_ts_result_contract (target_contract (qq_contract q))"
    using target_contract_wf[OF source_contract] .
  from assms(2) obtain qe ce where realized:
      "qq_expr q = Some qe" "realize_expr qe = Some ce" "p = mk_artifact q ce"
    unfolding Realize_def by (auto split: option.splits if_splits)
  show ?thesis
    unfolding realized(3) WF_Target_Sigma_def mk_artifact_def wf_ts_root_query_def
    using realized_contract by simp
qed

definition eval_q_query_bool :: "bool_env \<Rightarrow> q_query \<Rightarrow> bool3 option" where
  "eval_q_query_bool env q = map_option (eval_q_bool env) (qq_expr q)"

definition eval_artifact_bool :: "bool_env \<Rightarrow> generated_artifact \<Rightarrow> bool3 option" where
  "eval_artifact_bool env p =
     (case ga_query p of
        CQ_Query _ [CC_Return _ [CPI_Item e _]] True \<Rightarrow> Some (eval_cy_bool env e)
      | _ \<Rightarrow> None)"

theorem Realize_preserves:
  assumes "Realize q = Some p"
  shows "eval_artifact_bool env p = eval_q_query_bool env q"
  using assms realize_expr_preserves
  unfolding Realize_def mk_artifact_def eval_artifact_bool_def eval_q_query_bool_def
  by (auto split: option.splits if_splits)

end
