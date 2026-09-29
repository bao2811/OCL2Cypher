theory Core
  imports Source
begin

text \<open>
Core.thy — Typed Core OCL IR and WF_Core(M, c).

Normative sources:
  research/COREOCL_QCYP/Typed-Core-OCL-IR.emf (coreocl package)
  research/COREOCL_QCYP/Typed-Core-OCL-IR-Constraints.ocl
  research/COREOCL_QCYP/Typed-Core-OCL-IR.md

Core and Q are internal model-level intermediate representations in the
implementation and corresponding formal calculi in the mechanization. This
theory carries the formal calculus, not a runtime language.
\<close>

section \<open>Core enums (1:1 with Typed-Core-OCL-IR.emf) \<close>

datatype core_prim_kind = CK_Boolean | CK_Integer | CK_Real | CK_String
datatype core_coll_kind = CCK_Set | CCK_Bag
datatype uml_declaration_kind = UDK_Class | UDK_Property
datatype resolved_property_kind = RPK_Attribute | RPK_AssociationEnd | RPK_Qualifier
datatype core_binding_kind = CBK_Self | CBK_Parameter | CBK_Let | CBK_Iterator
datatype core_navigation_kind = CNK_ToOne | CNK_ToMany
datatype core_type_test_kind = CTK_ExactType | CTK_ConformsTo
datatype core_coercion_kind = CCKind_IntegerToReal | CCKind_ClassUpcast | CCKind_CollElement

datatype core_unary_op =
    CUO_BooleanNot | CUO_NumericNegate | CUO_NumericAbs
  | CUO_RealFloor | CUO_RealRound
  | CUO_CollSize | CUO_CollIsEmpty | CUO_CollNotEmpty | CUO_CollSum

datatype core_binary_op =
    CB_OpAdd | CB_OpSub | CB_OpMul | CB_DivReal | CB_DivInt | CB_ModInt
  | CB_OpMax | CB_OpMin
  | CB_Lt | CB_Le | CB_Gt | CB_Ge | CB_Eq | CB_Neq
  | CB_And | CB_Or | CB_Xor | CB_Implies
  | CB_CollCount | CB_CollIncludes | CB_CollExcludes
  | CB_CollIncludesAll | CB_CollExcludesAll
  | CB_SetUnion | CB_SetIntersect

datatype core_iterator_kind = CIK_Exists | CIK_ForAll | CIK_Select | CIK_Reject | CIK_Collect

section \<open>Core type and declarations \<close>

(* Reuses Source's flat ocl_type (atomic + one-level collections). *)
type_synonym core_type = ocl_type

(* ResolvedUmlElement — the identity carried through Core.  Name is a stable
   semantic reference into one schema M; it does not copy UML. *)
record resolved_elem =
  re_key   :: string   (* umlElementKey, stable semantic identity *)
  re_qname :: string
  re_kind  :: uml_declaration_kind

record resolved_class_elem =
  re_base    :: resolved_elem
  re_abstract :: bool
  re_assoc   :: bool        (* associationClass flag *)
  re_supers  :: "string list"  (* direct superclasses *)

record resolved_prop_elem =
  re_base   :: resolved_elem
  re_prop_k :: resolved_property_kind
  re_lower  :: int
  re_upper  :: int   (* -1 = * *)
  re_unique :: bool
  re_ordered :: bool
  re_decl_type :: ocl_type
  re_owning :: "string option"
  re_nav_src  :: "string option"
  re_qual_owner :: "string option"
  re_quals    :: "string list"
  re_opposite :: "string option"

type_synonym core_class   = resolved_class_elem
type_synonym core_prop    = resolved_prop_elem
type_synonym core_decls   = resolved_elem

section \<open>Core variable declarations and expressions \<close>

record core_var_decl =
  cv_name   :: string
  cv_kind   :: core_binding_kind
  cv_type   :: ocl_type

datatype core_exp =
    CE_BooleanLit bool
  | CE_IntegerLit int
  | CE_RealLit string
  | CE_StringLit string
  | CE_Bottom ocl_type
  | CE_Var string ocl_type
  | CE_Let core_var_decl core_exp core_exp
  | CE_If core_exp core_exp core_exp
  | CE_Coerce core_coercion_kind ocl_type core_exp
  | CE_AttrRead core_exp core_prop
  | CE_Nav core_navigation_kind core_exp core_prop "core_exp list"
  | CE_NavAC core_navigation_kind core_exp core_class core_prop "core_exp list"
  | CE_AllInstances core_class
  | CE_TypeTest core_type_test_kind core_exp core_class
  | CE_TypeCast core_exp core_class
  | CE_Unary core_unary_op core_exp
  | CE_Binary core_binary_op core_exp core_exp
  | CE_CollLit core_coll_kind ocl_type "core_exp list"
  | CE_Iter core_iterator_kind core_coll_kind core_exp string ocl_type core_exp

section \<open>Core units and queries \<close>

record core_unit =
  cu_name    :: "string option"
  cu_context :: core_class
  cu_self    :: core_var_decl
  cu_params  :: "core_var_decl list"
  cu_body    :: core_exp

datatype core_unit_kind = CUK_Invariant | CUK_Query

record core_query = cu_base :: core_unit   (* body type is arbitrary *)

section \<open>WF_Core(M, c) — structural part (Typed-Core-OCL-IR-Constraints.ocl) \<close>

definition unique_names :: "'a list \<Rightarrow> bool" where
  "unique_names xs \<equiv> length (remdups xs) = length xs"

fun wf_core_types :: "core_exp \<Rightarrow> bool" where
  "wf_core_types (CE_CollLit _ t es) = (case t of
      Ty_Coll _ elem \<Rightarrow> is_atomic elem \<and> (\<forall>e \<in> set es. wf_core_types e)
    | _ \<Rightarrow> False)"
| "wf_core_types (CE_Let v a b) = (wf_core_types a \<and> wf_core_types b)"
| "wf_core_types (CE_If c t e) = (wf_core_types c \<and> wf_core_types t \<and> wf_core_types e)"
| "wf_core_types (CE_Coerce _ _ e) = wf_core_types e"
| "wf_core_types (CE_AttrRead s _) = wf_core_types s"
| "wf_core_types (CE_Nav _ s _ qs) = (wf_core_types s \<and> (\<forall>q \<in> set qs. wf_core_types q))"
| "wf_core_types (CE_NavAC _ s _ _ qs) = (wf_core_types s \<and> (\<forall>q \<in> set qs. wf_core_types q))"
| "wf_core_types (CE_TypeTest _ s _) = wf_core_types s"
| "wf_core_types (CE_TypeCast s _) = wf_core_types s"
| "wf_core_types (CE_Unary _ e) = wf_core_types e"
| "wf_core_types (CE_Binary _ l r) = (wf_core_types l \<and> wf_core_types r)"
| "wf_core_types (CE_Iter _ _ s _ _ body) = (wf_core_types s \<and> wf_core_types body)"
| "wf_core_types _ = True"

(* Typed-Core-OCL-IR-Constraints.ocl — BinaryOperatorSignature *)
definition core_is_bool where "core_is_bool x \<equiv> x = Ty_Prim PK_Boolean"
definition core_is_num where "core_is_num x \<equiv> x = Ty_Prim PK_Integer \<or> x = Ty_Prim PK_Real"
definition core_is_int where "core_is_int x \<equiv> x = Ty_Prim PK_Integer"
definition core_is_real where "core_is_real x \<equiv> x = Ty_Prim PK_Real"
definition core_is_coll where "core_is_coll x \<equiv> (case x of Ty_Coll _ _ \<Rightarrow> True | _ \<Rightarrow> False)"
definition core_is_set_coll where "core_is_set_coll x \<equiv> (case x of Ty_Coll CK_Set _ \<Rightarrow> True | _ \<Rightarrow> False)"

definition wf_binary_op :: "core_binary_op \<Rightarrow> ocl_type \<Rightarrow> ocl_type \<Rightarrow> ocl_type \<Rightarrow> bool" where
  "wf_binary_op op l r t \<equiv>
     (if op \<in> {CB_OpAdd, CB_OpSub, CB_OpMul, CB_OpMax, CB_OpMin}
      then core_is_num l \<and> core_is_num r \<and> l = r \<and> t = l
      else if op = CB_DivReal
      then core_is_real l \<and> core_is_real r \<and> core_is_real t
      else if op \<in> {CB_DivInt, CB_ModInt}
      then core_is_int l \<and> core_is_int r \<and> core_is_int t
      else if op \<in> {CB_Lt, CB_Le, CB_Gt, CB_Ge}
      then core_is_num l \<and> core_is_num r \<and> l = r \<and> core_is_bool t
      else if op \<in> {CB_Eq, CB_Neq}
      then l = r \<and> core_is_bool t
      else if op \<in> {CB_And, CB_Or, CB_Xor, CB_Implies}
      then core_is_bool l \<and> core_is_bool r \<and> core_is_bool t
      else if op = CB_CollCount
      then core_is_coll l \<and> coll_element l = Some r \<and> core_is_int t
      else if op \<in> {CB_CollIncludes, CB_CollExcludes}
      then core_is_coll l \<and> coll_element l = Some r \<and> core_is_bool t
      else if op \<in> {CB_CollIncludesAll, CB_CollExcludesAll}
      then core_is_coll l \<and> l = r \<and> core_is_bool t
      else if op \<in> {CB_SetUnion, CB_SetIntersect}
      then core_is_set_coll l \<and> l = r \<and> t = l
      else False)"

text \<open>
Executable type synthesis for the currently checked Core slice.  Constructors
outside this slice return None and therefore cannot satisfy WF_Core merely by
being recursively shaped.  This closes the former gap where, for example, a
Boolean let could carry an Integer initializer while still passing the
structural predicate.
\<close>

definition core_binary_type ::
  "core_binary_op \<Rightarrow> ocl_type \<Rightarrow> ocl_type \<Rightarrow> ocl_type option" where
  "core_binary_type operator left_type right_type =
     (if operator \<in> {CB_And, CB_Or, CB_Xor, CB_Implies, CB_Eq, CB_Neq} \<and>
         left_type = Ty_Prim PK_Boolean \<and>
         right_type = Ty_Prim PK_Boolean
      then Some (Ty_Prim PK_Boolean)
      else if operator \<in> {CB_Lt, CB_Le, CB_Gt, CB_Ge} \<and>
              left_type = Ty_Prim PK_Integer \<and>
              right_type = Ty_Prim PK_Integer
      then Some (Ty_Prim PK_Boolean)
      else None)"

fun core_type_of :: "core_exp \<Rightarrow> ocl_type option" where
  "core_type_of (CE_BooleanLit _) = Some (Ty_Prim PK_Boolean)"
| "core_type_of (CE_IntegerLit _) = Some (Ty_Prim PK_Integer)"
| "core_type_of (CE_Bottom result_type) =
     (if wf_resolved_type result_type then Some result_type else None)"
| "core_type_of (CE_Var variable result_type) =
     (if variable \<noteq> '''' \<and> wf_resolved_type result_type
      then Some result_type else None)"
| "core_type_of (CE_Let declaration value body) =
     (if Core.cv_name declaration \<noteq> '''' \<and>
         core_type_of value = Some (Core.cv_type declaration)
      then core_type_of body else None)"
| "core_type_of (CE_If condition then_exp else_exp) =
     (case (core_type_of condition, core_type_of then_exp,
            core_type_of else_exp) of
        (Some (Ty_Prim PK_Boolean), Some then_type, Some else_type) \<Rightarrow>
          if then_type = else_type then Some then_type else None
      | _ \<Rightarrow> None)"
| "core_type_of (CE_AttrRead source property) =
     (if re_prop_k property = RPK_Attribute \<and>
         Core.re_upper property = 1 \<and>
         (\<exists>owner. re_owning property = Some owner \<and>
                  core_type_of source = Some (Ty_Class owner))
      then Some (re_decl_type property) else None)"
| "core_type_of (CE_Nav CNK_ToOne source property qualifiers) =
     (if qualifiers = [] \<and>
         re_prop_k property = RPK_AssociationEnd \<and>
         Core.re_upper property = 1 \<and>
         (\<exists>navigation_source.
            re_nav_src property = Some navigation_source \<and>
            core_type_of source = Some (Ty_Class navigation_source))
      then Some (re_decl_type property) else None)"
| "core_type_of (CE_Nav CNK_ToMany source property qualifiers) =
     (if qualifiers = [] \<and>
         re_prop_k property = RPK_AssociationEnd \<and>
         Core.re_upper property \<noteq> 1 \<and>
         (\<exists>navigation_source.
            re_nav_src property = Some navigation_source \<and>
            core_type_of source = Some (Ty_Class navigation_source))
      then Some (Ty_Coll
        (if re_unique property then CK_Set else CK_Bag)
        (re_decl_type property))
      else None)"
| "core_type_of (CE_Unary CUO_BooleanNot body) =
     (if core_type_of body = Some (Ty_Prim PK_Boolean)
      then Some (Ty_Prim PK_Boolean) else None)"
| "core_type_of (CE_Binary operator left right) =
     (case (core_type_of left, core_type_of right) of
        (Some left_type, Some right_type) \<Rightarrow>
          core_binary_type operator left_type right_type
      | _ \<Rightarrow> None)"
| "core_type_of (CE_Iter iterator kind source binder binder_type body) =
     (let source_kind = (if kind = CCK_Set then CK_Set else CK_Bag)
      in if binder \<noteq> '''' \<and>
            core_type_of source = Some (Ty_Coll source_kind binder_type)
         then case iterator of
           CIK_Exists \<Rightarrow>
             if core_type_of body = Some (Ty_Prim PK_Boolean)
             then Some (Ty_Prim PK_Boolean) else None
         | CIK_ForAll \<Rightarrow>
             if core_type_of body = Some (Ty_Prim PK_Boolean)
             then Some (Ty_Prim PK_Boolean) else None
         | CIK_Select \<Rightarrow>
             if core_type_of body = Some (Ty_Prim PK_Boolean)
             then Some (Ty_Coll source_kind binder_type) else None
         | CIK_Reject \<Rightarrow>
             if core_type_of body = Some (Ty_Prim PK_Boolean)
             then Some (Ty_Coll source_kind binder_type) else None
         | CIK_Collect \<Rightarrow>
             (case core_type_of body of
                Some body_type \<Rightarrow>
                  if is_atomic body_type
                  then Some (Ty_Coll CK_Bag body_type) else None
              | None \<Rightarrow> None)
         else None)"
| "core_type_of _ = None"

definition WF_Core :: "core_exp \<Rightarrow> bool" where
  "WF_Core c \<equiv> wf_core_types c \<and> core_type_of c \<noteq> None"

end
