// Lean compiler output
// Module: Ocl2Gratra
// Imports: public import Init public meta import Init public import Ocl2Gratra.Boolean3Kleene public import Ocl2Gratra.CollectionPipeline public import Ocl2Gratra.ExactRealField public import Ocl2Gratra.IntegerRangeCertificate public import Ocl2Gratra.OclEqualityTotal public import Ocl2Gratra.OclTypeLattice public import Ocl2Gratra.ProductionQSyntax public import Ocl2Gratra.ProductionEndToEnd public import Ocl2Gratra.ScalarCodec public import Ocl2Gratra.DifferentialTheorem public import Ocl2Gratra.AdmittedPipeline public import Ocl2Gratra.AdmittedSerialization public import Ocl2Gratra.FullP3P4 public import Ocl2Gratra.CypherCanonicalGrammar public import Ocl2Gratra.CypherIdentifierText public import Ocl2Gratra.CypherStringText public import Ocl2Gratra.CypherParameterText public import Ocl2Gratra.CypherIntegerText
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_array_to_list(lean_object*);
uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(lean_object*, lean_object*);
uint8_t lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instDecidableEqBool3(uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(lean_object*);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(lean_object*);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedSerialization_serialize(lean_object*);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedSerialization_deserialize(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compile(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_evalCompiled(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_VerifiedPipeline_compiledViolationIds_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compiledViolationIds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compiledViolationIds___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compiledViolationIds___closed__0_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compiledViolationIds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compile(lean_object* v_expression_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_expression_1_);
v___x_3_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v___x_2_);
v___x_4_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedSerialization_serialize(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_evalCompiled(lean_object* v_environment_5_, lean_object* v_expression_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compile(v_expression_6_);
v___x_8_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedSerialization_deserialize(v___x_7_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v___x_9_; 
lean_dec_ref(v_environment_5_);
v___x_9_ = lean_box(0);
return v___x_9_;
}
else
{
lean_object* v_val_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_19_; 
v_val_10_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_19_ == 0)
{
v___x_12_ = v___x_8_;
v_isShared_13_ = v_isSharedCheck_19_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_val_10_);
lean_dec(v___x_8_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_19_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_17_; 
v___x_14_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_5_, v_val_10_);
v___x_15_ = lean_box(v___x_14_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_15_);
v___x_17_ = v___x_12_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_VerifiedPipeline_compiledViolationIds_spec__0(lean_object* v_val_20_, lean_object* v_a_21_, lean_object* v_a_22_){
_start:
{
if (lean_obj_tag(v_a_21_) == 0)
{
lean_object* v___x_23_; 
lean_dec_ref(v_val_20_);
v___x_23_ = lean_array_to_list(v_a_22_);
return v___x_23_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; lean_object* v_stableId_26_; lean_object* v_environment_27_; uint8_t v___x_28_; uint8_t v___x_29_; uint8_t v___x_30_; 
v_head_24_ = lean_ctor_get(v_a_21_, 0);
lean_inc(v_head_24_);
v_tail_25_ = lean_ctor_get(v_a_21_, 1);
lean_inc(v_tail_25_);
lean_dec_ref_known(v_a_21_, 2);
v_stableId_26_ = lean_ctor_get(v_head_24_, 0);
lean_inc_ref(v_stableId_26_);
v_environment_27_ = lean_ctor_get(v_head_24_, 1);
lean_inc_ref(v_environment_27_);
lean_dec(v_head_24_);
lean_inc_ref(v_val_20_);
v___x_28_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_27_, v_val_20_);
v___x_29_ = 0;
v___x_30_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instDecidableEqBool3(v___x_28_, v___x_29_);
if (v___x_30_ == 0)
{
lean_object* v___x_31_; 
v___x_31_ = lean_array_push(v_a_22_, v_stableId_26_);
v_a_21_ = v_tail_25_;
v_a_22_ = v___x_31_;
goto _start;
}
else
{
lean_dec_ref(v_stableId_26_);
v_a_21_ = v_tail_25_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compiledViolationIds(lean_object* v_expression_36_, lean_object* v_objects_37_){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compile(v_expression_36_);
v___x_39_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedSerialization_deserialize(v___x_38_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v___x_40_; 
lean_dec(v_objects_37_);
v___x_40_ = lean_box(0);
return v___x_40_;
}
else
{
lean_object* v_val_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_50_; 
v_val_41_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_50_ == 0)
{
v___x_43_ = v___x_39_;
v_isShared_44_ = v_isSharedCheck_50_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_val_41_);
lean_dec(v___x_39_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_50_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_45_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_VerifiedPipeline_compiledViolationIds___closed__0));
v___x_46_ = lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_VerifiedPipeline_compiledViolationIds_spec__0(v_val_41_, v_objects_37_, v___x_45_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v___x_46_);
v___x_48_ = v___x_43_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CollectionPipeline(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_ExactRealField(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_IntegerRangeCertificate(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_OclEqualityTotal(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_OclTypeLattice(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_ProductionQSyntax(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_ProductionEndToEnd(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_ScalarCodec(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_DifferentialTheorem(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_AdmittedSerialization(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_FullP3P4(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherIdentifierText(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherStringText(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherParameterText(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Ocl2CypherProof_Ocl2Gratra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CollectionPipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_ExactRealField(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_IntegerRangeCertificate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_OclEqualityTotal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_OclTypeLattice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_ProductionQSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_ProductionEndToEnd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_ScalarCodec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_DifferentialTheorem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_AdmittedSerialization(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_FullP3P4(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CypherIdentifierText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CypherStringText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CypherParameterText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
