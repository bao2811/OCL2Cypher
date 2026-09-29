theory Semantics
  imports TargetSigma
begin

text \<open>
Executable three-valued semantics for the first machine-checked vertical
slice.  The admitted slice contains Boolean literals, resolved variables,
not/and/or/implies, if, and let.  Constructors outside that slice evaluate to
typed Boolean bottom here and are rejected by the corresponding partial
transformation, so preservation theorems are stated on the success domain.
\<close>

datatype bool3 = B3_True | B3_False | B3_Bottom

definition int64_min :: int where
  "int64_min = - (2 ^ 63)"

definition int64_max :: int where
  "int64_max = 2 ^ 63 - 1"

definition in_int64 :: "int \<Rightarrow> bool" where
  "in_int64 n \<longleftrightarrow> int64_min \<le> n \<and> n \<le> int64_max"

fun b3_not :: "bool3 \<Rightarrow> bool3" where
  "b3_not B3_True = B3_False"
| "b3_not B3_False = B3_True"
| "b3_not B3_Bottom = B3_Bottom"

fun b3_and :: "bool3 \<Rightarrow> bool3 \<Rightarrow> bool3" where
  "b3_and B3_False _ = B3_False"
| "b3_and B3_True x = x"
| "b3_and B3_Bottom B3_False = B3_False"
| "b3_and B3_Bottom _ = B3_Bottom"

fun b3_or :: "bool3 \<Rightarrow> bool3 \<Rightarrow> bool3" where
  "b3_or B3_True _ = B3_True"
| "b3_or B3_False x = x"
| "b3_or B3_Bottom B3_True = B3_True"
| "b3_or B3_Bottom _ = B3_Bottom"

fun b3_xor :: "bool3 \<Rightarrow> bool3 \<Rightarrow> bool3" where
  "b3_xor B3_True B3_True = B3_False"
| "b3_xor B3_True B3_False = B3_True"
| "b3_xor B3_False B3_True = B3_True"
| "b3_xor B3_False B3_False = B3_False"
| "b3_xor _ _ = B3_Bottom"

definition b3_equal :: "bool3 \<Rightarrow> bool3 \<Rightarrow> bool3" where
  "b3_equal x y = (if x = y then B3_True else B3_False)"

fun b3_is_null :: "bool3 \<Rightarrow> bool3" where
  "b3_is_null B3_Bottom = B3_True"
| "b3_is_null _ = B3_False"

fun b3_native_equal :: "bool3 \<Rightarrow> bool3 \<Rightarrow> bool3" where
  "b3_native_equal B3_Bottom _ = B3_Bottom"
| "b3_native_equal _ B3_Bottom = B3_Bottom"
| "b3_native_equal B3_True B3_True = B3_True"
| "b3_native_equal B3_False B3_False = B3_True"
| "b3_native_equal _ _ = B3_False"

definition int_compare3 :: "(int \<Rightarrow> int \<Rightarrow> bool) \<Rightarrow>
  int option \<Rightarrow> int option \<Rightarrow> bool3" where
  "int_compare3 relation left right =
     (case (left, right) of
        (Some l, Some r) \<Rightarrow> if relation l r then B3_True else B3_False
      | _ \<Rightarrow> B3_Bottom)"

definition b3_implies :: "bool3 \<Rightarrow> bool3 \<Rightarrow> bool3" where
  "b3_implies x y = b3_or (b3_not x) y"

fun b3_if :: "bool3 \<Rightarrow> bool3 \<Rightarrow> bool3 \<Rightarrow> bool3" where
  "b3_if B3_True t _ = t"
| "b3_if B3_False _ e = e"
| "b3_if B3_Bottom _ _ = B3_Bottom"

type_synonym bool_env = "variable_id \<Rightarrow> bool3"
type_synonym object_env = "variable_id \<Rightarrow> string option"
type_synonym int_attribute_store = "string \<Rightarrow> string \<Rightarrow> int option"
type_synonym navigation_store = "string \<Rightarrow> string \<Rightarrow> string list"

definition nav_one :: "string list \<Rightarrow> string option" where
  "nav_one occurrences =
     (case occurrences of [target] \<Rightarrow> Some target | _ \<Rightarrow> None)"

definition bind_env :: "bool_env \<Rightarrow> variable_id \<Rightarrow> bool3 \<Rightarrow> bool_env" where
  "bind_env env x v = env(x := v)"

definition op_not_id :: stdlib_operation_id where
  "op_not_id = ''OCLstdlib::Boolean::not''"

definition op_and_id :: stdlib_operation_id where
  "op_and_id = ''OCLstdlib::Boolean::and''"

definition op_or_id :: stdlib_operation_id where
  "op_or_id = ''OCLstdlib::Boolean::or''"

definition op_implies_id :: stdlib_operation_id where
  "op_implies_id = ''OCLstdlib::Boolean::implies''"

definition op_xor_id :: stdlib_operation_id where
  "op_xor_id = ''OCLstdlib::Boolean::xor''"

definition op_equal_id :: stdlib_operation_id where
  "op_equal_id = ''OCLstdlib::OclAny::=''"

definition op_not_equal_id :: stdlib_operation_id where
  "op_not_equal_id = ''OCLstdlib::OclAny::<>''"

definition op_lt_id :: stdlib_operation_id where
  "op_lt_id = ''OCLstdlib::Integer::<''"

definition op_le_id :: stdlib_operation_id where
  "op_le_id = ''OCLstdlib::Integer::<=''"

definition op_gt_id :: stdlib_operation_id where
  "op_gt_id = ''OCLstdlib::Integer::>''"

definition op_ge_id :: stdlib_operation_id where
  "op_ge_id = ''OCLstdlib::Integer::>=''"

fun eval_source_int :: "resolved_ocl_exp \<Rightarrow> int option" where
  "eval_source_int (Exp_LitInt n (Ty_Prim PK_Integer)) = Some n"
| "eval_source_int _ = None"

fun eval_core_int :: "core_exp \<Rightarrow> int option" where
  "eval_core_int (Core.CE_IntegerLit n) = Some n"
| "eval_core_int _ = None"

fun eval_q_int :: "q_expr \<Rightarrow> int option" where
  "eval_q_int (QE_Const (QV_Int (Some n))) = Some n"
| "eval_q_int _ = None"

fun eval_cy_int :: "cy_expr \<Rightarrow> int option" where
  "eval_cy_int (TargetSigma.CE_IntLit n) = Some n"
| "eval_cy_int _ = None"

fun eval_source_object :: "object_env \<Rightarrow> resolved_ocl_exp \<Rightarrow> string option" where
  "eval_source_object env (Exp_Var x (Ty_Class _)) = env x"
| "eval_source_object _ _ = None"

fun eval_core_object :: "object_env \<Rightarrow> core_exp \<Rightarrow> string option" where
  "eval_core_object env (Core.CE_Var x (Ty_Class _)) = env x"
| "eval_core_object _ _ = None"

fun eval_q_object :: "object_env \<Rightarrow> q_expr \<Rightarrow> string option" where
  "eval_q_object env (QE_Var x (QT_Class _)) = env x"
| "eval_q_object _ _ = None"

fun eval_cy_object :: "object_env \<Rightarrow> cy_expr \<Rightarrow> string option" where
  "eval_cy_object env (TargetSigma.CE_VarE variable) =
     env (TargetSigma.cv_name variable)"
| "eval_cy_object _ _ = None"

fun eval_source_object_nav ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow>
   resolved_ocl_exp \<Rightarrow> string option" where
  "eval_source_object_nav env _ (Exp_Var x (Ty_Class _)) = env x"
| "eval_source_object_nav env navigation
     (Exp_Navigate receiver property [] (Ty_Class _)) =
     (case eval_source_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow> nav_one (navigation source (prop_id property)))"
| "eval_source_object_nav _ _ _ = None"

fun eval_core_object_nav ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow> core_exp \<Rightarrow> string option" where
  "eval_core_object_nav env _ (Core.CE_Var x (Ty_Class _)) = env x"
| "eval_core_object_nav env navigation
     (Core.CE_Nav CNK_ToOne receiver property []) =
     (case eval_core_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow>
          nav_one (navigation source (re_key (re_base property))))"
| "eval_core_object_nav _ _ _ = None"

fun eval_q_object_nav ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow> q_expr \<Rightarrow> string option" where
  "eval_q_object_nav env _ (QE_Var x (QT_Class _)) = env x"
| "eval_q_object_nav env navigation
     (QE_NavOne receiver [] _ observer) =
     (case eval_q_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow> nav_one (navigation source observer))"
| "eval_q_object_nav _ _ _ = None"

fun eval_cy_object_nav ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow> cy_expr \<Rightarrow> string option" where
  "eval_cy_object_nav env _ (TargetSigma.CE_VarE variable) =
     env (TargetSigma.cv_name variable)"
| "eval_cy_object_nav env navigation
     (TargetSigma.CE_NavOneE receiver observer) =
     (case eval_cy_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow> nav_one (navigation source observer))"
| "eval_cy_object_nav _ _ _ = None"

definition normalize_source_occurrences ::
  "coll_kind \<Rightarrow> string list \<Rightarrow> string list" where
  "normalize_source_occurrences kind occurrences =
     (if kind = CK_Set then remdups occurrences else occurrences)"

definition normalize_q_occurrences ::
  "q_coll_kind \<Rightarrow> string list \<Rightarrow> string list" where
  "normalize_q_occurrences kind occurrences =
     (if kind = QK_Set then remdups occurrences else occurrences)"

definition normalize_target_occurrences ::
  "result_shape \<Rightarrow> string list \<Rightarrow> string list" where
  "normalize_target_occurrences shape occurrences =
     (if shape = RS_Set then remdups occurrences else occurrences)"

fun eval_source_object_collection ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow>
   resolved_ocl_exp \<Rightarrow> string list option" where
  "eval_source_object_collection env navigation
     (Exp_Navigate receiver property [] (Ty_Coll kind (Ty_Class _))) =
     (case eval_source_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow>
          Some (normalize_source_occurrences kind
            (navigation source (prop_id property))))"
| "eval_source_object_collection _ _ _ = None"

fun eval_core_object_collection ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow>
   core_exp \<Rightarrow> string list option" where
  "eval_core_object_collection env navigation
     (Core.CE_Nav CNK_ToMany receiver property []) =
     (case eval_core_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow>
          Some (if Core.re_unique property
            then remdups (navigation source (Core.re_key (Core.re_base property)))
            else navigation source (Core.re_key (Core.re_base property))))"
| "eval_core_object_collection _ _ _ = None"

fun eval_q_object_collection ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow>
   q_expr \<Rightarrow> string list option" where
  "eval_q_object_collection env navigation
     (QE_MaterializePlan
       (QP_Nav receiver [] _ observer kind (QT_Class _))) =
     (case eval_q_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow>
          Some (normalize_q_occurrences kind
            (navigation source observer)))"
| "eval_q_object_collection _ _ _ = None"

fun eval_cy_object_collection ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow>
   cy_expr \<Rightarrow> string list option" where
  "eval_cy_object_collection env navigation
     (TargetSigma.CE_NavManyE receiver observer shape) =
     (case eval_cy_object_nav env navigation receiver of
        None \<Rightarrow> None
      | Some source \<Rightarrow>
          Some (normalize_target_occurrences shape
            (navigation source observer)))"
| "eval_cy_object_collection _ _ _ = None"

fun eval_source_int_at ::
  "object_env \<Rightarrow> int_attribute_store \<Rightarrow>
   resolved_ocl_exp \<Rightarrow> int option" where
  "eval_source_int_at _ _ (Exp_LitInt n (Ty_Prim PK_Integer)) = Some n"
| "eval_source_int_at objects store
     (Exp_AttrRead receiver property (Ty_Prim PK_Integer)) =
     (case eval_source_object objects receiver of
        None \<Rightarrow> None
      | Some oid \<Rightarrow> store oid (prop_id property))"
| "eval_source_int_at _ _ _ = None"

fun eval_core_int_at ::
  "object_env \<Rightarrow> int_attribute_store \<Rightarrow> core_exp \<Rightarrow> int option" where
  "eval_core_int_at _ _ (Core.CE_IntegerLit n) = Some n"
| "eval_core_int_at objects store (Core.CE_AttrRead receiver property) =
     (case eval_core_object objects receiver of
        None \<Rightarrow> None
      | Some oid \<Rightarrow> store oid (re_key (re_base property)))"
| "eval_core_int_at _ _ _ = None"

fun eval_q_int_at ::
  "object_env \<Rightarrow> int_attribute_store \<Rightarrow> q_expr \<Rightarrow> int option" where
  "eval_q_int_at _ _ (QE_Const (QV_Int (Some n))) = Some n"
| "eval_q_int_at objects store (QE_AttrRead receiver _ observer) =
     (case eval_q_object objects receiver of
        None \<Rightarrow> None
      | Some oid \<Rightarrow> store oid observer)"
| "eval_q_int_at _ _ _ = None"

fun eval_cy_int_at ::
  "object_env \<Rightarrow> int_attribute_store \<Rightarrow> cy_expr \<Rightarrow> int option" where
  "eval_cy_int_at _ _ (TargetSigma.CE_IntLit n) = Some n"
| "eval_cy_int_at objects store
     (TargetSigma.CE_PropAccess receiver property) =
     (case eval_cy_object objects receiver of
        None \<Rightarrow> None
      | Some oid \<Rightarrow> store oid property)"
| "eval_cy_int_at _ _ _ = None"

fun eval_source_bool :: "bool_env \<Rightarrow> resolved_ocl_exp \<Rightarrow> bool3" where
  "eval_source_bool _ (Exp_LitBool b _) = (if b then B3_True else B3_False)"
| "eval_source_bool env (Exp_Var x _) = env x"
| "eval_source_bool env (Exp_Let x _ value body _) =
     eval_source_bool (bind_env env x (eval_source_bool env value)) body"
| "eval_source_bool env (Exp_If condition then_e else_e _) =
     b3_if (eval_source_bool env condition)
           (eval_source_bool env then_e) (eval_source_bool env else_e)"
| "eval_source_bool env (Exp_Unary op body _) =
     (if op = op_not_id then b3_not (eval_source_bool env body) else B3_Bottom)"
| "eval_source_bool env (Exp_Binary op left right _) =
     (if op = op_lt_id then int_compare3 (<) (eval_source_int left) (eval_source_int right)
      else if op = op_le_id then int_compare3 (\<le>) (eval_source_int left) (eval_source_int right)
      else if op = op_gt_id then int_compare3 (>) (eval_source_int left) (eval_source_int right)
      else if op = op_ge_id then int_compare3 (\<ge>) (eval_source_int left) (eval_source_int right)
      else if op = op_and_id then b3_and (eval_source_bool env left) (eval_source_bool env right)
       else if op = op_or_id then b3_or (eval_source_bool env left) (eval_source_bool env right)
       else if op = op_xor_id then b3_xor (eval_source_bool env left) (eval_source_bool env right)
       else if op = op_equal_id then b3_equal (eval_source_bool env left) (eval_source_bool env right)
       else if op = op_not_equal_id then
         b3_not (b3_equal (eval_source_bool env left) (eval_source_bool env right))
       else if op = op_implies_id then
        b3_implies (eval_source_bool env left) (eval_source_bool env right)
      else B3_Bottom)"
| "eval_source_bool _ _ = B3_Bottom"

fun eval_core_bool :: "bool_env \<Rightarrow> core_exp \<Rightarrow> bool3" where
  "eval_core_bool _ (Core.CE_BooleanLit b) = (if b then B3_True else B3_False)"
| "eval_core_bool _ (Core.CE_Bottom _) = B3_Bottom"
| "eval_core_bool env (Core.CE_Var x _) = env x"
| "eval_core_bool env (Core.CE_Let declaration value body) =
     eval_core_bool (bind_env env (Core.cv_name declaration) (eval_core_bool env value)) body"
| "eval_core_bool env (Core.CE_If condition then_e else_e) =
     b3_if (eval_core_bool env condition)
           (eval_core_bool env then_e) (eval_core_bool env else_e)"
| "eval_core_bool env (Core.CE_Unary CUO_BooleanNot body) =
     b3_not (eval_core_bool env body)"
| "eval_core_bool env (Core.CE_Binary CB_And left right) =
     b3_and (eval_core_bool env left) (eval_core_bool env right)"
| "eval_core_bool env (Core.CE_Binary CB_Or left right) =
     b3_or (eval_core_bool env left) (eval_core_bool env right)"
| "eval_core_bool env (Core.CE_Binary CB_Xor left right) =
     b3_xor (eval_core_bool env left) (eval_core_bool env right)"
| "eval_core_bool env (Core.CE_Binary CB_Eq left right) =
     b3_equal (eval_core_bool env left) (eval_core_bool env right)"
| "eval_core_bool env (Core.CE_Binary CB_Neq left right) =
     b3_not (b3_equal (eval_core_bool env left) (eval_core_bool env right))"
| "eval_core_bool _ (Core.CE_Binary CB_Lt left right) =
     int_compare3 (<) (eval_core_int left) (eval_core_int right)"
| "eval_core_bool _ (Core.CE_Binary CB_Le left right) =
     int_compare3 (\<le>) (eval_core_int left) (eval_core_int right)"
| "eval_core_bool _ (Core.CE_Binary CB_Gt left right) =
     int_compare3 (>) (eval_core_int left) (eval_core_int right)"
| "eval_core_bool _ (Core.CE_Binary CB_Ge left right) =
     int_compare3 (\<ge>) (eval_core_int left) (eval_core_int right)"
| "eval_core_bool env (Core.CE_Binary CB_Implies left right) =
     b3_implies (eval_core_bool env left) (eval_core_bool env right)"
| "eval_core_bool _ _ = B3_Bottom"

fun eval_q_bool :: "bool_env \<Rightarrow> q_expr \<Rightarrow> bool3" where
  "eval_q_bool env (QE_Var x _) = env x"
| "eval_q_bool _ (QE_Const (QV_Bool (Some b))) = (if b then B3_True else B3_False)"
| "eval_q_bool _ (QE_Const (QV_Bool None)) = B3_Bottom"
| "eval_q_bool _ (QE_Bottom _) = B3_Bottom"
| "eval_q_bool env (QE_Let declaration value body) =
     eval_q_bool (bind_env env (Core.cv_name declaration) (eval_q_bool env value)) body"
| "eval_q_bool env (QE_If condition then_e else_e) =
     b3_if (eval_q_bool env condition)
           (eval_q_bool env then_e) (eval_q_bool env else_e)"
| "eval_q_bool env (QE_Unary QUO_BooleanNot body) = b3_not (eval_q_bool env body)"
| "eval_q_bool env (QE_Binary QB_And left right) =
     b3_and (eval_q_bool env left) (eval_q_bool env right)"
| "eval_q_bool env (QE_Binary QB_Or left right) =
     b3_or (eval_q_bool env left) (eval_q_bool env right)"
| "eval_q_bool env (QE_Binary QB_Xor left right) =
     b3_xor (eval_q_bool env left) (eval_q_bool env right)"
| "eval_q_bool env (QE_Binary QB_Eq left right) =
     b3_equal (eval_q_bool env left) (eval_q_bool env right)"
| "eval_q_bool env (QE_Binary QB_Neq left right) =
     b3_not (b3_equal (eval_q_bool env left) (eval_q_bool env right))"
| "eval_q_bool _ (QE_Binary QB_Lt left right) =
     int_compare3 (<) (eval_q_int left) (eval_q_int right)"
| "eval_q_bool _ (QE_Binary QB_Le left right) =
     int_compare3 (\<le>) (eval_q_int left) (eval_q_int right)"
| "eval_q_bool _ (QE_Binary QB_Gt left right) =
     int_compare3 (>) (eval_q_int left) (eval_q_int right)"
| "eval_q_bool _ (QE_Binary QB_Ge left right) =
     int_compare3 (\<ge>) (eval_q_int left) (eval_q_int right)"
| "eval_q_bool env (QE_Binary QB_Implies left right) =
     b3_implies (eval_q_bool env left) (eval_q_bool env right)"
| "eval_q_bool _ _ = B3_Bottom"

fun eval_cy_bool :: "bool_env \<Rightarrow> cy_expr \<Rightarrow> bool3" where
  "eval_cy_bool env (TargetSigma.CE_VarE v) = env (TargetSigma.cv_name v)"
| "eval_cy_bool _ TargetSigma.CE_Null = B3_Bottom"
| "eval_cy_bool _ (TargetSigma.CE_BoolLit b) = (if b then B3_True else B3_False)"
| "eval_cy_bool env (TargetSigma.CE_Unary CUNot body) = b3_not (eval_cy_bool env body)"
| "eval_cy_bool env (TargetSigma.CE_Unary CUIsNull body) =
     b3_is_null (eval_cy_bool env body)"
| "eval_cy_bool env (TargetSigma.CE_Binary CBX_And left right) =
     b3_and (eval_cy_bool env left) (eval_cy_bool env right)"
| "eval_cy_bool env (TargetSigma.CE_Binary CBX_Or left right) =
     b3_or (eval_cy_bool env left) (eval_cy_bool env right)"
| "eval_cy_bool env (TargetSigma.CE_Binary CBX_Xor left right) =
     b3_xor (eval_cy_bool env left) (eval_cy_bool env right)"
| "eval_cy_bool env (TargetSigma.CE_Binary CBX_Equal left right) =
     b3_native_equal (eval_cy_bool env left) (eval_cy_bool env right)"
| "eval_cy_bool _ (TargetSigma.CE_Binary CBX_Lt left right) =
     int_compare3 (<) (eval_cy_int left) (eval_cy_int right)"
| "eval_cy_bool _ (TargetSigma.CE_Binary CBX_Le left right) =
     int_compare3 (\<le>) (eval_cy_int left) (eval_cy_int right)"
| "eval_cy_bool _ (TargetSigma.CE_Binary CBX_Gt left right) =
     int_compare3 (>) (eval_cy_int left) (eval_cy_int right)"
| "eval_cy_bool _ (TargetSigma.CE_Binary CBX_Ge left right) =
     int_compare3 (\<ge>) (eval_cy_int left) (eval_cy_int right)"
| "eval_cy_bool env (TargetSigma.CE_Case [(condition, then_e)] (Some else_e)) =
     b3_if (eval_cy_bool env condition)
           (eval_cy_bool env then_e) (eval_cy_bool env else_e)"
| "eval_cy_bool _ _ = B3_Bottom"

text \<open>
State-indexed Boolean semantics.  These four functions extend the closed
literal slice above with single-valued Integer attribute observations.  The
object environment interprets resolved object variables (in particular
``self''), while the store is the observation boundary supplied by either a
UML snapshot or an adequate graph representation.
\<close>

fun eval_source_bool_at ::
  "bool_env \<Rightarrow> object_env \<Rightarrow> int_attribute_store \<Rightarrow>
   resolved_ocl_exp \<Rightarrow> bool3" where
  "eval_source_bool_at _ _ _ (Exp_LitBool b (Ty_Prim PK_Boolean)) =
     (if b then B3_True else B3_False)"
| "eval_source_bool_at env _ _ (Exp_Var x (Ty_Prim PK_Boolean)) = env x"
| "eval_source_bool_at env objects store
     (Exp_Let x (Ty_Prim PK_Boolean) value body (Ty_Prim PK_Boolean)) =
     eval_source_bool_at
       (bind_env env x (eval_source_bool_at env objects store value))
       objects store body"
| "eval_source_bool_at env objects store
     (Exp_If condition then_e else_e (Ty_Prim PK_Boolean)) =
     b3_if (eval_source_bool_at env objects store condition)
       (eval_source_bool_at env objects store then_e)
       (eval_source_bool_at env objects store else_e)"
| "eval_source_bool_at env objects store
     (Exp_Unary op body (Ty_Prim PK_Boolean)) =
     (if op = op_not_id
      then b3_not (eval_source_bool_at env objects store body)
      else B3_Bottom)"
| "eval_source_bool_at env objects store
     (Exp_Binary op left right (Ty_Prim PK_Boolean)) =
     (if op = op_lt_id then
        int_compare3 (<) (eval_source_int_at objects store left)
          (eval_source_int_at objects store right)
      else if op = op_le_id then
        int_compare3 (\<le>) (eval_source_int_at objects store left)
          (eval_source_int_at objects store right)
      else if op = op_gt_id then
        int_compare3 (>) (eval_source_int_at objects store left)
          (eval_source_int_at objects store right)
      else if op = op_ge_id then
        int_compare3 (\<ge>) (eval_source_int_at objects store left)
          (eval_source_int_at objects store right)
      else if op = op_and_id then
        b3_and (eval_source_bool_at env objects store left)
          (eval_source_bool_at env objects store right)
      else if op = op_or_id then
        b3_or (eval_source_bool_at env objects store left)
          (eval_source_bool_at env objects store right)
      else if op = op_xor_id then
        b3_xor (eval_source_bool_at env objects store left)
          (eval_source_bool_at env objects store right)
      else if op = op_equal_id then
        b3_equal (eval_source_bool_at env objects store left)
          (eval_source_bool_at env objects store right)
      else if op = op_not_equal_id then
        b3_not (b3_equal (eval_source_bool_at env objects store left)
          (eval_source_bool_at env objects store right))
      else if op = op_implies_id then
        b3_implies (eval_source_bool_at env objects store left)
          (eval_source_bool_at env objects store right)
      else B3_Bottom)"
| "eval_source_bool_at _ _ _ _ = B3_Bottom"

fun eval_core_bool_at ::
  "bool_env \<Rightarrow> object_env \<Rightarrow> int_attribute_store \<Rightarrow>
   core_exp \<Rightarrow> bool3" where
  "eval_core_bool_at _ _ _ (Core.CE_BooleanLit b) =
     (if b then B3_True else B3_False)"
| "eval_core_bool_at _ _ _ (Core.CE_Bottom _) = B3_Bottom"
| "eval_core_bool_at env _ _ (Core.CE_Var x (Ty_Prim PK_Boolean)) = env x"
| "eval_core_bool_at env objects store (Core.CE_Let declaration value body) =
     eval_core_bool_at
       (bind_env env (Core.cv_name declaration)
         (eval_core_bool_at env objects store value)) objects store body"
| "eval_core_bool_at env objects store (Core.CE_If condition then_e else_e) =
     b3_if (eval_core_bool_at env objects store condition)
       (eval_core_bool_at env objects store then_e)
       (eval_core_bool_at env objects store else_e)"
| "eval_core_bool_at env objects store
     (Core.CE_Unary CUO_BooleanNot body) =
     b3_not (eval_core_bool_at env objects store body)"
| "eval_core_bool_at env objects store (Core.CE_Binary CB_And left right) =
     b3_and (eval_core_bool_at env objects store left)
       (eval_core_bool_at env objects store right)"
| "eval_core_bool_at env objects store (Core.CE_Binary CB_Or left right) =
     b3_or (eval_core_bool_at env objects store left)
       (eval_core_bool_at env objects store right)"
| "eval_core_bool_at env objects store (Core.CE_Binary CB_Xor left right) =
     b3_xor (eval_core_bool_at env objects store left)
       (eval_core_bool_at env objects store right)"
| "eval_core_bool_at env objects store (Core.CE_Binary CB_Eq left right) =
     b3_equal (eval_core_bool_at env objects store left)
       (eval_core_bool_at env objects store right)"
| "eval_core_bool_at env objects store (Core.CE_Binary CB_Neq left right) =
     b3_not (b3_equal (eval_core_bool_at env objects store left)
       (eval_core_bool_at env objects store right))"
| "eval_core_bool_at _ objects store (Core.CE_Binary CB_Lt left right) =
     int_compare3 (<) (eval_core_int_at objects store left)
       (eval_core_int_at objects store right)"
| "eval_core_bool_at _ objects store (Core.CE_Binary CB_Le left right) =
     int_compare3 (\<le>) (eval_core_int_at objects store left)
       (eval_core_int_at objects store right)"
| "eval_core_bool_at _ objects store (Core.CE_Binary CB_Gt left right) =
     int_compare3 (>) (eval_core_int_at objects store left)
       (eval_core_int_at objects store right)"
| "eval_core_bool_at _ objects store (Core.CE_Binary CB_Ge left right) =
     int_compare3 (\<ge>) (eval_core_int_at objects store left)
       (eval_core_int_at objects store right)"
| "eval_core_bool_at env objects store
     (Core.CE_Binary CB_Implies left right) =
     b3_implies (eval_core_bool_at env objects store left)
       (eval_core_bool_at env objects store right)"
| "eval_core_bool_at _ _ _ _ = B3_Bottom"

fun eval_q_bool_at ::
  "bool_env \<Rightarrow> object_env \<Rightarrow> int_attribute_store \<Rightarrow>
   q_expr \<Rightarrow> bool3" where
  "eval_q_bool_at env _ _ (QE_Var x (QT_Prim QPK_Boolean3)) = env x"
| "eval_q_bool_at _ _ _ (QE_Const (QV_Bool (Some b))) =
     (if b then B3_True else B3_False)"
| "eval_q_bool_at _ _ _ (QE_Const (QV_Bool None)) = B3_Bottom"
| "eval_q_bool_at _ _ _ (QE_Bottom _) = B3_Bottom"
| "eval_q_bool_at env objects store (QE_Let declaration value body) =
     eval_q_bool_at
       (bind_env env (Core.cv_name declaration)
         (eval_q_bool_at env objects store value)) objects store body"
| "eval_q_bool_at env objects store (QE_If condition then_e else_e) =
     b3_if (eval_q_bool_at env objects store condition)
       (eval_q_bool_at env objects store then_e)
       (eval_q_bool_at env objects store else_e)"
| "eval_q_bool_at env objects store (QE_Unary QUO_BooleanNot body) =
     b3_not (eval_q_bool_at env objects store body)"
| "eval_q_bool_at env objects store (QE_Binary QB_And left right) =
     b3_and (eval_q_bool_at env objects store left)
       (eval_q_bool_at env objects store right)"
| "eval_q_bool_at env objects store (QE_Binary QB_Or left right) =
     b3_or (eval_q_bool_at env objects store left)
       (eval_q_bool_at env objects store right)"
| "eval_q_bool_at env objects store (QE_Binary QB_Xor left right) =
     b3_xor (eval_q_bool_at env objects store left)
       (eval_q_bool_at env objects store right)"
| "eval_q_bool_at env objects store (QE_Binary QB_Eq left right) =
     b3_equal (eval_q_bool_at env objects store left)
       (eval_q_bool_at env objects store right)"
| "eval_q_bool_at env objects store (QE_Binary QB_Neq left right) =
     b3_not (b3_equal (eval_q_bool_at env objects store left)
       (eval_q_bool_at env objects store right))"
| "eval_q_bool_at _ objects store (QE_Binary QB_Lt left right) =
     int_compare3 (<) (eval_q_int_at objects store left)
       (eval_q_int_at objects store right)"
| "eval_q_bool_at _ objects store (QE_Binary QB_Le left right) =
     int_compare3 (\<le>) (eval_q_int_at objects store left)
       (eval_q_int_at objects store right)"
| "eval_q_bool_at _ objects store (QE_Binary QB_Gt left right) =
     int_compare3 (>) (eval_q_int_at objects store left)
       (eval_q_int_at objects store right)"
| "eval_q_bool_at _ objects store (QE_Binary QB_Ge left right) =
     int_compare3 (\<ge>) (eval_q_int_at objects store left)
       (eval_q_int_at objects store right)"
| "eval_q_bool_at env objects store (QE_Binary QB_Implies left right) =
     b3_implies (eval_q_bool_at env objects store left)
       (eval_q_bool_at env objects store right)"
| "eval_q_bool_at _ _ _ _ = B3_Bottom"

fun eval_cy_bool_at ::
  "bool_env \<Rightarrow> object_env \<Rightarrow> int_attribute_store \<Rightarrow>
   cy_expr \<Rightarrow> bool3" where
  "eval_cy_bool_at env _ _ (TargetSigma.CE_VarE v) =
     env (TargetSigma.cv_name v)"
| "eval_cy_bool_at _ _ _ TargetSigma.CE_Null = B3_Bottom"
| "eval_cy_bool_at _ _ _ (TargetSigma.CE_BoolLit b) =
     (if b then B3_True else B3_False)"
| "eval_cy_bool_at env objects store (TargetSigma.CE_Unary CUNot body) =
     b3_not (eval_cy_bool_at env objects store body)"
| "eval_cy_bool_at env objects store (TargetSigma.CE_Unary CUIsNull body) =
     b3_is_null (eval_cy_bool_at env objects store body)"
| "eval_cy_bool_at env objects store
     (TargetSigma.CE_Binary CBX_And left right) =
     b3_and (eval_cy_bool_at env objects store left)
       (eval_cy_bool_at env objects store right)"
| "eval_cy_bool_at env objects store
     (TargetSigma.CE_Binary CBX_Or left right) =
     b3_or (eval_cy_bool_at env objects store left)
       (eval_cy_bool_at env objects store right)"
| "eval_cy_bool_at env objects store
     (TargetSigma.CE_Binary CBX_Xor left right) =
     b3_xor (eval_cy_bool_at env objects store left)
       (eval_cy_bool_at env objects store right)"
| "eval_cy_bool_at env objects store
     (TargetSigma.CE_Binary CBX_Equal left right) =
     b3_native_equal (eval_cy_bool_at env objects store left)
       (eval_cy_bool_at env objects store right)"
| "eval_cy_bool_at _ objects store
     (TargetSigma.CE_Binary CBX_Lt left right) =
     int_compare3 (<) (eval_cy_int_at objects store left)
       (eval_cy_int_at objects store right)"
| "eval_cy_bool_at _ objects store
     (TargetSigma.CE_Binary CBX_Le left right) =
     int_compare3 (\<le>) (eval_cy_int_at objects store left)
       (eval_cy_int_at objects store right)"
| "eval_cy_bool_at _ objects store
     (TargetSigma.CE_Binary CBX_Gt left right) =
     int_compare3 (>) (eval_cy_int_at objects store left)
       (eval_cy_int_at objects store right)"
| "eval_cy_bool_at _ objects store
     (TargetSigma.CE_Binary CBX_Ge left right) =
     int_compare3 (\<ge>) (eval_cy_int_at objects store left)
       (eval_cy_int_at objects store right)"
| "eval_cy_bool_at env objects store
     (TargetSigma.CE_Case [(condition, then_e)] (Some else_e)) =
     b3_if (eval_cy_bool_at env objects store condition)
       (eval_cy_bool_at env objects store then_e)
       (eval_cy_bool_at env objects store else_e)"
| "eval_cy_bool_at _ _ _ _ = B3_Bottom"

end
