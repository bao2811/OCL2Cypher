theory Representation
  imports UML PGMM Q
begin

text \<open>
Canonical graph construction and adequacy for stable identity and scalar
Integer attributes.  Every source object identifier becomes exactly one
object node with the same stable key; every present Integer slot becomes one
property value on that node.  Absence remains absence and is observed as
typed bottom.
\<close>

definition slot_property :: "uml_int_slot \<Rightarrow> property_value" where
  "slot_property slot =
     \<lparr>pv_def = us_property slot, pv_val = V_Int64 (us_value slot)\<rparr>"

definition object_properties :: "uml_snapshot \<Rightarrow> string \<Rightarrow> property_value list" where
  "object_properties S identifier =
     map slot_property
       (filter (\<lambda>slot. us_object slot = identifier) (snapshot_int_slots S))"

definition object_node ::
  "graph_instance \<Rightarrow> uml_snapshot \<Rightarrow> string \<Rightarrow> graph_node" where
  "object_node base S identifier =
     \<lparr>gn_key = identifier,
      gn_model = ms_model_key (g_scope base),
      gn_type = ''Object'',
      gn_labels = [''Object''],
      gn_props = object_properties S identifier\<rparr>"

lemma object_node_key[simp]: "gn_key (object_node base S identifier) = identifier"
  unfolding object_node_def by simp

definition link_relationship ::
  "graph_instance \<Rightarrow> uml_link \<Rightarrow> graph_rel" where
  "link_relationship base link =
     \<lparr>gr_key = ul_key link,
      gr_model = ms_model_key (g_scope base),
      gr_type = ul_end link,
      gr_phys = ul_end link,
      gr_src = ul_source link,
      gr_tgt = ul_target link,
      gr_props = []\<rparr>"

lemma link_relationship_key[simp]:
  "gr_key (link_relationship base link) = ul_key link"
  unfolding link_relationship_def by simp

fun read_graph_properties :: "property_value list \<Rightarrow> string \<Rightarrow> int option" where
  "read_graph_properties [] property = None"
| "read_graph_properties (value # values) property =
     (if pv_def value = property
      then case pv_val value of V_Int64 n \<Rightarrow> Some n | _ \<Rightarrow> None
      else read_graph_properties values property)"

fun find_graph_node :: "graph_node list \<Rightarrow> string \<Rightarrow> graph_node option" where
  "find_graph_node [] identifier = None"
| "find_graph_node (node # nodes) identifier =
     (if gn_key node = identifier then Some node
      else find_graph_node nodes identifier)"

definition ReadGraphProperty ::
  "graph_instance \<Rightarrow> string \<Rightarrow> string \<Rightarrow> int option" where
  "ReadGraphProperty G identifier property =
     (case find_graph_node (g_nodes G) identifier of
        None \<Rightarrow> None
      | Some node \<Rightarrow> read_graph_properties (gn_props node) property)"

definition ReadGraphNavOccurrences ::
  "graph_instance \<Rightarrow> string \<Rightarrow> string \<Rightarrow> string list" where
  "ReadGraphNavOccurrences G source association_end =
     map gr_tgt
       (filter
         (\<lambda>relationship.
            gr_src relationship = source \<and>
            gr_type relationship = association_end)
         (g_rels G))"

definition ReadGraphNavOne ::
  "graph_instance \<Rightarrow> string \<Rightarrow> string \<Rightarrow> string option" where
  "ReadGraphNavOne G source association_end =
     (case ReadGraphNavOccurrences G source association_end of
        [target] \<Rightarrow> Some target
      | _ \<Rightarrow> None)"

definition build_graph :: "graph_instance \<Rightarrow> uml_snapshot \<Rightarrow> graph_instance" where
  "build_graph base S =
     base\<lparr>g_nodes := map (object_node base S) (snapshot_ids S),
          g_rels := map (link_relationship base) (snapshot_links S)\<rparr>"

definition ObsEq :: "uml_schema \<Rightarrow> uml_snapshot \<Rightarrow> graph_instance \<Rightarrow> bool" where
  "ObsEq M S G \<equiv>
     set (map gn_key (g_nodes G)) = set (snapshot_ids S) \<and>
     (\<forall>identifier property.
        ReadGraphProperty G identifier property = ReadSlot S identifier property) \<and>
     (\<forall>identifier association_end.
        ReadGraphNavOccurrences G identifier association_end =
        ReadNavOccurrences S identifier association_end)"

definition ValidRep ::
  "uml_schema \<Rightarrow> uml_snapshot \<Rightarrow> graph_instance \<Rightarrow> bool" where
  "ValidRep M S G \<equiv>
     ValidSchema M \<and> ValidSnapshot M S \<and> WF_PGMM G \<and> ObsEq M S G"

definition Adequate_Sigma :: "uml_schema \<Rightarrow> graph_instance \<Rightarrow> bool" where
  "Adequate_Sigma M G \<equiv>
     ValidSchema M \<and> WF_PGMM G \<and>
     (\<exists>S. ValidSnapshot M S \<and> ObsEq M S G)"

lemma build_graph_observation:
  assumes distinct_ids: "distinct (snapshot_ids S)"
      and scoped_slots:
        "\<forall>slot \<in> set (snapshot_int_slots S).
           us_object slot \<in> set (snapshot_ids S)"
  shows "ObsEq M S (build_graph base S)"
proof -
  have properties_aux:
    "read_graph_properties
       (map slot_property (filter (\<lambda>slot. us_object slot = oid) slots))
       property =
     read_int_slots slots oid property" for slots oid property
    unfolding slot_property_def
    by (induction slots) auto
  have properties:
    "read_graph_properties (object_properties S oid) property =
     ReadSlot S oid property" for oid property
    unfolding object_properties_def ReadSlot_def
    using properties_aux by simp
  have node_aux:
    "distinct ids \<Longrightarrow> oid \<in> set ids \<Longrightarrow>
     find_graph_node (map (object_node base S) ids) oid =
     Some (object_node base S oid)" for ids oid
    by (induction ids) auto
  have node:
    "oid \<in> set (snapshot_ids S) \<Longrightarrow>
     find_graph_node
       (map (object_node base S) (snapshot_ids S)) oid =
     Some (object_node base S oid)" for oid
    using node_aux distinct_ids by blast
  have node_none:
    "oid \<notin> set ids \<Longrightarrow>
     find_graph_node (map (object_node base S) ids) oid = None" for ids oid
    by (induction ids) auto
  have slot_none:
    "(\<forall>slot \<in> set slots. us_object slot \<in> set ids) \<Longrightarrow>
     oid \<notin> set ids \<Longrightarrow> read_int_slots slots oid property = None"
    for slots ids oid property
    by (induction slots) auto
  have all_properties:
    "\<forall>oid property_name.
       ReadGraphProperty (build_graph base S) oid property_name =
       ReadSlot S oid property_name"
  proof (intro allI)
    fix oid property_name
    show
      "ReadGraphProperty (build_graph base S) oid property_name =
       ReadSlot S oid property_name"
    proof (cases "oid \<in> set (snapshot_ids S)")
      case True
      with node[of oid] properties[of oid property_name]
      show ?thesis
        unfolding ReadGraphProperty_def build_graph_def object_node_def
          by simp
    next
      case False
      have graph_none:
        "find_graph_node
           (map (object_node base S) (snapshot_ids S)) oid = None"
        using node_none[OF False] .
      have source_none: "ReadSlot S oid property_name = None"
        unfolding ReadSlot_def
        using slot_none[OF scoped_slots False, of property_name] .
      show ?thesis
        unfolding ReadGraphProperty_def build_graph_def
        using graph_none source_none by simp
    qed
  qed
  have all_navigation:
    "\<forall>oid association_end.
       ReadGraphNavOccurrences (build_graph base S) oid association_end =
       ReadNavOccurrences S oid association_end"
  proof (intro allI)
    fix oid association_end
    have navigation_aux:
      "map gr_tgt
         (filter
           (\<lambda>relationship.
              gr_src relationship = oid \<and>
              gr_type relationship = association_end)
           (map (link_relationship base) links)) =
       map ul_target
         (filter
           (\<lambda>link.
              ul_source link = oid \<and> ul_end link = association_end)
           links)" for links
      by (induction links) (auto simp: link_relationship_def)
    show
      "ReadGraphNavOccurrences (build_graph base S) oid association_end =
       ReadNavOccurrences S oid association_end"
      unfolding ReadGraphNavOccurrences_def ReadNavOccurrences_def
        build_graph_def
      using navigation_aux[of "snapshot_links S"] by simp
  qed
  show ?thesis
    unfolding ObsEq_def
    using all_properties all_navigation
    by (simp add: build_graph_def)
qed

lemma build_graph_wf:
  assumes base: "WF_PGMM base"
      and ids: "distinct (snapshot_ids S)"
      and links: "distinct (map ul_key (snapshot_links S))"
  shows "WF_PGMM (build_graph base S)"
proof -
  have key_fun: "gn_key \<circ> object_node base S = id"
    by (rule ext) simp
  have link_key_fun: "gr_key \<circ> link_relationship base = ul_key"
    by (rule ext) simp
  have distinct_length_remdups:
    "distinct xs \<Longrightarrow> length (remdups xs) = length xs" for xs
    by (induction xs) auto
  have link_unique: "unique_keys (map ul_key (snapshot_links S))"
    unfolding unique_keys_def
    using distinct_length_remdups[OF links] .
  from base ids links show ?thesis
    unfolding WF_PGMM_def build_graph_def all_rel_type_bounded_def unique_keys_def
    using link_unique
    by (simp add: key_fun link_key_fun unique_keys_def)
qed

theorem build_graph_valid_rep:
  assumes schema: "ValidSchema M"
      and snapshot: "ValidSnapshot M S"
      and base: "WF_PGMM base"
  shows "ValidRep M S (build_graph base S)"
proof -
  from snapshot have ids: "distinct (snapshot_ids S)"
    unfolding ValidSnapshot_def by blast
  from snapshot have slots:
    "\<forall>slot \<in> set (snapshot_int_slots S).
       us_object slot \<in> set (snapshot_ids S)"
    unfolding ValidSnapshot_def by blast
  from snapshot have links: "distinct (map ul_key (snapshot_links S))"
    unfolding ValidSnapshot_def by blast
  show ?thesis
    unfolding ValidRep_def
    using schema snapshot build_graph_wf[OF base ids links]
      build_graph_observation[OF ids slots]
    by blast
qed

theorem ValidRep_implies_Adequate:
  assumes "ValidRep M S G"
  shows "Adequate_Sigma M G"
  using assms unfolding ValidRep_def Adequate_Sigma_def by blast

theorem ValidRep_preserves_nav_one:
  assumes "ValidRep M S G"
  shows "ReadGraphNavOne G = ReadNavOne S"
proof (intro ext)
  fix source association_end
  from assms have occurrences:
    "ReadGraphNavOccurrences G source association_end =
     ReadNavOccurrences S source association_end"
    unfolding ValidRep_def ObsEq_def by blast
  show "ReadGraphNavOne G source association_end =
        ReadNavOne S source association_end"
    unfolding ReadGraphNavOne_def ReadNavOne_def occurrences by simp
qed

end
