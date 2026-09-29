theory IteratorEndToEnd
  imports EndToEnd IteratorSerialize
begin

text \<open>
End-to-end violation-ID preservation for the separately checked one-binder
exists/forAll slice.  The compiler is fail-closed at every boundary and emits
canonical tokens for the concrete TargetSigma ReduceExpression.  The theorem
uses both representation observations needed by an iterator body: scalar
Integer properties and occurrence-preserving ordinary navigation.
\<close>

definition compile_quantifier_tokens ::
  "resolved_ocl_invariant \<Rightarrow> cy_token list option" where
  "compile_quantifier_tokens invariant =
     (case Front_Quantifier (inv_body invariant) of
        None \<Rightarrow> None
      | Some core \<Rightarrow>
          (case Translate_Quantifier_Q core of
             None \<Rightarrow> None
           | Some query \<Rightarrow>
               (case Realize_Quantifier query of
                  None \<Rightarrow> None
                | Some target \<Rightarrow>
                    (case Expand_ReduceBool3 target of
                       None \<Rightarrow> None
                     | Some concrete \<Rightarrow> serialize_expr concrete))))"

definition eval_quantifier_tokens_at ::
  "navigation_store \<Rightarrow> bool_env \<Rightarrow> object_env \<Rightarrow>
   int_attribute_store \<Rightarrow> cy_token list \<Rightarrow> bool3 option" where
  "eval_quantifier_tokens_at navigation booleans objects store tokens =
     map_option
       (eval_concrete_reduce_at navigation booleans objects store)
       (deserialize_expr tokens)"

theorem compile_quantifier_tokens_preserves_at:
  assumes compiled:
    "compile_quantifier_tokens invariant = Some tokens"
  shows
    "eval_quantifier_tokens_at navigation booleans objects store tokens =
     Some (eval_source_quantifier_at navigation booleans objects store
       (inv_body invariant))"
proof -
  obtain core query target concrete where chain:
      "Front_Quantifier (inv_body invariant) = Some core"
      "Translate_Quantifier_Q core = Some query"
      "Realize_Quantifier query = Some target"
      "Expand_ReduceBool3 target = Some concrete"
      "serialize_expr concrete = Some tokens"
    using compiled unfolding compile_quantifier_tokens_def
    by (auto split: option.splits)
  show ?thesis
    unfolding eval_quantifier_tokens_at_def
    using Front_to_tokens_Quantifier_preserves[OF chain] .
qed

definition source_quantifier_violation_ids_at ::
  "resolved_ocl_invariant \<Rightarrow> uml_snapshot \<Rightarrow>
   validation_object list \<Rightarrow> string set" where
  "source_quantifier_violation_ids_at invariant snapshot objects =
     {identifier. \<exists>object \<in> set objects.
        identifier = vo_stable_id object \<and>
        eval_source_quantifier_at (ReadNavOccurrences snapshot)
          (vo_environment object) (self_object_env invariant identifier)
          (ReadSlot snapshot) (inv_body invariant) \<noteq> B3_True}"

definition target_quantifier_violation_ids_at ::
  "resolved_ocl_invariant \<Rightarrow> graph_instance \<Rightarrow>
   cy_token list \<Rightarrow> validation_object list \<Rightarrow> string set" where
  "target_quantifier_violation_ids_at invariant graph tokens objects =
     {identifier. \<exists>object \<in> set objects.
        identifier = vo_stable_id object \<and>
        eval_quantifier_tokens_at (ReadGraphNavOccurrences graph)
          (vo_environment object) (self_object_env invariant identifier)
          (ReadGraphProperty graph) tokens \<noteq> Some B3_True}"

lemma source_quantifier_violation_ids_subset_objects:
  "source_quantifier_violation_ids_at invariant snapshot objects \<subseteq>
   set (map vo_stable_id objects)"
  unfolding source_quantifier_violation_ids_at_def by auto

theorem exact_quantifier_violation_ids_over_valid_rep:
  assumes compiled:
      "compile_quantifier_tokens invariant = Some tokens"
    and representation: "ValidRep model snapshot graph"
  shows
    "target_quantifier_violation_ids_at invariant graph tokens objects =
     source_quantifier_violation_ids_at invariant snapshot objects"
proof -
  from representation have observations: "ObsEq model snapshot graph"
    unfolding ValidRep_def by blast
  have navigation:
    "ReadGraphNavOccurrences graph = ReadNavOccurrences snapshot"
    using observations unfolding ObsEq_def by (intro ext) blast
  have properties:
    "ReadGraphProperty graph = ReadSlot snapshot"
    using observations unfolding ObsEq_def by (intro ext) blast
  show ?thesis
    unfolding target_quantifier_violation_ids_at_def
      source_quantifier_violation_ids_at_def navigation properties
    using compile_quantifier_tokens_preserves_at[OF compiled]
    by auto
qed

theorem constructed_exact_quantifier_violation_ids:
  fixes environments :: "string \<Rightarrow> bool_env"
  assumes compiled:
      "compile_quantifier_tokens invariant = Some tokens"
    and schema: "ValidSchema model"
    and snapshot_wf: "ValidSnapshot model snapshot"
    and base: "WF_PGMM base"
  defines "graph \<equiv> build_graph base snapshot"
      and "objects \<equiv> runtime_objects_of snapshot environments"
  shows
    "ValidRep model snapshot graph \<and>
     target_quantifier_violation_ids_at invariant graph tokens objects =
       source_quantifier_violation_ids_at invariant snapshot objects \<and>
     source_quantifier_violation_ids_at invariant snapshot objects
       \<subseteq> set (map gn_key (g_nodes graph))"
proof -
  have representation: "ValidRep model snapshot graph"
    unfolding graph_def
    using build_graph_valid_rep[OF schema snapshot_wf base] .
  have exact:
    "target_quantifier_violation_ids_at invariant graph tokens objects =
     source_quantifier_violation_ids_at invariant snapshot objects"
    using exact_quantifier_violation_ids_over_valid_rep
      [OF compiled representation] .
  have object_ids:
    "set (map vo_stable_id objects) = set (snapshot_ids snapshot)"
    unfolding objects_def by simp
  from representation have graph_ids:
    "set (map gn_key (g_nodes graph)) = set (snapshot_ids snapshot)"
    unfolding ValidRep_def ObsEq_def by blast
  have subset:
    "source_quantifier_violation_ids_at invariant snapshot objects
       \<subseteq> set (map gn_key (g_nodes graph))"
    using source_quantifier_violation_ids_subset_objects
      [of invariant snapshot objects] object_ids graph_ids by blast
  show ?thesis using representation exact subset by blast
qed

context ocl_source_model
begin

definition compile_quantifier_tokens_checked ::
  "resolved_ocl_invariant \<Rightarrow> cy_token list option" where
  "compile_quantifier_tokens_checked invariant =
     (if WF_resolved invariant
      then compile_quantifier_tokens invariant
      else None)"

lemma compile_quantifier_tokens_checked_success:
  assumes
    "compile_quantifier_tokens_checked invariant = Some tokens"
  shows
    "WF_resolved invariant \<and>
     compile_quantifier_tokens invariant = Some tokens"
  using assms unfolding compile_quantifier_tokens_checked_def
  by (auto split: if_splits)

theorem checked_constructed_exact_quantifier_violation_ids:
  fixes environments :: "string \<Rightarrow> bool_env"
  assumes compiled:
      "compile_quantifier_tokens_checked invariant = Some tokens"
    and schema: "ValidSchema model"
    and snapshot_wf: "ValidSnapshot model snapshot"
    and base: "WF_PGMM base"
  defines "graph \<equiv> build_graph base snapshot"
      and "objects \<equiv> runtime_objects_of snapshot environments"
  shows
    "WF_resolved invariant \<and>
     ValidRep model snapshot graph \<and>
     target_quantifier_violation_ids_at invariant graph tokens objects =
       source_quantifier_violation_ids_at invariant snapshot objects \<and>
     source_quantifier_violation_ids_at invariant snapshot objects
       \<subseteq> set (map gn_key (g_nodes graph))"
proof -
  from compile_quantifier_tokens_checked_success[OF compiled]
  have source_wf: "WF_resolved invariant"
    and raw_compiled:
      "compile_quantifier_tokens invariant = Some tokens"
    by blast+
  have constructed:
    "ValidRep model snapshot graph \<and>
     target_quantifier_violation_ids_at invariant graph tokens objects =
       source_quantifier_violation_ids_at invariant snapshot objects \<and>
     source_quantifier_violation_ids_at invariant snapshot objects
       \<subseteq> set (map gn_key (g_nodes graph))"
    using constructed_exact_quantifier_violation_ids
      [OF raw_compiled schema snapshot_wf base,
       where environments=environments, folded graph_def objects_def] .
  show ?thesis using source_wf constructed by blast
qed

end

end
