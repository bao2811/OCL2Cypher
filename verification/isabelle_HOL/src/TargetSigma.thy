theory TargetSigma
  imports Q
begin

text \<open>
TargetSigma.thy — Cypher AST and WF_Target,Sigma(p).

Normative sources:
  research/TargetModel/TargetSigma-Realization-IR.emf   (cyas package)
  research/TargetModel/TargetSigma-Constraints.ocl
  research/TargetModel/TargetSigma-Realization-IR.md     (stage-2 WF obligations)
  research/TargetModel/TargetSigma-Denotational-Semantics.md

This theory defines datatypes and structural WF.  Semantics.thy supplies the
Boolean-slice denotation, and Realize.thy proves Q-to-Target preservation.
\<close>

section \<open>TargetSigma enums (1:1 with TargetSigma-Realization-IR.emf) \<close>

datatype cypher_dialect = C5_Cypher5 | C5_Cypher25
datatype cypher_value_kind = CVK_Any | CVK_Null | CVK_Boolean | CVK_Integer
  | CVK_Float | CVK_String | CVK_Node | CVK_Relationship | CVK_List | CVK_Map
datatype rel_direction = RD_Outgoing | RD_Incoming | RD_Undirected
datatype cy_unary_op = CUNot | CUNegate | CUIsNull | CUIsNotNull
datatype cy_binary_op =
    CBX_Or | CBX_Xor | CBX_And
  | CBX_Equal | CBX_NotEqual
  | CBX_Lt | CBX_Le | CBX_Gt | CBX_Ge
  | CBX_In | CBX_StartsWith
  | CBX_Add | CBX_Sub | CBX_Mul | CBX_Div | CBX_Mod | CBX_Concat
datatype quantifier_kind = QK_Any | QK_All
datatype result_shape = RS_Scalar | RS_Set | RS_Bag | RS_Ids
datatype param_origin = PO_Public | PO_Generated

section \<open>TargetSigma AST nodes (syntactic skeleton only) \<close>

(* Variable, parameter, and pattern nodes are kept simple;
   they are consumed by Serialize.thy which is the only
   consumer of Cypher text. *)

record cy_var = cv_name :: string

record cy_param =
  cp_name   :: string
  cp_kind   :: cypher_value_kind
  cp_tag    :: string
  cp_origin :: param_origin

record cy_gen_binding =
  cgb_param :: cy_param
  cgb_value :: string   (* canonicalValue : String *)

record result_contract_ts =
  rc_shape_ts      :: result_shape
  rc_result_var_ts :: cy_var
  rc_elem_type_ts  :: string
  rc_distinct_ts   :: bool
  rc_whole_bottom_ts :: "string option"

(* Expressions — structural, not executable at this stage. *)
datatype cy_expr =
    CE_VarE    cy_var
  | CE_ParamE  cy_param
  | CE_Null
  | CE_BoolLit bool
  | CE_IntLit  int
  | CE_FloatLit real
  | CE_StrLit  string
  | CE_ListE   "cy_expr list"
  | CE_MapE    "(string \<times> cy_expr) list"
  | CE_PropAccess cy_expr string
  | CE_NavOneE cy_expr string
  | CE_NavManyE cy_expr string result_shape
  | CE_Unary   cy_unary_op cy_expr
  | CE_Binary  cy_binary_op cy_expr cy_expr
  | CE_FuncInv string bool "cy_expr list"
  | CE_Case    "(cy_expr \<times> cy_expr) list" "cy_expr option"
  | CE_ListComp cy_var cy_expr "cy_expr option" "cy_expr option"
  | CE_ReduceBool3 quantifier_kind cy_var cy_expr cy_expr
  | CE_Reduce cy_var cy_expr cy_var cy_expr cy_expr
  | CE_ExistsSub  cy_query
  | CE_CollectSub cy_query

and cy_clause =
    CC_Match  "cy_pattern" "cy_expr option"
  | CC_With   bool "cy_proj_item list" "cy_expr option"
  | CC_Unwind cy_expr cy_var
  | CC_Call   "cy_var list" cy_query
  | CC_Return bool "cy_proj_item list"

and cy_pattern = CP_Paths "cy_path list"

and cy_path = CP_Path "cy_node_pattern list" "cy_rel_pattern list"

and cy_node_pattern =
    CNP_None
  | CNP_Pat cy_var "string list" "(string \<times> cy_expr) list" "string option"

and cy_rel_pattern =
    CRP_None
  | CRP_Pat cy_var "string option" rel_direction "(string \<times> cy_expr) list" "string option"

and cy_proj_item =
    CPI_Item cy_expr "cy_var option"

and cy_query = CQ_Query "cy_var list" "cy_clause list" bool   (* requiresFinalReturn *)

section \<open>GeneratedCypherArtifact root \<close>

record generated_artifact =
  ga_dialect      :: cypher_dialect
  ga_rep_key      :: string
  ga_params       :: "cy_param list"
  ga_gen_bindings :: "cy_gen_binding list"
  ga_contract     :: result_contract_ts
  ga_query        :: cy_query

section \<open>WF_Target,Sigma(p) — structural (TargetSigma-Constraints.ocl) \<close>

(* TargetSigma-Constraints.ocl: ResultShapeContract *)
definition wf_ts_result_contract :: "result_contract_ts \<Rightarrow> bool" where
  "wf_ts_result_contract rc \<equiv>
     (case rc_shape_ts rc of
        RS_Scalar \<Rightarrow> \<not> rc_distinct_ts rc
      | RS_Set    \<Rightarrow> rc_distinct_ts rc
      | RS_Bag    \<Rightarrow> \<not> rc_distinct_ts rc
      | RS_Ids    \<Rightarrow> rc_distinct_ts rc)"

definition wf_ts_root_query :: "cy_query \<Rightarrow> bool" where
  "wf_ts_root_query q \<equiv>
     (case q of CQ_Query _ clauses req \<Rightarrow>
        clauses \<noteq> [] \<and>
        (req \<longrightarrow> (case last clauses of CC_Return _ _ \<Rightarrow> True | _ \<Rightarrow> False)))"

(* TargetSigma-Constraints.ocl: PathArity — relationship = node - 1 *)
definition wf_path_arity :: "cy_path \<Rightarrow> bool" where
  "wf_path_arity p \<equiv>
     (case p of CP_Path nodes rels \<Rightarrow> length rels = length nodes - 1)"

definition WF_Target_Sigma :: "generated_artifact \<Rightarrow> bool" where
  "WF_Target_Sigma p \<equiv>
     (wf_ts_result_contract (ga_contract p) \<and>
      wf_ts_root_query (ga_query p))"

fun Cy_ObjectExpr :: "cy_expr \<Rightarrow> bool" where
  "Cy_ObjectExpr (TargetSigma.CE_VarE variable) =
     (TargetSigma.cv_name variable \<noteq> '''')"
| "Cy_ObjectExpr (TargetSigma.CE_NavOneE receiver observer) =
     (Cy_ObjectExpr receiver \<and> observer \<noteq> '''')"
| "Cy_ObjectExpr _ = False"

fun Cy_IntExpr :: "cy_expr \<Rightarrow> bool" where
  "Cy_IntExpr (TargetSigma.CE_IntLit _) = True"
| "Cy_IntExpr (TargetSigma.CE_PropAccess receiver property) =
     (Cy_ObjectExpr receiver \<and> property \<noteq> '''')"
| "Cy_IntExpr _ = False"

fun Cy_ObjectCollectionExpr :: "cy_expr \<Rightarrow> bool" where
  "Cy_ObjectCollectionExpr
     (TargetSigma.CE_NavManyE receiver observer shape) =
     (Cy_ObjectExpr receiver \<and> observer \<noteq> '''' \<and>
      (shape = RS_Set \<or> shape = RS_Bag))"
| "Cy_ObjectCollectionExpr _ = False"

fun WF_CyBoolExpr :: "cy_expr \<Rightarrow> bool" where
  "WF_CyBoolExpr (TargetSigma.CE_VarE v) = (TargetSigma.cv_name v \<noteq> '''')"
| "WF_CyBoolExpr TargetSigma.CE_Null = True"
| "WF_CyBoolExpr (TargetSigma.CE_BoolLit _) = True"
| "WF_CyBoolExpr (TargetSigma.CE_IntLit _) = True"
| "WF_CyBoolExpr (TargetSigma.CE_PropAccess receiver property) =
     (Cy_ObjectExpr receiver \<and> property \<noteq> '''')"
| "WF_CyBoolExpr (TargetSigma.CE_NavOneE receiver observer) =
     (Cy_ObjectExpr receiver \<and> observer \<noteq> '''')"
| "WF_CyBoolExpr (TargetSigma.CE_NavManyE receiver observer shape) =
     (Cy_ObjectExpr receiver \<and> observer \<noteq> '''' \<and>
      (shape = RS_Set \<or> shape = RS_Bag))"
| "WF_CyBoolExpr (TargetSigma.CE_Unary CUNot e) = WF_CyBoolExpr e"
| "WF_CyBoolExpr (TargetSigma.CE_Unary CUIsNull e) = WF_CyBoolExpr e"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_And l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_Or l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_Xor l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_Equal l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_Lt l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_Le l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_Gt l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Binary CBX_Ge l r) =
     (WF_CyBoolExpr l \<and> WF_CyBoolExpr r)"
| "WF_CyBoolExpr (TargetSigma.CE_Case [(c,t)] (Some e)) =
     (WF_CyBoolExpr c \<and> WF_CyBoolExpr t \<and> WF_CyBoolExpr e)"
| "WF_CyBoolExpr
     (TargetSigma.CE_ReduceBool3 _ variable source predicate) =
     (TargetSigma.cv_name variable \<noteq> '''' \<and>
      Cy_ObjectCollectionExpr source \<and> WF_CyBoolExpr predicate)"
| "WF_CyBoolExpr
     (TargetSigma.CE_Reduce accumulator initial variable source step) =
     (TargetSigma.cv_name accumulator \<noteq> '''' \<and>
      TargetSigma.cv_name variable \<noteq> '''' \<and>
      TargetSigma.cv_name accumulator \<noteq> TargetSigma.cv_name variable \<and>
      WF_CyBoolExpr initial \<and> Cy_ObjectCollectionExpr source \<and>
      WF_CyBoolExpr step)"
| "WF_CyBoolExpr _ = False"

end
