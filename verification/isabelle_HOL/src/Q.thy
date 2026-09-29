theory Q
  imports Core PGMM
begin

text \<open>
Q.thy — Q_CYP, WF_Q^Sigma, and the RepSpec catalogue.

Normative sources:
  research/COREOCL_QCYP/Q-CYP.emf (qcyp package)
  research/COREOCL_QCYP/Q-CYP-Constraints.ocl
  research/COREOCL_QCYP/Q-CYP-Design.md
  research/TargetModel/Graph-Metamodel.md (Sigma catalogue layout)

Q is the representation-aware logical query IR.  It separates OCL
normalization from Cypher-specific realization.  This theory defines its
datatypes and structural WF predicates; Semantics.thy and CoreToQ.thy give
the executable Boolean-slice semantics and preservation proof.
\<close>

section \<open>Q enums (1:1 with Q-CYP.emf) \<close>

datatype query_mode = QM_Value | QM_Violations
datatype q_coll_kind = QK_Set | QK_Bag
datatype q_filter_kind = QF_Select | QF_Reject
datatype q_result_shape = QS_Scalar | QS_Set | QS_Bag | QS_Ids
datatype q_prim_kind = QPK_Boolean3 | QPK_Integer | QPK_Real | QPK_String

(* QUnary/QBinary operator sets are the same shapes as Core's, re-declared
   here to keep the two IRs structurally independent (Q-CYP is graph-free
   until observation).  See Q-CYP-Design.md section 6.1. *)
datatype q_unary_op =
    QUO_BooleanNot | QUO_NumericNegate | QUO_NumericAbs
  | QUO_RealFloor | QUO_RealRound
  | QUO_CollSize | QUO_CollIsEmpty | QUO_CollNotEmpty | QUO_CollSum

datatype q_binary_op =
    QB_Add | QB_Sub | QB_Mul | QB_DivReal | QB_DivInt | QB_ModInt
  | QB_Max | QB_Min
  | QB_Lt | QB_Le | QB_Gt | QB_Ge | QB_Eq | QB_Neq
  | QB_And | QB_Or | QB_Xor | QB_Implies
  | QB_CollCount | QB_CollIncludes | QB_CollExcludes
  | QB_CollIncludesAll | QB_CollExcludesAll
  | QB_SetUnion | QB_SetIntersect

datatype q_coercion = QC_IntegerToReal | QC_ClassUpcast | QC_CollElem

section \<open>Q types and values \<close>

(* Q type universe: same flat shape as Source's, but reified so that Q
   types carry a distinct identity for WF (see Q-CYP-Constraints.ocl). *)
datatype q_type =
    QT_Prim  q_prim_kind
  | QT_Class string            (* resolved classifier name *)
  | QT_Coll  q_coll_kind q_type

fun q_is_atomic :: "q_type \<Rightarrow> bool" where
  "q_is_atomic (QT_Prim _) = True"
| "q_is_atomic (QT_Class _) = True"
| "q_is_atomic (QT_Coll _ _) = False"

(* Tagged carrier values (see Rule 06 section 3).  Bottom is a distinguished
   constructor; collection distinguishes whole-collection bottom from an
   empty or element-bottom collection. *)
datatype q_value =
    QV_Bool   "bool option"       (* None = Boolean3 bottom *)
  | QV_Int    "int option"
  | QV_Real   "real option"
  | QV_String "string option"
  | QV_Object "string option"     (* None = typed object bottom *)
  | QV_Set    "q_bottom_flag" "q_value list"
  | QV_Bag    "q_bottom_flag" "q_value list"

and q_bottom_flag = QBf_Defined | QBf_Whole

section \<open>Q expressions and plans \<close>

datatype q_expr =
    QE_Var   string q_type
  | QE_Param string q_type
  | QE_Const q_value
  | QE_Bottom q_type
  | QE_Coerce q_coercion q_type q_expr
  | QE_Let  core_var_decl q_expr q_expr
  | QE_If   q_expr q_expr q_expr
  | QE_AttrRead q_expr core_prop string   (* observer semantic key *)
  | QE_NavOne q_expr "q_expr list" core_prop string
  | QE_NavACOne q_expr "q_expr list" core_class core_prop string
  | QE_TypeTest q_expr core_class bool
  | QE_TypeCast q_expr core_class
  | QE_Unary q_unary_op q_expr
  | QE_Binary q_binary_op q_expr q_expr
  | QE_SetLit "q_expr list" q_type
  | QE_BagLit "q_expr list" q_type
  | QE_MaterializePlan q_plan
  | QE_Exists3 q_plan core_var_decl q_expr
  | QE_ForAll3 q_plan core_var_decl q_expr

and q_plan =
    QP_FromColl q_expr
  | QP_ScanClass core_class core_var_decl
  | QP_Nav q_expr "q_expr list" core_prop string q_coll_kind q_type
  | QP_NavAC q_expr "q_expr list" core_class core_prop string q_coll_kind q_type
  | QP_Filter q_plan core_var_decl q_expr q_filter_kind
  | QP_Project q_plan core_var_decl q_expr q_coll_kind q_type
  | QP_Collect q_plan core_var_decl q_expr q_type
  | QP_Distinct q_plan
  | QP_PlanLet core_var_decl q_expr q_plan

section \<open>Q query root and result contract \<close>

record q_param =
  qp_name  :: string
  qp_type  :: q_type

record result_contract =
  rc_shape       :: q_result_shape
  rc_result_var  :: string
  rc_elem_type   :: string      (* typeTag of result *)
  rc_distinct    :: bool
  rc_whole_bottom :: "string option"

record q_query =
  qq_rep_key   :: string
  qq_mode      :: query_mode
  qq_shape     :: q_result_shape
  qq_context   :: "string option"     (* context class *)
  qq_self      :: "core_var_decl option"
  qq_params    :: "q_param list"
  qq_expr      :: "q_expr option"
  qq_plan      :: "q_plan option"
  qq_contract  :: result_contract

section \<open>WF_Q^Sigma(Sigma, q) — structural part (Q-CYP-Constraints.ocl) \<close>

definition q_unique_names :: "'a list \<Rightarrow> bool" where
  "q_unique_names xs \<equiv> length (remdups xs) = length xs"

(* Q-CYP-Constraints.ocl line 70: Exactly one body *)
definition wf_exactly_one_body :: "q_query \<Rightarrow> bool" where
  "wf_exactly_one_body q \<equiv>
     (case (qq_expr q, qq_plan q) of
        (Some _, None) \<Rightarrow> True
      | (None, Some _) \<Rightarrow> True
      | _ \<Rightarrow> False)"

(* Q-CYP-Constraints.ocl ResultShapeContract *)
definition wf_result_contract :: "result_contract \<Rightarrow> bool" where
  "wf_result_contract rc \<equiv>
     (case rc_shape rc of
        QS_Scalar \<Rightarrow> \<not> rc_distinct rc
      | QS_Set    \<Rightarrow> rc_distinct rc
      | QS_Bag    \<Rightarrow> \<not> rc_distinct rc
      | QS_Ids    \<Rightarrow> rc_distinct rc)"

(* Q-CYP-Constraints.ocl ValueModeDoesNotUseIds + ViolationsRequireIdentityProjection *)
definition wf_query_mode :: "q_query \<Rightarrow> bool" where
  "wf_query_mode q \<equiv>
     (qq_mode q = QM_Violations \<longrightarrow>
        (qq_shape q = QS_Ids \<and> qq_context q \<noteq> None \<and> qq_self q \<noteq> None))"

definition WF_Q :: "q_query \<Rightarrow> bool" where
  "WF_Q q \<equiv>
     (wf_exactly_one_body q \<and>
      wf_result_contract (qq_contract q) \<and>
      wf_query_mode q \<and>
      q_unique_names (map qp_name (qq_params q)))"

text \<open>
Structural well-formedness for the machine-checked Boolean expression slice.
The full QQuery predicate above remains the root contract; this predicate is
used by the executable Core-to-Q translation proof.
\<close>

fun Q_ObjectExpr :: "q_expr \<Rightarrow> bool" where
  "Q_ObjectExpr (QE_Var x (QT_Class classifier)) =
     (x \<noteq> '''' \<and> classifier \<noteq> '''')"
| "Q_ObjectExpr (QE_NavOne receiver qualifiers property observer) =
     (Q_ObjectExpr receiver \<and> qualifiers = [] \<and>
      re_prop_k property = RPK_AssociationEnd \<and>
      Core.re_upper property = 1 \<and>
      observer = re_key (re_base property) \<and> observer \<noteq> '''')"
| "Q_ObjectExpr _ = False"

fun Q_IntExpr :: "q_expr \<Rightarrow> bool" where
  "Q_IntExpr (QE_Const (QV_Int (Some _))) = True"
| "Q_IntExpr (QE_AttrRead receiver property observer) =
     (Q_ObjectExpr receiver \<and>
      re_prop_k property = RPK_Attribute \<and>
      re_decl_type property = Ty_Prim PK_Integer \<and>
      observer = re_key (re_base property) \<and> observer \<noteq> '''')"
| "Q_IntExpr _ = False"

fun Q_ObjectCollectionExpr :: "q_expr \<Rightarrow> bool" where
  "Q_ObjectCollectionExpr
     (QE_MaterializePlan
       (QP_Nav receiver [] property observer kind (QT_Class target))) =
     (Q_ObjectExpr receiver \<and>
      re_prop_k property = RPK_AssociationEnd \<and>
      Core.re_upper property \<noteq> 1 \<and>
      re_decl_type property = Ty_Class target \<and>
      observer = re_key (re_base property) \<and> observer \<noteq> '''')"
| "Q_ObjectCollectionExpr _ = False"

fun Q_BoolExpr :: "q_expr \<Rightarrow> bool" where
  "Q_BoolExpr (QE_Var x (QT_Prim QPK_Boolean3)) = (x \<noteq> '''')"
| "Q_BoolExpr (QE_Const (QV_Bool _)) = True"
| "Q_BoolExpr (QE_Bottom (QT_Prim QPK_Boolean3)) = True"
| "Q_BoolExpr (QE_Let declaration value body) =
     (cv_type declaration = Ty_Prim PK_Boolean \<and>
      cv_name declaration \<noteq> '''' \<and>
      Q_BoolExpr value \<and> Q_BoolExpr body)"
| "Q_BoolExpr (QE_If condition then_e else_e) =
     (Q_BoolExpr condition \<and> Q_BoolExpr then_e \<and> Q_BoolExpr else_e)"
| "Q_BoolExpr (QE_Unary QUO_BooleanNot body) = Q_BoolExpr body"
| "Q_BoolExpr (QE_Binary QB_And left right) =
     (Q_BoolExpr left \<and> Q_BoolExpr right)"
| "Q_BoolExpr (QE_Binary QB_Or left right) =
     (Q_BoolExpr left \<and> Q_BoolExpr right)"
| "Q_BoolExpr (QE_Binary QB_Xor left right) =
     (Q_BoolExpr left \<and> Q_BoolExpr right)"
| "Q_BoolExpr (QE_Binary QB_Eq left right) =
     (Q_BoolExpr left \<and> Q_BoolExpr right)"
| "Q_BoolExpr (QE_Binary QB_Neq left right) =
     (Q_BoolExpr left \<and> Q_BoolExpr right)"
| "Q_BoolExpr (QE_Binary QB_Lt left right) =
     (Q_IntExpr left \<and> Q_IntExpr right)"
| "Q_BoolExpr (QE_Binary QB_Le left right) =
     (Q_IntExpr left \<and> Q_IntExpr right)"
| "Q_BoolExpr (QE_Binary QB_Gt left right) =
     (Q_IntExpr left \<and> Q_IntExpr right)"
| "Q_BoolExpr (QE_Binary QB_Ge left right) =
     (Q_IntExpr left \<and> Q_IntExpr right)"
| "Q_BoolExpr (QE_Binary QB_Implies left right) =
     (Q_BoolExpr left \<and> Q_BoolExpr right)"
| "Q_BoolExpr
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
| "Q_BoolExpr
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
| "Q_BoolExpr _ = False"

definition WF_QExpr :: "q_expr \<Rightarrow> bool" where
  "WF_QExpr q \<longleftrightarrow>
     Q_ObjectExpr q \<or> Q_ObjectCollectionExpr q \<or>
     Q_IntExpr q \<or> Q_BoolExpr q"

section \<open>Representation catalogue Sigma (RepSpec) — structural layout \<close>

text \<open>
Sigma is a schema-level catalogue owned by the PGMM root: node/relationship
bindings, observer catalogue, key schemas, codecs, and association-class
encodings.  The catalogues are collected as data; contents-level closure is
ensured by construction for the stable-identity slice in Representation.thy.
The predicate below remains a structural shape check for the broader
catalogue.
\<close>

record rep_spec =
  rs_key     :: string
  rs_node_bindings :: "string list"       (* NodeBinding names *)
  rs_rel_bindings  :: "string list"
  rs_observers     :: "observer_def list"
  rs_keys          :: "key_def list"
  rs_codecs        :: "codec_def list"
  rs_ac_bindings   :: "ac_encoding list"

definition WF_RepSpec :: "rep_spec \<Rightarrow> graph_instance \<Rightarrow> bool" where
  "WF_RepSpec rs G \<equiv>
     (unique_keys (map od_name (rs_observers rs)) \<and>
      unique_keys (map kd_name (rs_keys rs)) \<and>
      unique_keys (map cd_id (rs_codecs rs)))"

end
