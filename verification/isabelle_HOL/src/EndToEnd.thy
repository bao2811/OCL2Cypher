theory EndToEnd
  imports Front CoreToQ Serialize
begin

text \<open>
Machine-checked composition for the admitted resolved/typed Boolean slice:

  resolved OCL AS -> Core -> Q -> TargetSigma expression -> canonical tokens.

All transformations are partial.  The theorem is therefore stated on the
success domain, exactly as the paper's compilation theorem is stated.
\<close>

definition compile_object_tokens ::
  "resolved_ocl_exp \<Rightarrow> cy_token list option" where
  "compile_object_tokens source =
     (case front_exp source of
        None \<Rightarrow> None
      | Some core \<Rightarrow>
          (case Translate core of
             None \<Rightarrow> None
           | Some q \<Rightarrow>
               (if Q_ObjectExpr q then
                  (case realize_expr q of
                     None \<Rightarrow> None
                   | Some target \<Rightarrow> serialize_expr target)
                else None)))"

definition eval_object_tokens ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow>
   cy_token list \<Rightarrow> string option option" where
  "eval_object_tokens objects navigation tokens =
     map_option (eval_cy_object_nav objects navigation)
       (deserialize_expr tokens)"

theorem compile_object_tokens_preserves:
  assumes "compile_object_tokens source = Some tokens"
  shows
    "eval_object_tokens objects navigation tokens =
     Some (eval_source_object_nav objects navigation source)"
proof -
  obtain core q target where chain:
      "front_exp source = Some core"
      "Translate core = Some q"
      "Q_ObjectExpr q"
      "realize_expr q = Some target"
      "serialize_expr target = Some tokens"
    using assms unfolding compile_object_tokens_def
    by (auto split: option.splits if_splits)
  have parsed: "deserialize_expr tokens = Some target"
    using deserialize_serialize_expr[OF chain(5)] .
  have front_sem:
    "eval_core_object_nav objects navigation core =
     eval_source_object_nav objects navigation source"
    using front_exp_preserves_object_nav[OF chain(1)] .
  have q_sem:
    "eval_q_object_nav objects navigation q =
     eval_core_object_nav objects navigation core"
    using Translate_preserves_object_nav[OF chain(2)] .
  have target_sem:
    "eval_cy_object_nav objects navigation target =
     eval_q_object_nav objects navigation q"
    using realize_expr_preserves_object_nav[OF chain(3,4)] .
  show ?thesis
    unfolding eval_object_tokens_def parsed
    using front_sem q_sem target_sem by simp
qed

theorem compile_object_navigation_over_valid_rep:
  assumes compiled: "compile_object_tokens source = Some tokens"
      and representation: "ValidRep M S G"
  shows
    "eval_object_tokens objects (ReadGraphNavOccurrences G) tokens =
     Some (eval_source_object_nav objects (ReadNavOccurrences S) source)"
proof -
  from representation have navigation:
    "ReadGraphNavOccurrences G = ReadNavOccurrences S"
    unfolding ValidRep_def ObsEq_def by (intro ext) blast
  show ?thesis
    unfolding navigation
    using compile_object_tokens_preserves[OF compiled] .
qed

definition compile_collection_tokens ::
  "resolved_ocl_exp \<Rightarrow> cy_token list option" where
  "compile_collection_tokens source =
     (case front_exp source of
        None \<Rightarrow> None
      | Some core \<Rightarrow>
          (case Translate core of
             None \<Rightarrow> None
           | Some q \<Rightarrow>
               (if Q_ObjectCollectionExpr q then
                  (case realize_expr q of
                     None \<Rightarrow> None
                   | Some target \<Rightarrow> serialize_expr target)
                else None)))"

definition eval_collection_tokens ::
  "object_env \<Rightarrow> navigation_store \<Rightarrow>
   cy_token list \<Rightarrow> string list option option" where
  "eval_collection_tokens objects navigation tokens =
     map_option (eval_cy_object_collection objects navigation)
       (deserialize_expr tokens)"

theorem compile_collection_tokens_preserves:
  assumes "compile_collection_tokens source = Some tokens"
  shows
    "eval_collection_tokens objects navigation tokens =
     Some (eval_source_object_collection objects navigation source)"
proof -
  obtain core q target where chain:
      "front_exp source = Some core"
      "Translate core = Some q"
      "Q_ObjectCollectionExpr q"
      "realize_expr q = Some target"
      "serialize_expr target = Some tokens"
    using assms unfolding compile_collection_tokens_def
    by (auto split: option.splits if_splits)
  have parsed: "deserialize_expr tokens = Some target"
    using deserialize_serialize_expr[OF chain(5)] .
  have front_sem:
    "eval_core_object_collection objects navigation core =
     eval_source_object_collection objects navigation source"
    using front_exp_preserves_object_collection[OF chain(1)] .
  have q_sem:
    "eval_q_object_collection objects navigation q =
     eval_core_object_collection objects navigation core"
    using Translate_preserves_object_collection[OF chain(2)] .
  have target_sem:
    "eval_cy_object_collection objects navigation target =
     eval_q_object_collection objects navigation q"
    using realize_expr_preserves_object_collection[OF chain(3,4)] .
  show ?thesis
    unfolding eval_collection_tokens_def parsed
    using front_sem q_sem target_sem by simp
qed

theorem compile_collection_navigation_over_valid_rep:
  assumes compiled: "compile_collection_tokens source = Some tokens"
      and representation: "ValidRep M S G"
  shows
    "eval_collection_tokens objects (ReadGraphNavOccurrences G) tokens =
     Some (eval_source_object_collection objects (ReadNavOccurrences S) source)"
proof -
  from representation have navigation:
    "ReadGraphNavOccurrences G = ReadNavOccurrences S"
    unfolding ValidRep_def ObsEq_def by (intro ext) blast
  show ?thesis
    unfolding navigation
    using compile_collection_tokens_preserves[OF compiled] .
qed

definition compile_tokens :: "resolved_ocl_invariant \<Rightarrow> cy_token list option" where
  "compile_tokens a =
     (case Front a of
        None \<Rightarrow> None
      | Some c \<Rightarrow>
          (case Translate c of
             None \<Rightarrow> None
           | Some q \<Rightarrow>
               (if Q_BoolExpr q then
                  (case realize_expr q of
                     None \<Rightarrow> None
                   | Some target \<Rightarrow> serialize_expr target)
                else None)))"

definition eval_tokens :: "bool_env \<Rightarrow> cy_token list \<Rightarrow> bool3 option" where
  "eval_tokens env tokens = map_option (eval_cy_bool env) (deserialize_expr tokens)"

definition eval_tokens_at ::
  "bool_env \<Rightarrow> object_env \<Rightarrow> int_attribute_store \<Rightarrow>
   cy_token list \<Rightarrow> bool3 option" where
  "eval_tokens_at env objects store tokens =
     map_option (eval_cy_bool_at env objects store) (deserialize_expr tokens)"

theorem compile_tokens_preserves:
  assumes "compile_tokens a = Some tokens"
  shows "eval_tokens env tokens = Some (eval_source_bool env (inv_body a))"
proof -
  obtain c q target where chain:
      "Front a = Some c"
      "Translate c = Some q"
      "Q_BoolExpr q"
      "realize_expr q = Some target"
      "serialize_expr target = Some tokens"
    using assms unfolding compile_tokens_def
    by (auto split: option.splits if_splits)
  have parsed: "deserialize_expr tokens = Some target"
    using deserialize_serialize_expr[OF chain(5)] .
  have front_sem:
      "eval_core_bool env c = eval_source_bool env (inv_body a)"
    using Front_preserves[OF chain(1)] .
  have q_sem: "eval_q_bool env q = eval_core_bool env c"
    using CoreToQ_preserves[OF chain(2)] .
  have target_sem: "eval_cy_bool env target = eval_q_bool env q"
    using realize_expr_preserves[OF chain(3,4)] .
  show ?thesis
    unfolding eval_tokens_def parsed
    using front_sem q_sem target_sem by simp
qed

theorem compile_tokens_preserves_at:
  assumes "compile_tokens a = Some tokens"
  shows
    "eval_tokens_at env objects store tokens =
     Some (eval_source_bool_at env objects store (inv_body a))"
proof -
  obtain c q target where chain:
      "Front a = Some c"
      "Translate c = Some q"
      "Q_BoolExpr q"
      "realize_expr q = Some target"
      "serialize_expr target = Some tokens"
    using assms unfolding compile_tokens_def
    by (auto split: option.splits if_splits)
  have parsed: "deserialize_expr tokens = Some target"
    using deserialize_serialize_expr[OF chain(5)] .
  have front_sem:
      "eval_core_bool_at env objects store c =
       eval_source_bool_at env objects store (inv_body a)"
    using Front_preserves_at[OF chain(1)] .
  have q_sem:
      "eval_q_bool_at env objects store q =
       eval_core_bool_at env objects store c"
    using CoreToQ_preserves_at[OF chain(2)] .
  have target_sem:
      "eval_cy_bool_at env objects store target =
       eval_q_bool_at env objects store q"
    using realize_expr_preserves_at[OF chain(3,4)] .
  show ?thesis
    unfolding eval_tokens_at_def parsed
    using front_sem q_sem target_sem by simp
qed

definition integer_less_than_example :: resolved_ocl_invariant where
  "integer_less_than_example =
     \<lparr>source_id = ''example::1-less-than-2'',
      context_class = ''Example'',
      self_variable = ''self'',
      inv_body =
        Exp_Binary op_lt_id
          (Exp_LitInt 1 (Ty_Prim PK_Integer))
          (Exp_LitInt 2 (Ty_Prim PK_Integer))
          (Ty_Prim PK_Boolean)\<rparr>"

lemma integer_less_than_example_compiles:
  "compile_tokens integer_less_than_example =
     Some [Tok_Int 1, Tok_Int 2, Tok_Lt]"
  by (simp add: compile_tokens_def integer_less_than_example_def Front_def
                front_binary_def front_comparison_operator_def
                op_lt_id_def in_int64_def int64_min_def int64_max_def)

lemma integer_less_than_example_denotes_true:
  "eval_tokens env [Tok_Int 1, Tok_Int 2, Tok_Lt] = Some B3_True"
  by (simp add: eval_tokens_def deserialize_expr_def int_compare3_def)

definition person_age_property :: resolved_property where
  "person_age_property =
     \<lparr>prop_id = ''Person::age'',
      prop_name = ''age'',
      prop_owner = ''Person'',
      prop_navigation_source = None,
      prop_is_attr = True,
      prop_type = Ty_Prim PK_Integer,
      prop_lower = 0,
      prop_upper = 1,
      prop_unique = True,
      prop_ordered = False\<rparr>"

definition adult_age_example :: resolved_ocl_invariant where
  "adult_age_example =
     \<lparr>source_id = ''example::adult-age'',
      context_class = ''Person'',
      self_variable = ''self'',
      inv_body =
        Exp_Binary op_ge_id
          (Exp_AttrRead (Exp_Var ''self'' (Ty_Class ''Person''))
             person_age_property (Ty_Prim PK_Integer))
          (Exp_LitInt 18 (Ty_Prim PK_Integer))
          (Ty_Prim PK_Boolean)\<rparr>"

lemma adult_age_example_compiles:
  "compile_tokens adult_age_example =
     Some [Tok_Var ''self'', Tok_Property ''Person::age'', Tok_Int 18, Tok_Ge]"
  by (simp add: compile_tokens_def adult_age_example_def person_age_property_def
        Front_def core_attribute_def wf_property_shape_def
        front_binary_def front_comparison_operator_def
        op_lt_id_def op_le_id_def op_gt_id_def op_ge_id_def
        in_int64_def int64_min_def int64_max_def)

lemma adult_age_example_denotes_true:
  defines "objects \<equiv>
    (\<lambda>variable. if variable = ''self'' then Some ''person-1'' else None)"
      and "store \<equiv>
    (\<lambda>object property.
       if object = ''person-1'' \<and> property = ''Person::age''
       then Some 20 else None)"
  shows
    "eval_tokens_at env objects store
       [Tok_Var ''self'', Tok_Property ''Person::age'', Tok_Int 18, Tok_Ge] =
     Some B3_True"
  unfolding objects_def store_def eval_tokens_at_def deserialize_expr_def
  by (simp add: int_compare3_def)

definition employee_manager_property :: resolved_property where
  "employee_manager_property =
     \<lparr>prop_id = ''Employee::manager'',
      prop_name = ''manager'',
      prop_owner = ''Employee'',
      prop_navigation_source = Some ''Employee'',
      prop_is_attr = False,
      prop_type = Ty_Class ''Person'',
      prop_lower = 0,
      prop_upper = 1,
      prop_unique = True,
      prop_ordered = False\<rparr>"

definition manager_navigation_example :: resolved_ocl_exp where
  "manager_navigation_example =
     Exp_Navigate (Exp_Var ''self'' (Ty_Class ''Employee''))
       employee_manager_property [] (Ty_Class ''Person'')"

lemma manager_navigation_example_compiles:
  "compile_object_tokens manager_navigation_example =
     Some [Tok_Var ''self'', Tok_NavOne ''Employee::manager'']"
  by (simp add: compile_object_tokens_def manager_navigation_example_def
        employee_manager_property_def core_association_end_def
        wf_property_shape_def)

lemma manager_navigation_example_preserves_occurrence:
  defines "objects \<equiv>
    (\<lambda>variable. if variable = ''self'' then Some ''employee-1'' else None)"
      and "navigation \<equiv>
    (\<lambda>source association_end.
       if source = ''employee-1'' \<and>
          association_end = ''Employee::manager''
       then [''person-1''] else [])"
  shows
    "eval_object_tokens objects navigation
       [Tok_Var ''self'', Tok_NavOne ''Employee::manager''] =
     Some (Some ''person-1'')"
  unfolding objects_def navigation_def eval_object_tokens_def
    deserialize_expr_def
  by (simp add: nav_one_def)

definition employee_report_property :: resolved_property where
  "employee_report_property =
     \<lparr>prop_id = ''Employee::report'',
      prop_name = ''report'',
      prop_owner = ''Employee'',
      prop_navigation_source = Some ''Employee'',
      prop_is_attr = False,
      prop_type = Ty_Class ''Employee'',
      prop_lower = 0,
      prop_upper = -1,
      prop_unique = False,
      prop_ordered = False\<rparr>"

definition reports_bag_example :: resolved_ocl_exp where
  "reports_bag_example =
     Exp_Navigate (Exp_Var ''self'' (Ty_Class ''Employee''))
       employee_report_property []
       (Ty_Coll CK_Bag (Ty_Class ''Employee''))"

lemma reports_bag_example_compiles:
  "compile_collection_tokens reports_bag_example =
     Some [Tok_Var ''self'', Tok_NavMany ''Employee::report'' False]"
  by (simp add: compile_collection_tokens_def reports_bag_example_def
        employee_report_property_def core_association_end_def
        wf_property_shape_def normalize_q_occurrences_def)

lemma bag_occurrences_are_preserved:
  defines "objects \<equiv>
    (\<lambda>variable. if variable = ''self'' then Some ''manager-1'' else None)"
      and "navigation \<equiv>
    (\<lambda>source association_end.
       if source = ''manager-1'' \<and>
          association_end = ''Employee::report''
       then [''employee-1'', ''employee-1'', ''employee-2''] else [])"
  shows
    "eval_collection_tokens objects navigation
       [Tok_Var ''self'', Tok_NavMany ''Employee::report'' False] =
     Some (Some [''employee-1'', ''employee-1'', ''employee-2''])"
  unfolding objects_def navigation_def eval_collection_tokens_def
    deserialize_expr_def
  by (simp add: normalize_target_occurrences_def)

lemma set_support_removes_duplicate_occurrences:
  defines "objects \<equiv>
    (\<lambda>variable. if variable = ''self'' then Some ''manager-1'' else None)"
      and "navigation \<equiv>
    (\<lambda>source association_end.
       if source = ''manager-1'' \<and> association_end = ''team''
       then [''employee-1'', ''employee-1'', ''employee-2''] else [])"
  shows
    "eval_collection_tokens objects navigation
       [Tok_Var ''self'', Tok_NavMany ''team'' True] =
     Some (Some [''employee-1'', ''employee-2''])"
  unfolding objects_def navigation_def eval_collection_tokens_def
    deserialize_expr_def
  by (simp add: normalize_target_occurrences_def)

record validation_object =
  vo_stable_id :: string
  vo_environment :: bool_env

definition mk_validation_object ::
  "string \<Rightarrow> bool_env \<Rightarrow> validation_object" where
  "mk_validation_object sid environment =
     \<lparr>vo_stable_id = sid, vo_environment = environment\<rparr>"

lemma mk_validation_object_id[simp]:
  "vo_stable_id (mk_validation_object sid environment) = sid"
  unfolding mk_validation_object_def by simp

definition runtime_objects_of ::
  "uml_snapshot \<Rightarrow> (string \<Rightarrow> bool_env) \<Rightarrow> validation_object list" where
  "runtime_objects_of S environments =
     map (\<lambda>sid. mk_validation_object sid (environments sid))
         (snapshot_ids S)"

lemma runtime_objects_of_ids[simp]:
  "map vo_stable_id (runtime_objects_of S environments) = snapshot_ids S"
  unfolding runtime_objects_of_def by (simp add: o_def)

lemma runtime_objects_of_distinct:
  assumes "ValidSnapshot M S"
  shows "distinct (map vo_stable_id (runtime_objects_of S environments))"
  using assms unfolding ValidSnapshot_def by simp

definition source_violation_ids ::
  "resolved_ocl_invariant \<Rightarrow> validation_object list \<Rightarrow> string set" where
  "source_violation_ids a objects =
     {sid. \<exists>obj \<in> set objects.
        sid = vo_stable_id obj \<and>
        eval_source_bool (vo_environment obj) (inv_body a) \<noteq> B3_True}"

definition target_violation_ids ::
  "cy_token list \<Rightarrow> validation_object list \<Rightarrow> string set" where
  "target_violation_ids tokens objects =
     {sid. \<exists>obj \<in> set objects.
        sid = vo_stable_id obj \<and>
        eval_tokens (vo_environment obj) tokens \<noteq> Some B3_True}"

definition self_object_env ::
  "resolved_ocl_invariant \<Rightarrow> string \<Rightarrow> object_env" where
  "self_object_env a identifier =
     (\<lambda>_. None)(self_variable a := Some identifier)"

definition source_violation_ids_at ::
  "resolved_ocl_invariant \<Rightarrow> uml_snapshot \<Rightarrow>
   validation_object list \<Rightarrow> string set" where
  "source_violation_ids_at a S objects =
     {sid. \<exists>obj \<in> set objects.
        sid = vo_stable_id obj \<and>
        eval_source_bool_at (vo_environment obj)
          (self_object_env a sid) (ReadSlot S) (inv_body a) \<noteq> B3_True}"

definition target_violation_ids_at ::
  "resolved_ocl_invariant \<Rightarrow> graph_instance \<Rightarrow> cy_token list \<Rightarrow>
   validation_object list \<Rightarrow> string set" where
  "target_violation_ids_at a G tokens objects =
     {sid. \<exists>obj \<in> set objects.
        sid = vo_stable_id obj \<and>
        eval_tokens_at (vo_environment obj) (self_object_env a sid)
          (ReadGraphProperty G) tokens \<noteq> Some B3_True}"

theorem exact_violation_identifier_set:
  assumes compiled: "compile_tokens a = Some tokens"
  shows "target_violation_ids tokens objects = source_violation_ids a objects"
  unfolding target_violation_ids_def source_violation_ids_def
  using compile_tokens_preserves[OF compiled]
  by auto

lemma source_violation_ids_subset_objects:
  "source_violation_ids a objects \<subseteq> set (map vo_stable_id objects)"
  unfolding source_violation_ids_def by auto

lemma source_violation_ids_at_subset_objects:
  "source_violation_ids_at a S objects \<subseteq>
   set (map vo_stable_id objects)"
  unfolding source_violation_ids_at_def by auto

theorem exact_attribute_violation_identifier_set:
  assumes compiled: "compile_tokens a = Some tokens"
      and representation: "ValidRep M S G"
  shows
    "target_violation_ids_at a G tokens objects =
     source_violation_ids_at a S objects"
proof -
  from representation have obs: "ObsEq M S G"
    unfolding ValidRep_def by blast
  have stores: "ReadGraphProperty G = ReadSlot S"
    using obs unfolding ObsEq_def by (intro ext) blast
  show ?thesis
    unfolding target_violation_ids_at_def source_violation_ids_at_def stores
    using compile_tokens_preserves_at[OF compiled]
    by auto
qed

theorem exact_attribute_violation_ids_over_valid_rep:
  assumes compiled: "compile_tokens a = Some tokens"
      and representation: "ValidRep M S G"
      and objects: "set (map vo_stable_id runtime_objects) = set (snapshot_ids S)"
  shows
    "target_violation_ids_at a G tokens runtime_objects =
       source_violation_ids_at a S runtime_objects \<and>
     source_violation_ids_at a S runtime_objects
       \<subseteq> set (map gn_key (g_nodes G))"
proof
  show "target_violation_ids_at a G tokens runtime_objects =
        source_violation_ids_at a S runtime_objects"
    using exact_attribute_violation_identifier_set[OF compiled representation] .
  from representation have graph_ids:
      "set (map gn_key (g_nodes G)) = set (snapshot_ids S)"
    unfolding ValidRep_def ObsEq_def by blast
  show "source_violation_ids_at a S runtime_objects
        \<subseteq> set (map gn_key (g_nodes G))"
    using source_violation_ids_at_subset_objects[of a S runtime_objects]
      objects graph_ids by blast
qed

theorem constructed_exact_attribute_violation_ids:
  fixes environments :: "string \<Rightarrow> bool_env"
  assumes compiled: "compile_tokens a = Some tokens"
      and schema: "ValidSchema M"
      and snapshot: "ValidSnapshot M S"
      and base: "WF_PGMM base"
  defines "G \<equiv> build_graph base S"
      and "objects \<equiv> runtime_objects_of S environments"
  shows
    "ValidRep M S G \<and>
     target_violation_ids_at a G tokens objects =
       source_violation_ids_at a S objects \<and>
     source_violation_ids_at a S objects
       \<subseteq> set (map gn_key (g_nodes G))"
proof -
  have representation: "ValidRep M S G"
    unfolding G_def using build_graph_valid_rep[OF schema snapshot base] .
  have object_ids:
      "set (map vo_stable_id objects) = set (snapshot_ids S)"
    unfolding objects_def by simp
  have exact:
    "target_violation_ids_at a G tokens objects =
       source_violation_ids_at a S objects \<and>
     source_violation_ids_at a S objects
       \<subseteq> set (map gn_key (g_nodes G))"
    using exact_attribute_violation_ids_over_valid_rep
      [OF compiled representation object_ids] .
  show ?thesis using representation exact by blast
qed

theorem exact_violation_ids_over_valid_rep:
  assumes compiled: "compile_tokens a = Some tokens"
      and representation: "ValidRep M S G"
      and objects: "set (map vo_stable_id runtime_objects) = set (snapshot_ids S)"
  shows
    "target_violation_ids tokens runtime_objects =
       source_violation_ids a runtime_objects \<and>
     source_violation_ids a runtime_objects \<subseteq> set (map gn_key (g_nodes G))"
proof
  show "target_violation_ids tokens runtime_objects =
        source_violation_ids a runtime_objects"
    using exact_violation_identifier_set[OF compiled] .
  from representation have obs: "ObsEq M S G"
    unfolding ValidRep_def by blast
  have graph_ids: "set (map gn_key (g_nodes G)) = set (snapshot_ids S)"
    using obs unfolding ObsEq_def by blast
  show "source_violation_ids a runtime_objects \<subseteq>
        set (map gn_key (g_nodes G))"
    using source_violation_ids_subset_objects[of a runtime_objects]
      objects graph_ids by blast
qed

theorem constructed_exact_violation_ids:
  fixes environments :: "string \<Rightarrow> bool_env"
  assumes compiled: "compile_tokens a = Some tokens"
      and schema: "ValidSchema M"
      and snapshot: "ValidSnapshot M S"
      and base: "WF_PGMM base"
  defines "G \<equiv> build_graph base S"
      and "objects \<equiv> runtime_objects_of S environments"
  shows
    "ValidRep M S G \<and>
     target_violation_ids tokens objects = source_violation_ids a objects \<and>
     source_violation_ids a objects \<subseteq> set (map gn_key (g_nodes G))"
proof -
  have representation: "ValidRep M S G"
    unfolding G_def using build_graph_valid_rep[OF schema snapshot base] .
  have object_ids:
      "set (map vo_stable_id objects) = set (snapshot_ids S)"
    unfolding objects_def by simp
  have exact:
    "target_violation_ids tokens objects = source_violation_ids a objects \<and>
     source_violation_ids a objects \<subseteq> set (map gn_key (g_nodes G))"
    using exact_violation_ids_over_valid_rep
      [OF compiled representation object_ids] .
  show ?thesis using representation exact by blast
qed

context ocl_source_model
begin

definition compile_tokens_checked ::
  "resolved_ocl_invariant \<Rightarrow> cy_token list option" where
  "compile_tokens_checked a =
     (if WF_resolved a then compile_tokens a else None)"

lemma compile_tokens_checked_success:
  assumes "compile_tokens_checked a = Some tokens"
  shows "WF_resolved a \<and> compile_tokens a = Some tokens"
  using assms unfolding compile_tokens_checked_def
  by (auto split: if_splits)

theorem compile_tokens_checked_preserves:
  assumes "compile_tokens_checked a = Some tokens"
  shows "eval_tokens env tokens = Some (eval_source_bool env (inv_body a))"
  using compile_tokens_preserves
    compile_tokens_checked_success[OF assms] by blast

theorem compile_tokens_checked_preserves_at:
  assumes "compile_tokens_checked a = Some tokens"
  shows
    "eval_tokens_at env objects store tokens =
     Some (eval_source_bool_at env objects store (inv_body a))"
  using compile_tokens_preserves_at
    compile_tokens_checked_success[OF assms] by blast

theorem checked_exact_violation_identifier_set:
  assumes "compile_tokens_checked a = Some tokens"
  shows "target_violation_ids tokens objects = source_violation_ids a objects"
  using exact_violation_identifier_set
    compile_tokens_checked_success[OF assms] by blast

theorem checked_exact_violation_ids_over_valid_rep:
  assumes compiled: "compile_tokens_checked a = Some tokens"
      and representation: "ValidRep M S G"
      and objects: "set (map vo_stable_id runtime_objects) = set (snapshot_ids S)"
  shows
    "target_violation_ids tokens runtime_objects =
       source_violation_ids a runtime_objects \<and>
     source_violation_ids a runtime_objects \<subseteq> set (map gn_key (g_nodes G))"
  using exact_violation_ids_over_valid_rep
    compile_tokens_checked_success[OF compiled] representation objects by blast

theorem checked_exact_attribute_violation_ids_over_valid_rep:
  assumes compiled: "compile_tokens_checked a = Some tokens"
      and representation: "ValidRep M S G"
      and objects: "set (map vo_stable_id runtime_objects) = set (snapshot_ids S)"
  shows
    "target_violation_ids_at a G tokens runtime_objects =
       source_violation_ids_at a S runtime_objects \<and>
     source_violation_ids_at a S runtime_objects
       \<subseteq> set (map gn_key (g_nodes G))"
  using exact_attribute_violation_ids_over_valid_rep
    compile_tokens_checked_success[OF compiled] representation objects by blast

theorem checked_constructed_exact_violation_ids:
  fixes environments :: "string \<Rightarrow> bool_env"
  assumes compiled: "compile_tokens_checked a = Some tokens"
      and schema: "ValidSchema M"
      and snapshot: "ValidSnapshot M S"
      and base: "WF_PGMM base"
  defines "G \<equiv> build_graph base S"
      and "objects \<equiv> runtime_objects_of S environments"
  shows
    "WF_resolved a \<and>
     ValidRep M S G \<and>
     target_violation_ids tokens objects = source_violation_ids a objects \<and>
     source_violation_ids a objects \<subseteq> set (map gn_key (g_nodes G))"
proof -
  from compile_tokens_checked_success[OF compiled]
  have source_wf: "WF_resolved a"
    and raw_compiled: "compile_tokens a = Some tokens"
    by blast+
  have constructed:
    "ValidRep M S G \<and>
     target_violation_ids tokens objects = source_violation_ids a objects \<and>
     source_violation_ids a objects \<subseteq> set (map gn_key (g_nodes G))"
    using constructed_exact_violation_ids
      [OF raw_compiled schema snapshot base, where environments=environments,
       folded G_def objects_def] .
  show ?thesis using source_wf constructed by blast
qed

theorem checked_constructed_exact_attribute_violation_ids:
  fixes environments :: "string \<Rightarrow> bool_env"
  assumes compiled: "compile_tokens_checked a = Some tokens"
      and schema: "ValidSchema M"
      and snapshot: "ValidSnapshot M S"
      and base: "WF_PGMM base"
  defines "G \<equiv> build_graph base S"
      and "objects \<equiv> runtime_objects_of S environments"
  shows
    "WF_resolved a \<and>
     ValidRep M S G \<and>
     target_violation_ids_at a G tokens objects =
       source_violation_ids_at a S objects \<and>
     source_violation_ids_at a S objects
       \<subseteq> set (map gn_key (g_nodes G))"
proof -
  from compile_tokens_checked_success[OF compiled]
  have source_wf: "WF_resolved a"
    and raw_compiled: "compile_tokens a = Some tokens"
    by blast+
  have constructed:
    "ValidRep M S G \<and>
     target_violation_ids_at a G tokens objects =
       source_violation_ids_at a S objects \<and>
     source_violation_ids_at a S objects
       \<subseteq> set (map gn_key (g_nodes G))"
    using constructed_exact_attribute_violation_ids
      [OF raw_compiled schema snapshot base, where environments=environments,
       folded G_def objects_def] .
  show ?thesis using source_wf constructed by blast
qed

end

end
