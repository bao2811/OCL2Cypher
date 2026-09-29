theory Front
  imports Semantics
begin

text \<open>
Executable frontend for the admitted Boolean slice.  It consumes the
resolved/typed AS defined in Source.thy; it never parses OCL text.  Every
constructor outside the admitted slice is rejected with None.
\<close>

definition front_comparison_operator ::
  "stdlib_operation_id \<Rightarrow> core_binary_op option" where
  "front_comparison_operator op =
     (if op = op_lt_id then Some CB_Lt
      else if op = op_le_id then Some CB_Le
      else if op = op_gt_id then Some CB_Gt
      else if op = op_ge_id then Some CB_Ge
      else None)"

definition front_boolean_operator ::
  "stdlib_operation_id \<Rightarrow> core_binary_op option" where
  "front_boolean_operator op =
     (if op = op_and_id then Some CB_And
      else if op = op_or_id then Some CB_Or
      else if op = op_xor_id then Some CB_Xor
      else if op = op_equal_id then Some CB_Eq
      else if op = op_not_equal_id then Some CB_Neq
      else if op = op_implies_id then Some CB_Implies
      else None)"

definition front_binary ::
  "stdlib_operation_id \<Rightarrow> ocl_type \<Rightarrow> ocl_type \<Rightarrow>
   core_exp \<Rightarrow> core_exp \<Rightarrow> core_exp option" where
  "front_binary op left_type right_type cl cr =
     (if left_type = Ty_Prim PK_Integer \<and>
         right_type = Ty_Prim PK_Integer
      then map_option (\<lambda>operator. Core.CE_Binary operator cl cr)
             (front_comparison_operator op)
      else if left_type = Ty_Prim PK_Boolean \<and>
              right_type = Ty_Prim PK_Boolean
      then map_option (\<lambda>operator. Core.CE_Binary operator cl cr)
             (front_boolean_operator op)
      else None)"

lemmas canonical_operator_id_defs =
  op_and_id_def op_or_id_def op_xor_id_def op_equal_id_def
  op_not_equal_id_def op_implies_id_def op_lt_id_def op_le_id_def
  op_gt_id_def op_ge_id_def

definition core_attribute :: "resolved_property \<Rightarrow> core_prop" where
  "core_attribute property =
     \<lparr>re_base =
        \<lparr>re_key = prop_id property,
         re_qname = prop_name property,
         re_kind = UDK_Property\<rparr>,
      re_prop_k = RPK_Attribute,
      re_lower = prop_lower property,
      re_upper = prop_upper property,
      re_unique = prop_unique property,
      re_ordered = prop_ordered property,
      re_decl_type = prop_type property,
      re_owning = Some (prop_owner property),
      re_nav_src = None,
      re_qual_owner = None,
      re_quals = [],
      re_opposite = None\<rparr>"

definition core_association_end :: "resolved_property \<Rightarrow> core_prop" where
  "core_association_end property =
     \<lparr>re_base =
        \<lparr>re_key = prop_id property,
         re_qname = prop_name property,
         re_kind = UDK_Property\<rparr>,
      re_prop_k = RPK_AssociationEnd,
      re_lower = prop_lower property,
      re_upper = prop_upper property,
      re_unique = prop_unique property,
      re_ordered = prop_ordered property,
      re_decl_type = prop_type property,
      re_owning = Some (prop_owner property),
      re_nav_src = prop_navigation_source property,
      re_qual_owner = None,
      re_quals = [],
      re_opposite = None\<rparr>"

fun front_exp :: "resolved_ocl_exp \<Rightarrow> core_exp option" where
  "front_exp (Exp_LitBool b (Ty_Prim PK_Boolean)) = Some (Core.CE_BooleanLit b)"
| "front_exp (Exp_LitInt n (Ty_Prim PK_Integer)) = Some (Core.CE_IntegerLit n)"
| "front_exp (Exp_Var x (Ty_Prim PK_Boolean)) =
     (if x \<noteq> ''''
      then Some (Core.CE_Var x (Ty_Prim PK_Boolean)) else None)"
| "front_exp (Exp_Var x (Ty_Class classifier)) =
     (if x \<noteq> '''' \<and> classifier \<noteq> ''''
      then Some (Core.CE_Var x (Ty_Class classifier)) else None)"
| "front_exp (Exp_AttrRead source property (Ty_Prim PK_Integer)) =
     (if wf_property_shape property \<and>
         prop_is_attr property \<and>
         prop_type property = Ty_Prim PK_Integer \<and>
         prop_upper property = 1 \<and>
         static_type source = Ty_Class (prop_owner property)
      then map_option
        (\<lambda>receiver. Core.CE_AttrRead receiver (core_attribute property))
        (front_exp source)
      else None)"
| "front_exp (Exp_Navigate source property [] (Ty_Class target_class)) =
     (if wf_property_shape property \<and>
         \<not> prop_is_attr property \<and>
         prop_upper property = 1 \<and>
         prop_type property = Ty_Class target_class \<and>
         prop_navigation_source property =
           (case static_type source of Ty_Class source_class \<Rightarrow> Some source_class
            | _ \<Rightarrow> None)
      then map_option
        (\<lambda>receiver.
           Core.CE_Nav CNK_ToOne receiver
             (core_association_end property) [])
        (front_exp source)
      else None)"
| "front_exp
     (Exp_Navigate source property [] (Ty_Coll kind (Ty_Class target_class))) =
     (if wf_property_shape property \<and>
         \<not> prop_is_attr property \<and>
         (prop_upper property = -1 \<or> prop_upper property > 1) \<and>
         prop_type property = Ty_Class target_class \<and>
         kind = (if prop_unique property then CK_Set else CK_Bag) \<and>
         prop_navigation_source property =
           (case static_type source of Ty_Class source_class \<Rightarrow> Some source_class
            | _ \<Rightarrow> None)
      then map_option
        (\<lambda>receiver.
           Core.CE_Nav CNK_ToMany receiver
             (core_association_end property) [])
        (front_exp source)
      else None)"
| "front_exp (Exp_Let x (Ty_Prim PK_Boolean) value body (Ty_Prim PK_Boolean)) =
     (if x \<noteq> '''' \<and>
         static_type value = Ty_Prim PK_Boolean \<and>
         static_type body = Ty_Prim PK_Boolean
      then (case (front_exp value, front_exp body) of
              (Some cv, Some cb) \<Rightarrow>
                Some (Core.CE_Let
                  \<lparr>Core.core_var_decl.cv_name = x, cv_kind = CBK_Let,
                   cv_type = Ty_Prim PK_Boolean\<rparr> cv cb)
            | _ \<Rightarrow> None)
      else None)"
| "front_exp (Exp_If condition then_e else_e (Ty_Prim PK_Boolean)) =
     (if static_type condition = Ty_Prim PK_Boolean \<and>
         static_type then_e = Ty_Prim PK_Boolean \<and>
         static_type else_e = Ty_Prim PK_Boolean
      then (case (front_exp condition, front_exp then_e, front_exp else_e) of
              (Some cc, Some ct, Some ce) \<Rightarrow> Some (Core.CE_If cc ct ce)
            | _ \<Rightarrow> None)
      else None)"
| "front_exp (Exp_Unary op body (Ty_Prim PK_Boolean)) =
     (if op = op_not_id \<and> static_type body = Ty_Prim PK_Boolean
      then map_option (Core.CE_Unary CUO_BooleanNot) (front_exp body)
      else None)"
| "front_exp (Exp_Binary op left right (Ty_Prim PK_Boolean)) =
     (case (front_exp left, front_exp right) of
        (Some cl, Some cr) \<Rightarrow>
          front_binary op (static_type left) (static_type right) cl cr
      | _ \<Rightarrow> None)"
| "front_exp _ = None"

definition Front :: "resolved_ocl_invariant \<Rightarrow> core_exp option" where
  "Front a = front_exp (inv_body a)"

lemma front_binary_not_int:
  assumes "front_binary op left_type right_type cl cr = Some c"
  shows "eval_core_int c = None"
  using assms unfolding front_binary_def
  by (auto split: option.splits if_splits)

lemma front_binary_not_object:
  assumes "front_binary op left_type right_type cl cr = Some c"
  shows "eval_core_object objects c = None"
  using assms unfolding front_binary_def
  by (auto split: option.splits if_splits)

lemma front_binary_not_object_nav:
  assumes "front_binary op left_type right_type cl cr = Some c"
  shows "eval_core_object_nav objects navigation c = None"
  using assms unfolding front_binary_def
  by (auto split: option.splits if_splits)

lemma front_binary_not_object_collection:
  assumes "front_binary op left_type right_type cl cr = Some c"
  shows "eval_core_object_collection objects navigation c = None"
  using assms unfolding front_binary_def
  by (auto split: option.splits if_splits)

lemma front_binary_not_int_at:
  assumes "front_binary op left_type right_type cl cr = Some c"
  shows "eval_core_int_at objects store c = None"
  using assms unfolding front_binary_def
  by (auto split: option.splits if_splits)

lemma front_exp_preserves_int:
  assumes "front_exp a = Some c"
  shows "eval_core_int c = eval_source_int a"
  using assms
  by (induction a arbitrary: c rule: front_exp.induct)
     (auto intro: front_binary_not_int
           split: option.splits prod.splits if_splits)

lemma front_exp_preserves_object:
  assumes "front_exp a = Some c"
  shows "eval_core_object objects c = eval_source_object objects a"
  using assms
  by (induction a arbitrary: c rule: front_exp.induct)
     (auto intro: front_binary_not_object
           split: option.splits prod.splits if_splits)

lemma front_exp_preserves_object_nav:
  assumes "front_exp a = Some c"
  shows
    "eval_core_object_nav objects navigation c =
     eval_source_object_nav objects navigation a"
  using assms
  by (induction a arbitrary: c rule: front_exp.induct)
     (auto simp: core_association_end_def
           intro: front_binary_not_object_nav
           split: ocl_type.splits option.splits prod.splits if_splits)

lemma front_exp_preserves_object_collection:
  assumes "front_exp a = Some c"
  shows
    "eval_core_object_collection objects navigation c =
     eval_source_object_collection objects navigation a"
  using assms
  by (induction a arbitrary: c rule: front_exp.induct)
     (auto simp: core_association_end_def normalize_source_occurrences_def
                 front_exp_preserves_object_nav
           intro: front_binary_not_object_collection
           split: ocl_type.splits option.splits prod.splits if_splits)

lemma front_exp_preserves_int_at:
  assumes "front_exp a = Some c"
  shows "eval_core_int_at objects store c = eval_source_int_at objects store a"
  using assms
  by (induction a arbitrary: c rule: front_exp.induct)
     (auto simp: core_attribute_def front_exp_preserves_object
           intro: front_binary_not_int_at
           split: option.splits prod.splits if_splits)

lemma front_comparison_operator_sound:
  assumes operator: "front_comparison_operator op = Some operator"
      and int_left: "eval_core_int cl = eval_source_int left"
      and int_right: "eval_core_int cr = eval_source_int right"
  shows
    "eval_core_bool env (Core.CE_Binary operator cl cr) =
     eval_source_bool env
       (Exp_Binary op left right (Ty_Prim PK_Boolean))"
proof (cases "op = op_lt_id")
  case True
  with operator int_left int_right show ?thesis
    by (simp add: front_comparison_operator_def canonical_operator_id_defs)
next
  case not_lt: False
  show ?thesis
  proof (cases "op = op_le_id")
    case True
    with operator int_left int_right not_lt show ?thesis
      by (simp add: front_comparison_operator_def canonical_operator_id_defs)
  next
    case not_le: False
    show ?thesis
    proof (cases "op = op_gt_id")
      case True
      with operator int_left int_right not_lt not_le show ?thesis
        by (simp add: front_comparison_operator_def canonical_operator_id_defs)
    next
      case not_gt: False
      show ?thesis
      proof (cases "op = op_ge_id")
        case True
        with operator int_left int_right not_lt not_le not_gt show ?thesis
          by (simp add: front_comparison_operator_def canonical_operator_id_defs)
      next
        case False
        with operator not_lt not_le not_gt show ?thesis
          by (simp add: front_comparison_operator_def canonical_operator_id_defs)
      qed
    qed
  qed
qed

lemma front_boolean_operator_sound:
  assumes operator: "front_boolean_operator op = Some operator"
      and bool_left: "eval_core_bool env cl = eval_source_bool env left"
      and bool_right: "eval_core_bool env cr = eval_source_bool env right"
  shows
    "eval_core_bool env (Core.CE_Binary operator cl cr) =
     eval_source_bool env
       (Exp_Binary op left right (Ty_Prim PK_Boolean))"
proof (cases "op = op_and_id")
  case True
  with operator bool_left bool_right show ?thesis
    by (simp add: front_boolean_operator_def canonical_operator_id_defs)
next
  case not_and: False
  show ?thesis
  proof (cases "op = op_or_id")
    case True
    with operator bool_left bool_right not_and show ?thesis
      by (simp add: front_boolean_operator_def canonical_operator_id_defs)
  next
    case not_or: False
    show ?thesis
    proof (cases "op = op_xor_id")
      case True
      with operator bool_left bool_right not_and not_or show ?thesis
        by (simp add: front_boolean_operator_def canonical_operator_id_defs)
    next
      case not_xor: False
      show ?thesis
      proof (cases "op = op_equal_id")
        case True
        with operator bool_left bool_right not_and not_or not_xor show ?thesis
          by (simp add: front_boolean_operator_def canonical_operator_id_defs)
      next
        case not_equal: False
        show ?thesis
        proof (cases "op = op_not_equal_id")
          case True
          with operator bool_left bool_right not_and not_or not_xor not_equal
          show ?thesis
            by (simp add: front_boolean_operator_def canonical_operator_id_defs)
        next
          case not_not_equal: False
          show ?thesis
          proof (cases "op = op_implies_id")
            case True
            with operator bool_left bool_right not_and not_or not_xor not_equal
                 not_not_equal
            show ?thesis
              by (simp add: front_boolean_operator_def canonical_operator_id_defs)
          next
            case False
            with operator not_and not_or not_xor not_equal not_not_equal
            show ?thesis
              by (simp add: front_boolean_operator_def canonical_operator_id_defs)
          qed
        qed
      qed
    qed
  qed
qed

lemma front_binary_wf:
  assumes result: "front_binary op left_type right_type cl cr = Some c"
      and left_wf: "wf_core_types cl"
      and right_wf: "wf_core_types cr"
  shows "wf_core_types c"
  using result left_wf right_wf
  unfolding front_binary_def
  by (auto split: option.splits if_splits)

lemma front_binary_preserves:
  assumes result:
    "front_binary op (static_type left) (static_type right) cl cr = Some c"
      and int_left: "eval_core_int cl = eval_source_int left"
      and int_right: "eval_core_int cr = eval_source_int right"
      and bool_left: "eval_core_bool env cl = eval_source_bool env left"
      and bool_right: "eval_core_bool env cr = eval_source_bool env right"
  shows
    "eval_core_bool env c =
     eval_source_bool env
       (Exp_Binary op left right (Ty_Prim PK_Boolean))"
proof (cases "static_type left = Ty_Prim PK_Integer \<and>
              static_type right = Ty_Prim PK_Integer")
  case True
  then obtain operator where
    op: "front_comparison_operator op = Some operator"
    and c: "c = Core.CE_Binary operator cl cr"
    using result unfolding front_binary_def
    by (cases "front_comparison_operator op") auto
  from front_comparison_operator_sound[OF op int_left int_right]
  show ?thesis using c by simp
next
  case not_integer: False
  show ?thesis
  proof (cases "static_type left = Ty_Prim PK_Boolean \<and>
                static_type right = Ty_Prim PK_Boolean")
    case True
    then obtain operator where
      op: "front_boolean_operator op = Some operator"
      and c: "c = Core.CE_Binary operator cl cr"
      using result not_integer unfolding front_binary_def
      by (cases "front_boolean_operator op") auto
    from front_boolean_operator_sound[OF op bool_left bool_right]
    show ?thesis using c by simp
  next
    case False
    with result not_integer show ?thesis
      unfolding front_binary_def by simp
  qed
qed

lemma front_comparison_operator_sound_at:
  assumes operator: "front_comparison_operator op = Some operator"
      and int_left:
        "eval_core_int_at objects store cl =
         eval_source_int_at objects store left"
      and int_right:
        "eval_core_int_at objects store cr =
         eval_source_int_at objects store right"
  shows
    "eval_core_bool_at env objects store (Core.CE_Binary operator cl cr) =
     eval_source_bool_at env objects store
       (Exp_Binary op left right (Ty_Prim PK_Boolean))"
  using assms
  unfolding front_comparison_operator_def
  by (auto simp: canonical_operator_id_defs split: if_splits)

lemma front_boolean_operator_sound_at:
  assumes operator: "front_boolean_operator op = Some operator"
      and bool_left:
        "eval_core_bool_at env objects store cl =
         eval_source_bool_at env objects store left"
      and bool_right:
        "eval_core_bool_at env objects store cr =
         eval_source_bool_at env objects store right"
  shows
    "eval_core_bool_at env objects store (Core.CE_Binary operator cl cr) =
     eval_source_bool_at env objects store
       (Exp_Binary op left right (Ty_Prim PK_Boolean))"
  using assms
  unfolding front_boolean_operator_def
  by (auto simp: canonical_operator_id_defs split: if_splits)

lemma front_binary_preserves_at:
  assumes result:
    "front_binary op (static_type left) (static_type right) cl cr = Some c"
      and int_left:
        "eval_core_int_at objects store cl =
         eval_source_int_at objects store left"
      and int_right:
        "eval_core_int_at objects store cr =
         eval_source_int_at objects store right"
      and bool_left:
        "eval_core_bool_at env objects store cl =
         eval_source_bool_at env objects store left"
      and bool_right:
        "eval_core_bool_at env objects store cr =
         eval_source_bool_at env objects store right"
  shows
    "eval_core_bool_at env objects store c =
     eval_source_bool_at env objects store
       (Exp_Binary op left right (Ty_Prim PK_Boolean))"
proof (cases "static_type left = Ty_Prim PK_Integer \<and>
              static_type right = Ty_Prim PK_Integer")
  case True
  then obtain operator where
    op: "front_comparison_operator op = Some operator"
    and c: "c = Core.CE_Binary operator cl cr"
    using result unfolding front_binary_def
    by (cases "front_comparison_operator op") auto
  from front_comparison_operator_sound_at[OF op int_left int_right]
  show ?thesis using c by simp
next
  case not_integer: False
  show ?thesis
  proof (cases "static_type left = Ty_Prim PK_Boolean \<and>
                static_type right = Ty_Prim PK_Boolean")
    case True
    then obtain operator where
      op: "front_boolean_operator op = Some operator"
      and c: "c = Core.CE_Binary operator cl cr"
      using result not_integer unfolding front_binary_def
      by (cases "front_boolean_operator op") auto
    from front_boolean_operator_sound_at[OF op bool_left bool_right]
    show ?thesis using c by simp
  next
    case False
    with result not_integer show ?thesis
      unfolding front_binary_def by simp
  qed
qed

lemma front_binary_type:
  assumes result: "front_binary op left_type right_type cl cr = Some c"
      and left: "core_type_of cl = Some left_type"
      and right: "core_type_of cr = Some right_type"
  shows "core_type_of c = Some (Ty_Prim PK_Boolean)"
  using result left right
  unfolding front_binary_def front_comparison_operator_def
    front_boolean_operator_def
  by (auto simp: core_binary_type_def split: option.splits if_splits)

lemma front_exp_structural_wf:
  assumes "front_exp a = Some c"
  shows "wf_core_types c"
  using assms
  by (induction a arbitrary: c rule: front_exp.induct)
     (auto intro: front_binary_wf split: option.splits prod.splits if_splits)

lemma front_exp_type:
  assumes "front_exp a = Some c"
  shows "core_type_of c = Some (static_type a)"
  using assms
  by (induction a arbitrary: c rule: front_exp.induct)
     (auto simp: core_attribute_def core_association_end_def
                 wf_property_shape_def
           intro: front_binary_type
           split: ocl_type.splits option.splits prod.splits if_splits)

lemma front_exp_wf:
  assumes "front_exp a = Some c"
  shows "WF_Core c"
  unfolding WF_Core_def
  using front_exp_structural_wf[OF assms] front_exp_type[OF assms]
  by blast

theorem Front_wf:
  assumes "Front a = Some c"
  shows "WF_Core c"
  using assms front_exp_wf unfolding Front_def by blast

lemma bind_env_as_update:
  "bind_env env x value = env(x := value)"
  unfolding bind_env_def
  by (rule ext) simp

lemma lambda_env_as_update:
  "(\<lambda>a. if a = x then value else env a) = env(x := value)"
  by (rule ext) simp

lemma front_exp_preserves:
  assumes "front_exp a = Some c"
  shows "eval_core_bool env c = eval_source_bool env a"
  using assms
  by (induction a arbitrary: c env rule: front_exp.induct)
     (auto intro!: front_binary_preserves front_exp_preserves_int
           simp: bind_env_as_update lambda_env_as_update
           simp del: eval_source_bool.simps(6)
           split: option.splits prod.splits if_splits)

lemma front_exp_preserves_at:
  assumes "front_exp a = Some c"
  shows
    "eval_core_bool_at env objects store c =
     eval_source_bool_at env objects store a"
  using assms
  by (induction a arbitrary: c env rule: front_exp.induct)
     (auto intro!: front_binary_preserves_at front_exp_preserves_int_at
           simp: bind_env_as_update lambda_env_as_update
           simp del: eval_source_bool_at.simps(6)
           split: option.splits prod.splits if_splits)

theorem Front_preserves:
  assumes "Front a = Some c"
  shows "eval_core_bool env c = eval_source_bool env (inv_body a)"
  using assms front_exp_preserves unfolding Front_def by blast

theorem Front_preserves_at:
  assumes "Front a = Some c"
  shows
    "eval_core_bool_at env objects store c =
     eval_source_bool_at env objects store (inv_body a)"
  using assms front_exp_preserves_at unfolding Front_def by blast

context ocl_source_model
begin

definition Front_checked :: "resolved_ocl_invariant \<Rightarrow> core_exp option" where
  "Front_checked a = (if WF_resolved a then Front a else None)"

theorem Front_checked_source_wf:
  assumes "Front_checked a = Some c"
  shows "WF_resolved a"
  using assms unfolding Front_checked_def by (auto split: if_splits)

theorem Front_checked_wf:
  assumes "Front_checked a = Some c"
  shows "WF_Core c"
  using assms Front_wf unfolding Front_checked_def
  by (auto split: if_splits)

theorem Front_checked_preserves:
  assumes "Front_checked a = Some c"
  shows "eval_core_bool env c = eval_source_bool env (inv_body a)"
  using assms Front_preserves unfolding Front_checked_def
  by (auto split: if_splits)

theorem Front_checked_preserves_at:
  assumes "Front_checked a = Some c"
  shows
    "eval_core_bool_at env objects store c =
     eval_source_bool_at env objects store (inv_body a)"
  using assms Front_preserves_at unfolding Front_checked_def
  by (auto split: if_splits)

end

end
