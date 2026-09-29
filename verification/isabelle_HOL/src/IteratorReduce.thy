theory IteratorReduce
  imports IteratorRealize
begin

text \<open>
Refinement of the proof-oriented ReduceBool3 macro to the concrete
TargetSigma ReduceExpression shape.  The accumulator name is deterministically
allocated in a generated namespace and is distinct from the iterator binder.
Exists starts at false and steps with three-valued OR; forAll starts at true
and steps with three-valued AND.  Whole-source bottom bypasses the fold and
returns Boolean bottom.
\<close>

definition quantifier_accumulator_name :: "string \<Rightarrow> string" where
  "quantifier_accumulator_name binder = ''__oclAcc_'' @ binder"

definition quantifier_accumulator :: "cy_var \<Rightarrow> cy_var" where
  "quantifier_accumulator variable =
     \<lparr>TargetSigma.cy_var.cv_name =
        quantifier_accumulator_name (TargetSigma.cv_name variable)\<rparr>"

lemma quantifier_accumulator_nonempty [simp]:
  "quantifier_accumulator_name binder \<noteq> ''''"
  unfolding quantifier_accumulator_name_def by simp

lemma quantifier_accumulator_fresh [simp]:
  "quantifier_accumulator_name binder \<noteq> binder"
proof
  assume equality:
    "quantifier_accumulator_name binder = binder"
  then have
    "length (quantifier_accumulator_name binder) = length binder"
    by simp
  then show False
     unfolding quantifier_accumulator_name_def by simp
qed

text \<open>
The generated accumulator lives in a reserved namespace.  The following
predicate records the Boolean-variable names that a supported TargetSigma
predicate may read.  Object variables occurring below property/navigation
nodes are harmlessly included as well, making the check conservative.
\<close>

fun cy_variable_names :: "cy_expr \<Rightarrow> string set" where
  "cy_variable_names (TargetSigma.CE_VarE variable) =
     {TargetSigma.cv_name variable}"
| "cy_variable_names (TargetSigma.CE_Unary _ body) =
     cy_variable_names body"
| "cy_variable_names (TargetSigma.CE_Binary _ left right) =
     cy_variable_names left \<union> cy_variable_names right"
| "cy_variable_names
     (TargetSigma.CE_Case [(condition, then_expression)]
       (Some else_expression)) =
     cy_variable_names condition \<union> cy_variable_names then_expression \<union>
       cy_variable_names else_expression"
| "cy_variable_names _ = {}"

definition reduce_bool3_guard ::
  "quantifier_kind \<Rightarrow> cy_var \<Rightarrow> cy_expr \<Rightarrow> cy_expr \<Rightarrow> bool"
where
  "reduce_bool3_guard quantifier variable source predicate \<longleftrightarrow>
     WF_CyBoolExpr
       (TargetSigma.CE_ReduceBool3 quantifier variable source predicate) \<and>
     TargetSigma.cv_name (quantifier_accumulator variable)
       \<notin> cy_variable_names predicate"

definition reduce_bool3_candidate ::
  "quantifier_kind \<Rightarrow> cy_var \<Rightarrow> cy_expr \<Rightarrow> cy_expr \<Rightarrow>
   cy_expr"
where
  "reduce_bool3_candidate quantifier variable source predicate =
     TargetSigma.CE_Reduce
       (quantifier_accumulator variable)
       (TargetSigma.CE_BoolLit (quantifier = QK_All))
       variable source
       (TargetSigma.CE_Binary
         (if quantifier = QK_Any then CBX_Or else CBX_And)
         (TargetSigma.CE_VarE (quantifier_accumulator variable)) predicate)"

fun Expand_ReduceBool3 :: "cy_expr \<Rightarrow> cy_expr option" where
  "Expand_ReduceBool3
     (TargetSigma.CE_ReduceBool3 quantifier variable source predicate) =
     (if reduce_bool3_guard quantifier variable source predicate
      then Some (reduce_bool3_candidate quantifier variable source predicate)
      else None)"
| "Expand_ReduceBool3 _ = None"

fun eval_reduce_steps ::
  "string \<Rightarrow> string \<Rightarrow> bool_env \<Rightarrow> object_env \<Rightarrow>
   int_attribute_store \<Rightarrow> cy_expr \<Rightarrow> string list \<Rightarrow>
   bool3 \<Rightarrow> bool3" where
  "eval_reduce_steps accumulator binder booleans objects store step [] value =
     value"
| "eval_reduce_steps accumulator binder booleans objects store step
     (identifier # rest) value =
     eval_reduce_steps accumulator binder booleans objects store step rest
       (eval_cy_bool_at (booleans(accumulator := value))
          (objects(binder := Some identifier)) store step)"

fun eval_concrete_reduce_at ::
  "navigation_store \<Rightarrow> bool_env \<Rightarrow> object_env \<Rightarrow>
   int_attribute_store \<Rightarrow> cy_expr \<Rightarrow> bool3" where
  "eval_concrete_reduce_at navigation booleans objects store
     (TargetSigma.CE_Reduce accumulator initial variable source step) =
     (case eval_cy_object_collection objects navigation source of
        None \<Rightarrow> B3_Bottom
      | Some occurrences \<Rightarrow>
          eval_reduce_steps (TargetSigma.cv_name accumulator)
            (TargetSigma.cv_name variable) booleans objects store step
            occurrences (eval_cy_bool_at booleans objects store initial))"
| "eval_concrete_reduce_at _ _ _ _ _ = B3_Bottom"

lemma b3_or_associative:
  "b3_or (b3_or left middle) right =
   b3_or left (b3_or middle right)"
  by (cases left; cases middle; cases right; simp)

lemma b3_and_associative:
  "b3_and (b3_and left middle) right =
   b3_and left (b3_and middle right)"
  by (cases left; cases middle; cases right; simp)

lemma b3_or_right_false [simp]:
  "b3_or v B3_False = v"
  by (cases v) simp_all

lemma b3_and_right_true [simp]:
  "b3_and v B3_True = v"
  by (cases v) simp_all

lemma exists3_fold_accumulator:
  "foldl b3_or accumulator xs =
   b3_or accumulator (exists3_fold xs)"
  by (induction xs arbitrary: accumulator)
     (simp_all add: b3_or_associative)

lemma forall3_fold_accumulator:
  "foldl b3_and accumulator xs =
   b3_and accumulator (forall3_fold xs)"
  by (induction xs arbitrary: accumulator)
     (simp_all add: b3_and_associative)

lemma eval_cy_bool_at_fresh_update:
  assumes expression_wf: "WF_CyBoolExpr expression"
      and fresh: "name \<notin> cy_variable_names expression"
  shows
    "eval_cy_bool_at (booleans(name := updated_value)) objects store expression =
     eval_cy_bool_at booleans objects store expression"
  using expression_wf fresh
  by (induction expression arbitrary: booleans objects updated_value
        rule: WF_CyBoolExpr.induct)
     auto

lemma reduce_or_steps:
  assumes accumulator_fresh: "accumulator \<noteq> binder"
      and predicate_wf: "WF_CyBoolExpr predicate"
      and accumulator_not_read:
        "accumulator \<notin> cy_variable_names predicate"
  shows
    "eval_reduce_steps accumulator binder booleans objects store
       (TargetSigma.CE_Binary CBX_Or
         (TargetSigma.CE_VarE
           \<lparr>TargetSigma.cy_var.cv_name = accumulator\<rparr>) predicate)
       occurrences initial =
     foldl b3_or initial
       (map (\<lambda>identifier. eval_cy_bool_at booleans
          (objects(binder := Some identifier)) store predicate) occurrences)"
  using accumulator_fresh
  by (induction occurrences arbitrary: initial)
     (simp_all add: eval_cy_bool_at_fresh_update[OF predicate_wf
                       accumulator_not_read])

lemma reduce_and_steps:
  assumes accumulator_fresh: "accumulator \<noteq> binder"
      and predicate_wf: "WF_CyBoolExpr predicate"
      and accumulator_not_read:
        "accumulator \<notin> cy_variable_names predicate"
  shows
    "eval_reduce_steps accumulator binder booleans objects store
       (TargetSigma.CE_Binary CBX_And
         (TargetSigma.CE_VarE
           \<lparr>TargetSigma.cy_var.cv_name = accumulator\<rparr>) predicate)
       occurrences initial =
     foldl b3_and initial
       (map (\<lambda>identifier. eval_cy_bool_at booleans
          (objects(binder := Some identifier)) store predicate) occurrences)"
  using accumulator_fresh
  by (induction occurrences arbitrary: initial)
     (simp_all add: eval_cy_bool_at_fresh_update[OF predicate_wf
                       accumulator_not_read])

lemma Expand_ReduceBool3_success_shape:
  assumes expanded: "Expand_ReduceBool3 macro = Some concrete"
  obtains quantifier variable source predicate where
    "macro = TargetSigma.CE_ReduceBool3
       quantifier variable source predicate"
    "WF_CyBoolExpr macro"
    "TargetSigma.cv_name (quantifier_accumulator variable)
       \<notin> cy_variable_names predicate"
    "concrete = TargetSigma.CE_Reduce
       (quantifier_accumulator variable)
       (TargetSigma.CE_BoolLit (quantifier = QK_All))
       variable source
       (TargetSigma.CE_Binary
         (if quantifier = QK_Any then CBX_Or else CBX_And)
         (TargetSigma.CE_VarE (quantifier_accumulator variable)) predicate)"
proof -
  obtain quantifier variable source predicate where
    macro_shape:
      "macro = TargetSigma.CE_ReduceBool3
         quantifier variable source predicate"
    using expanded by (cases macro) auto
  have expansion_equation:
    "(if reduce_bool3_guard quantifier variable source predicate
      then Some (reduce_bool3_candidate quantifier variable source predicate)
      else None) = Some concrete"
    using expanded macro_shape
    by simp
  have successful_guard:
    "WF_CyBoolExpr
       (TargetSigma.CE_ReduceBool3
         quantifier variable source predicate) \<and>
     TargetSigma.cv_name (quantifier_accumulator variable)
       \<notin> cy_variable_names predicate"
  proof -
    have guard_true:
      "reduce_bool3_guard quantifier variable source predicate"
      using expansion_equation
      by (cases "reduce_bool3_guard quantifier variable source predicate")
         simp_all
    then show ?thesis
      unfolding reduce_bool3_guard_def .
  qed
  then have fresh:
    "TargetSigma.cv_name (quantifier_accumulator variable)
       \<notin> cy_variable_names predicate"
    by simp
  from successful_guard have macro_wf: "WF_CyBoolExpr macro"
    unfolding macro_shape by simp
  have concrete_shape:
    "concrete = TargetSigma.CE_Reduce
       (quantifier_accumulator variable)
       (TargetSigma.CE_BoolLit (quantifier = QK_All))
       variable source
       (TargetSigma.CE_Binary
         (if quantifier = QK_Any then CBX_Or else CBX_And)
         (TargetSigma.CE_VarE (quantifier_accumulator variable)) predicate)"
    using expansion_equation successful_guard
    unfolding reduce_bool3_guard_def reduce_bool3_candidate_def by simp
  show thesis
    by (rule that[OF macro_shape macro_wf fresh concrete_shape])
qed

theorem Expand_ReduceBool3_wf:
  assumes macro_wf: "WF_CyBoolExpr macro"
      and expanded: "Expand_ReduceBool3 macro = Some concrete"
  shows "WF_CyBoolExpr concrete"
proof -
  obtain quantifier variable source predicate where
      macro_shape:
        "macro = TargetSigma.CE_ReduceBool3
           quantifier variable source predicate"
    and admitted_macro: "WF_CyBoolExpr macro"
    and fresh:
        "TargetSigma.cv_name (quantifier_accumulator variable)
           \<notin> cy_variable_names predicate"
    and concrete_shape:
        "concrete = TargetSigma.CE_Reduce
           (quantifier_accumulator variable)
           (TargetSigma.CE_BoolLit (quantifier = QK_All))
           variable source
           (TargetSigma.CE_Binary
             (if quantifier = QK_Any then CBX_Or else CBX_And)
             (TargetSigma.CE_VarE (quantifier_accumulator variable)) predicate)"
    using Expand_ReduceBool3_success_shape[OF expanded] by blast
  show ?thesis
    using macro_wf fresh
    unfolding macro_shape concrete_shape quantifier_accumulator_def
    by (cases quantifier) simp_all
qed

theorem Expand_ReduceBool3_preserves:
  assumes expanded: "Expand_ReduceBool3 macro = Some concrete"
  shows
    "eval_concrete_reduce_at navigation booleans objects store concrete =
     eval_target_quantifier_at navigation booleans objects store macro"
proof -
  obtain quantifier variable source predicate where
      macro_shape:
        "macro = TargetSigma.CE_ReduceBool3
           quantifier variable source predicate"
    and admitted_macro: "WF_CyBoolExpr macro"
    and fresh:
        "TargetSigma.cv_name (quantifier_accumulator variable)
           \<notin> cy_variable_names predicate"
    and concrete_shape:
        "concrete = TargetSigma.CE_Reduce
           (quantifier_accumulator variable)
           (TargetSigma.CE_BoolLit (quantifier = QK_All))
           variable source
           (TargetSigma.CE_Binary
             (if quantifier = QK_Any then CBX_Or else CBX_And)
             (TargetSigma.CE_VarE (quantifier_accumulator variable)) predicate)"
    using Expand_ReduceBool3_success_shape[OF expanded] by blast
  have predicate_wf: "WF_CyBoolExpr predicate"
    using admitted_macro unfolding macro_shape by simp
  show ?thesis
    using macro_shape concrete_shape predicate_wf fresh
    by (cases quantifier)
       (auto simp: quantifier_accumulator_def eval_quantifier3_def
                   reduce_or_steps reduce_and_steps
                   exists3_fold_accumulator forall3_fold_accumulator
             split: option.splits)
qed

end
