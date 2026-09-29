theory UML
  imports Main
begin

text \<open>
UML.thy — UML 2.5.1 scoped profile and ValidSchema(M).

Normative sources:
  research/OCLscope/UML-Scope.emf        (scoped metamodel)
  research/OCLscope/UML-Metamodel.md       (WF interpretation)
\<close>

section \<open>UML metamodel — scoped profile (M2 as data carried by M1)\<close>

(* ---------------------------------------------------------------------- *)
(* UnlimitedNatural projection: -1 denotes UML '*'.                    *)
(* ---------------------------------------------------------------------- *)

datatype unat = U_Nat nat | U_Star

definition unat_of_int :: "int \<Rightarrow> unat" where
  "unat_of_int i \<equiv> (if i = -1 then U_Star else U_Nat (nat i))"

abbreviation upper_to_unat where
  "upper_to_unat \<equiv> unat_of_int"

(* ----------------------------------------------------------- *)
(* Scoped UML vocabulary that the paper actually uses.
   Enumerations, primitive types, and single-valued attributes
   are represented abstractly by stable strings; the relevant structure is
   typing/generalization/multiplicity — see UML-Metamodel.md. *)
(* ----------------------------------------------------------- *)

record uml_class =
  cls_name        :: string
  cls_is_abstract :: bool
  cls_is_assoc    :: bool     (* association class flag *)
  cls_supers      :: "string list"   (* direct superclass names *)

record uml_property =
  prop_qname      :: string
  prop_type       :: string
  prop_lower      :: int
  prop_upper      :: int      (* -1 = * *)
  prop_is_unique  :: bool
  prop_is_ordered :: bool
  (* qualified ends: lower must be 0; see WF below *)

(* A UML model M: finite schema at M1.  Concrete M is a record of
   finite maps from names to declarations; the session uses sets. *)
record uml_schema =
  classes         :: "string set"
  class_map       :: "string \<Rightarrow> uml_class option"
  properties      :: "string set"
  prop_map        :: "string \<Rightarrow> uml_property option"
  generalizations :: "(string \<times> string) set"  (* (specific, general) *)
  associations    :: "(string \<times> string \<times> string) set"
                  (* (assoc-name, end1-name, end2-name) — binary only *)

(* ------------------------- ValidSchema ------------------------- *)
(* Contents of UML-Metamodel.md §3 / OCL_val-scope.md §1.1:   *)
(*  - unique classifier names;
    - direct-superclass targets present;
    - no cyclic inheritance;
    - association ends present;
    - every property has a declared type;
    - qualified ends have lower=0.                          *)

definition acyclic_generalization :: "uml_schema \<Rightarrow> bool" where
  "acyclic_generalization M \<equiv>
     let r = generalizations M in
     let tc = trancl r in
     \<forall>c. (c,c) \<notin> tc"

definition ValidSchema :: "uml_schema \<Rightarrow> bool" where
  "ValidSchema M \<equiv>
     (finite (classes M) \<and>
       (\<forall>c \<in> classes M. cls_name (the (class_map M c)) = c) \<and>
      (\<forall>(s,g) \<in> generalizations M.
         s \<in> classes M \<and> g \<in> classes M \<and> s \<noteq> g) \<and>
      acyclic_generalization M \<and>
      (\<forall>a \<in> associations M.
         (let (n, e1, e2) = a in
          e1 \<in> properties M \<and> e2 \<in> properties M)))"

section \<open>Finite source snapshot projection\<close>

text \<open>
The representation proof observes stable object identity and single-valued
Integer attribute slots.  Missing slots are not represented by a sentinel;
their lookup result is None, the typed-bottom carrier of the Integer slice.
\<close>

record uml_int_slot =
  us_object :: string
  us_property :: string
  us_value :: int

record uml_link =
  ul_key :: string
  ul_end :: string
  ul_source :: string
  ul_target :: string

record uml_snapshot =
  snapshot_name :: string
  snapshot_ids :: "string list"
  snapshot_int_slots :: "uml_int_slot list"
  snapshot_links :: "uml_link list"

fun read_int_slots :: "uml_int_slot list \<Rightarrow> string \<Rightarrow> string \<Rightarrow> int option" where
  "read_int_slots [] object property = None"
| "read_int_slots (slot # slots) object property =
     (if us_object slot = object \<and> us_property slot = property
      then Some (us_value slot)
      else read_int_slots slots object property)"

definition ReadSlot :: "uml_snapshot \<Rightarrow> string \<Rightarrow> string \<Rightarrow> int option" where
  "ReadSlot S object property =
     read_int_slots (snapshot_int_slots S) object property"

definition slot_key :: "uml_int_slot \<Rightarrow> string \<times> string" where
  "slot_key slot = (us_object slot, us_property slot)"

definition ReadNavOccurrences ::
  "uml_snapshot \<Rightarrow> string \<Rightarrow> string \<Rightarrow> string list" where
  "ReadNavOccurrences S source association_end =
     map ul_target
       (filter
         (\<lambda>link. ul_source link = source \<and> ul_end link = association_end)
         (snapshot_links S))"

definition ReadNavOne ::
  "uml_snapshot \<Rightarrow> string \<Rightarrow> string \<Rightarrow> string option" where
  "ReadNavOne S source association_end =
     (case ReadNavOccurrences S source association_end of
        [target] \<Rightarrow> Some target
      | _ \<Rightarrow> None)"

definition ValidSnapshot :: "uml_schema \<Rightarrow> uml_snapshot \<Rightarrow> bool" where
  "ValidSnapshot M S \<equiv>
     ValidSchema M \<and> distinct (snapshot_ids S) \<and>
     (\<forall>identifier \<in> set (snapshot_ids S). identifier \<noteq> '''') \<and>
     distinct (map slot_key (snapshot_int_slots S)) \<and>
     (\<forall>slot \<in> set (snapshot_int_slots S).
        us_object slot \<in> set (snapshot_ids S) \<and>
        us_property slot \<in> properties M) \<and>
     distinct (map ul_key (snapshot_links S)) \<and>
     (\<forall>link \<in> set (snapshot_links S).
        ul_key link \<noteq> '''' \<and>
        ul_end link \<in> properties M \<and>
        ul_source link \<in> set (snapshot_ids S) \<and>
        ul_target link \<in> set (snapshot_ids S))"

end
