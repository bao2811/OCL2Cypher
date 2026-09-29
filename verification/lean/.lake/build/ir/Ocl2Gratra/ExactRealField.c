// Lean compiler output
// Module: Ocl2Gratra.ExactRealField
// Imports: public import Init public meta import Init
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__2;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one___closed__0;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_neg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_floor(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_floor___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Ocl2Gratra.ExactRealField.Cmp.lt"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Ocl2Gratra.ExactRealField.Cmp.eq"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__3_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Ocl2Gratra.ExactRealField.Cmp.gt"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__4_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__5_value;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instDecidableEqCmp(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instDecidableEqCmp___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_compare___boxed(lean_object*, lean_object*);
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(1u);
v___x_4_ = lean_nat_to_int(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__2(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_5_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1);
v___x_6_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0);
v___x_7_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_5_);
return v___x_7_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__2, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__2_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__2);
return v___x_8_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one___closed__0(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one___closed__0, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one___closed__0_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one___closed__0);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_add(lean_object* v_a_12_, lean_object* v_b_13_){
_start:
{
lean_object* v_num_14_; lean_object* v_den_15_; lean_object* v_num_16_; lean_object* v_den_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_28_; 
v_num_14_ = lean_ctor_get(v_a_12_, 0);
v_den_15_ = lean_ctor_get(v_a_12_, 1);
v_num_16_ = lean_ctor_get(v_b_13_, 0);
v_den_17_ = lean_ctor_get(v_b_13_, 1);
v_isSharedCheck_28_ = !lean_is_exclusive(v_b_13_);
if (v_isSharedCheck_28_ == 0)
{
v___x_19_ = v_b_13_;
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_den_17_);
lean_inc(v_num_16_);
lean_dec(v_b_13_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_21_ = lean_int_mul(v_num_14_, v_den_17_);
v___x_22_ = lean_int_mul(v_num_16_, v_den_15_);
lean_dec(v_num_16_);
v___x_23_ = lean_int_add(v___x_21_, v___x_22_);
lean_dec(v___x_22_);
lean_dec(v___x_21_);
v___x_24_ = lean_int_mul(v_den_15_, v_den_17_);
lean_dec(v_den_17_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 1, v___x_24_);
lean_ctor_set(v___x_19_, 0, v___x_23_);
v___x_26_ = v___x_19_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v___x_24_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_add___boxed(lean_object* v_a_29_, lean_object* v_b_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_add(v_a_29_, v_b_30_);
lean_dec_ref(v_a_29_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_mul(lean_object* v_a_32_, lean_object* v_b_33_){
_start:
{
lean_object* v_num_34_; lean_object* v_den_35_; lean_object* v_num_36_; lean_object* v_den_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_46_; 
v_num_34_ = lean_ctor_get(v_a_32_, 0);
v_den_35_ = lean_ctor_get(v_a_32_, 1);
v_num_36_ = lean_ctor_get(v_b_33_, 0);
v_den_37_ = lean_ctor_get(v_b_33_, 1);
v_isSharedCheck_46_ = !lean_is_exclusive(v_b_33_);
if (v_isSharedCheck_46_ == 0)
{
v___x_39_ = v_b_33_;
v_isShared_40_ = v_isSharedCheck_46_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_den_37_);
lean_inc(v_num_36_);
lean_dec(v_b_33_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_46_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_44_; 
v___x_41_ = lean_int_mul(v_num_34_, v_num_36_);
lean_dec(v_num_36_);
v___x_42_ = lean_int_mul(v_den_35_, v_den_37_);
lean_dec(v_den_37_);
if (v_isShared_40_ == 0)
{
lean_ctor_set(v___x_39_, 1, v___x_42_);
lean_ctor_set(v___x_39_, 0, v___x_41_);
v___x_44_ = v___x_39_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v___x_42_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_mul___boxed(lean_object* v_a_47_, lean_object* v_b_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_mul(v_a_47_, v_b_48_);
lean_dec_ref(v_a_47_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_neg(lean_object* v_a_50_){
_start:
{
lean_object* v_num_51_; lean_object* v_den_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_60_; 
v_num_51_ = lean_ctor_get(v_a_50_, 0);
v_den_52_ = lean_ctor_get(v_a_50_, 1);
v_isSharedCheck_60_ = !lean_is_exclusive(v_a_50_);
if (v_isSharedCheck_60_ == 0)
{
v___x_54_ = v_a_50_;
v_isShared_55_ = v_isSharedCheck_60_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_den_52_);
lean_inc(v_num_51_);
lean_dec(v_a_50_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_60_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_56_; lean_object* v___x_58_; 
v___x_56_ = lean_int_neg(v_num_51_);
lean_dec(v_num_51_);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v___x_56_);
v___x_58_ = v___x_54_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_59_, 1, v_den_52_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_floor(lean_object* v_a_61_){
_start:
{
lean_object* v_num_62_; lean_object* v_den_63_; lean_object* v___x_64_; 
v_num_62_ = lean_ctor_get(v_a_61_, 0);
v_den_63_ = lean_ctor_get(v_a_61_, 1);
v___x_64_ = lean_int_ediv(v_num_62_, v_den_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_floor___boxed(lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_floor(v_a_65_);
lean_dec_ref(v_a_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx(uint8_t v_x_67_){
_start:
{
switch(v_x_67_)
{
case 0:
{
lean_object* v___x_68_; 
v___x_68_ = lean_unsigned_to_nat(0u);
return v___x_68_;
}
case 1:
{
lean_object* v___x_69_; 
v___x_69_ = lean_unsigned_to_nat(1u);
return v___x_69_;
}
default: 
{
lean_object* v___x_70_; 
v___x_70_ = lean_unsigned_to_nat(2u);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx___boxed(lean_object* v_x_71_){
_start:
{
uint8_t v_x_boxed_72_; lean_object* v_res_73_; 
v_x_boxed_72_ = lean_unbox(v_x_71_);
v_res_73_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx(v_x_boxed_72_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_toCtorIdx(uint8_t v_x_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx(v_x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_toCtorIdx___boxed(lean_object* v_x_76_){
_start:
{
uint8_t v_x_4__boxed_77_; lean_object* v_res_78_; 
v_x_4__boxed_77_ = lean_unbox(v_x_76_);
v_res_78_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_toCtorIdx(v_x_4__boxed_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim___redArg(lean_object* v_k_79_){
_start:
{
lean_inc(v_k_79_);
return v_k_79_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim___redArg___boxed(lean_object* v_k_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim___redArg(v_k_80_);
lean_dec(v_k_80_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim(lean_object* v_motive_82_, lean_object* v_ctorIdx_83_, uint8_t v_t_84_, lean_object* v_h_85_, lean_object* v_k_86_){
_start:
{
lean_inc(v_k_86_);
return v_k_86_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim___boxed(lean_object* v_motive_87_, lean_object* v_ctorIdx_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_k_91_){
_start:
{
uint8_t v_t_boxed_92_; lean_object* v_res_93_; 
v_t_boxed_92_ = lean_unbox(v_t_89_);
v_res_93_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorElim(v_motive_87_, v_ctorIdx_88_, v_t_boxed_92_, v_h_90_, v_k_91_);
lean_dec(v_k_91_);
lean_dec(v_ctorIdx_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim___redArg(lean_object* v_lt_94_){
_start:
{
lean_inc(v_lt_94_);
return v_lt_94_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim___redArg___boxed(lean_object* v_lt_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim___redArg(v_lt_95_);
lean_dec(v_lt_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim(lean_object* v_motive_97_, uint8_t v_t_98_, lean_object* v_h_99_, lean_object* v_lt_100_){
_start:
{
lean_inc(v_lt_100_);
return v_lt_100_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim___boxed(lean_object* v_motive_101_, lean_object* v_t_102_, lean_object* v_h_103_, lean_object* v_lt_104_){
_start:
{
uint8_t v_t_boxed_105_; lean_object* v_res_106_; 
v_t_boxed_105_ = lean_unbox(v_t_102_);
v_res_106_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_lt_elim(v_motive_101_, v_t_boxed_105_, v_h_103_, v_lt_104_);
lean_dec(v_lt_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim___redArg(lean_object* v_eq_107_){
_start:
{
lean_inc(v_eq_107_);
return v_eq_107_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim___redArg___boxed(lean_object* v_eq_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim___redArg(v_eq_108_);
lean_dec(v_eq_108_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim(lean_object* v_motive_110_, uint8_t v_t_111_, lean_object* v_h_112_, lean_object* v_eq_113_){
_start:
{
lean_inc(v_eq_113_);
return v_eq_113_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim___boxed(lean_object* v_motive_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_eq_117_){
_start:
{
uint8_t v_t_boxed_118_; lean_object* v_res_119_; 
v_t_boxed_118_ = lean_unbox(v_t_115_);
v_res_119_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_eq_elim(v_motive_114_, v_t_boxed_118_, v_h_116_, v_eq_117_);
lean_dec(v_eq_117_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim___redArg(lean_object* v_gt_120_){
_start:
{
lean_inc(v_gt_120_);
return v_gt_120_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim___redArg___boxed(lean_object* v_gt_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim___redArg(v_gt_121_);
lean_dec(v_gt_121_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim(lean_object* v_motive_123_, uint8_t v_t_124_, lean_object* v_h_125_, lean_object* v_gt_126_){
_start:
{
lean_inc(v_gt_126_);
return v_gt_126_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim___boxed(lean_object* v_motive_127_, lean_object* v_t_128_, lean_object* v_h_129_, lean_object* v_gt_130_){
_start:
{
uint8_t v_t_boxed_131_; lean_object* v_res_132_; 
v_t_boxed_131_ = lean_unbox(v_t_128_);
v_res_132_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_gt_elim(v_motive_127_, v_t_boxed_131_, v_h_129_, v_gt_130_);
lean_dec(v_gt_130_);
return v_res_132_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_unsigned_to_nat(2u);
v___x_143_ = lean_nat_to_int(v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr(uint8_t v_x_144_, lean_object* v_prec_145_){
_start:
{
lean_object* v___y_147_; lean_object* v___y_154_; lean_object* v___y_161_; 
switch(v_x_144_)
{
case 0:
{
lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(1024u);
v___x_168_ = lean_nat_dec_le(v___x_167_, v_prec_145_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6);
v___y_147_ = v___x_169_;
goto v___jp_146_;
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1);
v___y_147_ = v___x_170_;
goto v___jp_146_;
}
}
case 1:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(1024u);
v___x_172_ = lean_nat_dec_le(v___x_171_, v_prec_145_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6);
v___y_154_ = v___x_173_;
goto v___jp_153_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1);
v___y_154_ = v___x_174_;
goto v___jp_153_;
}
}
default: 
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(1024u);
v___x_176_ = lean_nat_dec_le(v___x_175_, v_prec_145_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__6);
v___y_161_ = v___x_177_;
goto v___jp_160_;
}
else
{
lean_object* v___x_178_; 
v___x_178_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__1);
v___y_161_ = v___x_178_;
goto v___jp_160_;
}
}
}
v___jp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_148_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__1));
lean_inc(v___y_147_);
v___x_149_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_149_, 0, v___y_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = 0;
v___x_151_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set_uint8(v___x_151_, sizeof(void*)*1, v___x_150_);
v___x_152_ = l_Repr_addAppParen(v___x_151_, v_prec_145_);
return v___x_152_;
}
v___jp_153_:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_155_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__3));
lean_inc(v___y_154_);
v___x_156_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_156_, 0, v___y_154_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v___x_157_ = 0;
v___x_158_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_158_, 0, v___x_156_);
lean_ctor_set_uint8(v___x_158_, sizeof(void*)*1, v___x_157_);
v___x_159_ = l_Repr_addAppParen(v___x_158_, v_prec_145_);
return v___x_159_;
}
v___jp_160_:
{
lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_162_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___closed__5));
lean_inc(v___y_161_);
v___x_163_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_163_, 0, v___y_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = 0;
v___x_165_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_165_, 0, v___x_163_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*1, v___x_164_);
v___x_166_ = l_Repr_addAppParen(v___x_165_, v_prec_145_);
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr___boxed(lean_object* v_x_179_, lean_object* v_prec_180_){
_start:
{
uint8_t v_x_175__boxed_181_; lean_object* v_res_182_; 
v_x_175__boxed_181_ = lean_unbox(v_x_179_);
v_res_182_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instReprCmp_repr(v_x_175__boxed_181_, v_prec_180_);
lean_dec(v_prec_180_);
return v_res_182_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ofNat(lean_object* v_n_185_){
_start:
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = lean_nat_dec_le(v_n_185_, v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = lean_nat_dec_le(v_n_185_, v___x_188_);
if (v___x_189_ == 0)
{
uint8_t v___x_190_; 
v___x_190_ = 2;
return v___x_190_;
}
else
{
uint8_t v___x_191_; 
v___x_191_ = 1;
return v___x_191_;
}
}
else
{
uint8_t v___x_192_; 
v___x_192_ = 0;
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ofNat___boxed(lean_object* v_n_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ofNat(v_n_193_);
lean_dec(v_n_193_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instDecidableEqCmp(uint8_t v_x_196_, uint8_t v_y_197_){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_198_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx(v_x_196_);
v___x_199_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_Cmp_ctorIdx(v_y_197_);
v___x_200_ = lean_nat_dec_eq(v___x_198_, v___x_199_);
lean_dec(v___x_199_);
lean_dec(v___x_198_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instDecidableEqCmp___boxed(lean_object* v_x_201_, lean_object* v_y_202_){
_start:
{
uint8_t v_x_13__boxed_203_; uint8_t v_y_14__boxed_204_; uint8_t v_res_205_; lean_object* v_r_206_; 
v_x_13__boxed_203_ = lean_unbox(v_x_201_);
v_y_14__boxed_204_ = lean_unbox(v_y_202_);
v_res_205_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_instDecidableEqCmp(v_x_13__boxed_203_, v_y_14__boxed_204_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_compare(lean_object* v_a_207_, lean_object* v_b_208_){
_start:
{
lean_object* v_num_209_; lean_object* v_den_210_; lean_object* v_num_211_; lean_object* v_den_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_n_215_; lean_object* v___x_216_; uint8_t v___x_217_; 
v_num_209_ = lean_ctor_get(v_a_207_, 0);
v_den_210_ = lean_ctor_get(v_a_207_, 1);
v_num_211_ = lean_ctor_get(v_b_208_, 0);
v_den_212_ = lean_ctor_get(v_b_208_, 1);
v___x_213_ = lean_int_mul(v_num_209_, v_den_212_);
v___x_214_ = lean_int_mul(v_num_211_, v_den_210_);
v_n_215_ = lean_int_sub(v___x_213_, v___x_214_);
lean_dec(v___x_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0, &lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero___closed__0);
v___x_217_ = lean_int_dec_lt(v_n_215_, v___x_216_);
if (v___x_217_ == 0)
{
uint8_t v___x_218_; 
v___x_218_ = lean_int_dec_eq(v_n_215_, v___x_216_);
lean_dec(v_n_215_);
if (v___x_218_ == 0)
{
uint8_t v___x_219_; 
v___x_219_ = 2;
return v___x_219_;
}
else
{
uint8_t v___x_220_; 
v___x_220_ = 1;
return v___x_220_;
}
}
else
{
uint8_t v___x_221_; 
lean_dec(v_n_215_);
v___x_221_ = 0;
return v___x_221_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_compare___boxed(lean_object* v_a_222_, lean_object* v_b_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_compare(v_a_222_, v_b_223_);
lean_dec_ref(v_b_223_);
lean_dec_ref(v_a_222_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_ExactRealField(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero = _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero();
lean_mark_persistent(lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_zero);
lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one = _init_lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one();
lean_mark_persistent(lp_Ocl2CypherProof_Ocl2Gratra_ExactRealField_one);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
