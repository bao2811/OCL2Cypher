// Lean compiler output
// Module: Ocl2Gratra.CypherParameterText
// Imports: public import Init public meta import Init public import Ocl2Gratra.CypherStringText
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
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherIdentifierText_quoteString(lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherStringText_quoteString(lean_object*);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherStringText_parseLeaf(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_asciiLetter(uint32_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_asciiLetter___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_initialChar(uint32_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_initialChar___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_subsequentChar(uint32_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_subsequentChar___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_List_all___at___00Ocl2Gratra_CypherParameterText_admitted_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_all___at___00Ocl2Gratra_CypherParameterText_admitted_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_admitted(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_admitted___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print___boxed__const__1;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_parse(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_CypherParameterText_0__Ocl2Gratra_CypherParameterText_parse_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_CypherParameterText_0__Ocl2Gratra_CypherParameterText_parse_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_parseLeaf(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_variable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_variable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_parameter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_parameter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_stringLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_stringLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_nullLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_nullLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_trueLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_trueLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_falseLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_falseLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__1_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr(lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__0_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__2_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_asciiLetter(uint32_t v_c_1_){
_start:
{
uint8_t v___y_3_; lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_9_ = lean_unsigned_to_nat(65u);
v___x_10_ = lean_uint32_to_nat(v_c_1_);
v___x_11_ = lean_nat_dec_le(v___x_9_, v___x_10_);
if (v___x_11_ == 0)
{
lean_dec(v___x_10_);
v___y_3_ = v___x_11_;
goto v___jp_2_;
}
else
{
lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(90u);
v___x_13_ = lean_nat_dec_le(v___x_10_, v___x_12_);
lean_dec(v___x_10_);
v___y_3_ = v___x_13_;
goto v___jp_2_;
}
v___jp_2_:
{
if (v___y_3_ == 0)
{
lean_object* v___x_4_; lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(97u);
v___x_5_ = lean_uint32_to_nat(v_c_1_);
v___x_6_ = lean_nat_dec_le(v___x_4_, v___x_5_);
if (v___x_6_ == 0)
{
lean_dec(v___x_5_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(122u);
v___x_8_ = lean_nat_dec_le(v___x_5_, v___x_7_);
lean_dec(v___x_5_);
return v___x_8_;
}
}
else
{
return v___y_3_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_asciiLetter___boxed(lean_object* v_c_14_){
_start:
{
uint32_t v_c_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_c_boxed_15_ = lean_unbox_uint32(v_c_14_);
lean_dec(v_c_14_);
v_res_16_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_asciiLetter(v_c_boxed_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_initialChar(uint32_t v_c_18_){
_start:
{
uint8_t v___x_19_; 
v___x_19_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_asciiLetter(v_c_18_);
if (v___x_19_ == 0)
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 95;
v___x_21_ = lean_uint32_dec_eq(v_c_18_, v___x_20_);
return v___x_21_;
}
else
{
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_initialChar___boxed(lean_object* v_c_22_){
_start:
{
uint32_t v_c_boxed_23_; uint8_t v_res_24_; lean_object* v_r_25_; 
v_c_boxed_23_ = lean_unbox_uint32(v_c_22_);
lean_dec(v_c_22_);
v_res_24_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_initialChar(v_c_boxed_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_subsequentChar(uint32_t v_c_26_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_initialChar(v_c_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_28_ = lean_unsigned_to_nat(48u);
v___x_29_ = lean_uint32_to_nat(v_c_26_);
v___x_30_ = lean_nat_dec_le(v___x_28_, v___x_29_);
if (v___x_30_ == 0)
{
lean_dec(v___x_29_);
return v___x_30_;
}
else
{
lean_object* v___x_31_; uint8_t v___x_32_; 
v___x_31_ = lean_unsigned_to_nat(57u);
v___x_32_ = lean_nat_dec_le(v___x_29_, v___x_31_);
lean_dec(v___x_29_);
return v___x_32_;
}
}
else
{
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_subsequentChar___boxed(lean_object* v_c_33_){
_start:
{
uint32_t v_c_boxed_34_; uint8_t v_res_35_; lean_object* v_r_36_; 
v_c_boxed_34_ = lean_unbox_uint32(v_c_33_);
lean_dec(v_c_33_);
v_res_35_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_subsequentChar(v_c_boxed_34_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_List_all___at___00Ocl2Gratra_CypherParameterText_admitted_spec__0(lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
uint8_t v___x_38_; 
v___x_38_ = 1;
return v___x_38_;
}
else
{
lean_object* v_head_39_; lean_object* v_tail_40_; uint32_t v___x_41_; uint8_t v___x_42_; 
v_head_39_ = lean_ctor_get(v_x_37_, 0);
v_tail_40_ = lean_ctor_get(v_x_37_, 1);
v___x_41_ = lean_unbox_uint32(v_head_39_);
v___x_42_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_subsequentChar(v___x_41_);
if (v___x_42_ == 0)
{
return v___x_42_;
}
else
{
v_x_37_ = v_tail_40_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_all___at___00Ocl2Gratra_CypherParameterText_admitted_spec__0___boxed(lean_object* v_x_44_){
_start:
{
uint8_t v_res_45_; lean_object* v_r_46_; 
v_res_45_ = lp_Ocl2CypherProof_List_all___at___00Ocl2Gratra_CypherParameterText_admitted_spec__0(v_x_44_);
lean_dec(v_x_44_);
v_r_46_ = lean_box(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_admitted(lean_object* v_name_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_string_data(v_name_47_);
if (lean_obj_tag(v___x_48_) == 0)
{
uint8_t v___x_49_; 
v___x_49_ = 0;
return v___x_49_;
}
else
{
lean_object* v_head_50_; lean_object* v_tail_51_; uint32_t v___x_52_; uint8_t v___x_53_; 
v_head_50_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_head_50_);
v_tail_51_ = lean_ctor_get(v___x_48_, 1);
lean_inc(v_tail_51_);
lean_dec_ref_known(v___x_48_, 2);
v___x_52_ = lean_unbox_uint32(v_head_50_);
lean_dec(v_head_50_);
v___x_53_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_initialChar(v___x_52_);
if (v___x_53_ == 0)
{
lean_dec(v_tail_51_);
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = lp_Ocl2CypherProof_List_all___at___00Ocl2Gratra_CypherParameterText_admitted_spec__0(v_tail_51_);
lean_dec(v_tail_51_);
return v___x_54_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_admitted___boxed(lean_object* v_name_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_admitted(v_name_55_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print___boxed__const__1(void){
_start:
{
uint32_t v___x_58_; lean_object* v___x_59_; 
v___x_58_ = 36;
v___x_59_ = lean_box_uint32(v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print(lean_object* v_name_60_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_61_ = lean_string_data(v_name_60_);
v___x_62_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print___boxed__const__1;
v___x_63_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
v___x_64_ = lean_string_mk(v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_parse(lean_object* v_input_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_string_data(v_input_65_);
if (lean_obj_tag(v___x_66_) == 1)
{
lean_object* v_head_67_; lean_object* v_tail_68_; uint32_t v___x_69_; uint32_t v___x_70_; uint8_t v___x_71_; 
v_head_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_head_67_);
v_tail_68_ = lean_ctor_get(v___x_66_, 1);
lean_inc(v_tail_68_);
lean_dec_ref_known(v___x_66_, 2);
v___x_69_ = 36;
v___x_70_ = lean_unbox_uint32(v_head_67_);
lean_dec(v_head_67_);
v___x_71_ = lean_uint32_dec_eq(v___x_70_, v___x_69_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; 
lean_dec(v_tail_68_);
v___x_72_ = lean_box(0);
return v___x_72_;
}
else
{
lean_object* v_name_73_; uint8_t v___x_74_; 
v_name_73_ = lean_string_mk(v_tail_68_);
lean_inc_ref(v_name_73_);
v___x_74_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_admitted(v_name_73_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; 
lean_dec_ref(v_name_73_);
v___x_75_ = lean_box(0);
return v___x_75_;
}
else
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_76_, 0, v_name_73_);
return v___x_76_;
}
}
}
else
{
lean_object* v___x_77_; 
lean_dec(v___x_66_);
v___x_77_ = lean_box(0);
return v___x_77_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_CypherParameterText_0__Ocl2Gratra_CypherParameterText_parse_match__1_splitter___redArg(lean_object* v_x_78_, lean_object* v_h__1_79_, lean_object* v_h__2_80_){
_start:
{
if (lean_obj_tag(v_x_78_) == 1)
{
lean_object* v_head_81_; lean_object* v_tail_82_; uint32_t v___x_83_; uint32_t v___x_84_; uint8_t v___x_85_; 
v_head_81_ = lean_ctor_get(v_x_78_, 0);
v_tail_82_ = lean_ctor_get(v_x_78_, 1);
v___x_83_ = 36;
v___x_84_ = lean_unbox_uint32(v_head_81_);
v___x_85_ = lean_uint32_dec_eq(v___x_84_, v___x_83_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_dec(v_h__1_79_);
v___x_86_ = lean_apply_2(v_h__2_80_, v_x_78_, lean_box(0));
return v___x_86_;
}
else
{
lean_object* v___x_87_; 
lean_inc(v_tail_82_);
lean_dec_ref_known(v_x_78_, 2);
lean_dec(v_h__2_80_);
v___x_87_ = lean_apply_1(v_h__1_79_, v_tail_82_);
return v___x_87_;
}
}
else
{
lean_object* v___x_88_; 
lean_dec(v_h__1_79_);
v___x_88_ = lean_apply_2(v_h__2_80_, v_x_78_, lean_box(0));
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_CypherParameterText_0__Ocl2Gratra_CypherParameterText_parse_match__1_splitter(lean_object* v_motive_89_, lean_object* v_x_90_, lean_object* v_h__1_91_, lean_object* v_h__2_92_){
_start:
{
if (lean_obj_tag(v_x_90_) == 1)
{
lean_object* v_head_93_; lean_object* v_tail_94_; uint32_t v___x_95_; uint32_t v___x_96_; uint8_t v___x_97_; 
v_head_93_ = lean_ctor_get(v_x_90_, 0);
v_tail_94_ = lean_ctor_get(v_x_90_, 1);
v___x_95_ = 36;
v___x_96_ = lean_unbox_uint32(v_head_93_);
v___x_97_ = lean_uint32_dec_eq(v___x_96_, v___x_95_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; 
lean_dec(v_h__1_91_);
v___x_98_ = lean_apply_2(v_h__2_92_, v_x_90_, lean_box(0));
return v___x_98_;
}
else
{
lean_object* v___x_99_; 
lean_inc(v_tail_94_);
lean_dec_ref_known(v_x_90_, 2);
lean_dec(v_h__2_92_);
v___x_99_ = lean_apply_1(v_h__1_91_, v_tail_94_);
return v___x_99_;
}
}
else
{
lean_object* v___x_100_; 
lean_dec(v_h__1_91_);
v___x_100_ = lean_apply_2(v_h__2_92_, v_x_90_, lean_box(0));
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_parseLeaf(lean_object* v_input_101_){
_start:
{
lean_object* v___x_102_; 
lean_inc_ref(v_input_101_);
v___x_102_ = lean_string_data(v_input_101_);
if (lean_obj_tag(v___x_102_) == 1)
{
lean_object* v_head_103_; uint32_t v___x_104_; uint32_t v___x_105_; uint8_t v___x_106_; 
v_head_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_head_103_);
lean_dec_ref_known(v___x_102_, 2);
v___x_104_ = 36;
v___x_105_ = lean_unbox_uint32(v_head_103_);
lean_dec(v_head_103_);
v___x_106_ = lean_uint32_dec_eq(v___x_105_, v___x_104_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherStringText_parseLeaf(v_input_101_);
return v___x_107_;
}
else
{
lean_object* v___x_108_; 
v___x_108_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_parse(v_input_101_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; 
v___x_109_ = lean_box(0);
return v___x_109_;
}
else
{
lean_object* v_val_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_118_; 
v_val_110_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_118_ == 0)
{
v___x_112_ = v___x_108_;
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_val_110_);
lean_dec(v___x_108_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_114_, 0, v_val_110_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_114_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
}
else
{
lean_object* v___x_119_; 
lean_dec(v___x_102_);
v___x_119_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherStringText_parseLeaf(v_input_101_);
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorIdx(lean_object* v_x_120_){
_start:
{
switch(lean_obj_tag(v_x_120_))
{
case 0:
{
lean_object* v___x_121_; 
v___x_121_ = lean_unsigned_to_nat(0u);
return v___x_121_;
}
case 1:
{
lean_object* v___x_122_; 
v___x_122_ = lean_unsigned_to_nat(1u);
return v___x_122_;
}
case 2:
{
lean_object* v___x_123_; 
v___x_123_ = lean_unsigned_to_nat(2u);
return v___x_123_;
}
case 3:
{
lean_object* v___x_124_; 
v___x_124_ = lean_unsigned_to_nat(3u);
return v___x_124_;
}
case 4:
{
lean_object* v___x_125_; 
v___x_125_ = lean_unsigned_to_nat(4u);
return v___x_125_;
}
default: 
{
lean_object* v___x_126_; 
v___x_126_ = lean_unsigned_to_nat(5u);
return v___x_126_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorIdx___boxed(lean_object* v_x_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorIdx(v_x_127_);
lean_dec(v_x_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(lean_object* v_t_129_, lean_object* v_k_130_){
_start:
{
switch(lean_obj_tag(v_t_129_))
{
case 0:
{
lean_object* v_name_131_; lean_object* v___x_132_; 
v_name_131_ = lean_ctor_get(v_t_129_, 0);
lean_inc_ref(v_name_131_);
lean_dec_ref_known(v_t_129_, 1);
v___x_132_ = lean_apply_2(v_k_130_, v_name_131_, lean_box(0));
return v___x_132_;
}
case 1:
{
lean_object* v_name_133_; lean_object* v___x_134_; 
v_name_133_ = lean_ctor_get(v_t_129_, 0);
lean_inc_ref(v_name_133_);
lean_dec_ref_known(v_t_129_, 1);
v___x_134_ = lean_apply_2(v_k_130_, v_name_133_, lean_box(0));
return v___x_134_;
}
case 2:
{
lean_object* v_payload_135_; lean_object* v___x_136_; 
v_payload_135_ = lean_ctor_get(v_t_129_, 0);
lean_inc_ref(v_payload_135_);
lean_dec_ref_known(v_t_129_, 1);
v___x_136_ = lean_apply_2(v_k_130_, v_payload_135_, lean_box(0));
return v___x_136_;
}
default: 
{
lean_dec(v_t_129_);
return v_k_130_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim(lean_object* v_motive_137_, lean_object* v_ctorIdx_138_, lean_object* v_t_139_, lean_object* v_h_140_, lean_object* v_k_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_139_, v_k_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___boxed(lean_object* v_motive_143_, lean_object* v_ctorIdx_144_, lean_object* v_t_145_, lean_object* v_h_146_, lean_object* v_k_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim(v_motive_143_, v_ctorIdx_144_, v_t_145_, v_h_146_, v_k_147_);
lean_dec(v_ctorIdx_144_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_variable_elim___redArg(lean_object* v_t_149_, lean_object* v_variable_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_149_, v_variable_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_variable_elim(lean_object* v_motive_152_, lean_object* v_t_153_, lean_object* v_h_154_, lean_object* v_variable_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_153_, v_variable_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_parameter_elim___redArg(lean_object* v_t_157_, lean_object* v_parameter_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_157_, v_parameter_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_parameter_elim(lean_object* v_motive_160_, lean_object* v_t_161_, lean_object* v_h_162_, lean_object* v_parameter_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_161_, v_parameter_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_stringLit_elim___redArg(lean_object* v_t_165_, lean_object* v_stringLit_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_165_, v_stringLit_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_stringLit_elim(lean_object* v_motive_168_, lean_object* v_t_169_, lean_object* v_h_170_, lean_object* v_stringLit_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_169_, v_stringLit_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_nullLit_elim___redArg(lean_object* v_t_173_, lean_object* v_nullLit_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_173_, v_nullLit_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_nullLit_elim(lean_object* v_motive_176_, lean_object* v_t_177_, lean_object* v_h_178_, lean_object* v_nullLit_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_177_, v_nullLit_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_trueLit_elim___redArg(lean_object* v_t_181_, lean_object* v_trueLit_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_181_, v_trueLit_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_trueLit_elim(lean_object* v_motive_184_, lean_object* v_t_185_, lean_object* v_h_186_, lean_object* v_trueLit_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_185_, v_trueLit_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_falseLit_elim___redArg(lean_object* v_t_189_, lean_object* v_falseLit_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_189_, v_falseLit_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_falseLit_elim(lean_object* v_motive_192_, lean_object* v_t_193_, lean_object* v_h_194_, lean_object* v_falseLit_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_ctorElim___redArg(v_t_193_, v_falseLit_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr(lean_object* v_x_201_){
_start:
{
switch(lean_obj_tag(v_x_201_))
{
case 0:
{
lean_object* v_name_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
v_name_202_ = lean_ctor_get(v_x_201_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v_x_201_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v_x_201_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_name_202_);
lean_dec(v_x_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_name_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
case 1:
{
lean_object* v_name_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
v_name_210_ = lean_ctor_get(v_x_201_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v_x_201_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v_x_201_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_name_210_);
lean_dec(v_x_201_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_name_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
case 2:
{
lean_object* v_payload_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
v_payload_218_ = lean_ctor_get(v_x_201_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v_x_201_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v_x_201_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_payload_218_);
lean_dec(v_x_201_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
lean_ctor_set_tag(v___x_220_, 6);
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_payload_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
case 3:
{
lean_object* v___x_226_; 
v___x_226_ = lean_box(2);
return v___x_226_;
}
case 4:
{
lean_object* v___x_227_; 
v___x_227_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__0));
return v___x_227_;
}
default: 
{
lean_object* v___x_228_; 
v___x_228_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_toExpr___closed__1));
return v___x_228_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText(lean_object* v_x_232_){
_start:
{
switch(lean_obj_tag(v_x_232_))
{
case 0:
{
lean_object* v_name_233_; lean_object* v___x_234_; 
v_name_233_ = lean_ctor_get(v_x_232_, 0);
lean_inc_ref(v_name_233_);
lean_dec_ref_known(v_x_232_, 1);
v___x_234_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherIdentifierText_quoteString(v_name_233_);
return v___x_234_;
}
case 1:
{
lean_object* v_name_235_; lean_object* v___x_236_; 
v_name_235_ = lean_ctor_get(v_x_232_, 0);
lean_inc_ref(v_name_235_);
lean_dec_ref_known(v_x_232_, 1);
v___x_236_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print(v_name_235_);
return v___x_236_;
}
case 2:
{
lean_object* v_payload_237_; lean_object* v___x_238_; 
v_payload_237_ = lean_ctor_get(v_x_232_, 0);
lean_inc_ref(v_payload_237_);
lean_dec_ref_known(v_x_232_, 1);
v___x_238_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherStringText_quoteString(v_payload_237_);
return v___x_238_;
}
case 3:
{
lean_object* v___x_239_; 
v___x_239_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__0));
return v___x_239_;
}
case 4:
{
lean_object* v___x_240_; 
v___x_240_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__1));
return v___x_240_;
}
default: 
{
lean_object* v___x_241_; 
v___x_241_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_AdmittedLeaf_printText___closed__2));
return v___x_241_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherStringText(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherParameterText(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CypherStringText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print___boxed__const__1 = _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print___boxed__const__1();
lean_mark_persistent(lp_Ocl2CypherProof_Ocl2Gratra_CypherParameterText_print___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
