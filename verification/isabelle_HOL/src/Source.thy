theory Source
  imports Main
begin

text \<open>
Source.thy models the formal source boundary of the compiler: a resolved and
statically typed OCL abstract-syntax tree (AS), not OCL concrete text.

Normative sources:
  research/OCLscope/OCL-Abstract-Syntax.emf
  research/OCLscope/OCL_val-formal.md  (sections 1-3)
  research/OCLscope/OCL_val-scope.md

Lexing, parsing, name lookup, overload resolution, and linking calls to the
canonical OCL standard library occur before this boundary and are therefore
outside this theory.  A successful external frontend must establish

  ResolveType(MM, OCLstdlib, text) = Some a
  ==> WF_resolved(MM, OCLstdlib, a).

The Isabelle transformation starts from a, never from text.  This theory
defines the source datatypes and their well-formedness contract only.  The
denotational semantics is introduced by a later theory.
\<close>

section \<open>Canonical identities and the admitted type universe\<close>

text \<open>
The strings below are stable declaration identities supplied by resolution;
they are not surface names.  Separate synonyms document the namespaces used
by the resolved AS.  Human-readable names are retained only for diagnostics.
\<close>

type_synonym classifier_id = string
type_synonym property_id = string
type_synonym variable_id = string
type_synonym stdlib_operation_id = string
type_synonym source_ast_id = string

datatype coll_kind = CK_Set | CK_Bag

datatype prim_kind = PK_Boolean | PK_Integer | PK_Real | PK_String

datatype ocl_type =
    Ty_Prim prim_kind
  | Ty_Class classifier_id
  | Ty_Coll coll_kind ocl_type

fun is_atomic :: "ocl_type \<Rightarrow> bool" where
  "is_atomic (Ty_Prim _) = True"
| "is_atomic (Ty_Class _) = True"
| "is_atomic (Ty_Coll _ _) = False"

fun coll_element :: "ocl_type \<Rightarrow> ocl_type option" where
  "coll_element (Ty_Coll _ elem) = Some elem"
| "coll_element _ = None"

definition is_coll :: "ocl_type \<Rightarrow> bool" where
  "is_coll t \<equiv> coll_element t \<noteq> None"

definition is_bool :: "ocl_type \<Rightarrow> bool" where
  "is_bool t \<equiv> t = Ty_Prim PK_Boolean"

definition is_num :: "ocl_type \<Rightarrow> bool" where
  "is_num t \<equiv> t = Ty_Prim PK_Integer \<or> t = Ty_Prim PK_Real"

definition is_int :: "ocl_type \<Rightarrow> bool" where
  "is_int t \<equiv> t = Ty_Prim PK_Integer"

definition is_real :: "ocl_type \<Rightarrow> bool" where
  "is_real t \<equiv> t = Ty_Prim PK_Real"

fun is_set_coll :: "ocl_type \<Rightarrow> bool" where
  "is_set_coll (Ty_Coll CK_Set _) = True"
| "is_set_coll _ = False"

fun wf_resolved_type :: "ocl_type \<Rightarrow> bool" where
  "wf_resolved_type (Ty_Prim _) = True"
| "wf_resolved_type (Ty_Class k) = (k \<noteq> '''')"
| "wf_resolved_type (Ty_Coll _ elem) =
     (is_atomic elem \<and> wf_resolved_type elem)"

section \<open>Resolved UML declarations\<close>

record resolved_class =
  class_id :: classifier_id
  class_name :: string
  is_abstract :: bool
  super_classes :: "classifier_id list"

record resolved_property =
  prop_id :: property_id
  prop_name :: string
  prop_owner :: classifier_id
  prop_navigation_source :: "classifier_id option"
  prop_is_attr :: bool
  prop_type :: ocl_type
  prop_lower :: int
  prop_upper :: int
  prop_unique :: bool
  prop_ordered :: bool

definition wf_property_shape :: "resolved_property \<Rightarrow> bool" where
  "wf_property_shape p \<equiv>
     prop_id p \<noteq> '''' \<and>
     prop_owner p \<noteq> '''' \<and>
     wf_resolved_type (prop_type p) \<and>
     0 \<le> prop_lower p \<and>
     (prop_upper p = -1 \<or> prop_lower p \<le> prop_upper p) \<and>
     (prop_is_attr p \<longrightarrow> prop_navigation_source p = None) \<and>
     (\<not> prop_is_attr p \<longrightarrow> prop_navigation_source p \<noteq> None)"

section \<open>Resolved and statically typed OCL AS\<close>

datatype iter_kind = IK_Exists | IK_ForAll | IK_Select | IK_Reject | IK_Collect

text \<open>
Every constructor stores its inferred result type as its final argument.
Variable, classifier, property, and operation references are canonical
identities produced by resolution.  Consequently there is no constructor for
an unresolved name or for OCL concrete text.
\<close>

datatype resolved_ocl_exp =
    Exp_Var variable_id ocl_type
  | Exp_LitBool bool ocl_type
  | Exp_LitInt int ocl_type
  | Exp_LitReal string ocl_type
  | Exp_LitString string ocl_type
  | Exp_SetLit "resolved_ocl_exp list" ocl_type
  | Exp_BagLit "resolved_ocl_exp list" ocl_type
  | Exp_Let variable_id ocl_type resolved_ocl_exp resolved_ocl_exp ocl_type
  | Exp_If resolved_ocl_exp resolved_ocl_exp resolved_ocl_exp ocl_type
  | Exp_AttrRead resolved_ocl_exp resolved_property ocl_type
  | Exp_Navigate resolved_ocl_exp resolved_property "resolved_ocl_exp list" ocl_type
  | Exp_AllInst classifier_id ocl_type
  | Exp_IsTypeOf resolved_ocl_exp classifier_id ocl_type
  | Exp_IsKindOf resolved_ocl_exp classifier_id ocl_type
  | Exp_AsType resolved_ocl_exp classifier_id ocl_type
  | Exp_Unary stdlib_operation_id resolved_ocl_exp ocl_type
  | Exp_Binary stdlib_operation_id resolved_ocl_exp resolved_ocl_exp ocl_type
  | Exp_Iterator iter_kind resolved_ocl_exp variable_id ocl_type
                 resolved_ocl_exp ocl_type

fun static_type :: "resolved_ocl_exp \<Rightarrow> ocl_type" where
  "static_type (Exp_Var _ t) = t"
| "static_type (Exp_LitBool _ t) = t"
| "static_type (Exp_LitInt _ t) = t"
| "static_type (Exp_LitReal _ t) = t"
| "static_type (Exp_LitString _ t) = t"
| "static_type (Exp_SetLit _ t) = t"
| "static_type (Exp_BagLit _ t) = t"
| "static_type (Exp_Let _ _ _ _ t) = t"
| "static_type (Exp_If _ _ _ t) = t"
| "static_type (Exp_AttrRead _ _ t) = t"
| "static_type (Exp_Navigate _ _ _ t) = t"
| "static_type (Exp_AllInst _ t) = t"
| "static_type (Exp_IsTypeOf _ _ t) = t"
| "static_type (Exp_IsKindOf _ _ t) = t"
| "static_type (Exp_AsType _ _ t) = t"
| "static_type (Exp_Unary _ _ t) = t"
| "static_type (Exp_Binary _ _ _ t) = t"
| "static_type (Exp_Iterator _ _ _ _ _ t) = t"

record resolved_ocl_invariant =
  source_id :: source_ast_id
  context_class :: classifier_id
  self_variable :: variable_id
  inv_body :: resolved_ocl_exp

section \<open>Structural and scope well-formedness\<close>

fun wf_exp_types :: "resolved_ocl_exp \<Rightarrow> bool" where
  "wf_exp_types (Exp_Var x t) =
     (x \<noteq> '''' \<and> wf_resolved_type t)"
| "wf_exp_types (Exp_LitBool _ t) =
     (t = Ty_Prim PK_Boolean)"
| "wf_exp_types (Exp_LitInt _ t) =
     (t = Ty_Prim PK_Integer)"
| "wf_exp_types (Exp_LitReal _ t) =
     (t = Ty_Prim PK_Real)"
| "wf_exp_types (Exp_LitString _ t) =
     (t = Ty_Prim PK_String)"
| "wf_exp_types (Exp_SetLit elems t) =
     (\<exists>elem. t = Ty_Coll CK_Set elem \<and> is_atomic elem \<and>
      (\<forall>e \<in> set elems. wf_exp_types e \<and> static_type e = elem))"
| "wf_exp_types (Exp_BagLit elems t) =
     (\<exists>elem. t = Ty_Coll CK_Bag elem \<and> is_atomic elem \<and>
      (\<forall>e \<in> set elems. wf_exp_types e \<and> static_type e = elem))"
| "wf_exp_types (Exp_Let x binder_t init body result_t) =
     (x \<noteq> '''' \<and> wf_resolved_type binder_t \<and>
      wf_exp_types init \<and> static_type init = binder_t \<and>
      wf_exp_types body \<and>
      wf_resolved_type result_t \<and> static_type body = result_t)"
| "wf_exp_types (Exp_If cond then_e else_e result_t) =
     (wf_exp_types cond \<and> static_type cond = Ty_Prim PK_Boolean \<and>
      wf_exp_types then_e \<and> wf_exp_types else_e \<and>
      wf_resolved_type result_t \<and>
      static_type then_e = result_t \<and> static_type else_e = result_t)"
| "wf_exp_types (Exp_AttrRead src p result_t) =
     (wf_exp_types src \<and> wf_property_shape p \<and> prop_is_attr p \<and>
      prop_upper p = 1 \<and> result_t = prop_type p)"
| "wf_exp_types (Exp_Navigate src p qs result_t) =
     (wf_exp_types src \<and> wf_property_shape p \<and> \<not> prop_is_attr p \<and>
      (\<forall>q \<in> set qs. wf_exp_types q) \<and> wf_resolved_type result_t)"
| "wf_exp_types (Exp_AllInst k result_t) =
     (k \<noteq> '''' \<and> result_t = Ty_Coll CK_Set (Ty_Class k))"
| "wf_exp_types (Exp_IsTypeOf e k result_t) =
     (wf_exp_types e \<and> k \<noteq> '''' \<and> result_t = Ty_Prim PK_Boolean)"
| "wf_exp_types (Exp_IsKindOf e k result_t) =
     (wf_exp_types e \<and> k \<noteq> '''' \<and> result_t = Ty_Prim PK_Boolean)"
| "wf_exp_types (Exp_AsType e k result_t) =
     (wf_exp_types e \<and> k \<noteq> '''' \<and> result_t = Ty_Class k)"
| "wf_exp_types (Exp_Unary op e result_t) =
     (op \<noteq> '''' \<and> wf_exp_types e \<and> wf_resolved_type result_t)"
| "wf_exp_types (Exp_Binary op l r result_t) =
     (op \<noteq> '''' \<and> wf_exp_types l \<and> wf_exp_types r \<and>
      wf_resolved_type result_t)"
| "wf_exp_types (Exp_Iterator _ src x binder_t body result_t) =
     (wf_exp_types src \<and> x \<noteq> '''' \<and> wf_resolved_type binder_t \<and>
      wf_exp_types body \<and> wf_resolved_type result_t)"

fun wf_scope :: "(variable_id \<Rightarrow> ocl_type option) \<Rightarrow> resolved_ocl_exp \<Rightarrow> bool" where
  "wf_scope env (Exp_Var x t) = (env x = Some t)"
| "wf_scope env (Exp_SetLit elems _) = (\<forall>e \<in> set elems. wf_scope env e)"
| "wf_scope env (Exp_BagLit elems _) = (\<forall>e \<in> set elems. wf_scope env e)"
| "wf_scope env (Exp_Let x binder_t init body _) =
     (wf_scope env init \<and> wf_scope (env(x := Some binder_t)) body)"
| "wf_scope env (Exp_If cond then_e else_e _) =
     (wf_scope env cond \<and> wf_scope env then_e \<and> wf_scope env else_e)"
| "wf_scope env (Exp_AttrRead src _ _) = wf_scope env src"
| "wf_scope env (Exp_Navigate src _ qs _) =
     (wf_scope env src \<and> (\<forall>q \<in> set qs. wf_scope env q))"
| "wf_scope env (Exp_IsTypeOf e _ _) = wf_scope env e"
| "wf_scope env (Exp_IsKindOf e _ _) = wf_scope env e"
| "wf_scope env (Exp_AsType e _ _) = wf_scope env e"
| "wf_scope env (Exp_Unary _ e _) = wf_scope env e"
| "wf_scope env (Exp_Binary _ l r _) = (wf_scope env l \<and> wf_scope env r)"
| "wf_scope env (Exp_Iterator _ src x binder_t body _) =
     (wf_scope env src \<and> wf_scope (env(x := Some binder_t)) body)"
| "wf_scope _ _ = True"

definition WF_resolved_flat :: "resolved_ocl_invariant \<Rightarrow> bool" where
  "WF_resolved_flat a \<equiv>
     source_id a \<noteq> '''' \<and>
     context_class a \<noteq> '''' \<and>
     self_variable a \<noteq> '''' \<and>
     wf_exp_types (inv_body a) \<and>
     static_type (inv_body a) = Ty_Prim PK_Boolean \<and>
     wf_scope ((\<lambda>_. None)(self_variable a := Some (Ty_Class (context_class a))))
              (inv_body a)"

section \<open>Model- and library-relative resolution contract\<close>

locale ocl_source_model =
  fixes UML_classes :: "classifier_id set"
    and UML_property :: "property_id \<Rightarrow> resolved_property option"
    and OCLstdlib :: "stdlib_operation_id set"
  assumes finite_classes: "finite UML_classes"
begin

fun refs_resolved :: "resolved_ocl_exp \<Rightarrow> bool" where
  "refs_resolved (Exp_Var _ _) = True"
| "refs_resolved (Exp_SetLit elems _) = (\<forall>e \<in> set elems. refs_resolved e)"
| "refs_resolved (Exp_BagLit elems _) = (\<forall>e \<in> set elems. refs_resolved e)"
| "refs_resolved (Exp_Let _ _ init body _) =
     (refs_resolved init \<and> refs_resolved body)"
| "refs_resolved (Exp_If cond then_e else_e _) =
     (refs_resolved cond \<and> refs_resolved then_e \<and> refs_resolved else_e)"
| "refs_resolved (Exp_AttrRead src p _) =
     (refs_resolved src \<and> UML_property (prop_id p) = Some p \<and>
      prop_owner p \<in> UML_classes)"
| "refs_resolved (Exp_Navigate src p qs _) =
     (refs_resolved src \<and> UML_property (prop_id p) = Some p \<and>
      prop_owner p \<in> UML_classes \<and>
      the (prop_navigation_source p) \<in> UML_classes \<and>
      (\<forall>q \<in> set qs. refs_resolved q))"
| "refs_resolved (Exp_AllInst k _) = (k \<in> UML_classes)"
| "refs_resolved (Exp_IsTypeOf e k _) = (refs_resolved e \<and> k \<in> UML_classes)"
| "refs_resolved (Exp_IsKindOf e k _) = (refs_resolved e \<and> k \<in> UML_classes)"
| "refs_resolved (Exp_AsType e k _) = (refs_resolved e \<and> k \<in> UML_classes)"
| "refs_resolved (Exp_Unary op e _) = (op \<in> OCLstdlib \<and> refs_resolved e)"
| "refs_resolved (Exp_Binary op l r _) =
     (op \<in> OCLstdlib \<and> refs_resolved l \<and> refs_resolved r)"
| "refs_resolved (Exp_Iterator _ src _ _ body _) =
     (refs_resolved src \<and> refs_resolved body)"
| "refs_resolved _ = True"

definition WF_resolved :: "resolved_ocl_invariant \<Rightarrow> bool" where
  "WF_resolved a \<equiv>
     WF_resolved_flat a \<and>
     context_class a \<in> UML_classes \<and>
     refs_resolved (inv_body a)"

end

end
