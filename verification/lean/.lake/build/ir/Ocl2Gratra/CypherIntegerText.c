// Lean compiler output
// Module: Ocl2Gratra.CypherIntegerText
// Imports: public import Init public meta import Init public import Ocl2Gratra.CypherParameterText public import Std.Data.String.ToInt
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
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toInt_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText_print(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText_print___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText_parse(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText_print(lean_object* v_value_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_Int_repr(v_value_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText_print___boxed(lean_object* v_value_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText_print(v_value_3_);
lean_dec(v_value_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText_parse(lean_object* v_input_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_6_ = lean_unsigned_to_nat(0u);
v___x_7_ = lean_string_utf8_byte_size(v_input_5_);
lean_inc_ref(v_input_5_);
v___x_8_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_8_, 0, v_input_5_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
lean_ctor_set(v___x_8_, 2, v___x_7_);
v___x_9_ = l_String_Slice_toInt_x3f(v___x_8_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_dec_ref(v_input_5_);
return v___x_9_;
}
else
{
lean_object* v_val_10_; lean_object* v___x_11_; uint8_t v___x_12_; 
v_val_10_ = lean_ctor_get(v___x_9_, 0);
lean_inc(v_val_10_);
v___x_11_ = l_Int_repr(v_val_10_);
lean_dec(v_val_10_);
v___x_12_ = lean_string_dec_eq(v___x_11_, v_input_5_);
lean_dec_ref(v_input_5_);
lean_dec_ref(v___x_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; 
lean_dec_ref_known(v___x_9_, 1);
v___x_13_ = lean_box(0);
return v___x_13_;
}
else
{
return v___x_9_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherParameterText(uint8_t builtin);
lean_object* initialize_Std_Data_String_ToInt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherIntegerText(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Ocl2CypherProof_Ocl2Gratra_CypherParameterText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_String_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
