theory ProfileV1
  imports Front
begin

text \<open>
ProfileV1.thy makes the theorem boundary explicit.  Checked_V1_exp is the
expression domain currently accepted by the executable Isabelle frontend.  It
is deliberately narrower than the production OCL_val profile: qualifiers,
association classes, Real, collection literals, and iterator constructors are
not admitted here.  Iterator denotations are proved separately in
Iterators.thy and will enter this predicate only after the compiler stages are
executable for them.

This separation prevents a production feature or a hand proof from being
silently counted as part of the kernel-checked end-to-end theorem.
\<close>

definition checked_v1_binary ::
  "stdlib_operation_id \<Rightarrow> ocl_type \<Rightarrow> ocl_type \<Rightarrow> bool" where
  "checked_v1_binary op left_type right_type \<equiv>
     (left_type = Ty_Prim PK_Integer \<and>
      right_type = Ty_Prim PK_Integer \<and>
      front_comparison_operator op \<noteq> None) \<or>
     (left_type = Ty_Prim PK_Boolean \<and>
      right_type = Ty_Prim PK_Boolean \<and>
      front_boolean_operator op \<noteq> None)"

fun Checked_V1_exp :: "resolved_ocl_exp \<Rightarrow> bool" where
  "Checked_V1_exp (Exp_LitBool _ result_type) =
     (result_type = Ty_Prim PK_Boolean)"
| "Checked_V1_exp (Exp_LitInt _ result_type) =
     (result_type = Ty_Prim PK_Integer)"
| "Checked_V1_exp (Exp_Var variable result_type) =
     (variable \<noteq> '''' \<and>
      (result_type = Ty_Prim PK_Boolean \<or>
       (\<exists>classifier. result_type = Ty_Class classifier \<and>
                     classifier \<noteq> '''')))"
| "Checked_V1_exp (Exp_AttrRead source property result_type) =
     (Checked_V1_exp source \<and>
      result_type = Ty_Prim PK_Integer \<and>
      wf_property_shape property \<and>
      prop_is_attr property \<and>
      prop_type property = Ty_Prim PK_Integer \<and>
      prop_upper property = 1 \<and>
      static_type source = Ty_Class (prop_owner property))"
| "Checked_V1_exp (Exp_Navigate source property qualifiers result_type) =
     (Checked_V1_exp source \<and>
      qualifiers = [] \<and>
      wf_property_shape property \<and>
      \<not> prop_is_attr property \<and>
      prop_navigation_source property =
        (case static_type source of
           Ty_Class source_class \<Rightarrow> Some source_class
         | _ \<Rightarrow> None) \<and>
      (case result_type of
         Ty_Class target_class \<Rightarrow>
           prop_upper property = 1 \<and>
           prop_type property = Ty_Class target_class
       | Ty_Coll kind (Ty_Class target_class) \<Rightarrow>
           (prop_upper property = -1 \<or> prop_upper property > 1) \<and>
           prop_type property = Ty_Class target_class \<and>
           kind = (if prop_unique property then CK_Set else CK_Bag)
       | _ \<Rightarrow> False))"
| "Checked_V1_exp
     (Exp_Let variable (Ty_Prim PK_Boolean) value body
       (Ty_Prim PK_Boolean)) =
     (variable \<noteq> '''' \<and>
      static_type value = Ty_Prim PK_Boolean \<and>
      static_type body = Ty_Prim PK_Boolean \<and>
      Checked_V1_exp value \<and> Checked_V1_exp body)"
| "Checked_V1_exp
     (Exp_If condition then_exp else_exp (Ty_Prim PK_Boolean)) =
     (static_type condition = Ty_Prim PK_Boolean \<and>
      static_type then_exp = Ty_Prim PK_Boolean \<and>
      static_type else_exp = Ty_Prim PK_Boolean \<and>
      Checked_V1_exp condition \<and>
      Checked_V1_exp then_exp \<and> Checked_V1_exp else_exp)"
| "Checked_V1_exp (Exp_Unary op body (Ty_Prim PK_Boolean)) =
     (op = op_not_id \<and>
      static_type body = Ty_Prim PK_Boolean \<and>
      Checked_V1_exp body)"
| "Checked_V1_exp
     (Exp_Binary op left right (Ty_Prim PK_Boolean)) =
     (Checked_V1_exp left \<and> Checked_V1_exp right \<and>
      checked_v1_binary op (static_type left) (static_type right))"
| "Checked_V1_exp _ = False"

definition Checked_V1_invariant :: "resolved_ocl_invariant \<Rightarrow> bool" where
  "Checked_V1_invariant invariant \<equiv>
     WF_resolved_flat invariant \<and> Checked_V1_exp (inv_body invariant)"

lemma front_success_implies_Checked_V1_exp:
  assumes "front_exp source = Some core"
  shows "Checked_V1_exp source"
  using assms
  by (induction source arbitrary: core rule: front_exp.induct)
     (auto simp: checked_v1_binary_def front_binary_def
           split: option.splits prod.splits if_splits ocl_type.splits)

section \<open>Regression witnesses for fail-closed typing\<close>

definition mismatched_let_example :: resolved_ocl_exp where
  "mismatched_let_example =
     Exp_Let ''x'' (Ty_Prim PK_Boolean)
       (Exp_LitInt 1 (Ty_Prim PK_Integer))
       (Exp_Var ''x'' (Ty_Prim PK_Boolean))
       (Ty_Prim PK_Boolean)"

lemma mismatched_let_is_not_resolved_wf:
  "\<not> wf_exp_types mismatched_let_example"
  by (simp add: mismatched_let_example_def)

lemma mismatched_let_fails_closed:
  "front_exp mismatched_let_example = None"
  by (simp add: mismatched_let_example_def)

definition mismatched_if_example :: resolved_ocl_exp where
  "mismatched_if_example =
     Exp_If (Exp_LitBool True (Ty_Prim PK_Boolean))
       (Exp_LitInt 1 (Ty_Prim PK_Integer))
       (Exp_LitInt 0 (Ty_Prim PK_Integer))
       (Ty_Prim PK_Boolean)"

lemma mismatched_if_is_not_resolved_wf:
  "\<not> wf_exp_types mismatched_if_example"
  by (simp add: mismatched_if_example_def)

lemma mismatched_if_fails_closed:
  "front_exp mismatched_if_example = None"
  by (simp add: mismatched_if_example_def)

context ocl_source_model
begin

theorem Front_checked_implies_Checked_V1:
  assumes result: "Front_checked invariant = Some core"
  shows "Checked_V1_invariant invariant"
proof -
  from Front_checked_source_wf[OF result]
  have source_wf: "WF_resolved invariant" .
  from result source_wf have front: "Front invariant = Some core"
    unfolding Front_checked_def by simp
  from front_success_implies_Checked_V1_exp[of "inv_body invariant" core]
       front
  have admitted: "Checked_V1_exp (inv_body invariant)"
    unfolding Front_def by simp
  from source_wf admitted show ?thesis
    unfolding Checked_V1_invariant_def WF_resolved_def by blast
qed

end

end
