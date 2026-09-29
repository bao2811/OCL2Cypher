theory IteratorFront
  imports Front Iterators
begin

text \<open>
First compiler integration step for the V1 iterator family.  This theory
connects resolved OCL iterator nodes to Core for exists/forAll over an
object-valued Set/Bag source.  Select, reject, and collect remain in the
semantic kernel until their collection-valued compiler boundaries are added.
Keeping this entry point separate from front_exp ensures that the public
end-to-end compiler does not admit an iterator before all later stages exist.
\<close>

fun source_kind_to_core :: "coll_kind \<Rightarrow> core_coll_kind" where
  "source_kind_to_core CK_Set = CCK_Set"
| "source_kind_to_core CK_Bag = CCK_Bag"

fun source_iterator_to_core :: "iter_kind \<Rightarrow> core_iterator_kind option" where
  "source_iterator_to_core IK_Exists = Some CIK_Exists"
| "source_iterator_to_core IK_ForAll = Some CIK_ForAll"
| "source_iterator_to_core _ = None"

fun Front_Quantifier :: "resolved_ocl_exp \<Rightarrow> core_exp option" where
  "Front_Quantifier
     (Exp_Iterator iterator source binder binder_type body
       (Ty_Prim PK_Boolean)) =
     (if binder \<noteq> '''' \<and>
         static_type body = Ty_Prim PK_Boolean
      then case (static_type source, source_iterator_to_core iterator,
                 front_exp source, front_exp body) of
        (Ty_Coll source_kind element_type, Some core_iterator,
         Some core_source, Some core_body) \<Rightarrow>
          if binder_type = element_type \<and> is_atomic element_type
          then Some (Core.CE_Iter core_iterator
            (source_kind_to_core source_kind) core_source binder binder_type
            core_body)
          else None
      | _ \<Rightarrow> None
      else None)"
| "Front_Quantifier _ = None"

fun eval_source_quantifier_at ::
  "navigation_store \<Rightarrow> bool_env \<Rightarrow> object_env \<Rightarrow>
   int_attribute_store \<Rightarrow> resolved_ocl_exp \<Rightarrow> bool3" where
  "eval_source_quantifier_at navigation booleans objects store
     (Exp_Iterator iterator source binder binder_type body
       (Ty_Prim PK_Boolean)) =
     eval_quantifier3 iterator
       (\<lambda>identifier. eval_source_bool_at booleans
          (objects(binder := Some identifier)) store body)
       (eval_source_object_collection objects navigation source)"
| "eval_source_quantifier_at _ _ _ _ _ = B3_Bottom"

fun core_iterator_to_source :: "core_iterator_kind \<Rightarrow> iter_kind option" where
  "core_iterator_to_source CIK_Exists = Some IK_Exists"
| "core_iterator_to_source CIK_ForAll = Some IK_ForAll"
| "core_iterator_to_source _ = None"

lemma iterator_mapping_round_trip [simp]:
  "source_iterator_to_core source_iterator = Some core_iterator \<Longrightarrow>
   core_iterator_to_source core_iterator = Some source_iterator"
  by (cases source_iterator) auto

lemma collection_kind_mapping_round_trip [simp]:
  "(if source_kind_to_core source_kind = CCK_Set then CK_Set else CK_Bag) =
   source_kind"
  by (cases source_kind) simp_all

fun eval_core_quantifier_at ::
  "navigation_store \<Rightarrow> bool_env \<Rightarrow> object_env \<Rightarrow>
   int_attribute_store \<Rightarrow> core_exp \<Rightarrow> bool3" where
  "eval_core_quantifier_at navigation booleans objects store
     (Core.CE_Iter iterator source_kind source binder binder_type body) =
     (case core_iterator_to_source iterator of
        None \<Rightarrow> B3_Bottom
      | Some source_iterator \<Rightarrow>
          eval_quantifier3 source_iterator
            (\<lambda>identifier. eval_core_bool_at booleans
               (objects(binder := Some identifier)) store body)
            (eval_core_object_collection objects navigation source))"
| "eval_core_quantifier_at _ _ _ _ _ = B3_Bottom"

lemma front_quantifier_components_preserve:
  assumes source: "front_exp source = Some core_source"
      and body: "front_exp body = Some core_body"
  shows
    "eval_quantifier3 iterator
       (\<lambda>identifier. eval_source_bool_at booleans
          (objects(binder := Some identifier)) store body)
       (eval_source_object_collection objects navigation source) =
     eval_quantifier3 iterator
       (\<lambda>identifier. eval_core_bool_at booleans
          (objects(binder := Some identifier)) store core_body)
       (eval_core_object_collection objects navigation core_source)"
proof (rule eval_quantifier3_cong)
  show
    "eval_source_object_collection objects navigation source =
     eval_core_object_collection objects navigation core_source"
    using front_exp_preserves_object_collection[OF source] by simp
next
  fix occurrences oid
  assume
    "eval_source_object_collection objects navigation source =
       Some occurrences"
    "oid \<in> set occurrences"
  show
    "eval_source_bool_at booleans (objects(binder := Some oid))
       store body =
     eval_core_bool_at booleans (objects(binder := Some oid))
       store core_body"
    using front_exp_preserves_at[OF body] by simp
qed

theorem Front_Quantifier_preserves:
  assumes compiled: "Front_Quantifier source = Some core"
  shows
    "eval_core_quantifier_at navigation booleans objects store core =
     eval_source_quantifier_at navigation booleans objects store source"
  using compiled
  by (induction source arbitrary: core rule: Front_Quantifier.induct)
     (auto simp: front_quantifier_components_preserve
           split: iter_kind.splits core_iterator_kind.splits
                  coll_kind.splits ocl_type.splits option.splits
                  prod.splits if_splits)

theorem Front_Quantifier_wf:
  assumes compiled: "Front_Quantifier source = Some core"
  shows "WF_Core core"
  using compiled
  unfolding WF_Core_def
  by (induction source arbitrary: core rule: Front_Quantifier.induct)
     (auto simp: front_exp_structural_wf front_exp_type
           split: iter_kind.splits core_iterator_kind.splits
                  coll_kind.splits ocl_type.splits option.splits
                  prod.splits if_splits)

definition exists_reports_example :: "resolved_ocl_exp \<Rightarrow> resolved_ocl_exp" where
  "exists_reports_example predicate =
     Exp_Iterator IK_Exists
       (Exp_Navigate
         (Exp_Var ''self'' (Ty_Class ''Employee''))
         \<lparr>prop_id = ''Employee::reports'', prop_name = ''reports'',
          prop_owner = ''Employee'',
          prop_navigation_source = Some ''Employee'', prop_is_attr = False,
          prop_type = Ty_Class ''Employee'', prop_lower = 0, prop_upper = -1,
          prop_unique = False, prop_ordered = False\<rparr>
         [] (Ty_Coll CK_Bag (Ty_Class ''Employee'')))
       ''r'' (Ty_Class ''Employee'') predicate (Ty_Prim PK_Boolean)"

lemma exists_literal_body_compiles:
  "\<exists>core. Front_Quantifier
     (exists_reports_example
       (Exp_LitBool True (Ty_Prim PK_Boolean))) = Some core"
  by (simp add: exists_reports_example_def wf_property_shape_def)

end
