theory PGMM
  imports Complex_Main
begin

text \<open>
PGMM.thy — Property Graph Metamodel and WF_PGMM(G).

Normative sources:
  research/TargetModel/Graph-Metamodel.emf
  research/TargetModel/Graph-Metamodel.md  (§2 canonical vocabulary)
  research/TargetModel/GraphModel-formal.md (§3-4 WF, §5 ValidRep)
  research/TargetModel/PGMM-Constraints.ocl (executable WF)
\<close>

section \<open>PGMM enums (1:1 with Graph-Metamodel.emf) \<close>

datatype graph_projection =
    P_Schema | P_Instance | P_Typing | P_Repository_Control

datatype pg_type =
    T_Boolean | T_Int64 | T_Real64 | T_String
  | T_BooleanList | T_Int64List | T_Real64List | T_StringList

datatype source_value_kind =
    SVK_Boolean | SVK_Integer | SVK_Real | SVK_String | SVK_ObjectId

datatype node_observation_role =
    NRO_ModelRoot | NRO_Object | NRO_AssociationClassObject
  | NRO_UmlClass | NRO_AttributeDeclaration | NRO_AttributeValue
  | NRO_LinkHub | NRO_Auxiliary | NRO_AssociationDeclaration

datatype relationship_observation_role =
    RRO_DefineMetamodels | RRO_InstanceOf | RRO_Extends
  | RRO_HasAttribute | RRO_ReferenceType | RRO_ObjectInstanceOf
  | RRO_ObjectHasAttribute | RRO_BinaryLink
  | RRO_AssociationClassParticipant | RRO_NarySpoke | RRO_Auxiliary

datatype type_name_match_mode = M_Exact | M_Prefix

datatype navigation_direction = D_Outgoing | D_Incoming | D_Both

datatype observer_kind =
    OK_Context | OK_AllInstances | OK_DirectType | OK_Conformance
  | OK_Attribute | OK_Navigation | OK_ObjectIdentity

datatype observer_result_kind =
    ORK_Scalar | ORK_Boolean3 | ORK_Set | ORK_Bag | ORK_Ids

datatype key_encoding_kind = KE_LengthPrefixed | KE_DelimitedEscaped

datatype graph_extension = GE_NaryAssociation | GE_PrefixRelFamily | GE_DynamicLabels

datatype aggregation_kind = AK_None | AK_Shared | AK_Composite

section \<open>PGMM records and structural well-formedness \<close>

record model_scope =
  ms_model_name :: string
  ms_model_key  :: string
  ms_delim      :: string

record property_def =
  pd_name       :: string
  pd_phys_name  :: string
  pd_storage    :: pg_type
  pd_required   :: bool
  pd_multi      :: bool

record codec_def =
  cd_id     :: string
  cd_kind   :: source_value_kind
  cd_stor   :: pg_type
  cd_bottom :: string
  cd_prefix :: string
  cd_inj    :: bool

record key_def =
  kd_name   :: string
  kd_unique :: bool
  kd_scoped :: bool
  kd_enc    :: key_encoding_kind
  kd_prefix :: string
  kd_owner  :: string       (* owner GraphElementType name *)
  kd_comps  :: "string list"

record qualifier_def =
  qd_name    :: string
  qd_index   :: nat
  qd_kind    :: source_value_kind
  qd_prop    :: string       (* PropertyDefinition name *)
  qd_codec   :: string       (* CodecDefinition id *)

record rel_end =
  re_role     :: string
  re_lower    :: int
  re_upper    :: int          (* -1 = * *)
  re_ordered  :: bool
  re_unique   :: bool
  re_agg      :: aggregation_kind
  re_node     :: string       (* target NodeType name *)
  re_quals    :: "qualifier_def list"

record graph_element_type =
  gt_name    :: string
  gt_proj    :: graph_projection
  gt_props   :: "property_def list"
  gt_idkey   :: "string option"

record node_type =
  nt_elem    :: graph_element_type
  nt_role    :: node_observation_role
  nt_labels  :: "string list"
  nt_dyn     :: bool

record rel_type =
  rt_elem    :: graph_element_type
  rt_role    :: relationship_observation_role
  rt_phys    :: "string list"            (* physicalTypes, non-empty *)
  rt_match   :: type_name_match_mode
  rt_src     :: rel_end
  rt_tgt     :: rel_end

record observer_def =
  od_name           :: string
  od_kind           :: observer_kind
  od_result         :: observer_result_kind
  od_sem_key        :: string
  od_dir            :: "navigation_direction option"
  od_src_type       :: "string option"
  od_tgt_type       :: "string option"
  od_rel_type       :: "string option"
  od_nav_end        :: "string option"
  od_prop           :: "string option"
  od_attr_val       :: "string option"
  od_attr_own       :: "string option"
  od_attr_typ       :: "string option"
  od_req_props      :: "string list"

record ac_encoding =
  ace_obj    :: "string"
  ace_src_pt :: "string"
  ace_tgt_pt :: "string"
  ace_occ_k  :: "string"

(* --------------------------------------------------- *)
(* Graph values as mathematical data *)
(* data — see Graph-Metamodel.emf PGValue hierarchy)    *)
(* ----------------------------------------------------- *)

section \<open>Graph values (property values as mathematical data)\<close>

datatype pg_value =
    V_Boolean bool
  | V_Int64 int
  | V_Real64 real
  | V_String string
  | V_BooleanList "bool list"
  | V_Int64List "int list"
  | V_Real64List "real list"
  | V_StringList "string list"

record property_value =
  pv_def   :: string        (* PropertyDefinition name *)
  pv_val   :: pg_value

record graph_node =
  gn_key    :: string
  gn_model  :: string
  gn_type   :: string       (* NodeType name *)
  gn_labels :: "string list"
  gn_props  :: "property_value list"

record graph_rel =
  gr_key    :: string
  gr_model  :: string
  gr_type   :: string       (* RelationshipType name *)
  gr_phys   :: string       (* physicalType *)
  gr_src    :: string       (* source node stableKey *)
  gr_tgt    :: string       (* target node stableKey *)
  gr_props  :: "property_value list"

record graph_instance =
  g_name       :: string
  g_profile    :: string
  g_version    :: string
  g_ext        :: "graph_extension list"
  g_scope      :: model_scope
  g_node_types :: "node_type list"
  g_rel_types  :: "rel_type list"
  g_keys       :: "key_def list"
  g_codecs     :: "codec_def list"
  g_observers  :: "observer_def list"
  g_ac_enc     :: "ac_encoding list"
  g_nodes      :: "graph_node list"
  g_rels       :: "graph_rel list"

section \<open>Structural WF (structural part of WF_PGMM)\<close>

text \<open>Constant subsumption PGMM-Constraints.ocl uses.\<close>
definition unique_keys :: "'a list \<Rightarrow> bool" where
  "unique_keys xs \<equiv> length (remdups xs) = length xs"

definition list_mem :: "'a \<Rightarrow> 'a list \<Rightarrow> bool" where
  "list_mem x xs \<longleftrightarrow> x \<in> set xs"

definition all_rel_type_bounded :: "graph_instance \<Rightarrow> bool" where
  "all_rel_type_bounded G \<equiv>
     (\<forall>rt \<in> set (g_rel_types G).
       (re_lower (rt_src rt) \<ge> 0 \<and>
        (re_upper (rt_src rt) = -1 \<or> re_upper (rt_src rt) \<ge> 1) \<and>
        (re_upper (rt_src rt) = -1 \<or> re_lower (rt_src rt) \<le> re_upper (rt_src rt)) \<and>
        re_lower (rt_tgt rt) \<ge> 0 \<and>
        (re_upper (rt_tgt rt) = -1 \<or> re_upper (rt_tgt rt) \<ge> 1) \<and>
        (re_upper (rt_tgt rt) = -1 \<or> re_lower (rt_tgt rt) \<le> re_upper (rt_tgt rt)) \<and>
        rt_phys rt \<noteq> []))"

definition WF_PGMM :: "graph_instance \<Rightarrow> bool" where
  "WF_PGMM G \<equiv>
     (unique_keys (map gn_key (g_nodes G)) \<and>
      unique_keys (map gr_key (g_rels G)) \<and>
       unique_keys (map gt_name (map nt_elem (g_node_types G))) \<and>
       unique_keys (map gt_name (map rt_elem (g_rel_types G))) \<and>
      unique_keys (map kd_name (g_keys G)) \<and>
      unique_keys (map cd_id (g_codecs G)) \<and>
      unique_keys (map od_name (g_observers G)) \<and>
      all_rel_type_bounded G \<and>
      (\<forall>cd \<in> set (g_codecs G).
         cd_bottom cd \<noteq> [] \<and> cd_prefix cd \<noteq> [] \<and>
         cd_bottom cd \<noteq> cd_prefix cd \<and>
          take (length (cd_bottom cd)) (cd_prefix cd) \<noteq> cd_bottom cd \<and>
          take (length (cd_prefix cd)) (cd_bottom cd) \<noteq> cd_prefix cd) \<and>
      (\<forall>cd \<in> set (g_codecs G). cd_inj cd))"

end
