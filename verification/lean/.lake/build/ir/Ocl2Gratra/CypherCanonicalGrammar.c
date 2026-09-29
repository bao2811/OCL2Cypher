// Lean compiler output
// Module: Ocl2Gratra.CypherCanonicalGrammar
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_intersperseTR___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.size"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.head"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__3_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.last"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__4_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__5_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.toInteger"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__6_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__7_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.toFloat"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__8_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__9_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.abs"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__10_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__11_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.floor"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__13_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.round"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__14_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__14_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__15_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.type"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__16_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__16_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__17_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.count"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__18_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__19_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.FunctionName.collect"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__20_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__20_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__21 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__21_value;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqFunctionName(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqFunctionName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Quantifier.any"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Quantifier.all"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqQuantifier(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqQuantifier___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.or"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.xor"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__3_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.and"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__4_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__5_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.eq"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__6_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__7_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.ne"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__8_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__9_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.lt"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__10_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__11_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.le"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__13_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.gt"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__14_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__14_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__15_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.ge"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__16_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__16_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__17_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.inList"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__18_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__19_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.startsWith"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__20_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__20_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__21 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__21_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.add"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__22 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__22_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__22_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__23 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__23_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.sub"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__24 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__24_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__24_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__25 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__25_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.mul"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__26 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__26_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__26_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__27 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__27_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.div"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__28 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__28_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__28_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__29 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__29_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.mod"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__30 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__30_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__30_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__31 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__31_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.BinOp.concat"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__32 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__32_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__32_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__33 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__33_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqBinOp(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqBinOp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Direction.outgoing"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Direction.incoming"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__3_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Direction.undirected"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__4_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqDirection(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqDirection___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_variable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_variable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_parameter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_parameter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_nullLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_nullLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_boolLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_boolLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_integerLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_integerLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_floatLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_floatLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_stringLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_stringLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_list_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_list_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_map_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_map_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_property_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_property_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_not_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_not_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_negate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_negate_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNull_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNull_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNotNull_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNotNull_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_binary_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_binary_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_function_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_function_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_caseExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_caseExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_comprehension_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_comprehension_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_quantified_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_quantified_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_reduce_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_reduce_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_existsSubquery_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_existsSubquery_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_collectSubquery_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_collectSubquery_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_matchClause_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_matchClause_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_withClause_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_withClause_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_unwindClause_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_unwindClause_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_returnClause_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_returnClause_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.cypher"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.match"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__3_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.where"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__4_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__5_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.with"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__6_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__7_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.unwind"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__8_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__9_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.as"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__10_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__11_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.return"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__13_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.distinct"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__14_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__14_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__15_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.null"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__16_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__16_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__17_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.true"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__18_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__19_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.false"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__20_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__20_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__21 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__21_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.not"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__22 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__22_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__22_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__23 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__23_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.is"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__24 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__24_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__24_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__25 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__25_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.case"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__26 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__26_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__26_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__27 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__27_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.when"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__28 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__28_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__28_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__29 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__29_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.then"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__30 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__30_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__30_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__31 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__31_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.else"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__32 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__32_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__32_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__33 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__33_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.end"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__34 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__34_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__34_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__35 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__35_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.inKw"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__36 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__36_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__36_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__37 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__37_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.reduce"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__38 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__38_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__38_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__39 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__39_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.exists"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__40 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__40_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__40_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__41 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__41_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Keyword.collect"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__42 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__42_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__42_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__43 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__43_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqKeyword(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqKeyword___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.range"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.star"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__3_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.rightArrowHead"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__4_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__5_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.leftArrowHead"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__6_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__7_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.dash"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__8_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__9_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.assign"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__10_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__11_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.bar"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__13_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.dot"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__14_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__14_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__15_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.colon"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__16_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__16_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__17_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.comma"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__18_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__19_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.rBrace"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__20_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__20_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__21 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__21_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.lBrace"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__22 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__22_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__22_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__23 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__23_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.rBracket"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__24 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__24_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__24_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__25 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__25_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.lBracket"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__26 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__26_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__26_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__27 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__27_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.rParen"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__28 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__28_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__28_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__29 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__29_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.lParen"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__30 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__30_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__30_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__31 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__31_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Symbol.op"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__32 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__32_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__32_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__33 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__33_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__33_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__34 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__34_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_keyword_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_keyword_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_symbol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_symbol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_qid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_qid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_parameter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_parameter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_stringLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_stringLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_integerLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_integerLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_floatLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_floatLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_functionName_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_functionName_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_quantifier_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_quantifier_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_natural_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_natural_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_lf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_lf_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.lf"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.keyword"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__2_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__3_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__4_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.symbol"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__5_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__5_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__7_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.qid"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__8_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__9_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__10_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.parameter"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__11_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__11_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__13_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.stringLit"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__14_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__14_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__15_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__16_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.integerLit"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__17_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__17_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__19_value;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__20;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.floatLit"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__21 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__21_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__21_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__22 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__22_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__23 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__23_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.functionName"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__24 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__24_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__24_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__25 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__25_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__25_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__26 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__26_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.quantifier"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__27 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__27_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__27_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__28 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__28_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__28_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__29 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__29_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.CypherCanonicalGrammar.Token.natural"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__30 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__30_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__30_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__31 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__31_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__31_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__32 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__32_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_commaSep_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__1_value;
static const lean_array_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__1_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_colonEntries(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_functionToken(uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_functionToken___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printNode_spec__14(lean_object*, lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(8, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(10, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__3_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(9, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__5_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__11_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__12_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver(lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__7_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(11, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__8_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__9_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__3_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__3_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(12, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__11_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__11_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__1_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__2_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__13_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__8_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__1_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__14_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__11_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__14_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__15_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__2_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__15_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__16_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(7, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__7_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(13, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__17_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(14, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__0 = (const lean_object*)&lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__1 = (const lean_object*)&lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(15, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__2 = (const lean_object*)&lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__3 = (const lean_object*)&lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__3_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2(lean_object*, lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(17, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__19_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__20_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(16, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__21 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__21_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__22 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__22_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(18, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__23 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__23_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__24 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__24_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__25 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__25_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__26 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__26_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__3_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(19, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__27 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__27_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__28 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__28_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__29 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__29_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(20, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__30 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__30_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__30_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__31 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__31_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__5_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(5, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem___closed__0_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printClause_spec__6(lean_object*, lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(4, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__9_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(6, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__11_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__12_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printQuery_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printQuery(lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(21, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__32 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__32_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__32_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__33 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__33_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode(lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__5_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__3_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__5_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__2_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__6_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__7_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__2_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__8_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__9_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__3_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__13_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__10_value),((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__13_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__14_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printPath_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printPath(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printPattern_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printPattern(lean_object*);
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__0_value;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__1;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__2;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__3;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__4;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
case 8:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
case 9:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(9u);
return v___x_11_;
}
default: 
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(10u);
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx___boxed(lean_object* v_x_13_){
_start:
{
uint8_t v_x_boxed_14_; lean_object* v_res_15_; 
v_x_boxed_14_ = lean_unbox(v_x_13_);
v_res_15_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx(v_x_boxed_14_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toCtorIdx(uint8_t v_x_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx(v_x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toCtorIdx___boxed(lean_object* v_x_18_){
_start:
{
uint8_t v_x_4__boxed_19_; lean_object* v_res_20_; 
v_x_4__boxed_19_ = lean_unbox(v_x_18_);
v_res_20_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toCtorIdx(v_x_4__boxed_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim___redArg(lean_object* v_k_21_){
_start:
{
lean_inc(v_k_21_);
return v_k_21_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim___redArg___boxed(lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim___redArg(v_k_22_);
lean_dec(v_k_22_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim(lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_inc(v_k_28_);
return v_k_28_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim___boxed(lean_object* v_motive_29_, lean_object* v_ctorIdx_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_k_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorElim(v_motive_29_, v_ctorIdx_30_, v_t_boxed_34_, v_h_32_, v_k_33_);
lean_dec(v_k_33_);
lean_dec(v_ctorIdx_30_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim___redArg(lean_object* v_size_36_){
_start:
{
lean_inc(v_size_36_);
return v_size_36_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim___redArg___boxed(lean_object* v_size_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim___redArg(v_size_37_);
lean_dec(v_size_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_size_42_){
_start:
{
lean_inc(v_size_42_);
return v_size_42_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_size_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_size_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_size_46_);
lean_dec(v_size_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim___redArg(lean_object* v_head_49_){
_start:
{
lean_inc(v_head_49_);
return v_head_49_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim___redArg___boxed(lean_object* v_head_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim___redArg(v_head_50_);
lean_dec(v_head_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_head_55_){
_start:
{
lean_inc(v_head_55_);
return v_head_55_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_head_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_head_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_head_59_);
lean_dec(v_head_59_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim___redArg(lean_object* v_last_62_){
_start:
{
lean_inc(v_last_62_);
return v_last_62_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim___redArg___boxed(lean_object* v_last_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim___redArg(v_last_63_);
lean_dec(v_last_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim(lean_object* v_motive_65_, uint8_t v_t_66_, lean_object* v_h_67_, lean_object* v_last_68_){
_start:
{
lean_inc(v_last_68_);
return v_last_68_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim___boxed(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_last_72_){
_start:
{
uint8_t v_t_boxed_73_; lean_object* v_res_74_; 
v_t_boxed_73_ = lean_unbox(v_t_70_);
v_res_74_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_last_elim(v_motive_69_, v_t_boxed_73_, v_h_71_, v_last_72_);
lean_dec(v_last_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim___redArg(lean_object* v_toInteger_75_){
_start:
{
lean_inc(v_toInteger_75_);
return v_toInteger_75_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim___redArg___boxed(lean_object* v_toInteger_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim___redArg(v_toInteger_76_);
lean_dec(v_toInteger_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim(lean_object* v_motive_78_, uint8_t v_t_79_, lean_object* v_h_80_, lean_object* v_toInteger_81_){
_start:
{
lean_inc(v_toInteger_81_);
return v_toInteger_81_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim___boxed(lean_object* v_motive_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_toInteger_85_){
_start:
{
uint8_t v_t_boxed_86_; lean_object* v_res_87_; 
v_t_boxed_86_ = lean_unbox(v_t_83_);
v_res_87_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toInteger_elim(v_motive_82_, v_t_boxed_86_, v_h_84_, v_toInteger_85_);
lean_dec(v_toInteger_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim___redArg(lean_object* v_toFloat_88_){
_start:
{
lean_inc(v_toFloat_88_);
return v_toFloat_88_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim___redArg___boxed(lean_object* v_toFloat_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim___redArg(v_toFloat_89_);
lean_dec(v_toFloat_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim(lean_object* v_motive_91_, uint8_t v_t_92_, lean_object* v_h_93_, lean_object* v_toFloat_94_){
_start:
{
lean_inc(v_toFloat_94_);
return v_toFloat_94_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim___boxed(lean_object* v_motive_95_, lean_object* v_t_96_, lean_object* v_h_97_, lean_object* v_toFloat_98_){
_start:
{
uint8_t v_t_boxed_99_; lean_object* v_res_100_; 
v_t_boxed_99_ = lean_unbox(v_t_96_);
v_res_100_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_toFloat_elim(v_motive_95_, v_t_boxed_99_, v_h_97_, v_toFloat_98_);
lean_dec(v_toFloat_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim___redArg(lean_object* v_abs_101_){
_start:
{
lean_inc(v_abs_101_);
return v_abs_101_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim___redArg___boxed(lean_object* v_abs_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim___redArg(v_abs_102_);
lean_dec(v_abs_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim(lean_object* v_motive_104_, uint8_t v_t_105_, lean_object* v_h_106_, lean_object* v_abs_107_){
_start:
{
lean_inc(v_abs_107_);
return v_abs_107_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim___boxed(lean_object* v_motive_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_abs_111_){
_start:
{
uint8_t v_t_boxed_112_; lean_object* v_res_113_; 
v_t_boxed_112_ = lean_unbox(v_t_109_);
v_res_113_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_abs_elim(v_motive_108_, v_t_boxed_112_, v_h_110_, v_abs_111_);
lean_dec(v_abs_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim___redArg(lean_object* v_floor_114_){
_start:
{
lean_inc(v_floor_114_);
return v_floor_114_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim___redArg___boxed(lean_object* v_floor_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim___redArg(v_floor_115_);
lean_dec(v_floor_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim(lean_object* v_motive_117_, uint8_t v_t_118_, lean_object* v_h_119_, lean_object* v_floor_120_){
_start:
{
lean_inc(v_floor_120_);
return v_floor_120_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim___boxed(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_floor_124_){
_start:
{
uint8_t v_t_boxed_125_; lean_object* v_res_126_; 
v_t_boxed_125_ = lean_unbox(v_t_122_);
v_res_126_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_floor_elim(v_motive_121_, v_t_boxed_125_, v_h_123_, v_floor_124_);
lean_dec(v_floor_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim___redArg(lean_object* v_round_127_){
_start:
{
lean_inc(v_round_127_);
return v_round_127_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim___redArg___boxed(lean_object* v_round_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim___redArg(v_round_128_);
lean_dec(v_round_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim(lean_object* v_motive_130_, uint8_t v_t_131_, lean_object* v_h_132_, lean_object* v_round_133_){
_start:
{
lean_inc(v_round_133_);
return v_round_133_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim___boxed(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_round_137_){
_start:
{
uint8_t v_t_boxed_138_; lean_object* v_res_139_; 
v_t_boxed_138_ = lean_unbox(v_t_135_);
v_res_139_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_round_elim(v_motive_134_, v_t_boxed_138_, v_h_136_, v_round_137_);
lean_dec(v_round_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim___redArg(lean_object* v_type_140_){
_start:
{
lean_inc(v_type_140_);
return v_type_140_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim___redArg___boxed(lean_object* v_type_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim___redArg(v_type_141_);
lean_dec(v_type_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim(lean_object* v_motive_143_, uint8_t v_t_144_, lean_object* v_h_145_, lean_object* v_type_146_){
_start:
{
lean_inc(v_type_146_);
return v_type_146_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim___boxed(lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_type_150_){
_start:
{
uint8_t v_t_boxed_151_; lean_object* v_res_152_; 
v_t_boxed_151_ = lean_unbox(v_t_148_);
v_res_152_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_type_elim(v_motive_147_, v_t_boxed_151_, v_h_149_, v_type_150_);
lean_dec(v_type_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim___redArg(lean_object* v_count_153_){
_start:
{
lean_inc(v_count_153_);
return v_count_153_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim___redArg___boxed(lean_object* v_count_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim___redArg(v_count_154_);
lean_dec(v_count_154_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim(lean_object* v_motive_156_, uint8_t v_t_157_, lean_object* v_h_158_, lean_object* v_count_159_){
_start:
{
lean_inc(v_count_159_);
return v_count_159_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim___boxed(lean_object* v_motive_160_, lean_object* v_t_161_, lean_object* v_h_162_, lean_object* v_count_163_){
_start:
{
uint8_t v_t_boxed_164_; lean_object* v_res_165_; 
v_t_boxed_164_ = lean_unbox(v_t_161_);
v_res_165_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_count_elim(v_motive_160_, v_t_boxed_164_, v_h_162_, v_count_163_);
lean_dec(v_count_163_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim___redArg(lean_object* v_collect_166_){
_start:
{
lean_inc(v_collect_166_);
return v_collect_166_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim___redArg___boxed(lean_object* v_collect_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim___redArg(v_collect_167_);
lean_dec(v_collect_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim(lean_object* v_motive_169_, uint8_t v_t_170_, lean_object* v_h_171_, lean_object* v_collect_172_){
_start:
{
lean_inc(v_collect_172_);
return v_collect_172_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim___boxed(lean_object* v_motive_173_, lean_object* v_t_174_, lean_object* v_h_175_, lean_object* v_collect_176_){
_start:
{
uint8_t v_t_boxed_177_; lean_object* v_res_178_; 
v_t_boxed_177_ = lean_unbox(v_t_174_);
v_res_178_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_collect_elim(v_motive_173_, v_t_boxed_177_, v_h_175_, v_collect_176_);
lean_dec(v_collect_176_);
return v_res_178_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(2u);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(1u);
v___x_215_ = lean_nat_to_int(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr(uint8_t v_x_216_, lean_object* v_prec_217_){
_start:
{
lean_object* v___y_219_; lean_object* v___y_226_; lean_object* v___y_233_; lean_object* v___y_240_; lean_object* v___y_247_; lean_object* v___y_254_; lean_object* v___y_261_; lean_object* v___y_268_; lean_object* v___y_275_; lean_object* v___y_282_; lean_object* v___y_289_; 
switch(v_x_216_)
{
case 0:
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = lean_unsigned_to_nat(1024u);
v___x_296_ = lean_nat_dec_le(v___x_295_, v_prec_217_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; 
v___x_297_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_219_ = v___x_297_;
goto v___jp_218_;
}
else
{
lean_object* v___x_298_; 
v___x_298_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_219_ = v___x_298_;
goto v___jp_218_;
}
}
case 1:
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = lean_unsigned_to_nat(1024u);
v___x_300_ = lean_nat_dec_le(v___x_299_, v_prec_217_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
v___x_301_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_226_ = v___x_301_;
goto v___jp_225_;
}
else
{
lean_object* v___x_302_; 
v___x_302_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_226_ = v___x_302_;
goto v___jp_225_;
}
}
case 2:
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(1024u);
v___x_304_ = lean_nat_dec_le(v___x_303_, v_prec_217_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; 
v___x_305_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_233_ = v___x_305_;
goto v___jp_232_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_233_ = v___x_306_;
goto v___jp_232_;
}
}
case 3:
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(1024u);
v___x_308_ = lean_nat_dec_le(v___x_307_, v_prec_217_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; 
v___x_309_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_240_ = v___x_309_;
goto v___jp_239_;
}
else
{
lean_object* v___x_310_; 
v___x_310_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_240_ = v___x_310_;
goto v___jp_239_;
}
}
case 4:
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(1024u);
v___x_312_ = lean_nat_dec_le(v___x_311_, v_prec_217_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; 
v___x_313_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_247_ = v___x_313_;
goto v___jp_246_;
}
else
{
lean_object* v___x_314_; 
v___x_314_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_247_ = v___x_314_;
goto v___jp_246_;
}
}
case 5:
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(1024u);
v___x_316_ = lean_nat_dec_le(v___x_315_, v_prec_217_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_254_ = v___x_317_;
goto v___jp_253_;
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_254_ = v___x_318_;
goto v___jp_253_;
}
}
case 6:
{
lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_319_ = lean_unsigned_to_nat(1024u);
v___x_320_ = lean_nat_dec_le(v___x_319_, v_prec_217_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
v___x_321_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_261_ = v___x_321_;
goto v___jp_260_;
}
else
{
lean_object* v___x_322_; 
v___x_322_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_261_ = v___x_322_;
goto v___jp_260_;
}
}
case 7:
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_unsigned_to_nat(1024u);
v___x_324_ = lean_nat_dec_le(v___x_323_, v_prec_217_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; 
v___x_325_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_268_ = v___x_325_;
goto v___jp_267_;
}
else
{
lean_object* v___x_326_; 
v___x_326_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_268_ = v___x_326_;
goto v___jp_267_;
}
}
case 8:
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(1024u);
v___x_328_ = lean_nat_dec_le(v___x_327_, v_prec_217_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
v___x_329_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_275_ = v___x_329_;
goto v___jp_274_;
}
else
{
lean_object* v___x_330_; 
v___x_330_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_275_ = v___x_330_;
goto v___jp_274_;
}
}
case 9:
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = lean_unsigned_to_nat(1024u);
v___x_332_ = lean_nat_dec_le(v___x_331_, v_prec_217_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; 
v___x_333_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_282_ = v___x_333_;
goto v___jp_281_;
}
else
{
lean_object* v___x_334_; 
v___x_334_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_282_ = v___x_334_;
goto v___jp_281_;
}
}
default: 
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = lean_unsigned_to_nat(1024u);
v___x_336_ = lean_nat_dec_le(v___x_335_, v_prec_217_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; 
v___x_337_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_289_ = v___x_337_;
goto v___jp_288_;
}
else
{
lean_object* v___x_338_; 
v___x_338_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_289_ = v___x_338_;
goto v___jp_288_;
}
}
}
v___jp_218_:
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_220_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__1));
lean_inc(v___y_219_);
v___x_221_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_221_, 0, v___y_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = 0;
v___x_223_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*1, v___x_222_);
v___x_224_ = l_Repr_addAppParen(v___x_223_, v_prec_217_);
return v___x_224_;
}
v___jp_225_:
{
lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_227_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__3));
lean_inc(v___y_226_);
v___x_228_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_228_, 0, v___y_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = 0;
v___x_230_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*1, v___x_229_);
v___x_231_ = l_Repr_addAppParen(v___x_230_, v_prec_217_);
return v___x_231_;
}
v___jp_232_:
{
lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_234_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__5));
lean_inc(v___y_233_);
v___x_235_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_235_, 0, v___y_233_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = 0;
v___x_237_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set_uint8(v___x_237_, sizeof(void*)*1, v___x_236_);
v___x_238_ = l_Repr_addAppParen(v___x_237_, v_prec_217_);
return v___x_238_;
}
v___jp_239_:
{
lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_241_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__7));
lean_inc(v___y_240_);
v___x_242_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_242_, 0, v___y_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = 0;
v___x_244_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set_uint8(v___x_244_, sizeof(void*)*1, v___x_243_);
v___x_245_ = l_Repr_addAppParen(v___x_244_, v_prec_217_);
return v___x_245_;
}
v___jp_246_:
{
lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_248_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__9));
lean_inc(v___y_247_);
v___x_249_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_249_, 0, v___y_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = 0;
v___x_251_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set_uint8(v___x_251_, sizeof(void*)*1, v___x_250_);
v___x_252_ = l_Repr_addAppParen(v___x_251_, v_prec_217_);
return v___x_252_;
}
v___jp_253_:
{
lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_255_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__11));
lean_inc(v___y_254_);
v___x_256_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_256_, 0, v___y_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = 0;
v___x_258_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set_uint8(v___x_258_, sizeof(void*)*1, v___x_257_);
v___x_259_ = l_Repr_addAppParen(v___x_258_, v_prec_217_);
return v___x_259_;
}
v___jp_260_:
{
lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_262_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__13));
lean_inc(v___y_261_);
v___x_263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_263_, 0, v___y_261_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_264_ = 0;
v___x_265_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set_uint8(v___x_265_, sizeof(void*)*1, v___x_264_);
v___x_266_ = l_Repr_addAppParen(v___x_265_, v_prec_217_);
return v___x_266_;
}
v___jp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_269_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__15));
lean_inc(v___y_268_);
v___x_270_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_270_, 0, v___y_268_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = 0;
v___x_272_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set_uint8(v___x_272_, sizeof(void*)*1, v___x_271_);
v___x_273_ = l_Repr_addAppParen(v___x_272_, v_prec_217_);
return v___x_273_;
}
v___jp_274_:
{
lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_276_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__17));
lean_inc(v___y_275_);
v___x_277_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_277_, 0, v___y_275_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___x_278_ = 0;
v___x_279_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_279_, 0, v___x_277_);
lean_ctor_set_uint8(v___x_279_, sizeof(void*)*1, v___x_278_);
v___x_280_ = l_Repr_addAppParen(v___x_279_, v_prec_217_);
return v___x_280_;
}
v___jp_281_:
{
lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_283_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__19));
lean_inc(v___y_282_);
v___x_284_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_284_, 0, v___y_282_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = 0;
v___x_286_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set_uint8(v___x_286_, sizeof(void*)*1, v___x_285_);
v___x_287_ = l_Repr_addAppParen(v___x_286_, v_prec_217_);
return v___x_287_;
}
v___jp_288_:
{
lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_290_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__21));
lean_inc(v___y_289_);
v___x_291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_291_, 0, v___y_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = 0;
v___x_293_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set_uint8(v___x_293_, sizeof(void*)*1, v___x_292_);
v___x_294_ = l_Repr_addAppParen(v___x_293_, v_prec_217_);
return v___x_294_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___boxed(lean_object* v_x_339_, lean_object* v_prec_340_){
_start:
{
uint8_t v_x_625__boxed_341_; lean_object* v_res_342_; 
v_x_625__boxed_341_ = lean_unbox(v_x_339_);
v_res_342_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr(v_x_625__boxed_341_, v_prec_340_);
lean_dec(v_prec_340_);
return v_res_342_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ofNat(lean_object* v_n_345_){
_start:
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(4u);
v___x_347_ = lean_nat_dec_le(v_n_345_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(7u);
v___x_349_ = lean_nat_dec_le(v_n_345_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(8u);
v___x_351_ = lean_nat_dec_le(v_n_345_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(9u);
v___x_353_ = lean_nat_dec_le(v_n_345_, v___x_352_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
v___x_354_ = 10;
return v___x_354_;
}
else
{
uint8_t v___x_355_; 
v___x_355_ = 9;
return v___x_355_;
}
}
else
{
uint8_t v___x_356_; 
v___x_356_ = 8;
return v___x_356_;
}
}
else
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = lean_unsigned_to_nat(5u);
v___x_358_ = lean_nat_dec_le(v_n_345_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_unsigned_to_nat(6u);
v___x_360_ = lean_nat_dec_le(v_n_345_, v___x_359_);
if (v___x_360_ == 0)
{
uint8_t v___x_361_; 
v___x_361_ = 7;
return v___x_361_;
}
else
{
uint8_t v___x_362_; 
v___x_362_ = 6;
return v___x_362_;
}
}
else
{
uint8_t v___x_363_; 
v___x_363_ = 5;
return v___x_363_;
}
}
}
else
{
lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_364_ = lean_unsigned_to_nat(1u);
v___x_365_ = lean_nat_dec_le(v_n_345_, v___x_364_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_366_ = lean_unsigned_to_nat(2u);
v___x_367_ = lean_nat_dec_le(v_n_345_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = lean_unsigned_to_nat(3u);
v___x_369_ = lean_nat_dec_le(v_n_345_, v___x_368_);
if (v___x_369_ == 0)
{
uint8_t v___x_370_; 
v___x_370_ = 4;
return v___x_370_;
}
else
{
uint8_t v___x_371_; 
v___x_371_ = 3;
return v___x_371_;
}
}
else
{
uint8_t v___x_372_; 
v___x_372_ = 2;
return v___x_372_;
}
}
else
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = lean_nat_dec_le(v_n_345_, v___x_373_);
if (v___x_374_ == 0)
{
uint8_t v___x_375_; 
v___x_375_ = 1;
return v___x_375_;
}
else
{
uint8_t v___x_376_; 
v___x_376_ = 0;
return v___x_376_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ofNat___boxed(lean_object* v_n_377_){
_start:
{
uint8_t v_res_378_; lean_object* v_r_379_; 
v_res_378_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ofNat(v_n_377_);
lean_dec(v_n_377_);
v_r_379_ = lean_box(v_res_378_);
return v_r_379_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqFunctionName(uint8_t v_x_380_, uint8_t v_y_381_){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_382_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx(v_x_380_);
v___x_383_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_FunctionName_ctorIdx(v_y_381_);
v___x_384_ = lean_nat_dec_eq(v___x_382_, v___x_383_);
lean_dec(v___x_383_);
lean_dec(v___x_382_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqFunctionName___boxed(lean_object* v_x_385_, lean_object* v_y_386_){
_start:
{
uint8_t v_x_13__boxed_387_; uint8_t v_y_14__boxed_388_; uint8_t v_res_389_; lean_object* v_r_390_; 
v_x_13__boxed_387_ = lean_unbox(v_x_385_);
v_y_14__boxed_388_ = lean_unbox(v_y_386_);
v_res_389_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqFunctionName(v_x_13__boxed_387_, v_y_14__boxed_388_);
v_r_390_ = lean_box(v_res_389_);
return v_r_390_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx(uint8_t v_x_391_){
_start:
{
if (v_x_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = lean_unsigned_to_nat(0u);
return v___x_392_;
}
else
{
lean_object* v___x_393_; 
v___x_393_ = lean_unsigned_to_nat(1u);
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx___boxed(lean_object* v_x_394_){
_start:
{
uint8_t v_x_boxed_395_; lean_object* v_res_396_; 
v_x_boxed_395_ = lean_unbox(v_x_394_);
v_res_396_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx(v_x_boxed_395_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_toCtorIdx(uint8_t v_x_397_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx(v_x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_toCtorIdx___boxed(lean_object* v_x_399_){
_start:
{
uint8_t v_x_4__boxed_400_; lean_object* v_res_401_; 
v_x_4__boxed_400_ = lean_unbox(v_x_399_);
v_res_401_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_toCtorIdx(v_x_4__boxed_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim___redArg(lean_object* v_k_402_){
_start:
{
lean_inc(v_k_402_);
return v_k_402_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim___redArg___boxed(lean_object* v_k_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim___redArg(v_k_403_);
lean_dec(v_k_403_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim(lean_object* v_motive_405_, lean_object* v_ctorIdx_406_, uint8_t v_t_407_, lean_object* v_h_408_, lean_object* v_k_409_){
_start:
{
lean_inc(v_k_409_);
return v_k_409_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim___boxed(lean_object* v_motive_410_, lean_object* v_ctorIdx_411_, lean_object* v_t_412_, lean_object* v_h_413_, lean_object* v_k_414_){
_start:
{
uint8_t v_t_boxed_415_; lean_object* v_res_416_; 
v_t_boxed_415_ = lean_unbox(v_t_412_);
v_res_416_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorElim(v_motive_410_, v_ctorIdx_411_, v_t_boxed_415_, v_h_413_, v_k_414_);
lean_dec(v_k_414_);
lean_dec(v_ctorIdx_411_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim___redArg(lean_object* v_any_417_){
_start:
{
lean_inc(v_any_417_);
return v_any_417_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim___redArg___boxed(lean_object* v_any_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim___redArg(v_any_418_);
lean_dec(v_any_418_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim(lean_object* v_motive_420_, uint8_t v_t_421_, lean_object* v_h_422_, lean_object* v_any_423_){
_start:
{
lean_inc(v_any_423_);
return v_any_423_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim___boxed(lean_object* v_motive_424_, lean_object* v_t_425_, lean_object* v_h_426_, lean_object* v_any_427_){
_start:
{
uint8_t v_t_boxed_428_; lean_object* v_res_429_; 
v_t_boxed_428_ = lean_unbox(v_t_425_);
v_res_429_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_any_elim(v_motive_424_, v_t_boxed_428_, v_h_426_, v_any_427_);
lean_dec(v_any_427_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim___redArg(lean_object* v_all_430_){
_start:
{
lean_inc(v_all_430_);
return v_all_430_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim___redArg___boxed(lean_object* v_all_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim___redArg(v_all_431_);
lean_dec(v_all_431_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim(lean_object* v_motive_433_, uint8_t v_t_434_, lean_object* v_h_435_, lean_object* v_all_436_){
_start:
{
lean_inc(v_all_436_);
return v_all_436_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim___boxed(lean_object* v_motive_437_, lean_object* v_t_438_, lean_object* v_h_439_, lean_object* v_all_440_){
_start:
{
uint8_t v_t_boxed_441_; lean_object* v_res_442_; 
v_t_boxed_441_ = lean_unbox(v_t_438_);
v_res_442_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_all_elim(v_motive_437_, v_t_boxed_441_, v_h_439_, v_all_440_);
lean_dec(v_all_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr(uint8_t v_x_449_, lean_object* v_prec_450_){
_start:
{
lean_object* v___y_452_; lean_object* v___y_459_; 
if (v_x_449_ == 0)
{
lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_465_ = lean_unsigned_to_nat(1024u);
v___x_466_ = lean_nat_dec_le(v___x_465_, v_prec_450_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; 
v___x_467_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_452_ = v___x_467_;
goto v___jp_451_;
}
else
{
lean_object* v___x_468_; 
v___x_468_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_452_ = v___x_468_;
goto v___jp_451_;
}
}
else
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = lean_unsigned_to_nat(1024u);
v___x_470_ = lean_nat_dec_le(v___x_469_, v_prec_450_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; 
v___x_471_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_459_ = v___x_471_;
goto v___jp_458_;
}
else
{
lean_object* v___x_472_; 
v___x_472_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_459_ = v___x_472_;
goto v___jp_458_;
}
}
v___jp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_453_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__1));
lean_inc(v___y_452_);
v___x_454_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_454_, 0, v___y_452_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = 0;
v___x_456_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_456_, 0, v___x_454_);
lean_ctor_set_uint8(v___x_456_, sizeof(void*)*1, v___x_455_);
v___x_457_ = l_Repr_addAppParen(v___x_456_, v_prec_450_);
return v___x_457_;
}
v___jp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_460_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___closed__3));
lean_inc(v___y_459_);
v___x_461_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_461_, 0, v___y_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = 0;
v___x_463_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_463_, 0, v___x_461_);
lean_ctor_set_uint8(v___x_463_, sizeof(void*)*1, v___x_462_);
v___x_464_ = l_Repr_addAppParen(v___x_463_, v_prec_450_);
return v___x_464_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr___boxed(lean_object* v_x_473_, lean_object* v_prec_474_){
_start:
{
uint8_t v_x_117__boxed_475_; lean_object* v_res_476_; 
v_x_117__boxed_475_ = lean_unbox(v_x_473_);
v_res_476_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr(v_x_117__boxed_475_, v_prec_474_);
lean_dec(v_prec_474_);
return v_res_476_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ofNat(lean_object* v_n_479_){
_start:
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_nat_dec_le(v_n_479_, v___x_480_);
if (v___x_481_ == 0)
{
uint8_t v___x_482_; 
v___x_482_ = 1;
return v___x_482_;
}
else
{
uint8_t v___x_483_; 
v___x_483_ = 0;
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ofNat___boxed(lean_object* v_n_484_){
_start:
{
uint8_t v_res_485_; lean_object* v_r_486_; 
v_res_485_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ofNat(v_n_484_);
lean_dec(v_n_484_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqQuantifier(uint8_t v_x_487_, uint8_t v_y_488_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_489_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx(v_x_487_);
v___x_490_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Quantifier_ctorIdx(v_y_488_);
v___x_491_ = lean_nat_dec_eq(v___x_489_, v___x_490_);
lean_dec(v___x_490_);
lean_dec(v___x_489_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqQuantifier___boxed(lean_object* v_x_492_, lean_object* v_y_493_){
_start:
{
uint8_t v_x_13__boxed_494_; uint8_t v_y_14__boxed_495_; uint8_t v_res_496_; lean_object* v_r_497_; 
v_x_13__boxed_494_ = lean_unbox(v_x_492_);
v_y_14__boxed_495_ = lean_unbox(v_y_493_);
v_res_496_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqQuantifier(v_x_13__boxed_494_, v_y_14__boxed_495_);
v_r_497_ = lean_box(v_res_496_);
return v_r_497_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx(uint8_t v_x_498_){
_start:
{
switch(v_x_498_)
{
case 0:
{
lean_object* v___x_499_; 
v___x_499_ = lean_unsigned_to_nat(0u);
return v___x_499_;
}
case 1:
{
lean_object* v___x_500_; 
v___x_500_ = lean_unsigned_to_nat(1u);
return v___x_500_;
}
case 2:
{
lean_object* v___x_501_; 
v___x_501_ = lean_unsigned_to_nat(2u);
return v___x_501_;
}
case 3:
{
lean_object* v___x_502_; 
v___x_502_ = lean_unsigned_to_nat(3u);
return v___x_502_;
}
case 4:
{
lean_object* v___x_503_; 
v___x_503_ = lean_unsigned_to_nat(4u);
return v___x_503_;
}
case 5:
{
lean_object* v___x_504_; 
v___x_504_ = lean_unsigned_to_nat(5u);
return v___x_504_;
}
case 6:
{
lean_object* v___x_505_; 
v___x_505_ = lean_unsigned_to_nat(6u);
return v___x_505_;
}
case 7:
{
lean_object* v___x_506_; 
v___x_506_ = lean_unsigned_to_nat(7u);
return v___x_506_;
}
case 8:
{
lean_object* v___x_507_; 
v___x_507_ = lean_unsigned_to_nat(8u);
return v___x_507_;
}
case 9:
{
lean_object* v___x_508_; 
v___x_508_ = lean_unsigned_to_nat(9u);
return v___x_508_;
}
case 10:
{
lean_object* v___x_509_; 
v___x_509_ = lean_unsigned_to_nat(10u);
return v___x_509_;
}
case 11:
{
lean_object* v___x_510_; 
v___x_510_ = lean_unsigned_to_nat(11u);
return v___x_510_;
}
case 12:
{
lean_object* v___x_511_; 
v___x_511_ = lean_unsigned_to_nat(12u);
return v___x_511_;
}
case 13:
{
lean_object* v___x_512_; 
v___x_512_ = lean_unsigned_to_nat(13u);
return v___x_512_;
}
case 14:
{
lean_object* v___x_513_; 
v___x_513_ = lean_unsigned_to_nat(14u);
return v___x_513_;
}
case 15:
{
lean_object* v___x_514_; 
v___x_514_ = lean_unsigned_to_nat(15u);
return v___x_514_;
}
default: 
{
lean_object* v___x_515_; 
v___x_515_ = lean_unsigned_to_nat(16u);
return v___x_515_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx___boxed(lean_object* v_x_516_){
_start:
{
uint8_t v_x_boxed_517_; lean_object* v_res_518_; 
v_x_boxed_517_ = lean_unbox(v_x_516_);
v_res_518_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx(v_x_boxed_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_toCtorIdx(uint8_t v_x_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx(v_x_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_toCtorIdx___boxed(lean_object* v_x_521_){
_start:
{
uint8_t v_x_4__boxed_522_; lean_object* v_res_523_; 
v_x_4__boxed_522_ = lean_unbox(v_x_521_);
v_res_523_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_toCtorIdx(v_x_4__boxed_522_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim___redArg(lean_object* v_k_524_){
_start:
{
lean_inc(v_k_524_);
return v_k_524_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim___redArg___boxed(lean_object* v_k_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim___redArg(v_k_525_);
lean_dec(v_k_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim(lean_object* v_motive_527_, lean_object* v_ctorIdx_528_, uint8_t v_t_529_, lean_object* v_h_530_, lean_object* v_k_531_){
_start:
{
lean_inc(v_k_531_);
return v_k_531_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim___boxed(lean_object* v_motive_532_, lean_object* v_ctorIdx_533_, lean_object* v_t_534_, lean_object* v_h_535_, lean_object* v_k_536_){
_start:
{
uint8_t v_t_boxed_537_; lean_object* v_res_538_; 
v_t_boxed_537_ = lean_unbox(v_t_534_);
v_res_538_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorElim(v_motive_532_, v_ctorIdx_533_, v_t_boxed_537_, v_h_535_, v_k_536_);
lean_dec(v_k_536_);
lean_dec(v_ctorIdx_533_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim___redArg(lean_object* v_or_539_){
_start:
{
lean_inc(v_or_539_);
return v_or_539_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim___redArg___boxed(lean_object* v_or_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim___redArg(v_or_540_);
lean_dec(v_or_540_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim(lean_object* v_motive_542_, uint8_t v_t_543_, lean_object* v_h_544_, lean_object* v_or_545_){
_start:
{
lean_inc(v_or_545_);
return v_or_545_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim___boxed(lean_object* v_motive_546_, lean_object* v_t_547_, lean_object* v_h_548_, lean_object* v_or_549_){
_start:
{
uint8_t v_t_boxed_550_; lean_object* v_res_551_; 
v_t_boxed_550_ = lean_unbox(v_t_547_);
v_res_551_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_or_elim(v_motive_546_, v_t_boxed_550_, v_h_548_, v_or_549_);
lean_dec(v_or_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim___redArg(lean_object* v_xor_552_){
_start:
{
lean_inc(v_xor_552_);
return v_xor_552_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim___redArg___boxed(lean_object* v_xor_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim___redArg(v_xor_553_);
lean_dec(v_xor_553_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim(lean_object* v_motive_555_, uint8_t v_t_556_, lean_object* v_h_557_, lean_object* v_xor_558_){
_start:
{
lean_inc(v_xor_558_);
return v_xor_558_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim___boxed(lean_object* v_motive_559_, lean_object* v_t_560_, lean_object* v_h_561_, lean_object* v_xor_562_){
_start:
{
uint8_t v_t_boxed_563_; lean_object* v_res_564_; 
v_t_boxed_563_ = lean_unbox(v_t_560_);
v_res_564_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_xor_elim(v_motive_559_, v_t_boxed_563_, v_h_561_, v_xor_562_);
lean_dec(v_xor_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim___redArg(lean_object* v_and_565_){
_start:
{
lean_inc(v_and_565_);
return v_and_565_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim___redArg___boxed(lean_object* v_and_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim___redArg(v_and_566_);
lean_dec(v_and_566_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim(lean_object* v_motive_568_, uint8_t v_t_569_, lean_object* v_h_570_, lean_object* v_and_571_){
_start:
{
lean_inc(v_and_571_);
return v_and_571_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim___boxed(lean_object* v_motive_572_, lean_object* v_t_573_, lean_object* v_h_574_, lean_object* v_and_575_){
_start:
{
uint8_t v_t_boxed_576_; lean_object* v_res_577_; 
v_t_boxed_576_ = lean_unbox(v_t_573_);
v_res_577_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_and_elim(v_motive_572_, v_t_boxed_576_, v_h_574_, v_and_575_);
lean_dec(v_and_575_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim___redArg(lean_object* v_eq_578_){
_start:
{
lean_inc(v_eq_578_);
return v_eq_578_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim___redArg___boxed(lean_object* v_eq_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim___redArg(v_eq_579_);
lean_dec(v_eq_579_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim(lean_object* v_motive_581_, uint8_t v_t_582_, lean_object* v_h_583_, lean_object* v_eq_584_){
_start:
{
lean_inc(v_eq_584_);
return v_eq_584_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim___boxed(lean_object* v_motive_585_, lean_object* v_t_586_, lean_object* v_h_587_, lean_object* v_eq_588_){
_start:
{
uint8_t v_t_boxed_589_; lean_object* v_res_590_; 
v_t_boxed_589_ = lean_unbox(v_t_586_);
v_res_590_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_eq_elim(v_motive_585_, v_t_boxed_589_, v_h_587_, v_eq_588_);
lean_dec(v_eq_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim___redArg(lean_object* v_ne_591_){
_start:
{
lean_inc(v_ne_591_);
return v_ne_591_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim___redArg___boxed(lean_object* v_ne_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim___redArg(v_ne_592_);
lean_dec(v_ne_592_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim(lean_object* v_motive_594_, uint8_t v_t_595_, lean_object* v_h_596_, lean_object* v_ne_597_){
_start:
{
lean_inc(v_ne_597_);
return v_ne_597_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim___boxed(lean_object* v_motive_598_, lean_object* v_t_599_, lean_object* v_h_600_, lean_object* v_ne_601_){
_start:
{
uint8_t v_t_boxed_602_; lean_object* v_res_603_; 
v_t_boxed_602_ = lean_unbox(v_t_599_);
v_res_603_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ne_elim(v_motive_598_, v_t_boxed_602_, v_h_600_, v_ne_601_);
lean_dec(v_ne_601_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim___redArg(lean_object* v_lt_604_){
_start:
{
lean_inc(v_lt_604_);
return v_lt_604_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim___redArg___boxed(lean_object* v_lt_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim___redArg(v_lt_605_);
lean_dec(v_lt_605_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim(lean_object* v_motive_607_, uint8_t v_t_608_, lean_object* v_h_609_, lean_object* v_lt_610_){
_start:
{
lean_inc(v_lt_610_);
return v_lt_610_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim___boxed(lean_object* v_motive_611_, lean_object* v_t_612_, lean_object* v_h_613_, lean_object* v_lt_614_){
_start:
{
uint8_t v_t_boxed_615_; lean_object* v_res_616_; 
v_t_boxed_615_ = lean_unbox(v_t_612_);
v_res_616_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_lt_elim(v_motive_611_, v_t_boxed_615_, v_h_613_, v_lt_614_);
lean_dec(v_lt_614_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim___redArg(lean_object* v_le_617_){
_start:
{
lean_inc(v_le_617_);
return v_le_617_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim___redArg___boxed(lean_object* v_le_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim___redArg(v_le_618_);
lean_dec(v_le_618_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim(lean_object* v_motive_620_, uint8_t v_t_621_, lean_object* v_h_622_, lean_object* v_le_623_){
_start:
{
lean_inc(v_le_623_);
return v_le_623_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim___boxed(lean_object* v_motive_624_, lean_object* v_t_625_, lean_object* v_h_626_, lean_object* v_le_627_){
_start:
{
uint8_t v_t_boxed_628_; lean_object* v_res_629_; 
v_t_boxed_628_ = lean_unbox(v_t_625_);
v_res_629_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_le_elim(v_motive_624_, v_t_boxed_628_, v_h_626_, v_le_627_);
lean_dec(v_le_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim___redArg(lean_object* v_gt_630_){
_start:
{
lean_inc(v_gt_630_);
return v_gt_630_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim___redArg___boxed(lean_object* v_gt_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim___redArg(v_gt_631_);
lean_dec(v_gt_631_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim(lean_object* v_motive_633_, uint8_t v_t_634_, lean_object* v_h_635_, lean_object* v_gt_636_){
_start:
{
lean_inc(v_gt_636_);
return v_gt_636_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim___boxed(lean_object* v_motive_637_, lean_object* v_t_638_, lean_object* v_h_639_, lean_object* v_gt_640_){
_start:
{
uint8_t v_t_boxed_641_; lean_object* v_res_642_; 
v_t_boxed_641_ = lean_unbox(v_t_638_);
v_res_642_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_gt_elim(v_motive_637_, v_t_boxed_641_, v_h_639_, v_gt_640_);
lean_dec(v_gt_640_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim___redArg(lean_object* v_ge_643_){
_start:
{
lean_inc(v_ge_643_);
return v_ge_643_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim___redArg___boxed(lean_object* v_ge_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim___redArg(v_ge_644_);
lean_dec(v_ge_644_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim(lean_object* v_motive_646_, uint8_t v_t_647_, lean_object* v_h_648_, lean_object* v_ge_649_){
_start:
{
lean_inc(v_ge_649_);
return v_ge_649_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim___boxed(lean_object* v_motive_650_, lean_object* v_t_651_, lean_object* v_h_652_, lean_object* v_ge_653_){
_start:
{
uint8_t v_t_boxed_654_; lean_object* v_res_655_; 
v_t_boxed_654_ = lean_unbox(v_t_651_);
v_res_655_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ge_elim(v_motive_650_, v_t_boxed_654_, v_h_652_, v_ge_653_);
lean_dec(v_ge_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim___redArg(lean_object* v_inList_656_){
_start:
{
lean_inc(v_inList_656_);
return v_inList_656_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim___redArg___boxed(lean_object* v_inList_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim___redArg(v_inList_657_);
lean_dec(v_inList_657_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim(lean_object* v_motive_659_, uint8_t v_t_660_, lean_object* v_h_661_, lean_object* v_inList_662_){
_start:
{
lean_inc(v_inList_662_);
return v_inList_662_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim___boxed(lean_object* v_motive_663_, lean_object* v_t_664_, lean_object* v_h_665_, lean_object* v_inList_666_){
_start:
{
uint8_t v_t_boxed_667_; lean_object* v_res_668_; 
v_t_boxed_667_ = lean_unbox(v_t_664_);
v_res_668_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_inList_elim(v_motive_663_, v_t_boxed_667_, v_h_665_, v_inList_666_);
lean_dec(v_inList_666_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim___redArg(lean_object* v_startsWith_669_){
_start:
{
lean_inc(v_startsWith_669_);
return v_startsWith_669_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim___redArg___boxed(lean_object* v_startsWith_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim___redArg(v_startsWith_670_);
lean_dec(v_startsWith_670_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim(lean_object* v_motive_672_, uint8_t v_t_673_, lean_object* v_h_674_, lean_object* v_startsWith_675_){
_start:
{
lean_inc(v_startsWith_675_);
return v_startsWith_675_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim___boxed(lean_object* v_motive_676_, lean_object* v_t_677_, lean_object* v_h_678_, lean_object* v_startsWith_679_){
_start:
{
uint8_t v_t_boxed_680_; lean_object* v_res_681_; 
v_t_boxed_680_ = lean_unbox(v_t_677_);
v_res_681_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_startsWith_elim(v_motive_676_, v_t_boxed_680_, v_h_678_, v_startsWith_679_);
lean_dec(v_startsWith_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim___redArg(lean_object* v_add_682_){
_start:
{
lean_inc(v_add_682_);
return v_add_682_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim___redArg___boxed(lean_object* v_add_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim___redArg(v_add_683_);
lean_dec(v_add_683_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim(lean_object* v_motive_685_, uint8_t v_t_686_, lean_object* v_h_687_, lean_object* v_add_688_){
_start:
{
lean_inc(v_add_688_);
return v_add_688_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim___boxed(lean_object* v_motive_689_, lean_object* v_t_690_, lean_object* v_h_691_, lean_object* v_add_692_){
_start:
{
uint8_t v_t_boxed_693_; lean_object* v_res_694_; 
v_t_boxed_693_ = lean_unbox(v_t_690_);
v_res_694_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_add_elim(v_motive_689_, v_t_boxed_693_, v_h_691_, v_add_692_);
lean_dec(v_add_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim___redArg(lean_object* v_sub_695_){
_start:
{
lean_inc(v_sub_695_);
return v_sub_695_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim___redArg___boxed(lean_object* v_sub_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim___redArg(v_sub_696_);
lean_dec(v_sub_696_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim(lean_object* v_motive_698_, uint8_t v_t_699_, lean_object* v_h_700_, lean_object* v_sub_701_){
_start:
{
lean_inc(v_sub_701_);
return v_sub_701_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim___boxed(lean_object* v_motive_702_, lean_object* v_t_703_, lean_object* v_h_704_, lean_object* v_sub_705_){
_start:
{
uint8_t v_t_boxed_706_; lean_object* v_res_707_; 
v_t_boxed_706_ = lean_unbox(v_t_703_);
v_res_707_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_sub_elim(v_motive_702_, v_t_boxed_706_, v_h_704_, v_sub_705_);
lean_dec(v_sub_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim___redArg(lean_object* v_mul_708_){
_start:
{
lean_inc(v_mul_708_);
return v_mul_708_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim___redArg___boxed(lean_object* v_mul_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim___redArg(v_mul_709_);
lean_dec(v_mul_709_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim(lean_object* v_motive_711_, uint8_t v_t_712_, lean_object* v_h_713_, lean_object* v_mul_714_){
_start:
{
lean_inc(v_mul_714_);
return v_mul_714_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim___boxed(lean_object* v_motive_715_, lean_object* v_t_716_, lean_object* v_h_717_, lean_object* v_mul_718_){
_start:
{
uint8_t v_t_boxed_719_; lean_object* v_res_720_; 
v_t_boxed_719_ = lean_unbox(v_t_716_);
v_res_720_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mul_elim(v_motive_715_, v_t_boxed_719_, v_h_717_, v_mul_718_);
lean_dec(v_mul_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim___redArg(lean_object* v_div_721_){
_start:
{
lean_inc(v_div_721_);
return v_div_721_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim___redArg___boxed(lean_object* v_div_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim___redArg(v_div_722_);
lean_dec(v_div_722_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim(lean_object* v_motive_724_, uint8_t v_t_725_, lean_object* v_h_726_, lean_object* v_div_727_){
_start:
{
lean_inc(v_div_727_);
return v_div_727_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim___boxed(lean_object* v_motive_728_, lean_object* v_t_729_, lean_object* v_h_730_, lean_object* v_div_731_){
_start:
{
uint8_t v_t_boxed_732_; lean_object* v_res_733_; 
v_t_boxed_732_ = lean_unbox(v_t_729_);
v_res_733_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_div_elim(v_motive_728_, v_t_boxed_732_, v_h_730_, v_div_731_);
lean_dec(v_div_731_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim___redArg(lean_object* v_mod_734_){
_start:
{
lean_inc(v_mod_734_);
return v_mod_734_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim___redArg___boxed(lean_object* v_mod_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim___redArg(v_mod_735_);
lean_dec(v_mod_735_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim(lean_object* v_motive_737_, uint8_t v_t_738_, lean_object* v_h_739_, lean_object* v_mod_740_){
_start:
{
lean_inc(v_mod_740_);
return v_mod_740_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim___boxed(lean_object* v_motive_741_, lean_object* v_t_742_, lean_object* v_h_743_, lean_object* v_mod_744_){
_start:
{
uint8_t v_t_boxed_745_; lean_object* v_res_746_; 
v_t_boxed_745_ = lean_unbox(v_t_742_);
v_res_746_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_mod_elim(v_motive_741_, v_t_boxed_745_, v_h_743_, v_mod_744_);
lean_dec(v_mod_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim___redArg(lean_object* v_concat_747_){
_start:
{
lean_inc(v_concat_747_);
return v_concat_747_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim___redArg___boxed(lean_object* v_concat_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim___redArg(v_concat_748_);
lean_dec(v_concat_748_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim(lean_object* v_motive_750_, uint8_t v_t_751_, lean_object* v_h_752_, lean_object* v_concat_753_){
_start:
{
lean_inc(v_concat_753_);
return v_concat_753_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim___boxed(lean_object* v_motive_754_, lean_object* v_t_755_, lean_object* v_h_756_, lean_object* v_concat_757_){
_start:
{
uint8_t v_t_boxed_758_; lean_object* v_res_759_; 
v_t_boxed_758_ = lean_unbox(v_t_755_);
v_res_759_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_concat_elim(v_motive_754_, v_t_boxed_758_, v_h_756_, v_concat_757_);
lean_dec(v_concat_757_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr(uint8_t v_x_811_, lean_object* v_prec_812_){
_start:
{
lean_object* v___y_814_; lean_object* v___y_821_; lean_object* v___y_828_; lean_object* v___y_835_; lean_object* v___y_842_; lean_object* v___y_849_; lean_object* v___y_856_; lean_object* v___y_863_; lean_object* v___y_870_; lean_object* v___y_877_; lean_object* v___y_884_; lean_object* v___y_891_; lean_object* v___y_898_; lean_object* v___y_905_; lean_object* v___y_912_; lean_object* v___y_919_; lean_object* v___y_926_; 
switch(v_x_811_)
{
case 0:
{
lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_932_ = lean_unsigned_to_nat(1024u);
v___x_933_ = lean_nat_dec_le(v___x_932_, v_prec_812_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; 
v___x_934_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_814_ = v___x_934_;
goto v___jp_813_;
}
else
{
lean_object* v___x_935_; 
v___x_935_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_814_ = v___x_935_;
goto v___jp_813_;
}
}
case 1:
{
lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_936_ = lean_unsigned_to_nat(1024u);
v___x_937_ = lean_nat_dec_le(v___x_936_, v_prec_812_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
v___x_938_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_821_ = v___x_938_;
goto v___jp_820_;
}
else
{
lean_object* v___x_939_; 
v___x_939_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_821_ = v___x_939_;
goto v___jp_820_;
}
}
case 2:
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = lean_unsigned_to_nat(1024u);
v___x_941_ = lean_nat_dec_le(v___x_940_, v_prec_812_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; 
v___x_942_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_828_ = v___x_942_;
goto v___jp_827_;
}
else
{
lean_object* v___x_943_; 
v___x_943_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_828_ = v___x_943_;
goto v___jp_827_;
}
}
case 3:
{
lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_944_ = lean_unsigned_to_nat(1024u);
v___x_945_ = lean_nat_dec_le(v___x_944_, v_prec_812_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; 
v___x_946_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_835_ = v___x_946_;
goto v___jp_834_;
}
else
{
lean_object* v___x_947_; 
v___x_947_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_835_ = v___x_947_;
goto v___jp_834_;
}
}
case 4:
{
lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_948_ = lean_unsigned_to_nat(1024u);
v___x_949_ = lean_nat_dec_le(v___x_948_, v_prec_812_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; 
v___x_950_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_842_ = v___x_950_;
goto v___jp_841_;
}
else
{
lean_object* v___x_951_; 
v___x_951_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_842_ = v___x_951_;
goto v___jp_841_;
}
}
case 5:
{
lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(1024u);
v___x_953_ = lean_nat_dec_le(v___x_952_, v_prec_812_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; 
v___x_954_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_849_ = v___x_954_;
goto v___jp_848_;
}
else
{
lean_object* v___x_955_; 
v___x_955_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_849_ = v___x_955_;
goto v___jp_848_;
}
}
case 6:
{
lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_956_ = lean_unsigned_to_nat(1024u);
v___x_957_ = lean_nat_dec_le(v___x_956_, v_prec_812_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
v___x_958_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_856_ = v___x_958_;
goto v___jp_855_;
}
else
{
lean_object* v___x_959_; 
v___x_959_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_856_ = v___x_959_;
goto v___jp_855_;
}
}
case 7:
{
lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_960_ = lean_unsigned_to_nat(1024u);
v___x_961_ = lean_nat_dec_le(v___x_960_, v_prec_812_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; 
v___x_962_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_863_ = v___x_962_;
goto v___jp_862_;
}
else
{
lean_object* v___x_963_; 
v___x_963_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_863_ = v___x_963_;
goto v___jp_862_;
}
}
case 8:
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = lean_unsigned_to_nat(1024u);
v___x_965_ = lean_nat_dec_le(v___x_964_, v_prec_812_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
v___x_966_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_870_ = v___x_966_;
goto v___jp_869_;
}
else
{
lean_object* v___x_967_; 
v___x_967_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_870_ = v___x_967_;
goto v___jp_869_;
}
}
case 9:
{
lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_968_ = lean_unsigned_to_nat(1024u);
v___x_969_ = lean_nat_dec_le(v___x_968_, v_prec_812_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; 
v___x_970_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_877_ = v___x_970_;
goto v___jp_876_;
}
else
{
lean_object* v___x_971_; 
v___x_971_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_877_ = v___x_971_;
goto v___jp_876_;
}
}
case 10:
{
lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_972_ = lean_unsigned_to_nat(1024u);
v___x_973_ = lean_nat_dec_le(v___x_972_, v_prec_812_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; 
v___x_974_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_884_ = v___x_974_;
goto v___jp_883_;
}
else
{
lean_object* v___x_975_; 
v___x_975_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_884_ = v___x_975_;
goto v___jp_883_;
}
}
case 11:
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = lean_unsigned_to_nat(1024u);
v___x_977_ = lean_nat_dec_le(v___x_976_, v_prec_812_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; 
v___x_978_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_891_ = v___x_978_;
goto v___jp_890_;
}
else
{
lean_object* v___x_979_; 
v___x_979_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_891_ = v___x_979_;
goto v___jp_890_;
}
}
case 12:
{
lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_980_ = lean_unsigned_to_nat(1024u);
v___x_981_ = lean_nat_dec_le(v___x_980_, v_prec_812_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; 
v___x_982_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_898_ = v___x_982_;
goto v___jp_897_;
}
else
{
lean_object* v___x_983_; 
v___x_983_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_898_ = v___x_983_;
goto v___jp_897_;
}
}
case 13:
{
lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_984_ = lean_unsigned_to_nat(1024u);
v___x_985_ = lean_nat_dec_le(v___x_984_, v_prec_812_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; 
v___x_986_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_905_ = v___x_986_;
goto v___jp_904_;
}
else
{
lean_object* v___x_987_; 
v___x_987_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_905_ = v___x_987_;
goto v___jp_904_;
}
}
case 14:
{
lean_object* v___x_988_; uint8_t v___x_989_; 
v___x_988_ = lean_unsigned_to_nat(1024u);
v___x_989_ = lean_nat_dec_le(v___x_988_, v_prec_812_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; 
v___x_990_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_912_ = v___x_990_;
goto v___jp_911_;
}
else
{
lean_object* v___x_991_; 
v___x_991_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_912_ = v___x_991_;
goto v___jp_911_;
}
}
case 15:
{
lean_object* v___x_992_; uint8_t v___x_993_; 
v___x_992_ = lean_unsigned_to_nat(1024u);
v___x_993_ = lean_nat_dec_le(v___x_992_, v_prec_812_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; 
v___x_994_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_919_ = v___x_994_;
goto v___jp_918_;
}
else
{
lean_object* v___x_995_; 
v___x_995_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_919_ = v___x_995_;
goto v___jp_918_;
}
}
default: 
{
lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_996_ = lean_unsigned_to_nat(1024u);
v___x_997_ = lean_nat_dec_le(v___x_996_, v_prec_812_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; 
v___x_998_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_926_ = v___x_998_;
goto v___jp_925_;
}
else
{
lean_object* v___x_999_; 
v___x_999_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_926_ = v___x_999_;
goto v___jp_925_;
}
}
}
v___jp_813_:
{
lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_815_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__1));
lean_inc(v___y_814_);
v___x_816_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_816_, 0, v___y_814_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = 0;
v___x_818_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set_uint8(v___x_818_, sizeof(void*)*1, v___x_817_);
v___x_819_ = l_Repr_addAppParen(v___x_818_, v_prec_812_);
return v___x_819_;
}
v___jp_820_:
{
lean_object* v___x_822_; lean_object* v___x_823_; uint8_t v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_822_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__3));
lean_inc(v___y_821_);
v___x_823_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_823_, 0, v___y_821_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
v___x_824_ = 0;
v___x_825_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_825_, 0, v___x_823_);
lean_ctor_set_uint8(v___x_825_, sizeof(void*)*1, v___x_824_);
v___x_826_ = l_Repr_addAppParen(v___x_825_, v_prec_812_);
return v___x_826_;
}
v___jp_827_:
{
lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_829_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__5));
lean_inc(v___y_828_);
v___x_830_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_830_, 0, v___y_828_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = 0;
v___x_832_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*1, v___x_831_);
v___x_833_ = l_Repr_addAppParen(v___x_832_, v_prec_812_);
return v___x_833_;
}
v___jp_834_:
{
lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_836_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__7));
lean_inc(v___y_835_);
v___x_837_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_837_, 0, v___y_835_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
v___x_838_ = 0;
v___x_839_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_839_, 0, v___x_837_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*1, v___x_838_);
v___x_840_ = l_Repr_addAppParen(v___x_839_, v_prec_812_);
return v___x_840_;
}
v___jp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; uint8_t v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_843_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__9));
lean_inc(v___y_842_);
v___x_844_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_844_, 0, v___y_842_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = 0;
v___x_846_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_846_, 0, v___x_844_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*1, v___x_845_);
v___x_847_ = l_Repr_addAppParen(v___x_846_, v_prec_812_);
return v___x_847_;
}
v___jp_848_:
{
lean_object* v___x_850_; lean_object* v___x_851_; uint8_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_850_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__11));
lean_inc(v___y_849_);
v___x_851_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_851_, 0, v___y_849_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
v___x_852_ = 0;
v___x_853_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_853_, 0, v___x_851_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*1, v___x_852_);
v___x_854_ = l_Repr_addAppParen(v___x_853_, v_prec_812_);
return v___x_854_;
}
v___jp_855_:
{
lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_857_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__13));
lean_inc(v___y_856_);
v___x_858_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_858_, 0, v___y_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = 0;
v___x_860_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_860_, 0, v___x_858_);
lean_ctor_set_uint8(v___x_860_, sizeof(void*)*1, v___x_859_);
v___x_861_ = l_Repr_addAppParen(v___x_860_, v_prec_812_);
return v___x_861_;
}
v___jp_862_:
{
lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_864_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__15));
lean_inc(v___y_863_);
v___x_865_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_865_, 0, v___y_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = 0;
v___x_867_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_867_, 0, v___x_865_);
lean_ctor_set_uint8(v___x_867_, sizeof(void*)*1, v___x_866_);
v___x_868_ = l_Repr_addAppParen(v___x_867_, v_prec_812_);
return v___x_868_;
}
v___jp_869_:
{
lean_object* v___x_871_; lean_object* v___x_872_; uint8_t v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_871_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__17));
lean_inc(v___y_870_);
v___x_872_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_872_, 0, v___y_870_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = 0;
v___x_874_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_874_, 0, v___x_872_);
lean_ctor_set_uint8(v___x_874_, sizeof(void*)*1, v___x_873_);
v___x_875_ = l_Repr_addAppParen(v___x_874_, v_prec_812_);
return v___x_875_;
}
v___jp_876_:
{
lean_object* v___x_878_; lean_object* v___x_879_; uint8_t v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_878_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__19));
lean_inc(v___y_877_);
v___x_879_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_879_, 0, v___y_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = 0;
v___x_881_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set_uint8(v___x_881_, sizeof(void*)*1, v___x_880_);
v___x_882_ = l_Repr_addAppParen(v___x_881_, v_prec_812_);
return v___x_882_;
}
v___jp_883_:
{
lean_object* v___x_885_; lean_object* v___x_886_; uint8_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_885_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__21));
lean_inc(v___y_884_);
v___x_886_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_886_, 0, v___y_884_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = 0;
v___x_888_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_888_, 0, v___x_886_);
lean_ctor_set_uint8(v___x_888_, sizeof(void*)*1, v___x_887_);
v___x_889_ = l_Repr_addAppParen(v___x_888_, v_prec_812_);
return v___x_889_;
}
v___jp_890_:
{
lean_object* v___x_892_; lean_object* v___x_893_; uint8_t v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_892_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__23));
lean_inc(v___y_891_);
v___x_893_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_893_, 0, v___y_891_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = 0;
v___x_895_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_895_, 0, v___x_893_);
lean_ctor_set_uint8(v___x_895_, sizeof(void*)*1, v___x_894_);
v___x_896_ = l_Repr_addAppParen(v___x_895_, v_prec_812_);
return v___x_896_;
}
v___jp_897_:
{
lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_899_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__25));
lean_inc(v___y_898_);
v___x_900_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_900_, 0, v___y_898_);
lean_ctor_set(v___x_900_, 1, v___x_899_);
v___x_901_ = 0;
v___x_902_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set_uint8(v___x_902_, sizeof(void*)*1, v___x_901_);
v___x_903_ = l_Repr_addAppParen(v___x_902_, v_prec_812_);
return v___x_903_;
}
v___jp_904_:
{
lean_object* v___x_906_; lean_object* v___x_907_; uint8_t v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_906_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__27));
lean_inc(v___y_905_);
v___x_907_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_907_, 0, v___y_905_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
v___x_908_ = 0;
v___x_909_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_909_, 0, v___x_907_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*1, v___x_908_);
v___x_910_ = l_Repr_addAppParen(v___x_909_, v_prec_812_);
return v___x_910_;
}
v___jp_911_:
{
lean_object* v___x_913_; lean_object* v___x_914_; uint8_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_913_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__29));
lean_inc(v___y_912_);
v___x_914_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_914_, 0, v___y_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = 0;
v___x_916_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set_uint8(v___x_916_, sizeof(void*)*1, v___x_915_);
v___x_917_ = l_Repr_addAppParen(v___x_916_, v_prec_812_);
return v___x_917_;
}
v___jp_918_:
{
lean_object* v___x_920_; lean_object* v___x_921_; uint8_t v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_920_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__31));
lean_inc(v___y_919_);
v___x_921_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_921_, 0, v___y_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = 0;
v___x_923_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set_uint8(v___x_923_, sizeof(void*)*1, v___x_922_);
v___x_924_ = l_Repr_addAppParen(v___x_923_, v_prec_812_);
return v___x_924_;
}
v___jp_925_:
{
lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_927_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___closed__33));
lean_inc(v___y_926_);
v___x_928_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_928_, 0, v___y_926_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = 0;
v___x_930_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*1, v___x_929_);
v___x_931_ = l_Repr_addAppParen(v___x_930_, v_prec_812_);
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr___boxed(lean_object* v_x_1000_, lean_object* v_prec_1001_){
_start:
{
uint8_t v_x_957__boxed_1002_; lean_object* v_res_1003_; 
v_x_957__boxed_1002_ = lean_unbox(v_x_1000_);
v_res_1003_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr(v_x_957__boxed_1002_, v_prec_1001_);
lean_dec(v_prec_1001_);
return v_res_1003_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ofNat(lean_object* v_n_1006_){
_start:
{
lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1007_ = lean_unsigned_to_nat(7u);
v___x_1008_ = lean_nat_dec_le(v_n_1006_, v___x_1007_);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = lean_unsigned_to_nat(11u);
v___x_1010_ = lean_nat_dec_le(v_n_1006_, v___x_1009_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; uint8_t v___x_1012_; 
v___x_1011_ = lean_unsigned_to_nat(13u);
v___x_1012_ = lean_nat_dec_le(v_n_1006_, v___x_1011_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = lean_unsigned_to_nat(14u);
v___x_1014_ = lean_nat_dec_le(v_n_1006_, v___x_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1015_ = lean_unsigned_to_nat(15u);
v___x_1016_ = lean_nat_dec_le(v_n_1006_, v___x_1015_);
if (v___x_1016_ == 0)
{
uint8_t v___x_1017_; 
v___x_1017_ = 16;
return v___x_1017_;
}
else
{
uint8_t v___x_1018_; 
v___x_1018_ = 15;
return v___x_1018_;
}
}
else
{
uint8_t v___x_1019_; 
v___x_1019_ = 14;
return v___x_1019_;
}
}
else
{
lean_object* v___x_1020_; uint8_t v___x_1021_; 
v___x_1020_ = lean_unsigned_to_nat(12u);
v___x_1021_ = lean_nat_dec_le(v_n_1006_, v___x_1020_);
if (v___x_1021_ == 0)
{
uint8_t v___x_1022_; 
v___x_1022_ = 13;
return v___x_1022_;
}
else
{
uint8_t v___x_1023_; 
v___x_1023_ = 12;
return v___x_1023_;
}
}
}
else
{
lean_object* v___x_1024_; uint8_t v___x_1025_; 
v___x_1024_ = lean_unsigned_to_nat(9u);
v___x_1025_ = lean_nat_dec_le(v_n_1006_, v___x_1024_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; uint8_t v___x_1027_; 
v___x_1026_ = lean_unsigned_to_nat(10u);
v___x_1027_ = lean_nat_dec_le(v_n_1006_, v___x_1026_);
if (v___x_1027_ == 0)
{
uint8_t v___x_1028_; 
v___x_1028_ = 11;
return v___x_1028_;
}
else
{
uint8_t v___x_1029_; 
v___x_1029_ = 10;
return v___x_1029_;
}
}
else
{
lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1030_ = lean_unsigned_to_nat(8u);
v___x_1031_ = lean_nat_dec_le(v_n_1006_, v___x_1030_);
if (v___x_1031_ == 0)
{
uint8_t v___x_1032_; 
v___x_1032_ = 9;
return v___x_1032_;
}
else
{
uint8_t v___x_1033_; 
v___x_1033_ = 8;
return v___x_1033_;
}
}
}
}
else
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = lean_unsigned_to_nat(3u);
v___x_1035_ = lean_nat_dec_le(v_n_1006_, v___x_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1036_ = lean_unsigned_to_nat(5u);
v___x_1037_ = lean_nat_dec_le(v_n_1006_, v___x_1036_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1038_ = lean_unsigned_to_nat(6u);
v___x_1039_ = lean_nat_dec_le(v_n_1006_, v___x_1038_);
if (v___x_1039_ == 0)
{
uint8_t v___x_1040_; 
v___x_1040_ = 7;
return v___x_1040_;
}
else
{
uint8_t v___x_1041_; 
v___x_1041_ = 6;
return v___x_1041_;
}
}
else
{
lean_object* v___x_1042_; uint8_t v___x_1043_; 
v___x_1042_ = lean_unsigned_to_nat(4u);
v___x_1043_ = lean_nat_dec_le(v_n_1006_, v___x_1042_);
if (v___x_1043_ == 0)
{
uint8_t v___x_1044_; 
v___x_1044_ = 5;
return v___x_1044_;
}
else
{
uint8_t v___x_1045_; 
v___x_1045_ = 4;
return v___x_1045_;
}
}
}
else
{
lean_object* v___x_1046_; uint8_t v___x_1047_; 
v___x_1046_ = lean_unsigned_to_nat(1u);
v___x_1047_ = lean_nat_dec_le(v_n_1006_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; uint8_t v___x_1049_; 
v___x_1048_ = lean_unsigned_to_nat(2u);
v___x_1049_ = lean_nat_dec_le(v_n_1006_, v___x_1048_);
if (v___x_1049_ == 0)
{
uint8_t v___x_1050_; 
v___x_1050_ = 3;
return v___x_1050_;
}
else
{
uint8_t v___x_1051_; 
v___x_1051_ = 2;
return v___x_1051_;
}
}
else
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1052_ = lean_unsigned_to_nat(0u);
v___x_1053_ = lean_nat_dec_le(v_n_1006_, v___x_1052_);
if (v___x_1053_ == 0)
{
uint8_t v___x_1054_; 
v___x_1054_ = 1;
return v___x_1054_;
}
else
{
uint8_t v___x_1055_; 
v___x_1055_ = 0;
return v___x_1055_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ofNat___boxed(lean_object* v_n_1056_){
_start:
{
uint8_t v_res_1057_; lean_object* v_r_1058_; 
v_res_1057_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ofNat(v_n_1056_);
lean_dec(v_n_1056_);
v_r_1058_ = lean_box(v_res_1057_);
return v_r_1058_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqBinOp(uint8_t v_x_1059_, uint8_t v_y_1060_){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1061_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx(v_x_1059_);
v___x_1062_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_BinOp_ctorIdx(v_y_1060_);
v___x_1063_ = lean_nat_dec_eq(v___x_1061_, v___x_1062_);
lean_dec(v___x_1062_);
lean_dec(v___x_1061_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqBinOp___boxed(lean_object* v_x_1064_, lean_object* v_y_1065_){
_start:
{
uint8_t v_x_13__boxed_1066_; uint8_t v_y_14__boxed_1067_; uint8_t v_res_1068_; lean_object* v_r_1069_; 
v_x_13__boxed_1066_ = lean_unbox(v_x_1064_);
v_y_14__boxed_1067_ = lean_unbox(v_y_1065_);
v_res_1068_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqBinOp(v_x_13__boxed_1066_, v_y_14__boxed_1067_);
v_r_1069_ = lean_box(v_res_1068_);
return v_r_1069_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx(uint8_t v_x_1070_){
_start:
{
switch(v_x_1070_)
{
case 0:
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_unsigned_to_nat(0u);
return v___x_1071_;
}
case 1:
{
lean_object* v___x_1072_; 
v___x_1072_ = lean_unsigned_to_nat(1u);
return v___x_1072_;
}
default: 
{
lean_object* v___x_1073_; 
v___x_1073_ = lean_unsigned_to_nat(2u);
return v___x_1073_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx___boxed(lean_object* v_x_1074_){
_start:
{
uint8_t v_x_boxed_1075_; lean_object* v_res_1076_; 
v_x_boxed_1075_ = lean_unbox(v_x_1074_);
v_res_1076_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx(v_x_boxed_1075_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_toCtorIdx(uint8_t v_x_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx(v_x_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_toCtorIdx___boxed(lean_object* v_x_1079_){
_start:
{
uint8_t v_x_4__boxed_1080_; lean_object* v_res_1081_; 
v_x_4__boxed_1080_ = lean_unbox(v_x_1079_);
v_res_1081_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_toCtorIdx(v_x_4__boxed_1080_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim___redArg(lean_object* v_k_1082_){
_start:
{
lean_inc(v_k_1082_);
return v_k_1082_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim___redArg___boxed(lean_object* v_k_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim___redArg(v_k_1083_);
lean_dec(v_k_1083_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim(lean_object* v_motive_1085_, lean_object* v_ctorIdx_1086_, uint8_t v_t_1087_, lean_object* v_h_1088_, lean_object* v_k_1089_){
_start:
{
lean_inc(v_k_1089_);
return v_k_1089_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim___boxed(lean_object* v_motive_1090_, lean_object* v_ctorIdx_1091_, lean_object* v_t_1092_, lean_object* v_h_1093_, lean_object* v_k_1094_){
_start:
{
uint8_t v_t_boxed_1095_; lean_object* v_res_1096_; 
v_t_boxed_1095_ = lean_unbox(v_t_1092_);
v_res_1096_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorElim(v_motive_1090_, v_ctorIdx_1091_, v_t_boxed_1095_, v_h_1093_, v_k_1094_);
lean_dec(v_k_1094_);
lean_dec(v_ctorIdx_1091_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim___redArg(lean_object* v_outgoing_1097_){
_start:
{
lean_inc(v_outgoing_1097_);
return v_outgoing_1097_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim___redArg___boxed(lean_object* v_outgoing_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim___redArg(v_outgoing_1098_);
lean_dec(v_outgoing_1098_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim(lean_object* v_motive_1100_, uint8_t v_t_1101_, lean_object* v_h_1102_, lean_object* v_outgoing_1103_){
_start:
{
lean_inc(v_outgoing_1103_);
return v_outgoing_1103_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim___boxed(lean_object* v_motive_1104_, lean_object* v_t_1105_, lean_object* v_h_1106_, lean_object* v_outgoing_1107_){
_start:
{
uint8_t v_t_boxed_1108_; lean_object* v_res_1109_; 
v_t_boxed_1108_ = lean_unbox(v_t_1105_);
v_res_1109_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_outgoing_elim(v_motive_1104_, v_t_boxed_1108_, v_h_1106_, v_outgoing_1107_);
lean_dec(v_outgoing_1107_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim___redArg(lean_object* v_incoming_1110_){
_start:
{
lean_inc(v_incoming_1110_);
return v_incoming_1110_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim___redArg___boxed(lean_object* v_incoming_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim___redArg(v_incoming_1111_);
lean_dec(v_incoming_1111_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim(lean_object* v_motive_1113_, uint8_t v_t_1114_, lean_object* v_h_1115_, lean_object* v_incoming_1116_){
_start:
{
lean_inc(v_incoming_1116_);
return v_incoming_1116_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim___boxed(lean_object* v_motive_1117_, lean_object* v_t_1118_, lean_object* v_h_1119_, lean_object* v_incoming_1120_){
_start:
{
uint8_t v_t_boxed_1121_; lean_object* v_res_1122_; 
v_t_boxed_1121_ = lean_unbox(v_t_1118_);
v_res_1122_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_incoming_elim(v_motive_1117_, v_t_boxed_1121_, v_h_1119_, v_incoming_1120_);
lean_dec(v_incoming_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim___redArg(lean_object* v_undirected_1123_){
_start:
{
lean_inc(v_undirected_1123_);
return v_undirected_1123_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim___redArg___boxed(lean_object* v_undirected_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim___redArg(v_undirected_1124_);
lean_dec(v_undirected_1124_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim(lean_object* v_motive_1126_, uint8_t v_t_1127_, lean_object* v_h_1128_, lean_object* v_undirected_1129_){
_start:
{
lean_inc(v_undirected_1129_);
return v_undirected_1129_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim___boxed(lean_object* v_motive_1130_, lean_object* v_t_1131_, lean_object* v_h_1132_, lean_object* v_undirected_1133_){
_start:
{
uint8_t v_t_boxed_1134_; lean_object* v_res_1135_; 
v_t_boxed_1134_ = lean_unbox(v_t_1131_);
v_res_1135_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_undirected_elim(v_motive_1130_, v_t_boxed_1134_, v_h_1132_, v_undirected_1133_);
lean_dec(v_undirected_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr(uint8_t v_x_1145_, lean_object* v_prec_1146_){
_start:
{
lean_object* v___y_1148_; lean_object* v___y_1155_; lean_object* v___y_1162_; 
switch(v_x_1145_)
{
case 0:
{
lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1168_ = lean_unsigned_to_nat(1024u);
v___x_1169_ = lean_nat_dec_le(v___x_1168_, v_prec_1146_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1148_ = v___x_1170_;
goto v___jp_1147_;
}
else
{
lean_object* v___x_1171_; 
v___x_1171_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1148_ = v___x_1171_;
goto v___jp_1147_;
}
}
case 1:
{
lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1172_ = lean_unsigned_to_nat(1024u);
v___x_1173_ = lean_nat_dec_le(v___x_1172_, v_prec_1146_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; 
v___x_1174_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1155_ = v___x_1174_;
goto v___jp_1154_;
}
else
{
lean_object* v___x_1175_; 
v___x_1175_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1155_ = v___x_1175_;
goto v___jp_1154_;
}
}
default: 
{
lean_object* v___x_1176_; uint8_t v___x_1177_; 
v___x_1176_ = lean_unsigned_to_nat(1024u);
v___x_1177_ = lean_nat_dec_le(v___x_1176_, v_prec_1146_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1162_ = v___x_1178_;
goto v___jp_1161_;
}
else
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1162_ = v___x_1179_;
goto v___jp_1161_;
}
}
}
v___jp_1147_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1149_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__1));
lean_inc(v___y_1148_);
v___x_1150_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___y_1148_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = 0;
v___x_1152_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1152_, 0, v___x_1150_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*1, v___x_1151_);
v___x_1153_ = l_Repr_addAppParen(v___x_1152_, v_prec_1146_);
return v___x_1153_;
}
v___jp_1154_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1156_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__3));
lean_inc(v___y_1155_);
v___x_1157_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___y_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = 0;
v___x_1159_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1159_, 0, v___x_1157_);
lean_ctor_set_uint8(v___x_1159_, sizeof(void*)*1, v___x_1158_);
v___x_1160_ = l_Repr_addAppParen(v___x_1159_, v_prec_1146_);
return v___x_1160_;
}
v___jp_1161_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1163_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___closed__5));
lean_inc(v___y_1162_);
v___x_1164_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___y_1162_);
lean_ctor_set(v___x_1164_, 1, v___x_1163_);
v___x_1165_ = 0;
v___x_1166_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1166_, 0, v___x_1164_);
lean_ctor_set_uint8(v___x_1166_, sizeof(void*)*1, v___x_1165_);
v___x_1167_ = l_Repr_addAppParen(v___x_1166_, v_prec_1146_);
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr___boxed(lean_object* v_x_1180_, lean_object* v_prec_1181_){
_start:
{
uint8_t v_x_173__boxed_1182_; lean_object* v_res_1183_; 
v_x_173__boxed_1182_ = lean_unbox(v_x_1180_);
v_res_1183_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprDirection_repr(v_x_173__boxed_1182_, v_prec_1181_);
lean_dec(v_prec_1181_);
return v_res_1183_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ofNat(lean_object* v_n_1186_){
_start:
{
lean_object* v___x_1187_; uint8_t v___x_1188_; 
v___x_1187_ = lean_unsigned_to_nat(0u);
v___x_1188_ = lean_nat_dec_le(v_n_1186_, v___x_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; uint8_t v___x_1190_; 
v___x_1189_ = lean_unsigned_to_nat(1u);
v___x_1190_ = lean_nat_dec_le(v_n_1186_, v___x_1189_);
if (v___x_1190_ == 0)
{
uint8_t v___x_1191_; 
v___x_1191_ = 2;
return v___x_1191_;
}
else
{
uint8_t v___x_1192_; 
v___x_1192_ = 1;
return v___x_1192_;
}
}
else
{
uint8_t v___x_1193_; 
v___x_1193_ = 0;
return v___x_1193_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ofNat___boxed(lean_object* v_n_1194_){
_start:
{
uint8_t v_res_1195_; lean_object* v_r_1196_; 
v_res_1195_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ofNat(v_n_1194_);
lean_dec(v_n_1194_);
v_r_1196_ = lean_box(v_res_1195_);
return v_r_1196_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqDirection(uint8_t v_x_1197_, uint8_t v_y_1198_){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; uint8_t v___x_1201_; 
v___x_1199_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx(v_x_1197_);
v___x_1200_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Direction_ctorIdx(v_y_1198_);
v___x_1201_ = lean_nat_dec_eq(v___x_1199_, v___x_1200_);
lean_dec(v___x_1200_);
lean_dec(v___x_1199_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqDirection___boxed(lean_object* v_x_1202_, lean_object* v_y_1203_){
_start:
{
uint8_t v_x_13__boxed_1204_; uint8_t v_y_14__boxed_1205_; uint8_t v_res_1206_; lean_object* v_r_1207_; 
v_x_13__boxed_1204_ = lean_unbox(v_x_1202_);
v_y_14__boxed_1205_ = lean_unbox(v_y_1203_);
v_res_1206_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqDirection(v_x_13__boxed_1204_, v_y_14__boxed_1205_);
v_r_1207_ = lean_box(v_res_1206_);
return v_r_1207_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorIdx(lean_object* v_x_1208_){
_start:
{
switch(lean_obj_tag(v_x_1208_))
{
case 0:
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_unsigned_to_nat(0u);
return v___x_1209_;
}
case 1:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_unsigned_to_nat(1u);
return v___x_1210_;
}
case 2:
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_unsigned_to_nat(2u);
return v___x_1211_;
}
case 3:
{
lean_object* v___x_1212_; 
v___x_1212_ = lean_unsigned_to_nat(3u);
return v___x_1212_;
}
case 4:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_unsigned_to_nat(4u);
return v___x_1213_;
}
case 5:
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_unsigned_to_nat(5u);
return v___x_1214_;
}
case 6:
{
lean_object* v___x_1215_; 
v___x_1215_ = lean_unsigned_to_nat(6u);
return v___x_1215_;
}
case 7:
{
lean_object* v___x_1216_; 
v___x_1216_ = lean_unsigned_to_nat(7u);
return v___x_1216_;
}
case 8:
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_unsigned_to_nat(8u);
return v___x_1217_;
}
case 9:
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_unsigned_to_nat(9u);
return v___x_1218_;
}
case 10:
{
lean_object* v___x_1219_; 
v___x_1219_ = lean_unsigned_to_nat(10u);
return v___x_1219_;
}
case 11:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_unsigned_to_nat(11u);
return v___x_1220_;
}
case 12:
{
lean_object* v___x_1221_; 
v___x_1221_ = lean_unsigned_to_nat(12u);
return v___x_1221_;
}
case 13:
{
lean_object* v___x_1222_; 
v___x_1222_ = lean_unsigned_to_nat(13u);
return v___x_1222_;
}
case 14:
{
lean_object* v___x_1223_; 
v___x_1223_ = lean_unsigned_to_nat(14u);
return v___x_1223_;
}
case 15:
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_unsigned_to_nat(15u);
return v___x_1224_;
}
case 16:
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_unsigned_to_nat(16u);
return v___x_1225_;
}
case 17:
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_unsigned_to_nat(17u);
return v___x_1226_;
}
case 18:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_unsigned_to_nat(18u);
return v___x_1227_;
}
case 19:
{
lean_object* v___x_1228_; 
v___x_1228_ = lean_unsigned_to_nat(19u);
return v___x_1228_;
}
case 20:
{
lean_object* v___x_1229_; 
v___x_1229_ = lean_unsigned_to_nat(20u);
return v___x_1229_;
}
default: 
{
lean_object* v___x_1230_; 
v___x_1230_ = lean_unsigned_to_nat(21u);
return v___x_1230_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorIdx___boxed(lean_object* v_x_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorIdx(v_x_1231_);
lean_dec(v_x_1231_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(lean_object* v_t_1233_, lean_object* v_k_1234_){
_start:
{
switch(lean_obj_tag(v_t_1233_))
{
case 0:
{
lean_object* v_name_1235_; lean_object* v___x_1236_; 
v_name_1235_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_name_1235_);
lean_dec_ref_known(v_t_1233_, 1);
v___x_1236_ = lean_apply_1(v_k_1234_, v_name_1235_);
return v___x_1236_;
}
case 1:
{
lean_object* v_name_1237_; lean_object* v___x_1238_; 
v_name_1237_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_name_1237_);
lean_dec_ref_known(v_t_1233_, 1);
v___x_1238_ = lean_apply_1(v_k_1234_, v_name_1237_);
return v___x_1238_;
}
case 2:
{
return v_k_1234_;
}
case 3:
{
uint8_t v_value_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v_value_1239_ = lean_ctor_get_uint8(v_t_1233_, 0);
lean_dec_ref_known(v_t_1233_, 0);
v___x_1240_ = lean_box(v_value_1239_);
v___x_1241_ = lean_apply_1(v_k_1234_, v___x_1240_);
return v___x_1241_;
}
case 5:
{
lean_object* v_canonical_1242_; lean_object* v___x_1243_; 
v_canonical_1242_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_canonical_1242_);
lean_dec_ref_known(v_t_1233_, 1);
v___x_1243_ = lean_apply_1(v_k_1234_, v_canonical_1242_);
return v___x_1243_;
}
case 6:
{
lean_object* v_value_1244_; lean_object* v___x_1245_; 
v_value_1244_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_value_1244_);
lean_dec_ref_known(v_t_1233_, 1);
v___x_1245_ = lean_apply_1(v_k_1234_, v_value_1244_);
return v___x_1245_;
}
case 9:
{
lean_object* v_receiver_1246_; lean_object* v_key_1247_; lean_object* v___x_1248_; 
v_receiver_1246_ = lean_ctor_get(v_t_1233_, 0);
lean_inc(v_receiver_1246_);
v_key_1247_ = lean_ctor_get(v_t_1233_, 1);
lean_inc_ref(v_key_1247_);
lean_dec_ref_known(v_t_1233_, 2);
v___x_1248_ = lean_apply_2(v_k_1234_, v_receiver_1246_, v_key_1247_);
return v___x_1248_;
}
case 14:
{
uint8_t v_operator_1249_; lean_object* v_left_1250_; lean_object* v_right_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_operator_1249_ = lean_ctor_get_uint8(v_t_1233_, sizeof(void*)*2);
v_left_1250_ = lean_ctor_get(v_t_1233_, 0);
lean_inc(v_left_1250_);
v_right_1251_ = lean_ctor_get(v_t_1233_, 1);
lean_inc(v_right_1251_);
lean_dec_ref_known(v_t_1233_, 2);
v___x_1252_ = lean_box(v_operator_1249_);
v___x_1253_ = lean_apply_3(v_k_1234_, v___x_1252_, v_left_1250_, v_right_1251_);
return v___x_1253_;
}
case 15:
{
uint8_t v_name_1254_; uint8_t v_distinct_1255_; lean_object* v_arguments_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v_name_1254_ = lean_ctor_get_uint8(v_t_1233_, sizeof(void*)*1);
v_distinct_1255_ = lean_ctor_get_uint8(v_t_1233_, sizeof(void*)*1 + 1);
v_arguments_1256_ = lean_ctor_get(v_t_1233_, 0);
lean_inc(v_arguments_1256_);
lean_dec_ref_known(v_t_1233_, 1);
v___x_1257_ = lean_box(v_name_1254_);
v___x_1258_ = lean_box(v_distinct_1255_);
v___x_1259_ = lean_apply_3(v_k_1234_, v___x_1257_, v___x_1258_, v_arguments_1256_);
return v___x_1259_;
}
case 16:
{
lean_object* v_branches_1260_; lean_object* v_elseBranch_1261_; lean_object* v___x_1262_; 
v_branches_1260_ = lean_ctor_get(v_t_1233_, 0);
lean_inc(v_branches_1260_);
v_elseBranch_1261_ = lean_ctor_get(v_t_1233_, 1);
lean_inc(v_elseBranch_1261_);
lean_dec_ref_known(v_t_1233_, 2);
v___x_1262_ = lean_apply_2(v_k_1234_, v_branches_1260_, v_elseBranch_1261_);
return v___x_1262_;
}
case 17:
{
lean_object* v_binder_1263_; lean_object* v_source_1264_; lean_object* v_predicate_1265_; lean_object* v_projection_1266_; lean_object* v___x_1267_; 
v_binder_1263_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_binder_1263_);
v_source_1264_ = lean_ctor_get(v_t_1233_, 1);
lean_inc(v_source_1264_);
v_predicate_1265_ = lean_ctor_get(v_t_1233_, 2);
lean_inc(v_predicate_1265_);
v_projection_1266_ = lean_ctor_get(v_t_1233_, 3);
lean_inc(v_projection_1266_);
lean_dec_ref_known(v_t_1233_, 4);
v___x_1267_ = lean_apply_4(v_k_1234_, v_binder_1263_, v_source_1264_, v_predicate_1265_, v_projection_1266_);
return v___x_1267_;
}
case 18:
{
uint8_t v_quantifier_1268_; lean_object* v_binder_1269_; lean_object* v_source_1270_; lean_object* v_predicate_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_quantifier_1268_ = lean_ctor_get_uint8(v_t_1233_, sizeof(void*)*3);
v_binder_1269_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_binder_1269_);
v_source_1270_ = lean_ctor_get(v_t_1233_, 1);
lean_inc(v_source_1270_);
v_predicate_1271_ = lean_ctor_get(v_t_1233_, 2);
lean_inc(v_predicate_1271_);
lean_dec_ref_known(v_t_1233_, 3);
v___x_1272_ = lean_box(v_quantifier_1268_);
v___x_1273_ = lean_apply_4(v_k_1234_, v___x_1272_, v_binder_1269_, v_source_1270_, v_predicate_1271_);
return v___x_1273_;
}
case 19:
{
lean_object* v_accumulator_1274_; lean_object* v_initial_1275_; lean_object* v_binder_1276_; lean_object* v_source_1277_; lean_object* v_step_1278_; lean_object* v___x_1279_; 
v_accumulator_1274_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_accumulator_1274_);
v_initial_1275_ = lean_ctor_get(v_t_1233_, 1);
lean_inc(v_initial_1275_);
v_binder_1276_ = lean_ctor_get(v_t_1233_, 2);
lean_inc_ref(v_binder_1276_);
v_source_1277_ = lean_ctor_get(v_t_1233_, 3);
lean_inc(v_source_1277_);
v_step_1278_ = lean_ctor_get(v_t_1233_, 4);
lean_inc(v_step_1278_);
lean_dec_ref_known(v_t_1233_, 5);
v___x_1279_ = lean_apply_5(v_k_1234_, v_accumulator_1274_, v_initial_1275_, v_binder_1276_, v_source_1277_, v_step_1278_);
return v___x_1279_;
}
case 20:
{
lean_object* v_query_1280_; lean_object* v___x_1281_; 
v_query_1280_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_query_1280_);
lean_dec_ref_known(v_t_1233_, 1);
v___x_1281_ = lean_apply_1(v_k_1234_, v_query_1280_);
return v___x_1281_;
}
case 21:
{
lean_object* v_query_1282_; lean_object* v___x_1283_; 
v_query_1282_ = lean_ctor_get(v_t_1233_, 0);
lean_inc_ref(v_query_1282_);
lean_dec_ref_known(v_t_1233_, 1);
v___x_1283_ = lean_apply_1(v_k_1234_, v_query_1282_);
return v___x_1283_;
}
default: 
{
lean_object* v_value_1284_; lean_object* v___x_1285_; 
v_value_1284_ = lean_ctor_get(v_t_1233_, 0);
lean_inc(v_value_1284_);
lean_dec(v_t_1233_);
v___x_1285_ = lean_apply_1(v_k_1234_, v_value_1284_);
return v___x_1285_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim(lean_object* v_motive__1_1286_, lean_object* v_ctorIdx_1287_, lean_object* v_t_1288_, lean_object* v_h_1289_, lean_object* v_k_1290_){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1288_, v_k_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___boxed(lean_object* v_motive__1_1292_, lean_object* v_ctorIdx_1293_, lean_object* v_t_1294_, lean_object* v_h_1295_, lean_object* v_k_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim(v_motive__1_1292_, v_ctorIdx_1293_, v_t_1294_, v_h_1295_, v_k_1296_);
lean_dec(v_ctorIdx_1293_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_variable_elim___redArg(lean_object* v_t_1298_, lean_object* v_variable_1299_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1298_, v_variable_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_variable_elim(lean_object* v_motive__1_1301_, lean_object* v_t_1302_, lean_object* v_h_1303_, lean_object* v_variable_1304_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1302_, v_variable_1304_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_parameter_elim___redArg(lean_object* v_t_1306_, lean_object* v_parameter_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1306_, v_parameter_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_parameter_elim(lean_object* v_motive__1_1309_, lean_object* v_t_1310_, lean_object* v_h_1311_, lean_object* v_parameter_1312_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1310_, v_parameter_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_nullLit_elim___redArg(lean_object* v_t_1314_, lean_object* v_nullLit_1315_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1314_, v_nullLit_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_nullLit_elim(lean_object* v_motive__1_1317_, lean_object* v_t_1318_, lean_object* v_h_1319_, lean_object* v_nullLit_1320_){
_start:
{
lean_object* v___x_1321_; 
v___x_1321_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1318_, v_nullLit_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_boolLit_elim___redArg(lean_object* v_t_1322_, lean_object* v_boolLit_1323_){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1322_, v_boolLit_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_boolLit_elim(lean_object* v_motive__1_1325_, lean_object* v_t_1326_, lean_object* v_h_1327_, lean_object* v_boolLit_1328_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1326_, v_boolLit_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_integerLit_elim___redArg(lean_object* v_t_1330_, lean_object* v_integerLit_1331_){
_start:
{
lean_object* v___x_1332_; 
v___x_1332_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1330_, v_integerLit_1331_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_integerLit_elim(lean_object* v_motive__1_1333_, lean_object* v_t_1334_, lean_object* v_h_1335_, lean_object* v_integerLit_1336_){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1334_, v_integerLit_1336_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_floatLit_elim___redArg(lean_object* v_t_1338_, lean_object* v_floatLit_1339_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1338_, v_floatLit_1339_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_floatLit_elim(lean_object* v_motive__1_1341_, lean_object* v_t_1342_, lean_object* v_h_1343_, lean_object* v_floatLit_1344_){
_start:
{
lean_object* v___x_1345_; 
v___x_1345_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1342_, v_floatLit_1344_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_stringLit_elim___redArg(lean_object* v_t_1346_, lean_object* v_stringLit_1347_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1346_, v_stringLit_1347_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_stringLit_elim(lean_object* v_motive__1_1349_, lean_object* v_t_1350_, lean_object* v_h_1351_, lean_object* v_stringLit_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1350_, v_stringLit_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_list_elim___redArg(lean_object* v_t_1354_, lean_object* v_list_1355_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1354_, v_list_1355_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_list_elim(lean_object* v_motive__1_1357_, lean_object* v_t_1358_, lean_object* v_h_1359_, lean_object* v_list_1360_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1358_, v_list_1360_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_map_elim___redArg(lean_object* v_t_1362_, lean_object* v_map_1363_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1362_, v_map_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_map_elim(lean_object* v_motive__1_1365_, lean_object* v_t_1366_, lean_object* v_h_1367_, lean_object* v_map_1368_){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1366_, v_map_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_property_elim___redArg(lean_object* v_t_1370_, lean_object* v_property_1371_){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1370_, v_property_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_property_elim(lean_object* v_motive__1_1373_, lean_object* v_t_1374_, lean_object* v_h_1375_, lean_object* v_property_1376_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1374_, v_property_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_not_elim___redArg(lean_object* v_t_1378_, lean_object* v_not_1379_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1378_, v_not_1379_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_not_elim(lean_object* v_motive__1_1381_, lean_object* v_t_1382_, lean_object* v_h_1383_, lean_object* v_not_1384_){
_start:
{
lean_object* v___x_1385_; 
v___x_1385_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1382_, v_not_1384_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_negate_elim___redArg(lean_object* v_t_1386_, lean_object* v_negate_1387_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1386_, v_negate_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_negate_elim(lean_object* v_motive__1_1389_, lean_object* v_t_1390_, lean_object* v_h_1391_, lean_object* v_negate_1392_){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1390_, v_negate_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNull_elim___redArg(lean_object* v_t_1394_, lean_object* v_isNull_1395_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1394_, v_isNull_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNull_elim(lean_object* v_motive__1_1397_, lean_object* v_t_1398_, lean_object* v_h_1399_, lean_object* v_isNull_1400_){
_start:
{
lean_object* v___x_1401_; 
v___x_1401_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1398_, v_isNull_1400_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNotNull_elim___redArg(lean_object* v_t_1402_, lean_object* v_isNotNull_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1402_, v_isNotNull_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_isNotNull_elim(lean_object* v_motive__1_1405_, lean_object* v_t_1406_, lean_object* v_h_1407_, lean_object* v_isNotNull_1408_){
_start:
{
lean_object* v___x_1409_; 
v___x_1409_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1406_, v_isNotNull_1408_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_binary_elim___redArg(lean_object* v_t_1410_, lean_object* v_binary_1411_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1410_, v_binary_1411_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_binary_elim(lean_object* v_motive__1_1413_, lean_object* v_t_1414_, lean_object* v_h_1415_, lean_object* v_binary_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1414_, v_binary_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_function_elim___redArg(lean_object* v_t_1418_, lean_object* v_function_1419_){
_start:
{
lean_object* v___x_1420_; 
v___x_1420_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1418_, v_function_1419_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_function_elim(lean_object* v_motive__1_1421_, lean_object* v_t_1422_, lean_object* v_h_1423_, lean_object* v_function_1424_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1422_, v_function_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_caseExpr_elim___redArg(lean_object* v_t_1426_, lean_object* v_caseExpr_1427_){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1426_, v_caseExpr_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_caseExpr_elim(lean_object* v_motive__1_1429_, lean_object* v_t_1430_, lean_object* v_h_1431_, lean_object* v_caseExpr_1432_){
_start:
{
lean_object* v___x_1433_; 
v___x_1433_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1430_, v_caseExpr_1432_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_comprehension_elim___redArg(lean_object* v_t_1434_, lean_object* v_comprehension_1435_){
_start:
{
lean_object* v___x_1436_; 
v___x_1436_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1434_, v_comprehension_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_comprehension_elim(lean_object* v_motive__1_1437_, lean_object* v_t_1438_, lean_object* v_h_1439_, lean_object* v_comprehension_1440_){
_start:
{
lean_object* v___x_1441_; 
v___x_1441_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1438_, v_comprehension_1440_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_quantified_elim___redArg(lean_object* v_t_1442_, lean_object* v_quantified_1443_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1442_, v_quantified_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_quantified_elim(lean_object* v_motive__1_1445_, lean_object* v_t_1446_, lean_object* v_h_1447_, lean_object* v_quantified_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1446_, v_quantified_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_reduce_elim___redArg(lean_object* v_t_1450_, lean_object* v_reduce_1451_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1450_, v_reduce_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_reduce_elim(lean_object* v_motive__1_1453_, lean_object* v_t_1454_, lean_object* v_h_1455_, lean_object* v_reduce_1456_){
_start:
{
lean_object* v___x_1457_; 
v___x_1457_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1454_, v_reduce_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_existsSubquery_elim___redArg(lean_object* v_t_1458_, lean_object* v_existsSubquery_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1458_, v_existsSubquery_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_existsSubquery_elim(lean_object* v_motive__1_1461_, lean_object* v_t_1462_, lean_object* v_h_1463_, lean_object* v_existsSubquery_1464_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1462_, v_existsSubquery_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_collectSubquery_elim___redArg(lean_object* v_t_1466_, lean_object* v_collectSubquery_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1466_, v_collectSubquery_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_collectSubquery_elim(lean_object* v_motive__1_1469_, lean_object* v_t_1470_, lean_object* v_h_1471_, lean_object* v_collectSubquery_1472_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Expr_ctorElim___redArg(v_t_1470_, v_collectSubquery_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorIdx(lean_object* v_x_1474_){
_start:
{
switch(lean_obj_tag(v_x_1474_))
{
case 0:
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_unsigned_to_nat(0u);
return v___x_1475_;
}
case 1:
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_unsigned_to_nat(1u);
return v___x_1476_;
}
case 2:
{
lean_object* v___x_1477_; 
v___x_1477_ = lean_unsigned_to_nat(2u);
return v___x_1477_;
}
default: 
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_unsigned_to_nat(3u);
return v___x_1478_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorIdx___boxed(lean_object* v_x_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorIdx(v_x_1479_);
lean_dec_ref(v_x_1479_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(lean_object* v_t_1481_, lean_object* v_k_1482_){
_start:
{
switch(lean_obj_tag(v_t_1481_))
{
case 0:
{
lean_object* v_pattern_1483_; lean_object* v_whereExpr_1484_; lean_object* v___x_1485_; 
v_pattern_1483_ = lean_ctor_get(v_t_1481_, 0);
lean_inc_ref(v_pattern_1483_);
v_whereExpr_1484_ = lean_ctor_get(v_t_1481_, 1);
lean_inc(v_whereExpr_1484_);
lean_dec_ref_known(v_t_1481_, 2);
v___x_1485_ = lean_apply_2(v_k_1482_, v_pattern_1483_, v_whereExpr_1484_);
return v___x_1485_;
}
case 1:
{
uint8_t v_distinct_1486_; lean_object* v_items_1487_; lean_object* v_whereExpr_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v_distinct_1486_ = lean_ctor_get_uint8(v_t_1481_, sizeof(void*)*2);
v_items_1487_ = lean_ctor_get(v_t_1481_, 0);
lean_inc(v_items_1487_);
v_whereExpr_1488_ = lean_ctor_get(v_t_1481_, 1);
lean_inc(v_whereExpr_1488_);
lean_dec_ref_known(v_t_1481_, 2);
v___x_1489_ = lean_box(v_distinct_1486_);
v___x_1490_ = lean_apply_3(v_k_1482_, v___x_1489_, v_items_1487_, v_whereExpr_1488_);
return v___x_1490_;
}
case 2:
{
lean_object* v_expression_1491_; lean_object* v_alias_1492_; lean_object* v___x_1493_; 
v_expression_1491_ = lean_ctor_get(v_t_1481_, 0);
lean_inc(v_expression_1491_);
v_alias_1492_ = lean_ctor_get(v_t_1481_, 1);
lean_inc_ref(v_alias_1492_);
lean_dec_ref_known(v_t_1481_, 2);
v___x_1493_ = lean_apply_2(v_k_1482_, v_expression_1491_, v_alias_1492_);
return v___x_1493_;
}
default: 
{
uint8_t v_distinct_1494_; lean_object* v_items_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v_distinct_1494_ = lean_ctor_get_uint8(v_t_1481_, sizeof(void*)*1);
v_items_1495_ = lean_ctor_get(v_t_1481_, 0);
lean_inc(v_items_1495_);
lean_dec_ref_known(v_t_1481_, 1);
v___x_1496_ = lean_box(v_distinct_1494_);
v___x_1497_ = lean_apply_2(v_k_1482_, v___x_1496_, v_items_1495_);
return v___x_1497_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim(lean_object* v_motive__7_1498_, lean_object* v_ctorIdx_1499_, lean_object* v_t_1500_, lean_object* v_h_1501_, lean_object* v_k_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1500_, v_k_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___boxed(lean_object* v_motive__7_1504_, lean_object* v_ctorIdx_1505_, lean_object* v_t_1506_, lean_object* v_h_1507_, lean_object* v_k_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim(v_motive__7_1504_, v_ctorIdx_1505_, v_t_1506_, v_h_1507_, v_k_1508_);
lean_dec(v_ctorIdx_1505_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_matchClause_elim___redArg(lean_object* v_t_1510_, lean_object* v_matchClause_1511_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1510_, v_matchClause_1511_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_matchClause_elim(lean_object* v_motive__7_1513_, lean_object* v_t_1514_, lean_object* v_h_1515_, lean_object* v_matchClause_1516_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1514_, v_matchClause_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_withClause_elim___redArg(lean_object* v_t_1518_, lean_object* v_withClause_1519_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1518_, v_withClause_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_withClause_elim(lean_object* v_motive__7_1521_, lean_object* v_t_1522_, lean_object* v_h_1523_, lean_object* v_withClause_1524_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1522_, v_withClause_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_unwindClause_elim___redArg(lean_object* v_t_1526_, lean_object* v_unwindClause_1527_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1526_, v_unwindClause_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_unwindClause_elim(lean_object* v_motive__7_1529_, lean_object* v_t_1530_, lean_object* v_h_1531_, lean_object* v_unwindClause_1532_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1530_, v_unwindClause_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_returnClause_elim___redArg(lean_object* v_t_1534_, lean_object* v_returnClause_1535_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1534_, v_returnClause_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_returnClause_elim(lean_object* v_motive__7_1537_, lean_object* v_t_1538_, lean_object* v_h_1539_, lean_object* v_returnClause_1540_){
_start:
{
lean_object* v___x_1541_; 
v___x_1541_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Clause_ctorElim___redArg(v_t_1538_, v_returnClause_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx(uint8_t v_x_1542_){
_start:
{
switch(v_x_1542_)
{
case 0:
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_unsigned_to_nat(0u);
return v___x_1543_;
}
case 1:
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_unsigned_to_nat(1u);
return v___x_1544_;
}
case 2:
{
lean_object* v___x_1545_; 
v___x_1545_ = lean_unsigned_to_nat(2u);
return v___x_1545_;
}
case 3:
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_unsigned_to_nat(3u);
return v___x_1546_;
}
case 4:
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_unsigned_to_nat(4u);
return v___x_1547_;
}
case 5:
{
lean_object* v___x_1548_; 
v___x_1548_ = lean_unsigned_to_nat(5u);
return v___x_1548_;
}
case 6:
{
lean_object* v___x_1549_; 
v___x_1549_ = lean_unsigned_to_nat(6u);
return v___x_1549_;
}
case 7:
{
lean_object* v___x_1550_; 
v___x_1550_ = lean_unsigned_to_nat(7u);
return v___x_1550_;
}
case 8:
{
lean_object* v___x_1551_; 
v___x_1551_ = lean_unsigned_to_nat(8u);
return v___x_1551_;
}
case 9:
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_unsigned_to_nat(9u);
return v___x_1552_;
}
case 10:
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_unsigned_to_nat(10u);
return v___x_1553_;
}
case 11:
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_unsigned_to_nat(11u);
return v___x_1554_;
}
case 12:
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_unsigned_to_nat(12u);
return v___x_1555_;
}
case 13:
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_unsigned_to_nat(13u);
return v___x_1556_;
}
case 14:
{
lean_object* v___x_1557_; 
v___x_1557_ = lean_unsigned_to_nat(14u);
return v___x_1557_;
}
case 15:
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_unsigned_to_nat(15u);
return v___x_1558_;
}
case 16:
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_unsigned_to_nat(16u);
return v___x_1559_;
}
case 17:
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_unsigned_to_nat(17u);
return v___x_1560_;
}
case 18:
{
lean_object* v___x_1561_; 
v___x_1561_ = lean_unsigned_to_nat(18u);
return v___x_1561_;
}
case 19:
{
lean_object* v___x_1562_; 
v___x_1562_ = lean_unsigned_to_nat(19u);
return v___x_1562_;
}
case 20:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_unsigned_to_nat(20u);
return v___x_1563_;
}
default: 
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_unsigned_to_nat(21u);
return v___x_1564_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx___boxed(lean_object* v_x_1565_){
_start:
{
uint8_t v_x_boxed_1566_; lean_object* v_res_1567_; 
v_x_boxed_1566_ = lean_unbox(v_x_1565_);
v_res_1567_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx(v_x_boxed_1566_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_toCtorIdx(uint8_t v_x_1568_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx(v_x_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_toCtorIdx___boxed(lean_object* v_x_1570_){
_start:
{
uint8_t v_x_4__boxed_1571_; lean_object* v_res_1572_; 
v_x_4__boxed_1571_ = lean_unbox(v_x_1570_);
v_res_1572_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_toCtorIdx(v_x_4__boxed_1571_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim___redArg(lean_object* v_k_1573_){
_start:
{
lean_inc(v_k_1573_);
return v_k_1573_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim___redArg___boxed(lean_object* v_k_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim___redArg(v_k_1574_);
lean_dec(v_k_1574_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim(lean_object* v_motive_1576_, lean_object* v_ctorIdx_1577_, uint8_t v_t_1578_, lean_object* v_h_1579_, lean_object* v_k_1580_){
_start:
{
lean_inc(v_k_1580_);
return v_k_1580_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim___boxed(lean_object* v_motive_1581_, lean_object* v_ctorIdx_1582_, lean_object* v_t_1583_, lean_object* v_h_1584_, lean_object* v_k_1585_){
_start:
{
uint8_t v_t_boxed_1586_; lean_object* v_res_1587_; 
v_t_boxed_1586_ = lean_unbox(v_t_1583_);
v_res_1587_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorElim(v_motive_1581_, v_ctorIdx_1582_, v_t_boxed_1586_, v_h_1584_, v_k_1585_);
lean_dec(v_k_1585_);
lean_dec(v_ctorIdx_1582_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim___redArg(lean_object* v_cypher_1588_){
_start:
{
lean_inc(v_cypher_1588_);
return v_cypher_1588_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim___redArg___boxed(lean_object* v_cypher_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim___redArg(v_cypher_1589_);
lean_dec(v_cypher_1589_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim(lean_object* v_motive_1591_, uint8_t v_t_1592_, lean_object* v_h_1593_, lean_object* v_cypher_1594_){
_start:
{
lean_inc(v_cypher_1594_);
return v_cypher_1594_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim___boxed(lean_object* v_motive_1595_, lean_object* v_t_1596_, lean_object* v_h_1597_, lean_object* v_cypher_1598_){
_start:
{
uint8_t v_t_boxed_1599_; lean_object* v_res_1600_; 
v_t_boxed_1599_ = lean_unbox(v_t_1596_);
v_res_1600_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_cypher_elim(v_motive_1595_, v_t_boxed_1599_, v_h_1597_, v_cypher_1598_);
lean_dec(v_cypher_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim___redArg(lean_object* v_match_1601_){
_start:
{
lean_inc(v_match_1601_);
return v_match_1601_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim___redArg___boxed(lean_object* v_match_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim___redArg(v_match_1602_);
lean_dec(v_match_1602_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim(lean_object* v_motive_1604_, uint8_t v_t_1605_, lean_object* v_h_1606_, lean_object* v_match_1607_){
_start:
{
lean_inc(v_match_1607_);
return v_match_1607_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim___boxed(lean_object* v_motive_1608_, lean_object* v_t_1609_, lean_object* v_h_1610_, lean_object* v_match_1611_){
_start:
{
uint8_t v_t_boxed_1612_; lean_object* v_res_1613_; 
v_t_boxed_1612_ = lean_unbox(v_t_1609_);
v_res_1613_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_match_elim(v_motive_1608_, v_t_boxed_1612_, v_h_1610_, v_match_1611_);
lean_dec(v_match_1611_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim___redArg(lean_object* v_where_1614_){
_start:
{
lean_inc(v_where_1614_);
return v_where_1614_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim___redArg___boxed(lean_object* v_where_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim___redArg(v_where_1615_);
lean_dec(v_where_1615_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim(lean_object* v_motive_1617_, uint8_t v_t_1618_, lean_object* v_h_1619_, lean_object* v_where_1620_){
_start:
{
lean_inc(v_where_1620_);
return v_where_1620_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim___boxed(lean_object* v_motive_1621_, lean_object* v_t_1622_, lean_object* v_h_1623_, lean_object* v_where_1624_){
_start:
{
uint8_t v_t_boxed_1625_; lean_object* v_res_1626_; 
v_t_boxed_1625_ = lean_unbox(v_t_1622_);
v_res_1626_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_where_elim(v_motive_1621_, v_t_boxed_1625_, v_h_1623_, v_where_1624_);
lean_dec(v_where_1624_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim___redArg(lean_object* v_with_1627_){
_start:
{
lean_inc(v_with_1627_);
return v_with_1627_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim___redArg___boxed(lean_object* v_with_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim___redArg(v_with_1628_);
lean_dec(v_with_1628_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim(lean_object* v_motive_1630_, uint8_t v_t_1631_, lean_object* v_h_1632_, lean_object* v_with_1633_){
_start:
{
lean_inc(v_with_1633_);
return v_with_1633_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim___boxed(lean_object* v_motive_1634_, lean_object* v_t_1635_, lean_object* v_h_1636_, lean_object* v_with_1637_){
_start:
{
uint8_t v_t_boxed_1638_; lean_object* v_res_1639_; 
v_t_boxed_1638_ = lean_unbox(v_t_1635_);
v_res_1639_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_with_elim(v_motive_1634_, v_t_boxed_1638_, v_h_1636_, v_with_1637_);
lean_dec(v_with_1637_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim___redArg(lean_object* v_unwind_1640_){
_start:
{
lean_inc(v_unwind_1640_);
return v_unwind_1640_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim___redArg___boxed(lean_object* v_unwind_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim___redArg(v_unwind_1641_);
lean_dec(v_unwind_1641_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim(lean_object* v_motive_1643_, uint8_t v_t_1644_, lean_object* v_h_1645_, lean_object* v_unwind_1646_){
_start:
{
lean_inc(v_unwind_1646_);
return v_unwind_1646_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim___boxed(lean_object* v_motive_1647_, lean_object* v_t_1648_, lean_object* v_h_1649_, lean_object* v_unwind_1650_){
_start:
{
uint8_t v_t_boxed_1651_; lean_object* v_res_1652_; 
v_t_boxed_1651_ = lean_unbox(v_t_1648_);
v_res_1652_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_unwind_elim(v_motive_1647_, v_t_boxed_1651_, v_h_1649_, v_unwind_1650_);
lean_dec(v_unwind_1650_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim___redArg(lean_object* v_as_1653_){
_start:
{
lean_inc(v_as_1653_);
return v_as_1653_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim___redArg___boxed(lean_object* v_as_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim___redArg(v_as_1654_);
lean_dec(v_as_1654_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim(lean_object* v_motive_1656_, uint8_t v_t_1657_, lean_object* v_h_1658_, lean_object* v_as_1659_){
_start:
{
lean_inc(v_as_1659_);
return v_as_1659_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim___boxed(lean_object* v_motive_1660_, lean_object* v_t_1661_, lean_object* v_h_1662_, lean_object* v_as_1663_){
_start:
{
uint8_t v_t_boxed_1664_; lean_object* v_res_1665_; 
v_t_boxed_1664_ = lean_unbox(v_t_1661_);
v_res_1665_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_as_elim(v_motive_1660_, v_t_boxed_1664_, v_h_1662_, v_as_1663_);
lean_dec(v_as_1663_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim___redArg(lean_object* v_return_1666_){
_start:
{
lean_inc(v_return_1666_);
return v_return_1666_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim___redArg___boxed(lean_object* v_return_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim___redArg(v_return_1667_);
lean_dec(v_return_1667_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim(lean_object* v_motive_1669_, uint8_t v_t_1670_, lean_object* v_h_1671_, lean_object* v_return_1672_){
_start:
{
lean_inc(v_return_1672_);
return v_return_1672_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim___boxed(lean_object* v_motive_1673_, lean_object* v_t_1674_, lean_object* v_h_1675_, lean_object* v_return_1676_){
_start:
{
uint8_t v_t_boxed_1677_; lean_object* v_res_1678_; 
v_t_boxed_1677_ = lean_unbox(v_t_1674_);
v_res_1678_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_return_elim(v_motive_1673_, v_t_boxed_1677_, v_h_1675_, v_return_1676_);
lean_dec(v_return_1676_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim___redArg(lean_object* v_distinct_1679_){
_start:
{
lean_inc(v_distinct_1679_);
return v_distinct_1679_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim___redArg___boxed(lean_object* v_distinct_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim___redArg(v_distinct_1680_);
lean_dec(v_distinct_1680_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim(lean_object* v_motive_1682_, uint8_t v_t_1683_, lean_object* v_h_1684_, lean_object* v_distinct_1685_){
_start:
{
lean_inc(v_distinct_1685_);
return v_distinct_1685_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim___boxed(lean_object* v_motive_1686_, lean_object* v_t_1687_, lean_object* v_h_1688_, lean_object* v_distinct_1689_){
_start:
{
uint8_t v_t_boxed_1690_; lean_object* v_res_1691_; 
v_t_boxed_1690_ = lean_unbox(v_t_1687_);
v_res_1691_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_distinct_elim(v_motive_1686_, v_t_boxed_1690_, v_h_1688_, v_distinct_1689_);
lean_dec(v_distinct_1689_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim___redArg(lean_object* v_null_1692_){
_start:
{
lean_inc(v_null_1692_);
return v_null_1692_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim___redArg___boxed(lean_object* v_null_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim___redArg(v_null_1693_);
lean_dec(v_null_1693_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim(lean_object* v_motive_1695_, uint8_t v_t_1696_, lean_object* v_h_1697_, lean_object* v_null_1698_){
_start:
{
lean_inc(v_null_1698_);
return v_null_1698_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim___boxed(lean_object* v_motive_1699_, lean_object* v_t_1700_, lean_object* v_h_1701_, lean_object* v_null_1702_){
_start:
{
uint8_t v_t_boxed_1703_; lean_object* v_res_1704_; 
v_t_boxed_1703_ = lean_unbox(v_t_1700_);
v_res_1704_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_null_elim(v_motive_1699_, v_t_boxed_1703_, v_h_1701_, v_null_1702_);
lean_dec(v_null_1702_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim___redArg(lean_object* v_true_1705_){
_start:
{
lean_inc(v_true_1705_);
return v_true_1705_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim___redArg___boxed(lean_object* v_true_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim___redArg(v_true_1706_);
lean_dec(v_true_1706_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim(lean_object* v_motive_1708_, uint8_t v_t_1709_, lean_object* v_h_1710_, lean_object* v_true_1711_){
_start:
{
lean_inc(v_true_1711_);
return v_true_1711_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim___boxed(lean_object* v_motive_1712_, lean_object* v_t_1713_, lean_object* v_h_1714_, lean_object* v_true_1715_){
_start:
{
uint8_t v_t_boxed_1716_; lean_object* v_res_1717_; 
v_t_boxed_1716_ = lean_unbox(v_t_1713_);
v_res_1717_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_true_elim(v_motive_1712_, v_t_boxed_1716_, v_h_1714_, v_true_1715_);
lean_dec(v_true_1715_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim___redArg(lean_object* v_false_1718_){
_start:
{
lean_inc(v_false_1718_);
return v_false_1718_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim___redArg___boxed(lean_object* v_false_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim___redArg(v_false_1719_);
lean_dec(v_false_1719_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim(lean_object* v_motive_1721_, uint8_t v_t_1722_, lean_object* v_h_1723_, lean_object* v_false_1724_){
_start:
{
lean_inc(v_false_1724_);
return v_false_1724_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim___boxed(lean_object* v_motive_1725_, lean_object* v_t_1726_, lean_object* v_h_1727_, lean_object* v_false_1728_){
_start:
{
uint8_t v_t_boxed_1729_; lean_object* v_res_1730_; 
v_t_boxed_1729_ = lean_unbox(v_t_1726_);
v_res_1730_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_false_elim(v_motive_1725_, v_t_boxed_1729_, v_h_1727_, v_false_1728_);
lean_dec(v_false_1728_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim___redArg(lean_object* v_not_1731_){
_start:
{
lean_inc(v_not_1731_);
return v_not_1731_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim___redArg___boxed(lean_object* v_not_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim___redArg(v_not_1732_);
lean_dec(v_not_1732_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim(lean_object* v_motive_1734_, uint8_t v_t_1735_, lean_object* v_h_1736_, lean_object* v_not_1737_){
_start:
{
lean_inc(v_not_1737_);
return v_not_1737_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim___boxed(lean_object* v_motive_1738_, lean_object* v_t_1739_, lean_object* v_h_1740_, lean_object* v_not_1741_){
_start:
{
uint8_t v_t_boxed_1742_; lean_object* v_res_1743_; 
v_t_boxed_1742_ = lean_unbox(v_t_1739_);
v_res_1743_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_not_elim(v_motive_1738_, v_t_boxed_1742_, v_h_1740_, v_not_1741_);
lean_dec(v_not_1741_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim___redArg(lean_object* v_is_1744_){
_start:
{
lean_inc(v_is_1744_);
return v_is_1744_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim___redArg___boxed(lean_object* v_is_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim___redArg(v_is_1745_);
lean_dec(v_is_1745_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim(lean_object* v_motive_1747_, uint8_t v_t_1748_, lean_object* v_h_1749_, lean_object* v_is_1750_){
_start:
{
lean_inc(v_is_1750_);
return v_is_1750_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim___boxed(lean_object* v_motive_1751_, lean_object* v_t_1752_, lean_object* v_h_1753_, lean_object* v_is_1754_){
_start:
{
uint8_t v_t_boxed_1755_; lean_object* v_res_1756_; 
v_t_boxed_1755_ = lean_unbox(v_t_1752_);
v_res_1756_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_is_elim(v_motive_1751_, v_t_boxed_1755_, v_h_1753_, v_is_1754_);
lean_dec(v_is_1754_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim___redArg(lean_object* v_case_1757_){
_start:
{
lean_inc(v_case_1757_);
return v_case_1757_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim___redArg___boxed(lean_object* v_case_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim___redArg(v_case_1758_);
lean_dec(v_case_1758_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim(lean_object* v_motive_1760_, uint8_t v_t_1761_, lean_object* v_h_1762_, lean_object* v_case_1763_){
_start:
{
lean_inc(v_case_1763_);
return v_case_1763_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim___boxed(lean_object* v_motive_1764_, lean_object* v_t_1765_, lean_object* v_h_1766_, lean_object* v_case_1767_){
_start:
{
uint8_t v_t_boxed_1768_; lean_object* v_res_1769_; 
v_t_boxed_1768_ = lean_unbox(v_t_1765_);
v_res_1769_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_case_elim(v_motive_1764_, v_t_boxed_1768_, v_h_1766_, v_case_1767_);
lean_dec(v_case_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim___redArg(lean_object* v_when_1770_){
_start:
{
lean_inc(v_when_1770_);
return v_when_1770_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim___redArg___boxed(lean_object* v_when_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim___redArg(v_when_1771_);
lean_dec(v_when_1771_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim(lean_object* v_motive_1773_, uint8_t v_t_1774_, lean_object* v_h_1775_, lean_object* v_when_1776_){
_start:
{
lean_inc(v_when_1776_);
return v_when_1776_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim___boxed(lean_object* v_motive_1777_, lean_object* v_t_1778_, lean_object* v_h_1779_, lean_object* v_when_1780_){
_start:
{
uint8_t v_t_boxed_1781_; lean_object* v_res_1782_; 
v_t_boxed_1781_ = lean_unbox(v_t_1778_);
v_res_1782_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_when_elim(v_motive_1777_, v_t_boxed_1781_, v_h_1779_, v_when_1780_);
lean_dec(v_when_1780_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim___redArg(lean_object* v_then_1783_){
_start:
{
lean_inc(v_then_1783_);
return v_then_1783_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim___redArg___boxed(lean_object* v_then_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim___redArg(v_then_1784_);
lean_dec(v_then_1784_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim(lean_object* v_motive_1786_, uint8_t v_t_1787_, lean_object* v_h_1788_, lean_object* v_then_1789_){
_start:
{
lean_inc(v_then_1789_);
return v_then_1789_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim___boxed(lean_object* v_motive_1790_, lean_object* v_t_1791_, lean_object* v_h_1792_, lean_object* v_then_1793_){
_start:
{
uint8_t v_t_boxed_1794_; lean_object* v_res_1795_; 
v_t_boxed_1794_ = lean_unbox(v_t_1791_);
v_res_1795_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_then_elim(v_motive_1790_, v_t_boxed_1794_, v_h_1792_, v_then_1793_);
lean_dec(v_then_1793_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim___redArg(lean_object* v_else_1796_){
_start:
{
lean_inc(v_else_1796_);
return v_else_1796_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim___redArg___boxed(lean_object* v_else_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim___redArg(v_else_1797_);
lean_dec(v_else_1797_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim(lean_object* v_motive_1799_, uint8_t v_t_1800_, lean_object* v_h_1801_, lean_object* v_else_1802_){
_start:
{
lean_inc(v_else_1802_);
return v_else_1802_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim___boxed(lean_object* v_motive_1803_, lean_object* v_t_1804_, lean_object* v_h_1805_, lean_object* v_else_1806_){
_start:
{
uint8_t v_t_boxed_1807_; lean_object* v_res_1808_; 
v_t_boxed_1807_ = lean_unbox(v_t_1804_);
v_res_1808_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_else_elim(v_motive_1803_, v_t_boxed_1807_, v_h_1805_, v_else_1806_);
lean_dec(v_else_1806_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim___redArg(lean_object* v_end_1809_){
_start:
{
lean_inc(v_end_1809_);
return v_end_1809_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim___redArg___boxed(lean_object* v_end_1810_){
_start:
{
lean_object* v_res_1811_; 
v_res_1811_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim___redArg(v_end_1810_);
lean_dec(v_end_1810_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim(lean_object* v_motive_1812_, uint8_t v_t_1813_, lean_object* v_h_1814_, lean_object* v_end_1815_){
_start:
{
lean_inc(v_end_1815_);
return v_end_1815_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim___boxed(lean_object* v_motive_1816_, lean_object* v_t_1817_, lean_object* v_h_1818_, lean_object* v_end_1819_){
_start:
{
uint8_t v_t_boxed_1820_; lean_object* v_res_1821_; 
v_t_boxed_1820_ = lean_unbox(v_t_1817_);
v_res_1821_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_end_elim(v_motive_1816_, v_t_boxed_1820_, v_h_1818_, v_end_1819_);
lean_dec(v_end_1819_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim___redArg(lean_object* v_inKw_1822_){
_start:
{
lean_inc(v_inKw_1822_);
return v_inKw_1822_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim___redArg___boxed(lean_object* v_inKw_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim___redArg(v_inKw_1823_);
lean_dec(v_inKw_1823_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim(lean_object* v_motive_1825_, uint8_t v_t_1826_, lean_object* v_h_1827_, lean_object* v_inKw_1828_){
_start:
{
lean_inc(v_inKw_1828_);
return v_inKw_1828_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim___boxed(lean_object* v_motive_1829_, lean_object* v_t_1830_, lean_object* v_h_1831_, lean_object* v_inKw_1832_){
_start:
{
uint8_t v_t_boxed_1833_; lean_object* v_res_1834_; 
v_t_boxed_1833_ = lean_unbox(v_t_1830_);
v_res_1834_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_inKw_elim(v_motive_1829_, v_t_boxed_1833_, v_h_1831_, v_inKw_1832_);
lean_dec(v_inKw_1832_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim___redArg(lean_object* v_reduce_1835_){
_start:
{
lean_inc(v_reduce_1835_);
return v_reduce_1835_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim___redArg___boxed(lean_object* v_reduce_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim___redArg(v_reduce_1836_);
lean_dec(v_reduce_1836_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim(lean_object* v_motive_1838_, uint8_t v_t_1839_, lean_object* v_h_1840_, lean_object* v_reduce_1841_){
_start:
{
lean_inc(v_reduce_1841_);
return v_reduce_1841_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim___boxed(lean_object* v_motive_1842_, lean_object* v_t_1843_, lean_object* v_h_1844_, lean_object* v_reduce_1845_){
_start:
{
uint8_t v_t_boxed_1846_; lean_object* v_res_1847_; 
v_t_boxed_1846_ = lean_unbox(v_t_1843_);
v_res_1847_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_reduce_elim(v_motive_1842_, v_t_boxed_1846_, v_h_1844_, v_reduce_1845_);
lean_dec(v_reduce_1845_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim___redArg(lean_object* v_exists_1848_){
_start:
{
lean_inc(v_exists_1848_);
return v_exists_1848_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim___redArg___boxed(lean_object* v_exists_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim___redArg(v_exists_1849_);
lean_dec(v_exists_1849_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim(lean_object* v_motive_1851_, uint8_t v_t_1852_, lean_object* v_h_1853_, lean_object* v_exists_1854_){
_start:
{
lean_inc(v_exists_1854_);
return v_exists_1854_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim___boxed(lean_object* v_motive_1855_, lean_object* v_t_1856_, lean_object* v_h_1857_, lean_object* v_exists_1858_){
_start:
{
uint8_t v_t_boxed_1859_; lean_object* v_res_1860_; 
v_t_boxed_1859_ = lean_unbox(v_t_1856_);
v_res_1860_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_exists_elim(v_motive_1855_, v_t_boxed_1859_, v_h_1857_, v_exists_1858_);
lean_dec(v_exists_1858_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim___redArg(lean_object* v_collect_1861_){
_start:
{
lean_inc(v_collect_1861_);
return v_collect_1861_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim___redArg___boxed(lean_object* v_collect_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim___redArg(v_collect_1862_);
lean_dec(v_collect_1862_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim(lean_object* v_motive_1864_, uint8_t v_t_1865_, lean_object* v_h_1866_, lean_object* v_collect_1867_){
_start:
{
lean_inc(v_collect_1867_);
return v_collect_1867_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim___boxed(lean_object* v_motive_1868_, lean_object* v_t_1869_, lean_object* v_h_1870_, lean_object* v_collect_1871_){
_start:
{
uint8_t v_t_boxed_1872_; lean_object* v_res_1873_; 
v_t_boxed_1872_ = lean_unbox(v_t_1869_);
v_res_1873_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_collect_elim(v_motive_1868_, v_t_boxed_1872_, v_h_1870_, v_collect_1871_);
lean_dec(v_collect_1871_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr(uint8_t v_x_1940_, lean_object* v_prec_1941_){
_start:
{
lean_object* v___y_1943_; lean_object* v___y_1950_; lean_object* v___y_1957_; lean_object* v___y_1964_; lean_object* v___y_1971_; lean_object* v___y_1978_; lean_object* v___y_1985_; lean_object* v___y_1992_; lean_object* v___y_1999_; lean_object* v___y_2006_; lean_object* v___y_2013_; lean_object* v___y_2020_; lean_object* v___y_2027_; lean_object* v___y_2034_; lean_object* v___y_2041_; lean_object* v___y_2048_; lean_object* v___y_2055_; lean_object* v___y_2062_; lean_object* v___y_2069_; lean_object* v___y_2076_; lean_object* v___y_2083_; lean_object* v___y_2090_; 
switch(v_x_1940_)
{
case 0:
{
lean_object* v___x_2096_; uint8_t v___x_2097_; 
v___x_2096_ = lean_unsigned_to_nat(1024u);
v___x_2097_ = lean_nat_dec_le(v___x_2096_, v_prec_1941_);
if (v___x_2097_ == 0)
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1943_ = v___x_2098_;
goto v___jp_1942_;
}
else
{
lean_object* v___x_2099_; 
v___x_2099_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1943_ = v___x_2099_;
goto v___jp_1942_;
}
}
case 1:
{
lean_object* v___x_2100_; uint8_t v___x_2101_; 
v___x_2100_ = lean_unsigned_to_nat(1024u);
v___x_2101_ = lean_nat_dec_le(v___x_2100_, v_prec_1941_);
if (v___x_2101_ == 0)
{
lean_object* v___x_2102_; 
v___x_2102_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1950_ = v___x_2102_;
goto v___jp_1949_;
}
else
{
lean_object* v___x_2103_; 
v___x_2103_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1950_ = v___x_2103_;
goto v___jp_1949_;
}
}
case 2:
{
lean_object* v___x_2104_; uint8_t v___x_2105_; 
v___x_2104_ = lean_unsigned_to_nat(1024u);
v___x_2105_ = lean_nat_dec_le(v___x_2104_, v_prec_1941_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; 
v___x_2106_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1957_ = v___x_2106_;
goto v___jp_1956_;
}
else
{
lean_object* v___x_2107_; 
v___x_2107_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1957_ = v___x_2107_;
goto v___jp_1956_;
}
}
case 3:
{
lean_object* v___x_2108_; uint8_t v___x_2109_; 
v___x_2108_ = lean_unsigned_to_nat(1024u);
v___x_2109_ = lean_nat_dec_le(v___x_2108_, v_prec_1941_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; 
v___x_2110_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1964_ = v___x_2110_;
goto v___jp_1963_;
}
else
{
lean_object* v___x_2111_; 
v___x_2111_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1964_ = v___x_2111_;
goto v___jp_1963_;
}
}
case 4:
{
lean_object* v___x_2112_; uint8_t v___x_2113_; 
v___x_2112_ = lean_unsigned_to_nat(1024u);
v___x_2113_ = lean_nat_dec_le(v___x_2112_, v_prec_1941_);
if (v___x_2113_ == 0)
{
lean_object* v___x_2114_; 
v___x_2114_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1971_ = v___x_2114_;
goto v___jp_1970_;
}
else
{
lean_object* v___x_2115_; 
v___x_2115_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1971_ = v___x_2115_;
goto v___jp_1970_;
}
}
case 5:
{
lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2116_ = lean_unsigned_to_nat(1024u);
v___x_2117_ = lean_nat_dec_le(v___x_2116_, v_prec_1941_);
if (v___x_2117_ == 0)
{
lean_object* v___x_2118_; 
v___x_2118_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1978_ = v___x_2118_;
goto v___jp_1977_;
}
else
{
lean_object* v___x_2119_; 
v___x_2119_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1978_ = v___x_2119_;
goto v___jp_1977_;
}
}
case 6:
{
lean_object* v___x_2120_; uint8_t v___x_2121_; 
v___x_2120_ = lean_unsigned_to_nat(1024u);
v___x_2121_ = lean_nat_dec_le(v___x_2120_, v_prec_1941_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2122_; 
v___x_2122_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1985_ = v___x_2122_;
goto v___jp_1984_;
}
else
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1985_ = v___x_2123_;
goto v___jp_1984_;
}
}
case 7:
{
lean_object* v___x_2124_; uint8_t v___x_2125_; 
v___x_2124_ = lean_unsigned_to_nat(1024u);
v___x_2125_ = lean_nat_dec_le(v___x_2124_, v_prec_1941_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; 
v___x_2126_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1992_ = v___x_2126_;
goto v___jp_1991_;
}
else
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1992_ = v___x_2127_;
goto v___jp_1991_;
}
}
case 8:
{
lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2128_ = lean_unsigned_to_nat(1024u);
v___x_2129_ = lean_nat_dec_le(v___x_2128_, v_prec_1941_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2130_; 
v___x_2130_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_1999_ = v___x_2130_;
goto v___jp_1998_;
}
else
{
lean_object* v___x_2131_; 
v___x_2131_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_1999_ = v___x_2131_;
goto v___jp_1998_;
}
}
case 9:
{
lean_object* v___x_2132_; uint8_t v___x_2133_; 
v___x_2132_ = lean_unsigned_to_nat(1024u);
v___x_2133_ = lean_nat_dec_le(v___x_2132_, v_prec_1941_);
if (v___x_2133_ == 0)
{
lean_object* v___x_2134_; 
v___x_2134_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2006_ = v___x_2134_;
goto v___jp_2005_;
}
else
{
lean_object* v___x_2135_; 
v___x_2135_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2006_ = v___x_2135_;
goto v___jp_2005_;
}
}
case 10:
{
lean_object* v___x_2136_; uint8_t v___x_2137_; 
v___x_2136_ = lean_unsigned_to_nat(1024u);
v___x_2137_ = lean_nat_dec_le(v___x_2136_, v_prec_1941_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2013_ = v___x_2138_;
goto v___jp_2012_;
}
else
{
lean_object* v___x_2139_; 
v___x_2139_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2013_ = v___x_2139_;
goto v___jp_2012_;
}
}
case 11:
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2140_ = lean_unsigned_to_nat(1024u);
v___x_2141_ = lean_nat_dec_le(v___x_2140_, v_prec_1941_);
if (v___x_2141_ == 0)
{
lean_object* v___x_2142_; 
v___x_2142_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2020_ = v___x_2142_;
goto v___jp_2019_;
}
else
{
lean_object* v___x_2143_; 
v___x_2143_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2020_ = v___x_2143_;
goto v___jp_2019_;
}
}
case 12:
{
lean_object* v___x_2144_; uint8_t v___x_2145_; 
v___x_2144_ = lean_unsigned_to_nat(1024u);
v___x_2145_ = lean_nat_dec_le(v___x_2144_, v_prec_1941_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; 
v___x_2146_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2027_ = v___x_2146_;
goto v___jp_2026_;
}
else
{
lean_object* v___x_2147_; 
v___x_2147_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2027_ = v___x_2147_;
goto v___jp_2026_;
}
}
case 13:
{
lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2148_ = lean_unsigned_to_nat(1024u);
v___x_2149_ = lean_nat_dec_le(v___x_2148_, v_prec_1941_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; 
v___x_2150_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2034_ = v___x_2150_;
goto v___jp_2033_;
}
else
{
lean_object* v___x_2151_; 
v___x_2151_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2034_ = v___x_2151_;
goto v___jp_2033_;
}
}
case 14:
{
lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2152_ = lean_unsigned_to_nat(1024u);
v___x_2153_ = lean_nat_dec_le(v___x_2152_, v_prec_1941_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; 
v___x_2154_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2041_ = v___x_2154_;
goto v___jp_2040_;
}
else
{
lean_object* v___x_2155_; 
v___x_2155_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2041_ = v___x_2155_;
goto v___jp_2040_;
}
}
case 15:
{
lean_object* v___x_2156_; uint8_t v___x_2157_; 
v___x_2156_ = lean_unsigned_to_nat(1024u);
v___x_2157_ = lean_nat_dec_le(v___x_2156_, v_prec_1941_);
if (v___x_2157_ == 0)
{
lean_object* v___x_2158_; 
v___x_2158_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2048_ = v___x_2158_;
goto v___jp_2047_;
}
else
{
lean_object* v___x_2159_; 
v___x_2159_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2048_ = v___x_2159_;
goto v___jp_2047_;
}
}
case 16:
{
lean_object* v___x_2160_; uint8_t v___x_2161_; 
v___x_2160_ = lean_unsigned_to_nat(1024u);
v___x_2161_ = lean_nat_dec_le(v___x_2160_, v_prec_1941_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; 
v___x_2162_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2055_ = v___x_2162_;
goto v___jp_2054_;
}
else
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2055_ = v___x_2163_;
goto v___jp_2054_;
}
}
case 17:
{
lean_object* v___x_2164_; uint8_t v___x_2165_; 
v___x_2164_ = lean_unsigned_to_nat(1024u);
v___x_2165_ = lean_nat_dec_le(v___x_2164_, v_prec_1941_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2166_; 
v___x_2166_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2062_ = v___x_2166_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2062_ = v___x_2167_;
goto v___jp_2061_;
}
}
case 18:
{
lean_object* v___x_2168_; uint8_t v___x_2169_; 
v___x_2168_ = lean_unsigned_to_nat(1024u);
v___x_2169_ = lean_nat_dec_le(v___x_2168_, v_prec_1941_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2170_; 
v___x_2170_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2069_ = v___x_2170_;
goto v___jp_2068_;
}
else
{
lean_object* v___x_2171_; 
v___x_2171_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2069_ = v___x_2171_;
goto v___jp_2068_;
}
}
case 19:
{
lean_object* v___x_2172_; uint8_t v___x_2173_; 
v___x_2172_ = lean_unsigned_to_nat(1024u);
v___x_2173_ = lean_nat_dec_le(v___x_2172_, v_prec_1941_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2076_ = v___x_2174_;
goto v___jp_2075_;
}
else
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2076_ = v___x_2175_;
goto v___jp_2075_;
}
}
case 20:
{
lean_object* v___x_2176_; uint8_t v___x_2177_; 
v___x_2176_ = lean_unsigned_to_nat(1024u);
v___x_2177_ = lean_nat_dec_le(v___x_2176_, v_prec_1941_);
if (v___x_2177_ == 0)
{
lean_object* v___x_2178_; 
v___x_2178_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2083_ = v___x_2178_;
goto v___jp_2082_;
}
else
{
lean_object* v___x_2179_; 
v___x_2179_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2083_ = v___x_2179_;
goto v___jp_2082_;
}
}
default: 
{
lean_object* v___x_2180_; uint8_t v___x_2181_; 
v___x_2180_ = lean_unsigned_to_nat(1024u);
v___x_2181_ = lean_nat_dec_le(v___x_2180_, v_prec_1941_);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; 
v___x_2182_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2090_ = v___x_2182_;
goto v___jp_2089_;
}
else
{
lean_object* v___x_2183_; 
v___x_2183_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2090_ = v___x_2183_;
goto v___jp_2089_;
}
}
}
v___jp_1942_:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; uint8_t v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1944_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__1));
lean_inc(v___y_1943_);
v___x_1945_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___y_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = 0;
v___x_1947_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1947_, 0, v___x_1945_);
lean_ctor_set_uint8(v___x_1947_, sizeof(void*)*1, v___x_1946_);
v___x_1948_ = l_Repr_addAppParen(v___x_1947_, v_prec_1941_);
return v___x_1948_;
}
v___jp_1949_:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1951_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__3));
lean_inc(v___y_1950_);
v___x_1952_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___y_1950_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = 0;
v___x_1954_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1954_, 0, v___x_1952_);
lean_ctor_set_uint8(v___x_1954_, sizeof(void*)*1, v___x_1953_);
v___x_1955_ = l_Repr_addAppParen(v___x_1954_, v_prec_1941_);
return v___x_1955_;
}
v___jp_1956_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1958_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__5));
lean_inc(v___y_1957_);
v___x_1959_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___y_1957_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
v___x_1960_ = 0;
v___x_1961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1961_, 0, v___x_1959_);
lean_ctor_set_uint8(v___x_1961_, sizeof(void*)*1, v___x_1960_);
v___x_1962_ = l_Repr_addAppParen(v___x_1961_, v_prec_1941_);
return v___x_1962_;
}
v___jp_1963_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1965_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__7));
lean_inc(v___y_1964_);
v___x_1966_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1966_, 0, v___y_1964_);
lean_ctor_set(v___x_1966_, 1, v___x_1965_);
v___x_1967_ = 0;
v___x_1968_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1968_, 0, v___x_1966_);
lean_ctor_set_uint8(v___x_1968_, sizeof(void*)*1, v___x_1967_);
v___x_1969_ = l_Repr_addAppParen(v___x_1968_, v_prec_1941_);
return v___x_1969_;
}
v___jp_1970_:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; uint8_t v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1972_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__9));
lean_inc(v___y_1971_);
v___x_1973_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___y_1971_);
lean_ctor_set(v___x_1973_, 1, v___x_1972_);
v___x_1974_ = 0;
v___x_1975_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1975_, 0, v___x_1973_);
lean_ctor_set_uint8(v___x_1975_, sizeof(void*)*1, v___x_1974_);
v___x_1976_ = l_Repr_addAppParen(v___x_1975_, v_prec_1941_);
return v___x_1976_;
}
v___jp_1977_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; uint8_t v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1979_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__11));
lean_inc(v___y_1978_);
v___x_1980_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___y_1978_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = 0;
v___x_1982_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1982_, 0, v___x_1980_);
lean_ctor_set_uint8(v___x_1982_, sizeof(void*)*1, v___x_1981_);
v___x_1983_ = l_Repr_addAppParen(v___x_1982_, v_prec_1941_);
return v___x_1983_;
}
v___jp_1984_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1986_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__13));
lean_inc(v___y_1985_);
v___x_1987_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___y_1985_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = 0;
v___x_1989_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1989_, 0, v___x_1987_);
lean_ctor_set_uint8(v___x_1989_, sizeof(void*)*1, v___x_1988_);
v___x_1990_ = l_Repr_addAppParen(v___x_1989_, v_prec_1941_);
return v___x_1990_;
}
v___jp_1991_:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1993_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__15));
lean_inc(v___y_1992_);
v___x_1994_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___y_1992_);
lean_ctor_set(v___x_1994_, 1, v___x_1993_);
v___x_1995_ = 0;
v___x_1996_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1996_, 0, v___x_1994_);
lean_ctor_set_uint8(v___x_1996_, sizeof(void*)*1, v___x_1995_);
v___x_1997_ = l_Repr_addAppParen(v___x_1996_, v_prec_1941_);
return v___x_1997_;
}
v___jp_1998_:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; uint8_t v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2000_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__17));
lean_inc(v___y_1999_);
v___x_2001_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2001_, 0, v___y_1999_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
v___x_2002_ = 0;
v___x_2003_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2003_, 0, v___x_2001_);
lean_ctor_set_uint8(v___x_2003_, sizeof(void*)*1, v___x_2002_);
v___x_2004_ = l_Repr_addAppParen(v___x_2003_, v_prec_1941_);
return v___x_2004_;
}
v___jp_2005_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2007_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__19));
lean_inc(v___y_2006_);
v___x_2008_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___y_2006_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = 0;
v___x_2010_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2010_, 0, v___x_2008_);
lean_ctor_set_uint8(v___x_2010_, sizeof(void*)*1, v___x_2009_);
v___x_2011_ = l_Repr_addAppParen(v___x_2010_, v_prec_1941_);
return v___x_2011_;
}
v___jp_2012_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; uint8_t v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2014_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__21));
lean_inc(v___y_2013_);
v___x_2015_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___y_2013_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = 0;
v___x_2017_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2017_, 0, v___x_2015_);
lean_ctor_set_uint8(v___x_2017_, sizeof(void*)*1, v___x_2016_);
v___x_2018_ = l_Repr_addAppParen(v___x_2017_, v_prec_1941_);
return v___x_2018_;
}
v___jp_2019_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2021_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__23));
lean_inc(v___y_2020_);
v___x_2022_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2022_, 0, v___y_2020_);
lean_ctor_set(v___x_2022_, 1, v___x_2021_);
v___x_2023_ = 0;
v___x_2024_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2024_, 0, v___x_2022_);
lean_ctor_set_uint8(v___x_2024_, sizeof(void*)*1, v___x_2023_);
v___x_2025_ = l_Repr_addAppParen(v___x_2024_, v_prec_1941_);
return v___x_2025_;
}
v___jp_2026_:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; uint8_t v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2028_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__25));
lean_inc(v___y_2027_);
v___x_2029_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2029_, 0, v___y_2027_);
lean_ctor_set(v___x_2029_, 1, v___x_2028_);
v___x_2030_ = 0;
v___x_2031_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2031_, 0, v___x_2029_);
lean_ctor_set_uint8(v___x_2031_, sizeof(void*)*1, v___x_2030_);
v___x_2032_ = l_Repr_addAppParen(v___x_2031_, v_prec_1941_);
return v___x_2032_;
}
v___jp_2033_:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2035_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__27));
lean_inc(v___y_2034_);
v___x_2036_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___y_2034_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = 0;
v___x_2038_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2038_, 0, v___x_2036_);
lean_ctor_set_uint8(v___x_2038_, sizeof(void*)*1, v___x_2037_);
v___x_2039_ = l_Repr_addAppParen(v___x_2038_, v_prec_1941_);
return v___x_2039_;
}
v___jp_2040_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2042_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__29));
lean_inc(v___y_2041_);
v___x_2043_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___y_2041_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = 0;
v___x_2045_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2045_, 0, v___x_2043_);
lean_ctor_set_uint8(v___x_2045_, sizeof(void*)*1, v___x_2044_);
v___x_2046_ = l_Repr_addAppParen(v___x_2045_, v_prec_1941_);
return v___x_2046_;
}
v___jp_2047_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; uint8_t v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2049_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__31));
lean_inc(v___y_2048_);
v___x_2050_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___y_2048_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = 0;
v___x_2052_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2052_, 0, v___x_2050_);
lean_ctor_set_uint8(v___x_2052_, sizeof(void*)*1, v___x_2051_);
v___x_2053_ = l_Repr_addAppParen(v___x_2052_, v_prec_1941_);
return v___x_2053_;
}
v___jp_2054_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2056_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__33));
lean_inc(v___y_2055_);
v___x_2057_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___y_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = 0;
v___x_2059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2059_, 0, v___x_2057_);
lean_ctor_set_uint8(v___x_2059_, sizeof(void*)*1, v___x_2058_);
v___x_2060_ = l_Repr_addAppParen(v___x_2059_, v_prec_1941_);
return v___x_2060_;
}
v___jp_2061_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2063_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__35));
lean_inc(v___y_2062_);
v___x_2064_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___y_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = 0;
v___x_2066_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2066_, 0, v___x_2064_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*1, v___x_2065_);
v___x_2067_ = l_Repr_addAppParen(v___x_2066_, v_prec_1941_);
return v___x_2067_;
}
v___jp_2068_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; uint8_t v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2070_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__37));
lean_inc(v___y_2069_);
v___x_2071_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___y_2069_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
v___x_2072_ = 0;
v___x_2073_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2073_, 0, v___x_2071_);
lean_ctor_set_uint8(v___x_2073_, sizeof(void*)*1, v___x_2072_);
v___x_2074_ = l_Repr_addAppParen(v___x_2073_, v_prec_1941_);
return v___x_2074_;
}
v___jp_2075_:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2077_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__39));
lean_inc(v___y_2076_);
v___x_2078_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2078_, 0, v___y_2076_);
lean_ctor_set(v___x_2078_, 1, v___x_2077_);
v___x_2079_ = 0;
v___x_2080_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2080_, 0, v___x_2078_);
lean_ctor_set_uint8(v___x_2080_, sizeof(void*)*1, v___x_2079_);
v___x_2081_ = l_Repr_addAppParen(v___x_2080_, v_prec_1941_);
return v___x_2081_;
}
v___jp_2082_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2084_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__41));
lean_inc(v___y_2083_);
v___x_2085_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___y_2083_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
v___x_2086_ = 0;
v___x_2087_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2087_, 0, v___x_2085_);
lean_ctor_set_uint8(v___x_2087_, sizeof(void*)*1, v___x_2086_);
v___x_2088_ = l_Repr_addAppParen(v___x_2087_, v_prec_1941_);
return v___x_2088_;
}
v___jp_2089_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2091_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___closed__43));
lean_inc(v___y_2090_);
v___x_2092_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___y_2090_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
v___x_2093_ = 0;
v___x_2094_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2094_, 0, v___x_2092_);
lean_ctor_set_uint8(v___x_2094_, sizeof(void*)*1, v___x_2093_);
v___x_2095_ = l_Repr_addAppParen(v___x_2094_, v_prec_1941_);
return v___x_2095_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr___boxed(lean_object* v_x_2184_, lean_object* v_prec_2185_){
_start:
{
uint8_t v_x_1237__boxed_2186_; lean_object* v_res_2187_; 
v_x_1237__boxed_2186_ = lean_unbox(v_x_2184_);
v_res_2187_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr(v_x_1237__boxed_2186_, v_prec_2185_);
lean_dec(v_prec_2185_);
return v_res_2187_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ofNat(lean_object* v_n_2190_){
_start:
{
lean_object* v___x_2191_; uint8_t v___x_2192_; 
v___x_2191_ = lean_unsigned_to_nat(10u);
v___x_2192_ = lean_nat_dec_le(v_n_2190_, v___x_2191_);
if (v___x_2192_ == 0)
{
lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_2193_ = lean_unsigned_to_nat(15u);
v___x_2194_ = lean_nat_dec_le(v_n_2190_, v___x_2193_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = lean_unsigned_to_nat(18u);
v___x_2196_ = lean_nat_dec_le(v_n_2190_, v___x_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; uint8_t v___x_2198_; 
v___x_2197_ = lean_unsigned_to_nat(19u);
v___x_2198_ = lean_nat_dec_le(v_n_2190_, v___x_2197_);
if (v___x_2198_ == 0)
{
lean_object* v___x_2199_; uint8_t v___x_2200_; 
v___x_2199_ = lean_unsigned_to_nat(20u);
v___x_2200_ = lean_nat_dec_le(v_n_2190_, v___x_2199_);
if (v___x_2200_ == 0)
{
uint8_t v___x_2201_; 
v___x_2201_ = 21;
return v___x_2201_;
}
else
{
uint8_t v___x_2202_; 
v___x_2202_ = 20;
return v___x_2202_;
}
}
else
{
uint8_t v___x_2203_; 
v___x_2203_ = 19;
return v___x_2203_;
}
}
else
{
lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2204_ = lean_unsigned_to_nat(16u);
v___x_2205_ = lean_nat_dec_le(v_n_2190_, v___x_2204_);
if (v___x_2205_ == 0)
{
lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2206_ = lean_unsigned_to_nat(17u);
v___x_2207_ = lean_nat_dec_le(v_n_2190_, v___x_2206_);
if (v___x_2207_ == 0)
{
uint8_t v___x_2208_; 
v___x_2208_ = 18;
return v___x_2208_;
}
else
{
uint8_t v___x_2209_; 
v___x_2209_ = 17;
return v___x_2209_;
}
}
else
{
uint8_t v___x_2210_; 
v___x_2210_ = 16;
return v___x_2210_;
}
}
}
else
{
lean_object* v___x_2211_; uint8_t v___x_2212_; 
v___x_2211_ = lean_unsigned_to_nat(12u);
v___x_2212_ = lean_nat_dec_le(v_n_2190_, v___x_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; uint8_t v___x_2214_; 
v___x_2213_ = lean_unsigned_to_nat(13u);
v___x_2214_ = lean_nat_dec_le(v_n_2190_, v___x_2213_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2215_ = lean_unsigned_to_nat(14u);
v___x_2216_ = lean_nat_dec_le(v_n_2190_, v___x_2215_);
if (v___x_2216_ == 0)
{
uint8_t v___x_2217_; 
v___x_2217_ = 15;
return v___x_2217_;
}
else
{
uint8_t v___x_2218_; 
v___x_2218_ = 14;
return v___x_2218_;
}
}
else
{
uint8_t v___x_2219_; 
v___x_2219_ = 13;
return v___x_2219_;
}
}
else
{
lean_object* v___x_2220_; uint8_t v___x_2221_; 
v___x_2220_ = lean_unsigned_to_nat(11u);
v___x_2221_ = lean_nat_dec_le(v_n_2190_, v___x_2220_);
if (v___x_2221_ == 0)
{
uint8_t v___x_2222_; 
v___x_2222_ = 12;
return v___x_2222_;
}
else
{
uint8_t v___x_2223_; 
v___x_2223_ = 11;
return v___x_2223_;
}
}
}
}
else
{
lean_object* v___x_2224_; uint8_t v___x_2225_; 
v___x_2224_ = lean_unsigned_to_nat(4u);
v___x_2225_ = lean_nat_dec_le(v_n_2190_, v___x_2224_);
if (v___x_2225_ == 0)
{
lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2226_ = lean_unsigned_to_nat(7u);
v___x_2227_ = lean_nat_dec_le(v_n_2190_, v___x_2226_);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; uint8_t v___x_2229_; 
v___x_2228_ = lean_unsigned_to_nat(8u);
v___x_2229_ = lean_nat_dec_le(v_n_2190_, v___x_2228_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; uint8_t v___x_2231_; 
v___x_2230_ = lean_unsigned_to_nat(9u);
v___x_2231_ = lean_nat_dec_le(v_n_2190_, v___x_2230_);
if (v___x_2231_ == 0)
{
uint8_t v___x_2232_; 
v___x_2232_ = 10;
return v___x_2232_;
}
else
{
uint8_t v___x_2233_; 
v___x_2233_ = 9;
return v___x_2233_;
}
}
else
{
uint8_t v___x_2234_; 
v___x_2234_ = 8;
return v___x_2234_;
}
}
else
{
lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = lean_unsigned_to_nat(5u);
v___x_2236_ = lean_nat_dec_le(v_n_2190_, v___x_2235_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2237_ = lean_unsigned_to_nat(6u);
v___x_2238_ = lean_nat_dec_le(v_n_2190_, v___x_2237_);
if (v___x_2238_ == 0)
{
uint8_t v___x_2239_; 
v___x_2239_ = 7;
return v___x_2239_;
}
else
{
uint8_t v___x_2240_; 
v___x_2240_ = 6;
return v___x_2240_;
}
}
else
{
uint8_t v___x_2241_; 
v___x_2241_ = 5;
return v___x_2241_;
}
}
}
else
{
lean_object* v___x_2242_; uint8_t v___x_2243_; 
v___x_2242_ = lean_unsigned_to_nat(1u);
v___x_2243_ = lean_nat_dec_le(v_n_2190_, v___x_2242_);
if (v___x_2243_ == 0)
{
lean_object* v___x_2244_; uint8_t v___x_2245_; 
v___x_2244_ = lean_unsigned_to_nat(2u);
v___x_2245_ = lean_nat_dec_le(v_n_2190_, v___x_2244_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; uint8_t v___x_2247_; 
v___x_2246_ = lean_unsigned_to_nat(3u);
v___x_2247_ = lean_nat_dec_le(v_n_2190_, v___x_2246_);
if (v___x_2247_ == 0)
{
uint8_t v___x_2248_; 
v___x_2248_ = 4;
return v___x_2248_;
}
else
{
uint8_t v___x_2249_; 
v___x_2249_ = 3;
return v___x_2249_;
}
}
else
{
uint8_t v___x_2250_; 
v___x_2250_ = 2;
return v___x_2250_;
}
}
else
{
lean_object* v___x_2251_; uint8_t v___x_2252_; 
v___x_2251_ = lean_unsigned_to_nat(0u);
v___x_2252_ = lean_nat_dec_le(v_n_2190_, v___x_2251_);
if (v___x_2252_ == 0)
{
uint8_t v___x_2253_; 
v___x_2253_ = 1;
return v___x_2253_;
}
else
{
uint8_t v___x_2254_; 
v___x_2254_ = 0;
return v___x_2254_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ofNat___boxed(lean_object* v_n_2255_){
_start:
{
uint8_t v_res_2256_; lean_object* v_r_2257_; 
v_res_2256_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ofNat(v_n_2255_);
lean_dec(v_n_2255_);
v_r_2257_ = lean_box(v_res_2256_);
return v_r_2257_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqKeyword(uint8_t v_x_2258_, uint8_t v_y_2259_){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; 
v___x_2260_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx(v_x_2258_);
v___x_2261_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Keyword_ctorIdx(v_y_2259_);
v___x_2262_ = lean_nat_dec_eq(v___x_2260_, v___x_2261_);
lean_dec(v___x_2261_);
lean_dec(v___x_2260_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqKeyword___boxed(lean_object* v_x_2263_, lean_object* v_y_2264_){
_start:
{
uint8_t v_x_13__boxed_2265_; uint8_t v_y_14__boxed_2266_; uint8_t v_res_2267_; lean_object* v_r_2268_; 
v_x_13__boxed_2265_ = lean_unbox(v_x_2263_);
v_y_14__boxed_2266_ = lean_unbox(v_y_2264_);
v_res_2267_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqKeyword(v_x_13__boxed_2265_, v_y_14__boxed_2266_);
v_r_2268_ = lean_box(v_res_2267_);
return v_r_2268_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorIdx(lean_object* v_x_2269_){
_start:
{
switch(lean_obj_tag(v_x_2269_))
{
case 0:
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_unsigned_to_nat(0u);
return v___x_2270_;
}
case 1:
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_unsigned_to_nat(1u);
return v___x_2271_;
}
case 2:
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_unsigned_to_nat(2u);
return v___x_2272_;
}
case 3:
{
lean_object* v___x_2273_; 
v___x_2273_ = lean_unsigned_to_nat(3u);
return v___x_2273_;
}
case 4:
{
lean_object* v___x_2274_; 
v___x_2274_ = lean_unsigned_to_nat(4u);
return v___x_2274_;
}
case 5:
{
lean_object* v___x_2275_; 
v___x_2275_ = lean_unsigned_to_nat(5u);
return v___x_2275_;
}
case 6:
{
lean_object* v___x_2276_; 
v___x_2276_ = lean_unsigned_to_nat(6u);
return v___x_2276_;
}
case 7:
{
lean_object* v___x_2277_; 
v___x_2277_ = lean_unsigned_to_nat(7u);
return v___x_2277_;
}
case 8:
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_unsigned_to_nat(8u);
return v___x_2278_;
}
case 9:
{
lean_object* v___x_2279_; 
v___x_2279_ = lean_unsigned_to_nat(9u);
return v___x_2279_;
}
case 10:
{
lean_object* v___x_2280_; 
v___x_2280_ = lean_unsigned_to_nat(10u);
return v___x_2280_;
}
case 11:
{
lean_object* v___x_2281_; 
v___x_2281_ = lean_unsigned_to_nat(11u);
return v___x_2281_;
}
case 12:
{
lean_object* v___x_2282_; 
v___x_2282_ = lean_unsigned_to_nat(12u);
return v___x_2282_;
}
case 13:
{
lean_object* v___x_2283_; 
v___x_2283_ = lean_unsigned_to_nat(13u);
return v___x_2283_;
}
case 14:
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_unsigned_to_nat(14u);
return v___x_2284_;
}
case 15:
{
lean_object* v___x_2285_; 
v___x_2285_ = lean_unsigned_to_nat(15u);
return v___x_2285_;
}
default: 
{
lean_object* v___x_2286_; 
v___x_2286_ = lean_unsigned_to_nat(16u);
return v___x_2286_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorIdx___boxed(lean_object* v_x_2287_){
_start:
{
lean_object* v_res_2288_; 
v_res_2288_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorIdx(v_x_2287_);
lean_dec(v_x_2287_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(lean_object* v_t_2289_, lean_object* v_k_2290_){
_start:
{
if (lean_obj_tag(v_t_2289_) == 16)
{
uint8_t v_operator_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_operator_2291_ = lean_ctor_get_uint8(v_t_2289_, 0);
v___x_2292_ = lean_box(v_operator_2291_);
v___x_2293_ = lean_apply_1(v_k_2290_, v___x_2292_);
return v___x_2293_;
}
else
{
return v_k_2290_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg___boxed(lean_object* v_t_2294_, lean_object* v_k_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2294_, v_k_2295_);
lean_dec(v_t_2294_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim(lean_object* v_motive_2297_, lean_object* v_ctorIdx_2298_, lean_object* v_t_2299_, lean_object* v_h_2300_, lean_object* v_k_2301_){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2299_, v_k_2301_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___boxed(lean_object* v_motive_2303_, lean_object* v_ctorIdx_2304_, lean_object* v_t_2305_, lean_object* v_h_2306_, lean_object* v_k_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim(v_motive_2303_, v_ctorIdx_2304_, v_t_2305_, v_h_2306_, v_k_2307_);
lean_dec(v_t_2305_);
lean_dec(v_ctorIdx_2304_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim___redArg(lean_object* v_t_2309_, lean_object* v_lParen_2310_){
_start:
{
lean_object* v___x_2311_; 
v___x_2311_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2309_, v_lParen_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim___redArg___boxed(lean_object* v_t_2312_, lean_object* v_lParen_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim___redArg(v_t_2312_, v_lParen_2313_);
lean_dec(v_t_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim(lean_object* v_motive_2315_, lean_object* v_t_2316_, lean_object* v_h_2317_, lean_object* v_lParen_2318_){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2316_, v_lParen_2318_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim___boxed(lean_object* v_motive_2320_, lean_object* v_t_2321_, lean_object* v_h_2322_, lean_object* v_lParen_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lParen_elim(v_motive_2320_, v_t_2321_, v_h_2322_, v_lParen_2323_);
lean_dec(v_t_2321_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim___redArg(lean_object* v_t_2325_, lean_object* v_rParen_2326_){
_start:
{
lean_object* v___x_2327_; 
v___x_2327_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2325_, v_rParen_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim___redArg___boxed(lean_object* v_t_2328_, lean_object* v_rParen_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim___redArg(v_t_2328_, v_rParen_2329_);
lean_dec(v_t_2328_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim(lean_object* v_motive_2331_, lean_object* v_t_2332_, lean_object* v_h_2333_, lean_object* v_rParen_2334_){
_start:
{
lean_object* v___x_2335_; 
v___x_2335_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2332_, v_rParen_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim___boxed(lean_object* v_motive_2336_, lean_object* v_t_2337_, lean_object* v_h_2338_, lean_object* v_rParen_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rParen_elim(v_motive_2336_, v_t_2337_, v_h_2338_, v_rParen_2339_);
lean_dec(v_t_2337_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim___redArg(lean_object* v_t_2341_, lean_object* v_lBracket_2342_){
_start:
{
lean_object* v___x_2343_; 
v___x_2343_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2341_, v_lBracket_2342_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim___redArg___boxed(lean_object* v_t_2344_, lean_object* v_lBracket_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim___redArg(v_t_2344_, v_lBracket_2345_);
lean_dec(v_t_2344_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim(lean_object* v_motive_2347_, lean_object* v_t_2348_, lean_object* v_h_2349_, lean_object* v_lBracket_2350_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2348_, v_lBracket_2350_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim___boxed(lean_object* v_motive_2352_, lean_object* v_t_2353_, lean_object* v_h_2354_, lean_object* v_lBracket_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBracket_elim(v_motive_2352_, v_t_2353_, v_h_2354_, v_lBracket_2355_);
lean_dec(v_t_2353_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim___redArg(lean_object* v_t_2357_, lean_object* v_rBracket_2358_){
_start:
{
lean_object* v___x_2359_; 
v___x_2359_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2357_, v_rBracket_2358_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim___redArg___boxed(lean_object* v_t_2360_, lean_object* v_rBracket_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim___redArg(v_t_2360_, v_rBracket_2361_);
lean_dec(v_t_2360_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim(lean_object* v_motive_2363_, lean_object* v_t_2364_, lean_object* v_h_2365_, lean_object* v_rBracket_2366_){
_start:
{
lean_object* v___x_2367_; 
v___x_2367_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2364_, v_rBracket_2366_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim___boxed(lean_object* v_motive_2368_, lean_object* v_t_2369_, lean_object* v_h_2370_, lean_object* v_rBracket_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBracket_elim(v_motive_2368_, v_t_2369_, v_h_2370_, v_rBracket_2371_);
lean_dec(v_t_2369_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim___redArg(lean_object* v_t_2373_, lean_object* v_lBrace_2374_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2373_, v_lBrace_2374_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim___redArg___boxed(lean_object* v_t_2376_, lean_object* v_lBrace_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim___redArg(v_t_2376_, v_lBrace_2377_);
lean_dec(v_t_2376_);
return v_res_2378_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim(lean_object* v_motive_2379_, lean_object* v_t_2380_, lean_object* v_h_2381_, lean_object* v_lBrace_2382_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2380_, v_lBrace_2382_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim___boxed(lean_object* v_motive_2384_, lean_object* v_t_2385_, lean_object* v_h_2386_, lean_object* v_lBrace_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_lBrace_elim(v_motive_2384_, v_t_2385_, v_h_2386_, v_lBrace_2387_);
lean_dec(v_t_2385_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim___redArg(lean_object* v_t_2389_, lean_object* v_rBrace_2390_){
_start:
{
lean_object* v___x_2391_; 
v___x_2391_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2389_, v_rBrace_2390_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim___redArg___boxed(lean_object* v_t_2392_, lean_object* v_rBrace_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim___redArg(v_t_2392_, v_rBrace_2393_);
lean_dec(v_t_2392_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim(lean_object* v_motive_2395_, lean_object* v_t_2396_, lean_object* v_h_2397_, lean_object* v_rBrace_2398_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2396_, v_rBrace_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim___boxed(lean_object* v_motive_2400_, lean_object* v_t_2401_, lean_object* v_h_2402_, lean_object* v_rBrace_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rBrace_elim(v_motive_2400_, v_t_2401_, v_h_2402_, v_rBrace_2403_);
lean_dec(v_t_2401_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim___redArg(lean_object* v_t_2405_, lean_object* v_comma_2406_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2405_, v_comma_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim___redArg___boxed(lean_object* v_t_2408_, lean_object* v_comma_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim___redArg(v_t_2408_, v_comma_2409_);
lean_dec(v_t_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim(lean_object* v_motive_2411_, lean_object* v_t_2412_, lean_object* v_h_2413_, lean_object* v_comma_2414_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2412_, v_comma_2414_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim___boxed(lean_object* v_motive_2416_, lean_object* v_t_2417_, lean_object* v_h_2418_, lean_object* v_comma_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_comma_elim(v_motive_2416_, v_t_2417_, v_h_2418_, v_comma_2419_);
lean_dec(v_t_2417_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim___redArg(lean_object* v_t_2421_, lean_object* v_colon_2422_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2421_, v_colon_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim___redArg___boxed(lean_object* v_t_2424_, lean_object* v_colon_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim___redArg(v_t_2424_, v_colon_2425_);
lean_dec(v_t_2424_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim(lean_object* v_motive_2427_, lean_object* v_t_2428_, lean_object* v_h_2429_, lean_object* v_colon_2430_){
_start:
{
lean_object* v___x_2431_; 
v___x_2431_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2428_, v_colon_2430_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim___boxed(lean_object* v_motive_2432_, lean_object* v_t_2433_, lean_object* v_h_2434_, lean_object* v_colon_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_colon_elim(v_motive_2432_, v_t_2433_, v_h_2434_, v_colon_2435_);
lean_dec(v_t_2433_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim___redArg(lean_object* v_t_2437_, lean_object* v_dot_2438_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2437_, v_dot_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim___redArg___boxed(lean_object* v_t_2440_, lean_object* v_dot_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim___redArg(v_t_2440_, v_dot_2441_);
lean_dec(v_t_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim(lean_object* v_motive_2443_, lean_object* v_t_2444_, lean_object* v_h_2445_, lean_object* v_dot_2446_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2444_, v_dot_2446_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim___boxed(lean_object* v_motive_2448_, lean_object* v_t_2449_, lean_object* v_h_2450_, lean_object* v_dot_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dot_elim(v_motive_2448_, v_t_2449_, v_h_2450_, v_dot_2451_);
lean_dec(v_t_2449_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim___redArg(lean_object* v_t_2453_, lean_object* v_bar_2454_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2453_, v_bar_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim___redArg___boxed(lean_object* v_t_2456_, lean_object* v_bar_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim___redArg(v_t_2456_, v_bar_2457_);
lean_dec(v_t_2456_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim(lean_object* v_motive_2459_, lean_object* v_t_2460_, lean_object* v_h_2461_, lean_object* v_bar_2462_){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2460_, v_bar_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim___boxed(lean_object* v_motive_2464_, lean_object* v_t_2465_, lean_object* v_h_2466_, lean_object* v_bar_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_bar_elim(v_motive_2464_, v_t_2465_, v_h_2466_, v_bar_2467_);
lean_dec(v_t_2465_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim___redArg(lean_object* v_t_2469_, lean_object* v_assign_2470_){
_start:
{
lean_object* v___x_2471_; 
v___x_2471_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2469_, v_assign_2470_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim___redArg___boxed(lean_object* v_t_2472_, lean_object* v_assign_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim___redArg(v_t_2472_, v_assign_2473_);
lean_dec(v_t_2472_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim(lean_object* v_motive_2475_, lean_object* v_t_2476_, lean_object* v_h_2477_, lean_object* v_assign_2478_){
_start:
{
lean_object* v___x_2479_; 
v___x_2479_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2476_, v_assign_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim___boxed(lean_object* v_motive_2480_, lean_object* v_t_2481_, lean_object* v_h_2482_, lean_object* v_assign_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_assign_elim(v_motive_2480_, v_t_2481_, v_h_2482_, v_assign_2483_);
lean_dec(v_t_2481_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim___redArg(lean_object* v_t_2485_, lean_object* v_dash_2486_){
_start:
{
lean_object* v___x_2487_; 
v___x_2487_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2485_, v_dash_2486_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim___redArg___boxed(lean_object* v_t_2488_, lean_object* v_dash_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim___redArg(v_t_2488_, v_dash_2489_);
lean_dec(v_t_2488_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim(lean_object* v_motive_2491_, lean_object* v_t_2492_, lean_object* v_h_2493_, lean_object* v_dash_2494_){
_start:
{
lean_object* v___x_2495_; 
v___x_2495_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2492_, v_dash_2494_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim___boxed(lean_object* v_motive_2496_, lean_object* v_t_2497_, lean_object* v_h_2498_, lean_object* v_dash_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_dash_elim(v_motive_2496_, v_t_2497_, v_h_2498_, v_dash_2499_);
lean_dec(v_t_2497_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim___redArg(lean_object* v_t_2501_, lean_object* v_leftArrowHead_2502_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2501_, v_leftArrowHead_2502_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim___redArg___boxed(lean_object* v_t_2504_, lean_object* v_leftArrowHead_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim___redArg(v_t_2504_, v_leftArrowHead_2505_);
lean_dec(v_t_2504_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim(lean_object* v_motive_2507_, lean_object* v_t_2508_, lean_object* v_h_2509_, lean_object* v_leftArrowHead_2510_){
_start:
{
lean_object* v___x_2511_; 
v___x_2511_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2508_, v_leftArrowHead_2510_);
return v___x_2511_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim___boxed(lean_object* v_motive_2512_, lean_object* v_t_2513_, lean_object* v_h_2514_, lean_object* v_leftArrowHead_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_leftArrowHead_elim(v_motive_2512_, v_t_2513_, v_h_2514_, v_leftArrowHead_2515_);
lean_dec(v_t_2513_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim___redArg(lean_object* v_t_2517_, lean_object* v_rightArrowHead_2518_){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2517_, v_rightArrowHead_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim___redArg___boxed(lean_object* v_t_2520_, lean_object* v_rightArrowHead_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim___redArg(v_t_2520_, v_rightArrowHead_2521_);
lean_dec(v_t_2520_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim(lean_object* v_motive_2523_, lean_object* v_t_2524_, lean_object* v_h_2525_, lean_object* v_rightArrowHead_2526_){
_start:
{
lean_object* v___x_2527_; 
v___x_2527_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2524_, v_rightArrowHead_2526_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim___boxed(lean_object* v_motive_2528_, lean_object* v_t_2529_, lean_object* v_h_2530_, lean_object* v_rightArrowHead_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_rightArrowHead_elim(v_motive_2528_, v_t_2529_, v_h_2530_, v_rightArrowHead_2531_);
lean_dec(v_t_2529_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim___redArg(lean_object* v_t_2533_, lean_object* v_star_2534_){
_start:
{
lean_object* v___x_2535_; 
v___x_2535_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2533_, v_star_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim___redArg___boxed(lean_object* v_t_2536_, lean_object* v_star_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim___redArg(v_t_2536_, v_star_2537_);
lean_dec(v_t_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim(lean_object* v_motive_2539_, lean_object* v_t_2540_, lean_object* v_h_2541_, lean_object* v_star_2542_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2540_, v_star_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim___boxed(lean_object* v_motive_2544_, lean_object* v_t_2545_, lean_object* v_h_2546_, lean_object* v_star_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_star_elim(v_motive_2544_, v_t_2545_, v_h_2546_, v_star_2547_);
lean_dec(v_t_2545_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim___redArg(lean_object* v_t_2549_, lean_object* v_range_2550_){
_start:
{
lean_object* v___x_2551_; 
v___x_2551_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2549_, v_range_2550_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim___redArg___boxed(lean_object* v_t_2552_, lean_object* v_range_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim___redArg(v_t_2552_, v_range_2553_);
lean_dec(v_t_2552_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim(lean_object* v_motive_2555_, lean_object* v_t_2556_, lean_object* v_h_2557_, lean_object* v_range_2558_){
_start:
{
lean_object* v___x_2559_; 
v___x_2559_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2556_, v_range_2558_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim___boxed(lean_object* v_motive_2560_, lean_object* v_t_2561_, lean_object* v_h_2562_, lean_object* v_range_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_range_elim(v_motive_2560_, v_t_2561_, v_h_2562_, v_range_2563_);
lean_dec(v_t_2561_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim___redArg(lean_object* v_t_2565_, lean_object* v_op_2566_){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2565_, v_op_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim___redArg___boxed(lean_object* v_t_2568_, lean_object* v_op_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim___redArg(v_t_2568_, v_op_2569_);
lean_dec(v_t_2568_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim(lean_object* v_motive_2571_, lean_object* v_t_2572_, lean_object* v_h_2573_, lean_object* v_op_2574_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorElim___redArg(v_t_2572_, v_op_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim___boxed(lean_object* v_motive_2576_, lean_object* v_t_2577_, lean_object* v_h_2578_, lean_object* v_op_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_op_elim(v_motive_2576_, v_t_2577_, v_h_2578_, v_op_2579_);
lean_dec(v_t_2577_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr(lean_object* v_x_2635_, lean_object* v_prec_2636_){
_start:
{
lean_object* v___y_2638_; lean_object* v___y_2645_; lean_object* v___y_2652_; lean_object* v___y_2659_; lean_object* v___y_2666_; lean_object* v___y_2673_; lean_object* v___y_2680_; lean_object* v___y_2687_; lean_object* v___y_2694_; lean_object* v___y_2701_; lean_object* v___y_2708_; lean_object* v___y_2715_; lean_object* v___y_2722_; lean_object* v___y_2729_; lean_object* v___y_2736_; lean_object* v___y_2743_; 
switch(lean_obj_tag(v_x_2635_))
{
case 0:
{
lean_object* v___x_2749_; uint8_t v___x_2750_; 
v___x_2749_ = lean_unsigned_to_nat(1024u);
v___x_2750_ = lean_nat_dec_le(v___x_2749_, v_prec_2636_);
if (v___x_2750_ == 0)
{
lean_object* v___x_2751_; 
v___x_2751_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2743_ = v___x_2751_;
goto v___jp_2742_;
}
else
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2743_ = v___x_2752_;
goto v___jp_2742_;
}
}
case 1:
{
lean_object* v___x_2753_; uint8_t v___x_2754_; 
v___x_2753_ = lean_unsigned_to_nat(1024u);
v___x_2754_ = lean_nat_dec_le(v___x_2753_, v_prec_2636_);
if (v___x_2754_ == 0)
{
lean_object* v___x_2755_; 
v___x_2755_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2736_ = v___x_2755_;
goto v___jp_2735_;
}
else
{
lean_object* v___x_2756_; 
v___x_2756_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2736_ = v___x_2756_;
goto v___jp_2735_;
}
}
case 2:
{
lean_object* v___x_2757_; uint8_t v___x_2758_; 
v___x_2757_ = lean_unsigned_to_nat(1024u);
v___x_2758_ = lean_nat_dec_le(v___x_2757_, v_prec_2636_);
if (v___x_2758_ == 0)
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2729_ = v___x_2759_;
goto v___jp_2728_;
}
else
{
lean_object* v___x_2760_; 
v___x_2760_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2729_ = v___x_2760_;
goto v___jp_2728_;
}
}
case 3:
{
lean_object* v___x_2761_; uint8_t v___x_2762_; 
v___x_2761_ = lean_unsigned_to_nat(1024u);
v___x_2762_ = lean_nat_dec_le(v___x_2761_, v_prec_2636_);
if (v___x_2762_ == 0)
{
lean_object* v___x_2763_; 
v___x_2763_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2722_ = v___x_2763_;
goto v___jp_2721_;
}
else
{
lean_object* v___x_2764_; 
v___x_2764_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2722_ = v___x_2764_;
goto v___jp_2721_;
}
}
case 4:
{
lean_object* v___x_2765_; uint8_t v___x_2766_; 
v___x_2765_ = lean_unsigned_to_nat(1024u);
v___x_2766_ = lean_nat_dec_le(v___x_2765_, v_prec_2636_);
if (v___x_2766_ == 0)
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2715_ = v___x_2767_;
goto v___jp_2714_;
}
else
{
lean_object* v___x_2768_; 
v___x_2768_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2715_ = v___x_2768_;
goto v___jp_2714_;
}
}
case 5:
{
lean_object* v___x_2769_; uint8_t v___x_2770_; 
v___x_2769_ = lean_unsigned_to_nat(1024u);
v___x_2770_ = lean_nat_dec_le(v___x_2769_, v_prec_2636_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2708_ = v___x_2771_;
goto v___jp_2707_;
}
else
{
lean_object* v___x_2772_; 
v___x_2772_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2708_ = v___x_2772_;
goto v___jp_2707_;
}
}
case 6:
{
lean_object* v___x_2773_; uint8_t v___x_2774_; 
v___x_2773_ = lean_unsigned_to_nat(1024u);
v___x_2774_ = lean_nat_dec_le(v___x_2773_, v_prec_2636_);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; 
v___x_2775_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2701_ = v___x_2775_;
goto v___jp_2700_;
}
else
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2701_ = v___x_2776_;
goto v___jp_2700_;
}
}
case 7:
{
lean_object* v___x_2777_; uint8_t v___x_2778_; 
v___x_2777_ = lean_unsigned_to_nat(1024u);
v___x_2778_ = lean_nat_dec_le(v___x_2777_, v_prec_2636_);
if (v___x_2778_ == 0)
{
lean_object* v___x_2779_; 
v___x_2779_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2694_ = v___x_2779_;
goto v___jp_2693_;
}
else
{
lean_object* v___x_2780_; 
v___x_2780_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2694_ = v___x_2780_;
goto v___jp_2693_;
}
}
case 8:
{
lean_object* v___x_2781_; uint8_t v___x_2782_; 
v___x_2781_ = lean_unsigned_to_nat(1024u);
v___x_2782_ = lean_nat_dec_le(v___x_2781_, v_prec_2636_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; 
v___x_2783_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2687_ = v___x_2783_;
goto v___jp_2686_;
}
else
{
lean_object* v___x_2784_; 
v___x_2784_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2687_ = v___x_2784_;
goto v___jp_2686_;
}
}
case 9:
{
lean_object* v___x_2785_; uint8_t v___x_2786_; 
v___x_2785_ = lean_unsigned_to_nat(1024u);
v___x_2786_ = lean_nat_dec_le(v___x_2785_, v_prec_2636_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; 
v___x_2787_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2680_ = v___x_2787_;
goto v___jp_2679_;
}
else
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2680_ = v___x_2788_;
goto v___jp_2679_;
}
}
case 10:
{
lean_object* v___x_2789_; uint8_t v___x_2790_; 
v___x_2789_ = lean_unsigned_to_nat(1024u);
v___x_2790_ = lean_nat_dec_le(v___x_2789_, v_prec_2636_);
if (v___x_2790_ == 0)
{
lean_object* v___x_2791_; 
v___x_2791_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2673_ = v___x_2791_;
goto v___jp_2672_;
}
else
{
lean_object* v___x_2792_; 
v___x_2792_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2673_ = v___x_2792_;
goto v___jp_2672_;
}
}
case 11:
{
lean_object* v___x_2793_; uint8_t v___x_2794_; 
v___x_2793_ = lean_unsigned_to_nat(1024u);
v___x_2794_ = lean_nat_dec_le(v___x_2793_, v_prec_2636_);
if (v___x_2794_ == 0)
{
lean_object* v___x_2795_; 
v___x_2795_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2666_ = v___x_2795_;
goto v___jp_2665_;
}
else
{
lean_object* v___x_2796_; 
v___x_2796_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2666_ = v___x_2796_;
goto v___jp_2665_;
}
}
case 12:
{
lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2797_ = lean_unsigned_to_nat(1024u);
v___x_2798_ = lean_nat_dec_le(v___x_2797_, v_prec_2636_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2659_ = v___x_2799_;
goto v___jp_2658_;
}
else
{
lean_object* v___x_2800_; 
v___x_2800_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2659_ = v___x_2800_;
goto v___jp_2658_;
}
}
case 13:
{
lean_object* v___x_2801_; uint8_t v___x_2802_; 
v___x_2801_ = lean_unsigned_to_nat(1024u);
v___x_2802_ = lean_nat_dec_le(v___x_2801_, v_prec_2636_);
if (v___x_2802_ == 0)
{
lean_object* v___x_2803_; 
v___x_2803_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2652_ = v___x_2803_;
goto v___jp_2651_;
}
else
{
lean_object* v___x_2804_; 
v___x_2804_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2652_ = v___x_2804_;
goto v___jp_2651_;
}
}
case 14:
{
lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2805_ = lean_unsigned_to_nat(1024u);
v___x_2806_ = lean_nat_dec_le(v___x_2805_, v_prec_2636_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; 
v___x_2807_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2645_ = v___x_2807_;
goto v___jp_2644_;
}
else
{
lean_object* v___x_2808_; 
v___x_2808_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2645_ = v___x_2808_;
goto v___jp_2644_;
}
}
case 15:
{
lean_object* v___x_2809_; uint8_t v___x_2810_; 
v___x_2809_ = lean_unsigned_to_nat(1024u);
v___x_2810_ = lean_nat_dec_le(v___x_2809_, v_prec_2636_);
if (v___x_2810_ == 0)
{
lean_object* v___x_2811_; 
v___x_2811_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2638_ = v___x_2811_;
goto v___jp_2637_;
}
else
{
lean_object* v___x_2812_; 
v___x_2812_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2638_ = v___x_2812_;
goto v___jp_2637_;
}
}
default: 
{
uint8_t v_operator_2813_; lean_object* v___y_2815_; lean_object* v___x_2824_; uint8_t v___x_2825_; 
v_operator_2813_ = lean_ctor_get_uint8(v_x_2635_, 0);
v___x_2824_ = lean_unsigned_to_nat(1024u);
v___x_2825_ = lean_nat_dec_le(v___x_2824_, v_prec_2636_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; 
v___x_2826_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_2815_ = v___x_2826_;
goto v___jp_2814_;
}
else
{
lean_object* v___x_2827_; 
v___x_2827_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_2815_ = v___x_2827_;
goto v___jp_2814_;
}
v___jp_2814_:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; uint8_t v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2816_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__34));
v___x_2817_ = lean_unsigned_to_nat(1024u);
v___x_2818_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprBinOp_repr(v_operator_2813_, v___x_2817_);
v___x_2819_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2816_);
lean_ctor_set(v___x_2819_, 1, v___x_2818_);
lean_inc(v___y_2815_);
v___x_2820_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___y_2815_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
v___x_2821_ = 0;
v___x_2822_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2822_, 0, v___x_2820_);
lean_ctor_set_uint8(v___x_2822_, sizeof(void*)*1, v___x_2821_);
v___x_2823_ = l_Repr_addAppParen(v___x_2822_, v_prec_2636_);
return v___x_2823_;
}
}
}
v___jp_2637_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2639_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__1));
lean_inc(v___y_2638_);
v___x_2640_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___y_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = 0;
v___x_2642_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set_uint8(v___x_2642_, sizeof(void*)*1, v___x_2641_);
v___x_2643_ = l_Repr_addAppParen(v___x_2642_, v_prec_2636_);
return v___x_2643_;
}
v___jp_2644_:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; uint8_t v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2646_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__3));
lean_inc(v___y_2645_);
v___x_2647_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2647_, 0, v___y_2645_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
v___x_2648_ = 0;
v___x_2649_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2649_, 0, v___x_2647_);
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*1, v___x_2648_);
v___x_2650_ = l_Repr_addAppParen(v___x_2649_, v_prec_2636_);
return v___x_2650_;
}
v___jp_2651_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2653_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__5));
lean_inc(v___y_2652_);
v___x_2654_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___y_2652_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = 0;
v___x_2656_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2656_, 0, v___x_2654_);
lean_ctor_set_uint8(v___x_2656_, sizeof(void*)*1, v___x_2655_);
v___x_2657_ = l_Repr_addAppParen(v___x_2656_, v_prec_2636_);
return v___x_2657_;
}
v___jp_2658_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2660_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__7));
lean_inc(v___y_2659_);
v___x_2661_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___y_2659_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
v___x_2662_ = 0;
v___x_2663_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2663_, 0, v___x_2661_);
lean_ctor_set_uint8(v___x_2663_, sizeof(void*)*1, v___x_2662_);
v___x_2664_ = l_Repr_addAppParen(v___x_2663_, v_prec_2636_);
return v___x_2664_;
}
v___jp_2665_:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2667_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__9));
lean_inc(v___y_2666_);
v___x_2668_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___y_2666_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = 0;
v___x_2670_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set_uint8(v___x_2670_, sizeof(void*)*1, v___x_2669_);
v___x_2671_ = l_Repr_addAppParen(v___x_2670_, v_prec_2636_);
return v___x_2671_;
}
v___jp_2672_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; uint8_t v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2674_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__11));
lean_inc(v___y_2673_);
v___x_2675_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___y_2673_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = 0;
v___x_2677_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2677_, 0, v___x_2675_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*1, v___x_2676_);
v___x_2678_ = l_Repr_addAppParen(v___x_2677_, v_prec_2636_);
return v___x_2678_;
}
v___jp_2679_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; uint8_t v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2681_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__13));
lean_inc(v___y_2680_);
v___x_2682_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2682_, 0, v___y_2680_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = 0;
v___x_2684_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2684_, 0, v___x_2682_);
lean_ctor_set_uint8(v___x_2684_, sizeof(void*)*1, v___x_2683_);
v___x_2685_ = l_Repr_addAppParen(v___x_2684_, v_prec_2636_);
return v___x_2685_;
}
v___jp_2686_:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; uint8_t v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2688_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__15));
lean_inc(v___y_2687_);
v___x_2689_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___y_2687_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = 0;
v___x_2691_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set_uint8(v___x_2691_, sizeof(void*)*1, v___x_2690_);
v___x_2692_ = l_Repr_addAppParen(v___x_2691_, v_prec_2636_);
return v___x_2692_;
}
v___jp_2693_:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; uint8_t v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2695_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__17));
lean_inc(v___y_2694_);
v___x_2696_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2696_, 0, v___y_2694_);
lean_ctor_set(v___x_2696_, 1, v___x_2695_);
v___x_2697_ = 0;
v___x_2698_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2698_, 0, v___x_2696_);
lean_ctor_set_uint8(v___x_2698_, sizeof(void*)*1, v___x_2697_);
v___x_2699_ = l_Repr_addAppParen(v___x_2698_, v_prec_2636_);
return v___x_2699_;
}
v___jp_2700_:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; uint8_t v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2702_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__19));
lean_inc(v___y_2701_);
v___x_2703_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___y_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = 0;
v___x_2705_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2705_, 0, v___x_2703_);
lean_ctor_set_uint8(v___x_2705_, sizeof(void*)*1, v___x_2704_);
v___x_2706_ = l_Repr_addAppParen(v___x_2705_, v_prec_2636_);
return v___x_2706_;
}
v___jp_2707_:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; uint8_t v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2709_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__21));
lean_inc(v___y_2708_);
v___x_2710_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2710_, 0, v___y_2708_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = 0;
v___x_2712_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2712_, 0, v___x_2710_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*1, v___x_2711_);
v___x_2713_ = l_Repr_addAppParen(v___x_2712_, v_prec_2636_);
return v___x_2713_;
}
v___jp_2714_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; uint8_t v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2716_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__23));
lean_inc(v___y_2715_);
v___x_2717_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2717_, 0, v___y_2715_);
lean_ctor_set(v___x_2717_, 1, v___x_2716_);
v___x_2718_ = 0;
v___x_2719_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2719_, 0, v___x_2717_);
lean_ctor_set_uint8(v___x_2719_, sizeof(void*)*1, v___x_2718_);
v___x_2720_ = l_Repr_addAppParen(v___x_2719_, v_prec_2636_);
return v___x_2720_;
}
v___jp_2721_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; uint8_t v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2723_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__25));
lean_inc(v___y_2722_);
v___x_2724_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2724_, 0, v___y_2722_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
v___x_2725_ = 0;
v___x_2726_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2726_, 0, v___x_2724_);
lean_ctor_set_uint8(v___x_2726_, sizeof(void*)*1, v___x_2725_);
v___x_2727_ = l_Repr_addAppParen(v___x_2726_, v_prec_2636_);
return v___x_2727_;
}
v___jp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; uint8_t v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2730_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__27));
lean_inc(v___y_2729_);
v___x_2731_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___y_2729_);
lean_ctor_set(v___x_2731_, 1, v___x_2730_);
v___x_2732_ = 0;
v___x_2733_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2733_, 0, v___x_2731_);
lean_ctor_set_uint8(v___x_2733_, sizeof(void*)*1, v___x_2732_);
v___x_2734_ = l_Repr_addAppParen(v___x_2733_, v_prec_2636_);
return v___x_2734_;
}
v___jp_2735_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; uint8_t v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2737_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__29));
lean_inc(v___y_2736_);
v___x_2738_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___y_2736_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v___x_2739_ = 0;
v___x_2740_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2740_, 0, v___x_2738_);
lean_ctor_set_uint8(v___x_2740_, sizeof(void*)*1, v___x_2739_);
v___x_2741_ = l_Repr_addAppParen(v___x_2740_, v_prec_2636_);
return v___x_2741_;
}
v___jp_2742_:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; uint8_t v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2744_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___closed__31));
lean_inc(v___y_2743_);
v___x_2745_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___y_2743_);
lean_ctor_set(v___x_2745_, 1, v___x_2744_);
v___x_2746_ = 0;
v___x_2747_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2747_, 0, v___x_2745_);
lean_ctor_set_uint8(v___x_2747_, sizeof(void*)*1, v___x_2746_);
v___x_2748_ = l_Repr_addAppParen(v___x_2747_, v_prec_2636_);
return v___x_2748_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr___boxed(lean_object* v_x_2828_, lean_object* v_prec_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr(v_x_2828_, v_prec_2829_);
lean_dec(v_prec_2829_);
lean_dec(v_x_2828_);
return v_res_2830_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol_decEq(lean_object* v_x_2833_, lean_object* v_x_2834_){
_start:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; 
v___x_2835_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorIdx(v_x_2833_);
v___x_2836_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Symbol_ctorIdx(v_x_2834_);
v___x_2837_ = lean_nat_dec_eq(v___x_2835_, v___x_2836_);
lean_dec(v___x_2836_);
lean_dec(v___x_2835_);
if (v___x_2837_ == 0)
{
return v___x_2837_;
}
else
{
if (lean_obj_tag(v_x_2833_) == 16)
{
uint8_t v_operator_2838_; uint8_t v_operator_2839_; uint8_t v___x_2840_; 
v_operator_2838_ = lean_ctor_get_uint8(v_x_2833_, 0);
v_operator_2839_ = lean_ctor_get_uint8(v_x_2834_, 0);
v___x_2840_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqBinOp(v_operator_2838_, v_operator_2839_);
return v___x_2840_;
}
else
{
return v___x_2837_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol_decEq___boxed(lean_object* v_x_2841_, lean_object* v_x_2842_){
_start:
{
uint8_t v_res_2843_; lean_object* v_r_2844_; 
v_res_2843_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol_decEq(v_x_2841_, v_x_2842_);
lean_dec(v_x_2842_);
lean_dec(v_x_2841_);
v_r_2844_ = lean_box(v_res_2843_);
return v_r_2844_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol(lean_object* v_x_2845_, lean_object* v_x_2846_){
_start:
{
uint8_t v___x_2847_; 
v___x_2847_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol_decEq(v_x_2845_, v_x_2846_);
return v___x_2847_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol___boxed(lean_object* v_x_2848_, lean_object* v_x_2849_){
_start:
{
uint8_t v_res_2850_; lean_object* v_r_2851_; 
v_res_2850_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol(v_x_2848_, v_x_2849_);
lean_dec(v_x_2849_);
lean_dec(v_x_2848_);
v_r_2851_ = lean_box(v_res_2850_);
return v_r_2851_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorIdx(lean_object* v_x_2852_){
_start:
{
switch(lean_obj_tag(v_x_2852_))
{
case 0:
{
lean_object* v___x_2853_; 
v___x_2853_ = lean_unsigned_to_nat(0u);
return v___x_2853_;
}
case 1:
{
lean_object* v___x_2854_; 
v___x_2854_ = lean_unsigned_to_nat(1u);
return v___x_2854_;
}
case 2:
{
lean_object* v___x_2855_; 
v___x_2855_ = lean_unsigned_to_nat(2u);
return v___x_2855_;
}
case 3:
{
lean_object* v___x_2856_; 
v___x_2856_ = lean_unsigned_to_nat(3u);
return v___x_2856_;
}
case 4:
{
lean_object* v___x_2857_; 
v___x_2857_ = lean_unsigned_to_nat(4u);
return v___x_2857_;
}
case 5:
{
lean_object* v___x_2858_; 
v___x_2858_ = lean_unsigned_to_nat(5u);
return v___x_2858_;
}
case 6:
{
lean_object* v___x_2859_; 
v___x_2859_ = lean_unsigned_to_nat(6u);
return v___x_2859_;
}
case 7:
{
lean_object* v___x_2860_; 
v___x_2860_ = lean_unsigned_to_nat(7u);
return v___x_2860_;
}
case 8:
{
lean_object* v___x_2861_; 
v___x_2861_ = lean_unsigned_to_nat(8u);
return v___x_2861_;
}
case 9:
{
lean_object* v___x_2862_; 
v___x_2862_ = lean_unsigned_to_nat(9u);
return v___x_2862_;
}
default: 
{
lean_object* v___x_2863_; 
v___x_2863_ = lean_unsigned_to_nat(10u);
return v___x_2863_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorIdx___boxed(lean_object* v_x_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorIdx(v_x_2864_);
lean_dec(v_x_2864_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(lean_object* v_t_2866_, lean_object* v_k_2867_){
_start:
{
switch(lean_obj_tag(v_t_2866_))
{
case 0:
{
uint8_t v_value_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v_value_2868_ = lean_ctor_get_uint8(v_t_2866_, 0);
lean_dec_ref_known(v_t_2866_, 0);
v___x_2869_ = lean_box(v_value_2868_);
v___x_2870_ = lean_apply_1(v_k_2867_, v___x_2869_);
return v___x_2870_;
}
case 1:
{
lean_object* v_value_2871_; lean_object* v___x_2872_; 
v_value_2871_ = lean_ctor_get(v_t_2866_, 0);
lean_inc(v_value_2871_);
lean_dec_ref_known(v_t_2866_, 1);
v___x_2872_ = lean_apply_1(v_k_2867_, v_value_2871_);
return v___x_2872_;
}
case 5:
{
lean_object* v_decoded_2873_; lean_object* v___x_2874_; 
v_decoded_2873_ = lean_ctor_get(v_t_2866_, 0);
lean_inc(v_decoded_2873_);
lean_dec_ref_known(v_t_2866_, 1);
v___x_2874_ = lean_apply_1(v_k_2867_, v_decoded_2873_);
return v___x_2874_;
}
case 7:
{
uint8_t v_value_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v_value_2875_ = lean_ctor_get_uint8(v_t_2866_, 0);
lean_dec_ref_known(v_t_2866_, 0);
v___x_2876_ = lean_box(v_value_2875_);
v___x_2877_ = lean_apply_1(v_k_2867_, v___x_2876_);
return v___x_2877_;
}
case 8:
{
uint8_t v_value_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v_value_2878_ = lean_ctor_get_uint8(v_t_2866_, 0);
lean_dec_ref_known(v_t_2866_, 0);
v___x_2879_ = lean_box(v_value_2878_);
v___x_2880_ = lean_apply_1(v_k_2867_, v___x_2879_);
return v___x_2880_;
}
case 9:
{
lean_object* v_value_2881_; lean_object* v___x_2882_; 
v_value_2881_ = lean_ctor_get(v_t_2866_, 0);
lean_inc(v_value_2881_);
lean_dec_ref_known(v_t_2866_, 1);
v___x_2882_ = lean_apply_1(v_k_2867_, v_value_2881_);
return v___x_2882_;
}
case 10:
{
return v_k_2867_;
}
default: 
{
lean_object* v_decoded_2883_; lean_object* v___x_2884_; 
v_decoded_2883_ = lean_ctor_get(v_t_2866_, 0);
lean_inc_ref(v_decoded_2883_);
lean_dec(v_t_2866_);
v___x_2884_ = lean_apply_1(v_k_2867_, v_decoded_2883_);
return v___x_2884_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim(lean_object* v_motive_2885_, lean_object* v_ctorIdx_2886_, lean_object* v_t_2887_, lean_object* v_h_2888_, lean_object* v_k_2889_){
_start:
{
lean_object* v___x_2890_; 
v___x_2890_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2887_, v_k_2889_);
return v___x_2890_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___boxed(lean_object* v_motive_2891_, lean_object* v_ctorIdx_2892_, lean_object* v_t_2893_, lean_object* v_h_2894_, lean_object* v_k_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim(v_motive_2891_, v_ctorIdx_2892_, v_t_2893_, v_h_2894_, v_k_2895_);
lean_dec(v_ctorIdx_2892_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_keyword_elim___redArg(lean_object* v_t_2897_, lean_object* v_keyword_2898_){
_start:
{
lean_object* v___x_2899_; 
v___x_2899_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2897_, v_keyword_2898_);
return v___x_2899_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_keyword_elim(lean_object* v_motive_2900_, lean_object* v_t_2901_, lean_object* v_h_2902_, lean_object* v_keyword_2903_){
_start:
{
lean_object* v___x_2904_; 
v___x_2904_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2901_, v_keyword_2903_);
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_symbol_elim___redArg(lean_object* v_t_2905_, lean_object* v_symbol_2906_){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2905_, v_symbol_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_symbol_elim(lean_object* v_motive_2908_, lean_object* v_t_2909_, lean_object* v_h_2910_, lean_object* v_symbol_2911_){
_start:
{
lean_object* v___x_2912_; 
v___x_2912_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2909_, v_symbol_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_qid_elim___redArg(lean_object* v_t_2913_, lean_object* v_qid_2914_){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2913_, v_qid_2914_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_qid_elim(lean_object* v_motive_2916_, lean_object* v_t_2917_, lean_object* v_h_2918_, lean_object* v_qid_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2917_, v_qid_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_parameter_elim___redArg(lean_object* v_t_2921_, lean_object* v_parameter_2922_){
_start:
{
lean_object* v___x_2923_; 
v___x_2923_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2921_, v_parameter_2922_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_parameter_elim(lean_object* v_motive_2924_, lean_object* v_t_2925_, lean_object* v_h_2926_, lean_object* v_parameter_2927_){
_start:
{
lean_object* v___x_2928_; 
v___x_2928_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2925_, v_parameter_2927_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_stringLit_elim___redArg(lean_object* v_t_2929_, lean_object* v_stringLit_2930_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2929_, v_stringLit_2930_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_stringLit_elim(lean_object* v_motive_2932_, lean_object* v_t_2933_, lean_object* v_h_2934_, lean_object* v_stringLit_2935_){
_start:
{
lean_object* v___x_2936_; 
v___x_2936_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2933_, v_stringLit_2935_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_integerLit_elim___redArg(lean_object* v_t_2937_, lean_object* v_integerLit_2938_){
_start:
{
lean_object* v___x_2939_; 
v___x_2939_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2937_, v_integerLit_2938_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_integerLit_elim(lean_object* v_motive_2940_, lean_object* v_t_2941_, lean_object* v_h_2942_, lean_object* v_integerLit_2943_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2941_, v_integerLit_2943_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_floatLit_elim___redArg(lean_object* v_t_2945_, lean_object* v_floatLit_2946_){
_start:
{
lean_object* v___x_2947_; 
v___x_2947_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2945_, v_floatLit_2946_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_floatLit_elim(lean_object* v_motive_2948_, lean_object* v_t_2949_, lean_object* v_h_2950_, lean_object* v_floatLit_2951_){
_start:
{
lean_object* v___x_2952_; 
v___x_2952_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2949_, v_floatLit_2951_);
return v___x_2952_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_functionName_elim___redArg(lean_object* v_t_2953_, lean_object* v_functionName_2954_){
_start:
{
lean_object* v___x_2955_; 
v___x_2955_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2953_, v_functionName_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_functionName_elim(lean_object* v_motive_2956_, lean_object* v_t_2957_, lean_object* v_h_2958_, lean_object* v_functionName_2959_){
_start:
{
lean_object* v___x_2960_; 
v___x_2960_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2957_, v_functionName_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_quantifier_elim___redArg(lean_object* v_t_2961_, lean_object* v_quantifier_2962_){
_start:
{
lean_object* v___x_2963_; 
v___x_2963_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2961_, v_quantifier_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_quantifier_elim(lean_object* v_motive_2964_, lean_object* v_t_2965_, lean_object* v_h_2966_, lean_object* v_quantifier_2967_){
_start:
{
lean_object* v___x_2968_; 
v___x_2968_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2965_, v_quantifier_2967_);
return v___x_2968_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_natural_elim___redArg(lean_object* v_t_2969_, lean_object* v_natural_2970_){
_start:
{
lean_object* v___x_2971_; 
v___x_2971_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2969_, v_natural_2970_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_natural_elim(lean_object* v_motive_2972_, lean_object* v_t_2973_, lean_object* v_h_2974_, lean_object* v_natural_2975_){
_start:
{
lean_object* v___x_2976_; 
v___x_2976_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2973_, v_natural_2975_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_lf_elim___redArg(lean_object* v_t_2977_, lean_object* v_lf_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2977_, v_lf_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_lf_elim(lean_object* v_motive_2980_, lean_object* v_t_2981_, lean_object* v_h_2982_, lean_object* v_lf_2983_){
_start:
{
lean_object* v___x_2984_; 
v___x_2984_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorElim___redArg(v_t_2981_, v_lf_2983_);
return v___x_2984_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__20(void){
_start:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_unsigned_to_nat(0u);
v___x_3025_ = lean_nat_to_int(v___x_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr(lean_object* v_x_3050_, lean_object* v_prec_3051_){
_start:
{
lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3062_; 
switch(lean_obj_tag(v_x_3050_))
{
case 0:
{
uint8_t v_value_3068_; lean_object* v___y_3070_; lean_object* v___x_3079_; uint8_t v___x_3080_; 
v_value_3068_ = lean_ctor_get_uint8(v_x_3050_, 0);
lean_dec_ref_known(v_x_3050_, 0);
v___x_3079_ = lean_unsigned_to_nat(1024u);
v___x_3080_ = lean_nat_dec_le(v___x_3079_, v_prec_3051_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; 
v___x_3081_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3070_ = v___x_3081_;
goto v___jp_3069_;
}
else
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3070_ = v___x_3082_;
goto v___jp_3069_;
}
v___jp_3069_:
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3071_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__4));
v___x_3072_ = lean_unsigned_to_nat(1024u);
v___x_3073_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprKeyword_repr(v_value_3068_, v___x_3072_);
v___x_3074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3071_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
lean_inc(v___y_3070_);
v___x_3075_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___y_3070_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
v___x_3076_ = 0;
v___x_3077_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3077_, 0, v___x_3075_);
lean_ctor_set_uint8(v___x_3077_, sizeof(void*)*1, v___x_3076_);
v___x_3078_ = l_Repr_addAppParen(v___x_3077_, v_prec_3051_);
return v___x_3078_;
}
}
case 1:
{
lean_object* v_value_3083_; lean_object* v___y_3085_; lean_object* v___x_3094_; uint8_t v___x_3095_; 
v_value_3083_ = lean_ctor_get(v_x_3050_, 0);
lean_inc(v_value_3083_);
lean_dec_ref_known(v_x_3050_, 1);
v___x_3094_ = lean_unsigned_to_nat(1024u);
v___x_3095_ = lean_nat_dec_le(v___x_3094_, v_prec_3051_);
if (v___x_3095_ == 0)
{
lean_object* v___x_3096_; 
v___x_3096_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3085_ = v___x_3096_;
goto v___jp_3084_;
}
else
{
lean_object* v___x_3097_; 
v___x_3097_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3085_ = v___x_3097_;
goto v___jp_3084_;
}
v___jp_3084_:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; uint8_t v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3086_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__7));
v___x_3087_ = lean_unsigned_to_nat(1024u);
v___x_3088_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprSymbol_repr(v_value_3083_, v___x_3087_);
lean_dec(v_value_3083_);
v___x_3089_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3086_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
lean_inc(v___y_3085_);
v___x_3090_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___y_3085_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = 0;
v___x_3092_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3092_, 0, v___x_3090_);
lean_ctor_set_uint8(v___x_3092_, sizeof(void*)*1, v___x_3091_);
v___x_3093_ = l_Repr_addAppParen(v___x_3092_, v_prec_3051_);
return v___x_3093_;
}
}
case 2:
{
lean_object* v_decoded_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3118_; 
v_decoded_3098_ = lean_ctor_get(v_x_3050_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v_x_3050_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3100_ = v_x_3050_;
v_isShared_3101_ = v_isSharedCheck_3118_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_decoded_3098_);
lean_dec(v_x_3050_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3118_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___y_3103_; lean_object* v___x_3114_; uint8_t v___x_3115_; 
v___x_3114_ = lean_unsigned_to_nat(1024u);
v___x_3115_ = lean_nat_dec_le(v___x_3114_, v_prec_3051_);
if (v___x_3115_ == 0)
{
lean_object* v___x_3116_; 
v___x_3116_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3103_ = v___x_3116_;
goto v___jp_3102_;
}
else
{
lean_object* v___x_3117_; 
v___x_3117_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3103_ = v___x_3117_;
goto v___jp_3102_;
}
v___jp_3102_:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3107_; 
v___x_3104_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__10));
v___x_3105_ = l_String_quote(v_decoded_3098_);
if (v_isShared_3101_ == 0)
{
lean_ctor_set_tag(v___x_3100_, 3);
lean_ctor_set(v___x_3100_, 0, v___x_3105_);
v___x_3107_ = v___x_3100_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v___x_3105_);
v___x_3107_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; uint8_t v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3104_);
lean_ctor_set(v___x_3108_, 1, v___x_3107_);
lean_inc(v___y_3103_);
v___x_3109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___y_3103_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
v___x_3110_ = 0;
v___x_3111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3111_, 0, v___x_3109_);
lean_ctor_set_uint8(v___x_3111_, sizeof(void*)*1, v___x_3110_);
v___x_3112_ = l_Repr_addAppParen(v___x_3111_, v_prec_3051_);
return v___x_3112_;
}
}
}
}
case 3:
{
lean_object* v_decoded_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3139_; 
v_decoded_3119_ = lean_ctor_get(v_x_3050_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v_x_3050_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3121_ = v_x_3050_;
v_isShared_3122_ = v_isSharedCheck_3139_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_decoded_3119_);
lean_dec(v_x_3050_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3139_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___y_3124_; lean_object* v___x_3135_; uint8_t v___x_3136_; 
v___x_3135_ = lean_unsigned_to_nat(1024u);
v___x_3136_ = lean_nat_dec_le(v___x_3135_, v_prec_3051_);
if (v___x_3136_ == 0)
{
lean_object* v___x_3137_; 
v___x_3137_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3124_ = v___x_3137_;
goto v___jp_3123_;
}
else
{
lean_object* v___x_3138_; 
v___x_3138_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3124_ = v___x_3138_;
goto v___jp_3123_;
}
v___jp_3123_:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3128_; 
v___x_3125_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__13));
v___x_3126_ = l_String_quote(v_decoded_3119_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v___x_3126_);
v___x_3128_ = v___x_3121_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v___x_3126_);
v___x_3128_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; uint8_t v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3125_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
lean_inc(v___y_3124_);
v___x_3130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3130_, 0, v___y_3124_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
v___x_3131_ = 0;
v___x_3132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3132_, 0, v___x_3130_);
lean_ctor_set_uint8(v___x_3132_, sizeof(void*)*1, v___x_3131_);
v___x_3133_ = l_Repr_addAppParen(v___x_3132_, v_prec_3051_);
return v___x_3133_;
}
}
}
}
case 4:
{
lean_object* v_decoded_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3160_; 
v_decoded_3140_ = lean_ctor_get(v_x_3050_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v_x_3050_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3142_ = v_x_3050_;
v_isShared_3143_ = v_isSharedCheck_3160_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_decoded_3140_);
lean_dec(v_x_3050_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3160_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___y_3145_; lean_object* v___x_3156_; uint8_t v___x_3157_; 
v___x_3156_ = lean_unsigned_to_nat(1024u);
v___x_3157_ = lean_nat_dec_le(v___x_3156_, v_prec_3051_);
if (v___x_3157_ == 0)
{
lean_object* v___x_3158_; 
v___x_3158_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3145_ = v___x_3158_;
goto v___jp_3144_;
}
else
{
lean_object* v___x_3159_; 
v___x_3159_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3145_ = v___x_3159_;
goto v___jp_3144_;
}
v___jp_3144_:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3146_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__16));
v___x_3147_ = l_String_quote(v_decoded_3140_);
if (v_isShared_3143_ == 0)
{
lean_ctor_set_tag(v___x_3142_, 3);
lean_ctor_set(v___x_3142_, 0, v___x_3147_);
v___x_3149_ = v___x_3142_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; uint8_t v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3146_);
lean_ctor_set(v___x_3150_, 1, v___x_3149_);
lean_inc(v___y_3145_);
v___x_3151_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___y_3145_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = 0;
v___x_3153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3153_, 0, v___x_3151_);
lean_ctor_set_uint8(v___x_3153_, sizeof(void*)*1, v___x_3152_);
v___x_3154_ = l_Repr_addAppParen(v___x_3153_, v_prec_3051_);
return v___x_3154_;
}
}
}
}
case 5:
{
lean_object* v_decoded_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3184_; 
v_decoded_3161_ = lean_ctor_get(v_x_3050_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v_x_3050_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3163_ = v_x_3050_;
v_isShared_3164_ = v_isSharedCheck_3184_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_decoded_3161_);
lean_dec(v_x_3050_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3184_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___y_3166_; lean_object* v___x_3180_; uint8_t v___x_3181_; 
v___x_3180_ = lean_unsigned_to_nat(1024u);
v___x_3181_ = lean_nat_dec_le(v___x_3180_, v_prec_3051_);
if (v___x_3181_ == 0)
{
lean_object* v___x_3182_; 
v___x_3182_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3166_ = v___x_3182_;
goto v___jp_3165_;
}
else
{
lean_object* v___x_3183_; 
v___x_3183_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3166_ = v___x_3183_;
goto v___jp_3165_;
}
v___jp_3165_:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; uint8_t v___x_3169_; 
v___x_3167_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__19));
v___x_3168_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__20, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__20_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__20);
v___x_3169_ = lean_int_dec_lt(v_decoded_3161_, v___x_3168_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; lean_object* v___x_3172_; 
v___x_3170_ = l_Int_repr(v_decoded_3161_);
lean_dec(v_decoded_3161_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set_tag(v___x_3163_, 3);
lean_ctor_set(v___x_3163_, 0, v___x_3170_);
v___x_3172_ = v___x_3163_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v___x_3170_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
v___y_3053_ = v___x_3167_;
v___y_3054_ = v___y_3166_;
v___y_3055_ = v___x_3172_;
goto v___jp_3052_;
}
}
else
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3177_; 
v___x_3174_ = lean_unsigned_to_nat(1024u);
v___x_3175_ = l_Int_repr(v_decoded_3161_);
lean_dec(v_decoded_3161_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set_tag(v___x_3163_, 3);
lean_ctor_set(v___x_3163_, 0, v___x_3175_);
v___x_3177_ = v___x_3163_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3175_);
v___x_3177_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3178_; 
v___x_3178_ = l_Repr_addAppParen(v___x_3177_, v___x_3174_);
v___y_3053_ = v___x_3167_;
v___y_3054_ = v___y_3166_;
v___y_3055_ = v___x_3178_;
goto v___jp_3052_;
}
}
}
}
}
case 6:
{
lean_object* v_canonical_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3205_; 
v_canonical_3185_ = lean_ctor_get(v_x_3050_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v_x_3050_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3187_ = v_x_3050_;
v_isShared_3188_ = v_isSharedCheck_3205_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_canonical_3185_);
lean_dec(v_x_3050_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3205_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___y_3190_; lean_object* v___x_3201_; uint8_t v___x_3202_; 
v___x_3201_ = lean_unsigned_to_nat(1024u);
v___x_3202_ = lean_nat_dec_le(v___x_3201_, v_prec_3051_);
if (v___x_3202_ == 0)
{
lean_object* v___x_3203_; 
v___x_3203_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3190_ = v___x_3203_;
goto v___jp_3189_;
}
else
{
lean_object* v___x_3204_; 
v___x_3204_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3190_ = v___x_3204_;
goto v___jp_3189_;
}
v___jp_3189_:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3194_; 
v___x_3191_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__23));
v___x_3192_ = l_String_quote(v_canonical_3185_);
if (v_isShared_3188_ == 0)
{
lean_ctor_set_tag(v___x_3187_, 3);
lean_ctor_set(v___x_3187_, 0, v___x_3192_);
v___x_3194_ = v___x_3187_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; uint8_t v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3191_);
lean_ctor_set(v___x_3195_, 1, v___x_3194_);
lean_inc(v___y_3190_);
v___x_3196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3196_, 0, v___y_3190_);
lean_ctor_set(v___x_3196_, 1, v___x_3195_);
v___x_3197_ = 0;
v___x_3198_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3198_, 0, v___x_3196_);
lean_ctor_set_uint8(v___x_3198_, sizeof(void*)*1, v___x_3197_);
v___x_3199_ = l_Repr_addAppParen(v___x_3198_, v_prec_3051_);
return v___x_3199_;
}
}
}
}
case 7:
{
uint8_t v_value_3206_; lean_object* v___y_3208_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v_value_3206_ = lean_ctor_get_uint8(v_x_3050_, 0);
lean_dec_ref_known(v_x_3050_, 0);
v___x_3217_ = lean_unsigned_to_nat(1024u);
v___x_3218_ = lean_nat_dec_le(v___x_3217_, v_prec_3051_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; 
v___x_3219_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3208_ = v___x_3219_;
goto v___jp_3207_;
}
else
{
lean_object* v___x_3220_; 
v___x_3220_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3208_ = v___x_3220_;
goto v___jp_3207_;
}
v___jp_3207_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; uint8_t v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3209_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__26));
v___x_3210_ = lean_unsigned_to_nat(1024u);
v___x_3211_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr(v_value_3206_, v___x_3210_);
v___x_3212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3209_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
lean_inc(v___y_3208_);
v___x_3213_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___y_3208_);
lean_ctor_set(v___x_3213_, 1, v___x_3212_);
v___x_3214_ = 0;
v___x_3215_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3215_, 0, v___x_3213_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*1, v___x_3214_);
v___x_3216_ = l_Repr_addAppParen(v___x_3215_, v_prec_3051_);
return v___x_3216_;
}
}
case 8:
{
uint8_t v_value_3221_; lean_object* v___y_3223_; lean_object* v___x_3232_; uint8_t v___x_3233_; 
v_value_3221_ = lean_ctor_get_uint8(v_x_3050_, 0);
lean_dec_ref_known(v_x_3050_, 0);
v___x_3232_ = lean_unsigned_to_nat(1024u);
v___x_3233_ = lean_nat_dec_le(v___x_3232_, v_prec_3051_);
if (v___x_3233_ == 0)
{
lean_object* v___x_3234_; 
v___x_3234_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3223_ = v___x_3234_;
goto v___jp_3222_;
}
else
{
lean_object* v___x_3235_; 
v___x_3235_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3223_ = v___x_3235_;
goto v___jp_3222_;
}
v___jp_3222_:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; uint8_t v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3224_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__29));
v___x_3225_ = lean_unsigned_to_nat(1024u);
v___x_3226_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprQuantifier_repr(v_value_3221_, v___x_3225_);
v___x_3227_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3224_);
lean_ctor_set(v___x_3227_, 1, v___x_3226_);
lean_inc(v___y_3223_);
v___x_3228_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3228_, 0, v___y_3223_);
lean_ctor_set(v___x_3228_, 1, v___x_3227_);
v___x_3229_ = 0;
v___x_3230_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3230_, 0, v___x_3228_);
lean_ctor_set_uint8(v___x_3230_, sizeof(void*)*1, v___x_3229_);
v___x_3231_ = l_Repr_addAppParen(v___x_3230_, v_prec_3051_);
return v___x_3231_;
}
}
case 9:
{
lean_object* v_value_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3256_; 
v_value_3236_ = lean_ctor_get(v_x_3050_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_x_3050_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3238_ = v_x_3050_;
v_isShared_3239_ = v_isSharedCheck_3256_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_value_3236_);
lean_dec(v_x_3050_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3256_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___y_3241_; lean_object* v___x_3252_; uint8_t v___x_3253_; 
v___x_3252_ = lean_unsigned_to_nat(1024u);
v___x_3253_ = lean_nat_dec_le(v___x_3252_, v_prec_3051_);
if (v___x_3253_ == 0)
{
lean_object* v___x_3254_; 
v___x_3254_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3241_ = v___x_3254_;
goto v___jp_3240_;
}
else
{
lean_object* v___x_3255_; 
v___x_3255_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3241_ = v___x_3255_;
goto v___jp_3240_;
}
v___jp_3240_:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3245_; 
v___x_3242_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__32));
v___x_3243_ = l_Nat_reprFast(v_value_3236_);
if (v_isShared_3239_ == 0)
{
lean_ctor_set_tag(v___x_3238_, 3);
lean_ctor_set(v___x_3238_, 0, v___x_3243_);
v___x_3245_ = v___x_3238_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3243_);
v___x_3245_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; uint8_t v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3242_);
lean_ctor_set(v___x_3246_, 1, v___x_3245_);
lean_inc(v___y_3241_);
v___x_3247_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___y_3241_);
lean_ctor_set(v___x_3247_, 1, v___x_3246_);
v___x_3248_ = 0;
v___x_3249_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3249_, 0, v___x_3247_);
lean_ctor_set_uint8(v___x_3249_, sizeof(void*)*1, v___x_3248_);
v___x_3250_ = l_Repr_addAppParen(v___x_3249_, v_prec_3051_);
return v___x_3250_;
}
}
}
}
default: 
{
lean_object* v___x_3257_; uint8_t v___x_3258_; 
v___x_3257_ = lean_unsigned_to_nat(1024u);
v___x_3258_ = lean_nat_dec_le(v___x_3257_, v_prec_3051_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__22);
v___y_3062_ = v___x_3259_;
goto v___jp_3061_;
}
else
{
lean_object* v___x_3260_; 
v___x_3260_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprFunctionName_repr___closed__23);
v___y_3062_ = v___x_3260_;
goto v___jp_3061_;
}
}
}
v___jp_3052_:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; uint8_t v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
lean_inc(v___y_3053_);
v___x_3056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___y_3053_);
lean_ctor_set(v___x_3056_, 1, v___y_3055_);
lean_inc(v___y_3054_);
v___x_3057_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3057_, 0, v___y_3054_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
v___x_3058_ = 0;
v___x_3059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3059_, 0, v___x_3057_);
lean_ctor_set_uint8(v___x_3059_, sizeof(void*)*1, v___x_3058_);
v___x_3060_ = l_Repr_addAppParen(v___x_3059_, v_prec_3051_);
return v___x_3060_;
}
v___jp_3061_:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; uint8_t v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3063_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___closed__1));
lean_inc(v___y_3062_);
v___x_3064_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3064_, 0, v___y_3062_);
lean_ctor_set(v___x_3064_, 1, v___x_3063_);
v___x_3065_ = 0;
v___x_3066_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3066_, 0, v___x_3064_);
lean_ctor_set_uint8(v___x_3066_, sizeof(void*)*1, v___x_3065_);
v___x_3067_ = l_Repr_addAppParen(v___x_3066_, v_prec_3051_);
return v___x_3067_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr___boxed(lean_object* v_x_3261_, lean_object* v_prec_3262_){
_start:
{
lean_object* v_res_3263_; 
v_res_3263_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instReprToken_repr(v_x_3261_, v_prec_3262_);
lean_dec(v_prec_3262_);
return v_res_3263_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken_decEq(lean_object* v_x_3266_, lean_object* v_x_3267_){
_start:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; uint8_t v___x_3270_; 
v___x_3268_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorIdx(v_x_3266_);
v___x_3269_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_Token_ctorIdx(v_x_3267_);
v___x_3270_ = lean_nat_dec_eq(v___x_3268_, v___x_3269_);
lean_dec(v___x_3269_);
lean_dec(v___x_3268_);
if (v___x_3270_ == 0)
{
return v___x_3270_;
}
else
{
switch(lean_obj_tag(v_x_3266_))
{
case 0:
{
uint8_t v_value_3271_; uint8_t v_value_3272_; uint8_t v___x_3273_; 
v_value_3271_ = lean_ctor_get_uint8(v_x_3266_, 0);
v_value_3272_ = lean_ctor_get_uint8(v_x_3267_, 0);
v___x_3273_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqKeyword(v_value_3271_, v_value_3272_);
return v___x_3273_;
}
case 1:
{
lean_object* v_value_3274_; lean_object* v_value_3275_; uint8_t v___x_3276_; 
v_value_3274_ = lean_ctor_get(v_x_3266_, 0);
v_value_3275_ = lean_ctor_get(v_x_3267_, 0);
v___x_3276_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqSymbol_decEq(v_value_3274_, v_value_3275_);
return v___x_3276_;
}
case 5:
{
lean_object* v_decoded_3277_; lean_object* v_decoded_3278_; uint8_t v___x_3279_; 
v_decoded_3277_ = lean_ctor_get(v_x_3266_, 0);
v_decoded_3278_ = lean_ctor_get(v_x_3267_, 0);
v___x_3279_ = lean_int_dec_eq(v_decoded_3277_, v_decoded_3278_);
return v___x_3279_;
}
case 7:
{
uint8_t v_value_3280_; uint8_t v_value_3281_; uint8_t v___x_3282_; 
v_value_3280_ = lean_ctor_get_uint8(v_x_3266_, 0);
v_value_3281_ = lean_ctor_get_uint8(v_x_3267_, 0);
v___x_3282_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqFunctionName(v_value_3280_, v_value_3281_);
return v___x_3282_;
}
case 8:
{
uint8_t v_value_3283_; uint8_t v_value_3284_; uint8_t v___x_3285_; 
v_value_3283_ = lean_ctor_get_uint8(v_x_3266_, 0);
v_value_3284_ = lean_ctor_get_uint8(v_x_3267_, 0);
v___x_3285_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqQuantifier(v_value_3283_, v_value_3284_);
return v___x_3285_;
}
case 9:
{
lean_object* v_value_3286_; lean_object* v_value_3287_; uint8_t v___x_3288_; 
v_value_3286_ = lean_ctor_get(v_x_3266_, 0);
v_value_3287_ = lean_ctor_get(v_x_3267_, 0);
v___x_3288_ = lean_nat_dec_eq(v_value_3286_, v_value_3287_);
return v___x_3288_;
}
case 10:
{
return v___x_3270_;
}
default: 
{
lean_object* v_decoded_3289_; lean_object* v_decoded_3290_; uint8_t v___x_3291_; 
v_decoded_3289_ = lean_ctor_get(v_x_3266_, 0);
v_decoded_3290_ = lean_ctor_get(v_x_3267_, 0);
v___x_3291_ = lean_string_dec_eq(v_decoded_3289_, v_decoded_3290_);
return v___x_3291_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken_decEq___boxed(lean_object* v_x_3292_, lean_object* v_x_3293_){
_start:
{
uint8_t v_res_3294_; lean_object* v_r_3295_; 
v_res_3294_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken_decEq(v_x_3292_, v_x_3293_);
lean_dec(v_x_3293_);
lean_dec(v_x_3292_);
v_r_3295_ = lean_box(v_res_3294_);
return v_r_3295_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken(lean_object* v_x_3296_, lean_object* v_x_3297_){
_start:
{
uint8_t v___x_3298_; 
v___x_3298_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken_decEq(v_x_3296_, v_x_3297_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken___boxed(lean_object* v_x_3299_, lean_object* v_x_3300_){
_start:
{
uint8_t v_res_3301_; lean_object* v_r_3302_; 
v_res_3301_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_instDecidableEqToken(v_x_3299_, v_x_3300_);
lean_dec(v_x_3300_);
lean_dec(v_x_3299_);
v_r_3302_ = lean_box(v_res_3301_);
return v_r_3302_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_commaSep_spec__0(lean_object* v_a_3303_, lean_object* v_a_3304_){
_start:
{
if (lean_obj_tag(v_a_3303_) == 0)
{
lean_object* v___x_3305_; 
v___x_3305_ = lean_array_to_list(v_a_3304_);
return v___x_3305_;
}
else
{
lean_object* v_head_3306_; lean_object* v_tail_3307_; lean_object* v___x_3308_; 
v_head_3306_ = lean_ctor_get(v_a_3303_, 0);
lean_inc(v_head_3306_);
v_tail_3307_ = lean_ctor_get(v_a_3303_, 1);
lean_inc(v_tail_3307_);
lean_dec_ref_known(v_a_3303_, 2);
v___x_3308_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3304_, v_head_3306_);
v_a_3303_ = v_tail_3307_;
v_a_3304_ = v___x_3308_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(lean_object* v_chunks_3317_){
_start:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3318_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__1));
v___x_3319_ = l_List_intersperseTR___redArg(v___x_3318_, v_chunks_3317_);
v___x_3320_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2));
v___x_3321_ = lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_commaSep_spec__0(v___x_3319_, v___x_3320_);
return v___x_3321_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0(lean_object* v_a_3327_, lean_object* v_a_3328_){
_start:
{
if (lean_obj_tag(v_a_3327_) == 0)
{
lean_object* v___x_3329_; 
v___x_3329_ = l_List_reverse___redArg(v_a_3328_);
return v___x_3329_;
}
else
{
lean_object* v_head_3330_; lean_object* v_tail_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3351_; 
v_head_3330_ = lean_ctor_get(v_a_3327_, 0);
v_tail_3331_ = lean_ctor_get(v_a_3327_, 1);
v_isSharedCheck_3351_ = !lean_is_exclusive(v_a_3327_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3333_ = v_a_3327_;
v_isShared_3334_ = v_isSharedCheck_3351_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_tail_3331_);
lean_inc(v_head_3330_);
lean_dec(v_a_3327_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3351_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v_fst_3335_; lean_object* v_snd_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3350_; 
v_fst_3335_ = lean_ctor_get(v_head_3330_, 0);
v_snd_3336_ = lean_ctor_get(v_head_3330_, 1);
v_isSharedCheck_3350_ = !lean_is_exclusive(v_head_3330_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3338_ = v_head_3330_;
v_isShared_3339_ = v_isSharedCheck_3350_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_snd_3336_);
lean_inc(v_fst_3335_);
lean_dec(v_head_3330_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3350_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3343_; 
v___x_3340_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3340_, 0, v_fst_3335_);
v___x_3341_ = ((lean_object*)(lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__1));
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 1, v___x_3341_);
lean_ctor_set(v___x_3333_, 0, v___x_3340_);
v___x_3343_ = v___x_3333_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v___x_3340_);
lean_ctor_set(v_reuseFailAlloc_3349_, 1, v___x_3341_);
v___x_3343_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
lean_object* v___x_3344_; lean_object* v___x_3346_; 
v___x_3344_ = l_List_appendTR___redArg(v___x_3343_, v_snd_3336_);
if (v_isShared_3339_ == 0)
{
lean_ctor_set_tag(v___x_3338_, 1);
lean_ctor_set(v___x_3338_, 1, v_a_3328_);
lean_ctor_set(v___x_3338_, 0, v___x_3344_);
v___x_3346_ = v___x_3338_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v___x_3344_);
lean_ctor_set(v_reuseFailAlloc_3348_, 1, v_a_3328_);
v___x_3346_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
v_a_3327_ = v_tail_3331_;
v_a_3328_ = v___x_3346_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_colonEntries(lean_object* v_entries_3352_){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___x_3353_ = lean_box(0);
v___x_3354_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0(v_entries_3352_, v___x_3353_);
v___x_3355_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(v___x_3354_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_functionToken(uint8_t v_value_3356_){
_start:
{
lean_object* v___x_3357_; 
v___x_3357_ = lean_alloc_ctor(7, 0, 1);
lean_ctor_set_uint8(v___x_3357_, 0, v_value_3356_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_functionToken___boxed(lean_object* v_value_3358_){
_start:
{
uint8_t v_value_boxed_3359_; lean_object* v_res_3360_; 
v_value_boxed_3359_ = lean_unbox(v_value_3358_);
v_res_3360_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_functionToken(v_value_boxed_3359_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printNode_spec__14(lean_object* v_a_3361_, lean_object* v_a_3362_){
_start:
{
if (lean_obj_tag(v_a_3361_) == 0)
{
lean_object* v___x_3363_; 
v___x_3363_ = lean_array_to_list(v_a_3362_);
return v___x_3363_;
}
else
{
lean_object* v_head_3364_; lean_object* v_tail_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3378_; 
v_head_3364_ = lean_ctor_get(v_a_3361_, 0);
v_tail_3365_ = lean_ctor_get(v_a_3361_, 1);
v_isSharedCheck_3378_ = !lean_is_exclusive(v_a_3361_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3367_ = v_a_3361_;
v_isShared_3368_ = v_isSharedCheck_3378_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_tail_3365_);
lean_inc(v_head_3364_);
lean_dec(v_a_3361_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3378_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3373_; 
v___x_3369_ = lean_box(0);
v___x_3370_ = ((lean_object*)(lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__0));
v___x_3371_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_head_3364_);
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 1, v___x_3369_);
lean_ctor_set(v___x_3367_, 0, v___x_3371_);
v___x_3373_ = v___x_3367_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v___x_3371_);
lean_ctor_set(v_reuseFailAlloc_3377_, 1, v___x_3369_);
v___x_3373_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3370_);
lean_ctor_set(v___x_3374_, 1, v___x_3373_);
v___x_3375_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3362_, v___x_3374_);
v_a_3361_ = v_tail_3365_;
v_a_3362_ = v___x_3375_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__0(lean_object* v_a_3414_, lean_object* v_a_3415_){
_start:
{
if (lean_obj_tag(v_a_3414_) == 0)
{
lean_object* v___x_3416_; 
v___x_3416_ = l_List_reverse___redArg(v_a_3415_);
return v___x_3416_;
}
else
{
lean_object* v_head_3417_; lean_object* v_tail_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3427_; 
v_head_3417_ = lean_ctor_get(v_a_3414_, 0);
v_tail_3418_ = lean_ctor_get(v_a_3414_, 1);
v_isSharedCheck_3427_ = !lean_is_exclusive(v_a_3414_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3420_ = v_a_3414_;
v_isShared_3421_ = v_isSharedCheck_3427_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_tail_3418_);
lean_inc(v_head_3417_);
lean_dec(v_a_3414_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3427_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; lean_object* v___x_3424_; 
v___x_3422_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_head_3417_);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 1, v_a_3415_);
lean_ctor_set(v___x_3420_, 0, v___x_3422_);
v___x_3424_ = v___x_3420_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v_a_3415_);
v___x_3424_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
v_a_3414_ = v_tail_3418_;
v_a_3415_ = v___x_3424_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver(lean_object* v_x_3438_){
_start:
{
switch(lean_obj_tag(v_x_3438_))
{
case 0:
{
lean_object* v___x_3439_; 
v___x_3439_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_x_3438_);
return v___x_3439_;
}
case 1:
{
lean_object* v___x_3440_; 
v___x_3440_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_x_3438_);
return v___x_3440_;
}
case 9:
{
lean_object* v___x_3441_; 
v___x_3441_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_x_3438_);
return v___x_3441_;
}
case 15:
{
lean_object* v___x_3442_; 
v___x_3442_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_x_3438_);
return v___x_3442_;
}
default: 
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3443_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1));
v___x_3444_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_x_3438_);
v___x_3445_ = l_List_appendTR___redArg(v___x_3443_, v___x_3444_);
v___x_3446_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3447_ = l_List_appendTR___redArg(v___x_3445_, v___x_3446_);
return v___x_3447_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2(lean_object* v_a_3497_, lean_object* v_a_3498_){
_start:
{
if (lean_obj_tag(v_a_3497_) == 0)
{
lean_object* v___x_3499_; 
v___x_3499_ = lean_array_to_list(v_a_3498_);
return v___x_3499_;
}
else
{
lean_object* v_head_3500_; lean_object* v_tail_3501_; lean_object* v_fst_3502_; lean_object* v_snd_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; 
v_head_3500_ = lean_ctor_get(v_a_3497_, 0);
lean_inc(v_head_3500_);
v_tail_3501_ = lean_ctor_get(v_a_3497_, 1);
lean_inc(v_tail_3501_);
lean_dec_ref_known(v_a_3497_, 2);
v_fst_3502_ = lean_ctor_get(v_head_3500_, 0);
lean_inc(v_fst_3502_);
v_snd_3503_ = lean_ctor_get(v_head_3500_, 1);
lean_inc(v_snd_3503_);
lean_dec(v_head_3500_);
v___x_3504_ = ((lean_object*)(lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__1));
v___x_3505_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_fst_3502_);
v___x_3506_ = l_List_appendTR___redArg(v___x_3504_, v___x_3505_);
v___x_3507_ = ((lean_object*)(lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2___closed__3));
v___x_3508_ = l_List_appendTR___redArg(v___x_3506_, v___x_3507_);
v___x_3509_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_snd_3503_);
v___x_3510_ = l_List_appendTR___redArg(v___x_3508_, v___x_3509_);
v___x_3511_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3498_, v___x_3510_);
v_a_3497_ = v_tail_3501_;
v_a_3498_ = v___x_3511_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem(lean_object* v_x_3565_){
_start:
{
lean_object* v_expression_3566_; lean_object* v_alias_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3589_; 
v_expression_3566_ = lean_ctor_get(v_x_3565_, 0);
v_alias_3567_ = lean_ctor_get(v_x_3565_, 1);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_x_3565_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3569_ = v_x_3565_;
v_isShared_3570_ = v_isSharedCheck_3589_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_alias_3567_);
lean_inc(v_expression_3566_);
lean_dec(v_x_3565_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3589_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3571_; 
v___x_3571_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_expression_3566_);
if (lean_obj_tag(v_alias_3567_) == 0)
{
lean_object* v___x_3572_; lean_object* v___x_3573_; 
lean_del_object(v___x_3569_);
v___x_3572_ = lean_box(0);
v___x_3573_ = l_List_appendTR___redArg(v___x_3571_, v___x_3572_);
return v___x_3573_;
}
else
{
lean_object* v_val_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3588_; 
v_val_3574_ = lean_ctor_get(v_alias_3567_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v_alias_3567_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3576_ = v_alias_3567_;
v_isShared_3577_ = v_isSharedCheck_3588_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_val_3574_);
lean_dec(v_alias_3567_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3588_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; lean_object* v___x_3580_; 
v___x_3578_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem___closed__0));
if (v_isShared_3577_ == 0)
{
lean_ctor_set_tag(v___x_3576_, 2);
v___x_3580_ = v___x_3576_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_val_3574_);
v___x_3580_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3581_ = lean_box(0);
if (v_isShared_3570_ == 0)
{
lean_ctor_set_tag(v___x_3569_, 1);
lean_ctor_set(v___x_3569_, 1, v___x_3581_);
lean_ctor_set(v___x_3569_, 0, v___x_3580_);
v___x_3583_ = v___x_3569_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3580_);
lean_ctor_set(v_reuseFailAlloc_3586_, 1, v___x_3581_);
v___x_3583_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3578_);
lean_ctor_set(v___x_3584_, 1, v___x_3583_);
v___x_3585_ = l_List_appendTR___redArg(v___x_3571_, v___x_3584_);
return v___x_3585_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printClause_spec__6(lean_object* v_a_3590_, lean_object* v_a_3591_){
_start:
{
if (lean_obj_tag(v_a_3590_) == 0)
{
lean_object* v___x_3592_; 
v___x_3592_ = l_List_reverse___redArg(v_a_3591_);
return v___x_3592_;
}
else
{
lean_object* v_head_3593_; lean_object* v_tail_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3603_; 
v_head_3593_ = lean_ctor_get(v_a_3590_, 0);
v_tail_3594_ = lean_ctor_get(v_a_3590_, 1);
v_isSharedCheck_3603_ = !lean_is_exclusive(v_a_3590_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3596_ = v_a_3590_;
v_isShared_3597_ = v_isSharedCheck_3603_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_tail_3594_);
lean_inc(v_head_3593_);
lean_dec(v_a_3590_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3603_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3598_; lean_object* v___x_3600_; 
v___x_3598_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem(v_head_3593_);
if (v_isShared_3597_ == 0)
{
lean_ctor_set(v___x_3596_, 1, v_a_3591_);
lean_ctor_set(v___x_3596_, 0, v___x_3598_);
v___x_3600_ = v___x_3596_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v___x_3598_);
lean_ctor_set(v_reuseFailAlloc_3602_, 1, v_a_3591_);
v___x_3600_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
v_a_3590_ = v_tail_3594_;
v_a_3591_ = v___x_3600_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause(lean_object* v_x_3614_){
_start:
{
switch(lean_obj_tag(v_x_3614_))
{
case 0:
{
lean_object* v_pattern_3615_; lean_object* v_whereExpr_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___y_3622_; 
v_pattern_3615_ = lean_ctor_get(v_x_3614_, 0);
lean_inc_ref(v_pattern_3615_);
v_whereExpr_3616_ = lean_ctor_get(v_x_3614_, 1);
lean_inc(v_whereExpr_3616_);
lean_dec_ref_known(v_x_3614_, 2);
v___x_3617_ = lean_box(0);
v___x_3618_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__1));
v___x_3619_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printPattern(v_pattern_3615_);
v___x_3620_ = l_List_appendTR___redArg(v___x_3618_, v___x_3619_);
if (lean_obj_tag(v_whereExpr_3616_) == 0)
{
v___y_3622_ = v___x_3617_;
goto v___jp_3621_;
}
else
{
lean_object* v_val_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; 
v_val_3626_ = lean_ctor_get(v_whereExpr_3616_, 0);
lean_inc(v_val_3626_);
lean_dec_ref_known(v_whereExpr_3616_, 1);
v___x_3627_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__4));
v___x_3628_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_val_3626_);
v___x_3629_ = l_List_appendTR___redArg(v___x_3627_, v___x_3628_);
v___y_3622_ = v___x_3629_;
goto v___jp_3621_;
}
v___jp_3621_:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3623_ = l_List_appendTR___redArg(v___x_3620_, v___y_3622_);
v___x_3624_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2));
v___x_3625_ = l_List_appendTR___redArg(v___x_3623_, v___x_3624_);
return v___x_3625_;
}
}
case 1:
{
uint8_t v_distinct_3630_; lean_object* v_items_3631_; lean_object* v_whereExpr_3632_; lean_object* v___x_3633_; lean_object* v___y_3635_; lean_object* v___y_3636_; lean_object* v___x_3640_; lean_object* v___y_3642_; 
v_distinct_3630_ = lean_ctor_get_uint8(v_x_3614_, sizeof(void*)*2);
v_items_3631_ = lean_ctor_get(v_x_3614_, 0);
lean_inc(v_items_3631_);
v_whereExpr_3632_ = lean_ctor_get(v_x_3614_, 1);
lean_inc(v_whereExpr_3632_);
lean_dec_ref_known(v_x_3614_, 2);
v___x_3633_ = lean_box(0);
v___x_3640_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__6));
if (v_distinct_3630_ == 0)
{
v___y_3642_ = v___x_3633_;
goto v___jp_3641_;
}
else
{
lean_object* v___x_3651_; 
v___x_3651_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__8));
v___y_3642_ = v___x_3651_;
goto v___jp_3641_;
}
v___jp_3634_:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3637_ = l_List_appendTR___redArg(v___y_3635_, v___y_3636_);
v___x_3638_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2));
v___x_3639_ = l_List_appendTR___redArg(v___x_3637_, v___x_3638_);
return v___x_3639_;
}
v___jp_3641_:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3643_ = l_List_appendTR___redArg(v___x_3640_, v___y_3642_);
v___x_3644_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printClause_spec__6(v_items_3631_, v___x_3633_);
v___x_3645_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(v___x_3644_);
v___x_3646_ = l_List_appendTR___redArg(v___x_3643_, v___x_3645_);
if (lean_obj_tag(v_whereExpr_3632_) == 0)
{
v___y_3635_ = v___x_3646_;
v___y_3636_ = v___x_3633_;
goto v___jp_3634_;
}
else
{
lean_object* v_val_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
v_val_3647_ = lean_ctor_get(v_whereExpr_3632_, 0);
lean_inc(v_val_3647_);
lean_dec_ref_known(v_whereExpr_3632_, 1);
v___x_3648_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__4));
v___x_3649_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_val_3647_);
v___x_3650_ = l_List_appendTR___redArg(v___x_3648_, v___x_3649_);
v___y_3635_ = v___x_3646_;
v___y_3636_ = v___x_3650_;
goto v___jp_3634_;
}
}
}
case 2:
{
lean_object* v_expression_3652_; lean_object* v_alias_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3668_; 
v_expression_3652_ = lean_ctor_get(v_x_3614_, 0);
v_alias_3653_ = lean_ctor_get(v_x_3614_, 1);
v_isSharedCheck_3668_ = !lean_is_exclusive(v_x_3614_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3655_ = v_x_3614_;
v_isShared_3656_ = v_isSharedCheck_3668_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_alias_3653_);
lean_inc(v_expression_3652_);
lean_dec(v_x_3614_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3668_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3664_; 
v___x_3657_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__10));
v___x_3658_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_expression_3652_);
v___x_3659_ = l_List_appendTR___redArg(v___x_3657_, v___x_3658_);
v___x_3660_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printItem___closed__0));
v___x_3661_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3661_, 0, v_alias_3653_);
v___x_3662_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2));
if (v_isShared_3656_ == 0)
{
lean_ctor_set_tag(v___x_3655_, 1);
lean_ctor_set(v___x_3655_, 1, v___x_3662_);
lean_ctor_set(v___x_3655_, 0, v___x_3661_);
v___x_3664_ = v___x_3655_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v___x_3661_);
lean_ctor_set(v_reuseFailAlloc_3667_, 1, v___x_3662_);
v___x_3664_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3665_, 0, v___x_3660_);
lean_ctor_set(v___x_3665_, 1, v___x_3664_);
v___x_3666_ = l_List_appendTR___redArg(v___x_3659_, v___x_3665_);
return v___x_3666_;
}
}
}
default: 
{
uint8_t v_distinct_3669_; lean_object* v_items_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___y_3674_; 
v_distinct_3669_ = lean_ctor_get_uint8(v_x_3614_, sizeof(void*)*1);
v_items_3670_ = lean_ctor_get(v_x_3614_, 0);
lean_inc(v_items_3670_);
lean_dec_ref_known(v_x_3614_, 1);
v___x_3671_ = lean_box(0);
v___x_3672_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__12));
if (v_distinct_3669_ == 0)
{
v___y_3674_ = v___x_3671_;
goto v___jp_3673_;
}
else
{
lean_object* v___x_3681_; 
v___x_3681_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__8));
v___y_3674_ = v___x_3681_;
goto v___jp_3673_;
}
v___jp_3673_:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3675_ = l_List_appendTR___redArg(v___x_3672_, v___y_3674_);
v___x_3676_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printClause_spec__6(v_items_3670_, v___x_3671_);
v___x_3677_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(v___x_3676_);
v___x_3678_ = l_List_appendTR___redArg(v___x_3675_, v___x_3677_);
v___x_3679_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2));
v___x_3680_ = l_List_appendTR___redArg(v___x_3678_, v___x_3679_);
return v___x_3680_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printQuery_spec__4(lean_object* v_a_3682_, lean_object* v_a_3683_){
_start:
{
if (lean_obj_tag(v_a_3682_) == 0)
{
lean_object* v___x_3684_; 
v___x_3684_ = lean_array_to_list(v_a_3683_);
return v___x_3684_;
}
else
{
lean_object* v_head_3685_; lean_object* v_tail_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v_head_3685_ = lean_ctor_get(v_a_3682_, 0);
lean_inc(v_head_3685_);
v_tail_3686_ = lean_ctor_get(v_a_3682_, 1);
lean_inc(v_tail_3686_);
lean_dec_ref_known(v_a_3682_, 2);
v___x_3687_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause(v_head_3685_);
v___x_3688_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3683_, v___x_3687_);
v_a_3682_ = v_tail_3686_;
v_a_3683_ = v___x_3688_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printQuery(lean_object* v_x_3690_){
_start:
{
lean_object* v_clauses_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v_clauses_3691_ = lean_ctor_get(v_x_3690_, 0);
lean_inc(v_clauses_3691_);
lean_dec_ref(v_x_3690_);
v___x_3692_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2));
v___x_3693_ = lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printQuery_spec__4(v_clauses_3691_, v___x_3692_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(lean_object* v_x_3699_){
_start:
{
switch(lean_obj_tag(v_x_3699_))
{
case 0:
{
lean_object* v_name_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3709_; 
v_name_3700_ = lean_ctor_get(v_x_3699_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v_x_3699_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3702_ = v_x_3699_;
v_isShared_3703_ = v_isSharedCheck_3709_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_name_3700_);
lean_dec(v_x_3699_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3709_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___x_3705_; 
if (v_isShared_3703_ == 0)
{
lean_ctor_set_tag(v___x_3702_, 2);
v___x_3705_ = v___x_3702_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_name_3700_);
v___x_3705_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; 
v___x_3706_ = lean_box(0);
v___x_3707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3705_);
lean_ctor_set(v___x_3707_, 1, v___x_3706_);
return v___x_3707_;
}
}
}
case 1:
{
lean_object* v_name_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3719_; 
v_name_3710_ = lean_ctor_get(v_x_3699_, 0);
v_isSharedCheck_3719_ = !lean_is_exclusive(v_x_3699_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3712_ = v_x_3699_;
v_isShared_3713_ = v_isSharedCheck_3719_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_name_3710_);
lean_dec(v_x_3699_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3719_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
lean_ctor_set_tag(v___x_3712_, 3);
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_name_3710_);
v___x_3715_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3716_ = lean_box(0);
v___x_3717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3715_);
lean_ctor_set(v___x_3717_, 1, v___x_3716_);
return v___x_3717_;
}
}
}
case 2:
{
lean_object* v___x_3720_; 
v___x_3720_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__1));
return v___x_3720_;
}
case 3:
{
uint8_t v_value_3721_; 
v_value_3721_ = lean_ctor_get_uint8(v_x_3699_, 0);
lean_dec_ref_known(v_x_3699_, 0);
if (v_value_3721_ == 0)
{
lean_object* v___x_3722_; 
v___x_3722_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__3));
return v___x_3722_;
}
else
{
lean_object* v___x_3723_; 
v___x_3723_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__5));
return v___x_3723_;
}
}
case 4:
{
lean_object* v_value_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3733_; 
v_value_3724_ = lean_ctor_get(v_x_3699_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v_x_3699_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3726_ = v_x_3699_;
v_isShared_3727_ = v_isSharedCheck_3733_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_value_3724_);
lean_dec(v_x_3699_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3733_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3729_; 
if (v_isShared_3727_ == 0)
{
lean_ctor_set_tag(v___x_3726_, 5);
v___x_3729_ = v___x_3726_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_value_3724_);
v___x_3729_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; 
v___x_3730_ = lean_box(0);
v___x_3731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
return v___x_3731_;
}
}
}
case 5:
{
lean_object* v_canonical_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3743_; 
v_canonical_3734_ = lean_ctor_get(v_x_3699_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v_x_3699_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3736_ = v_x_3699_;
v_isShared_3737_ = v_isSharedCheck_3743_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_canonical_3734_);
lean_dec(v_x_3699_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3743_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
lean_ctor_set_tag(v___x_3736_, 6);
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_canonical_3734_);
v___x_3739_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3740_ = lean_box(0);
v___x_3741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3739_);
lean_ctor_set(v___x_3741_, 1, v___x_3740_);
return v___x_3741_;
}
}
}
case 6:
{
lean_object* v_value_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3753_; 
v_value_3744_ = lean_ctor_get(v_x_3699_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v_x_3699_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3746_ = v_x_3699_;
v_isShared_3747_ = v_isSharedCheck_3753_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_value_3744_);
lean_dec(v_x_3699_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3753_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3749_; 
if (v_isShared_3747_ == 0)
{
lean_ctor_set_tag(v___x_3746_, 4);
v___x_3749_ = v___x_3746_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_value_3744_);
v___x_3749_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3750_ = lean_box(0);
v___x_3751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3749_);
lean_ctor_set(v___x_3751_, 1, v___x_3750_);
return v___x_3751_;
}
}
}
case 7:
{
lean_object* v_elements_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v_elements_3754_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_elements_3754_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3755_ = lean_box(0);
v___x_3756_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__12));
v___x_3757_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__0(v_elements_3754_, v___x_3755_);
v___x_3758_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(v___x_3757_);
v___x_3759_ = l_List_appendTR___redArg(v___x_3756_, v___x_3758_);
v___x_3760_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__6));
v___x_3761_ = l_List_appendTR___redArg(v___x_3759_, v___x_3760_);
return v___x_3761_;
}
case 8:
{
lean_object* v_entries_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v_entries_3762_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_entries_3762_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3763_ = lean_box(0);
v___x_3764_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1));
v___x_3765_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__1(v_entries_3762_, v___x_3763_);
v___x_3766_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_colonEntries(v___x_3765_);
v___x_3767_ = l_List_appendTR___redArg(v___x_3764_, v___x_3766_);
v___x_3768_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3));
v___x_3769_ = l_List_appendTR___redArg(v___x_3767_, v___x_3768_);
return v___x_3769_;
}
case 9:
{
lean_object* v_receiver_3770_; lean_object* v_key_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3784_; 
v_receiver_3770_ = lean_ctor_get(v_x_3699_, 0);
v_key_3771_ = lean_ctor_get(v_x_3699_, 1);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_x_3699_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3773_ = v_x_3699_;
v_isShared_3774_ = v_isSharedCheck_3784_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_key_3771_);
lean_inc(v_receiver_3770_);
lean_dec(v_x_3699_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3784_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3780_; 
v___x_3775_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver(v_receiver_3770_);
v___x_3776_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__7));
v___x_3777_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3777_, 0, v_key_3771_);
v___x_3778_ = lean_box(0);
if (v_isShared_3774_ == 0)
{
lean_ctor_set_tag(v___x_3773_, 1);
lean_ctor_set(v___x_3773_, 1, v___x_3778_);
lean_ctor_set(v___x_3773_, 0, v___x_3777_);
v___x_3780_ = v___x_3773_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v___x_3777_);
lean_ctor_set(v_reuseFailAlloc_3783_, 1, v___x_3778_);
v___x_3780_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3776_);
lean_ctor_set(v___x_3781_, 1, v___x_3780_);
v___x_3782_ = l_List_appendTR___redArg(v___x_3775_, v___x_3781_);
return v___x_3782_;
}
}
}
case 10:
{
lean_object* v_operand_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
v_operand_3785_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_operand_3785_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3786_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__9));
v___x_3787_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_operand_3785_);
v___x_3788_ = l_List_appendTR___redArg(v___x_3786_, v___x_3787_);
v___x_3789_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3790_ = l_List_appendTR___redArg(v___x_3788_, v___x_3789_);
return v___x_3790_;
}
case 11:
{
lean_object* v_operand_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v_operand_3791_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_operand_3791_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3792_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__10));
v___x_3793_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_operand_3791_);
v___x_3794_ = l_List_appendTR___redArg(v___x_3792_, v___x_3793_);
v___x_3795_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3796_ = l_List_appendTR___redArg(v___x_3794_, v___x_3795_);
return v___x_3796_;
}
case 12:
{
lean_object* v_operand_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v_operand_3797_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_operand_3797_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3798_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1));
v___x_3799_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_operand_3797_);
v___x_3800_ = l_List_appendTR___redArg(v___x_3798_, v___x_3799_);
v___x_3801_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__13));
v___x_3802_ = l_List_appendTR___redArg(v___x_3800_, v___x_3801_);
return v___x_3802_;
}
case 13:
{
lean_object* v_operand_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v_operand_3803_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_operand_3803_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3804_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1));
v___x_3805_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_operand_3803_);
v___x_3806_ = l_List_appendTR___redArg(v___x_3804_, v___x_3805_);
v___x_3807_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__16));
v___x_3808_ = l_List_appendTR___redArg(v___x_3806_, v___x_3807_);
return v___x_3808_;
}
case 14:
{
uint8_t v_operator_3809_; lean_object* v_left_3810_; lean_object* v_right_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; 
v_operator_3809_ = lean_ctor_get_uint8(v_x_3699_, sizeof(void*)*2);
v_left_3810_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_left_3810_);
v_right_3811_ = lean_ctor_get(v_x_3699_, 1);
lean_inc(v_right_3811_);
lean_dec_ref_known(v_x_3699_, 2);
v___x_3812_ = lean_box(0);
v___x_3813_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1));
v___x_3814_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_left_3810_);
v___x_3815_ = l_List_appendTR___redArg(v___x_3813_, v___x_3814_);
v___x_3816_ = lean_alloc_ctor(16, 0, 1);
lean_ctor_set_uint8(v___x_3816_, 0, v_operator_3809_);
v___x_3817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3816_);
v___x_3818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
lean_ctor_set(v___x_3818_, 1, v___x_3812_);
v___x_3819_ = l_List_appendTR___redArg(v___x_3815_, v___x_3818_);
v___x_3820_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_right_3811_);
v___x_3821_ = l_List_appendTR___redArg(v___x_3819_, v___x_3820_);
v___x_3822_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3823_ = l_List_appendTR___redArg(v___x_3821_, v___x_3822_);
return v___x_3823_;
}
case 15:
{
uint8_t v_name_3824_; uint8_t v_distinct_3825_; lean_object* v_arguments_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___y_3832_; 
v_name_3824_ = lean_ctor_get_uint8(v_x_3699_, sizeof(void*)*1);
v_distinct_3825_ = lean_ctor_get_uint8(v_x_3699_, sizeof(void*)*1 + 1);
v_arguments_3826_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_arguments_3826_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3827_ = lean_alloc_ctor(7, 0, 1);
lean_ctor_set_uint8(v___x_3827_, 0, v_name_3824_);
v___x_3828_ = lean_box(0);
v___x_3829_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1));
v___x_3830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3827_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
if (v_distinct_3825_ == 0)
{
v___y_3832_ = v___x_3828_;
goto v___jp_3831_;
}
else
{
lean_object* v___x_3839_; 
v___x_3839_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__8));
v___y_3832_ = v___x_3839_;
goto v___jp_3831_;
}
v___jp_3831_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3833_ = l_List_appendTR___redArg(v___x_3830_, v___y_3832_);
v___x_3834_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__0(v_arguments_3826_, v___x_3828_);
v___x_3835_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(v___x_3834_);
v___x_3836_ = l_List_appendTR___redArg(v___x_3833_, v___x_3835_);
v___x_3837_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3838_ = l_List_appendTR___redArg(v___x_3836_, v___x_3837_);
return v___x_3838_;
}
}
case 16:
{
lean_object* v_branches_3840_; lean_object* v_elseBranch_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___y_3848_; 
v_branches_3840_ = lean_ctor_get(v_x_3699_, 0);
lean_inc(v_branches_3840_);
v_elseBranch_3841_ = lean_ctor_get(v_x_3699_, 1);
lean_inc(v_elseBranch_3841_);
lean_dec_ref_known(v_x_3699_, 2);
v___x_3842_ = lean_box(0);
v___x_3843_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__18));
v___x_3844_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2));
v___x_3845_ = lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__2(v_branches_3840_, v___x_3844_);
v___x_3846_ = l_List_appendTR___redArg(v___x_3843_, v___x_3845_);
if (lean_obj_tag(v_elseBranch_3841_) == 0)
{
v___y_3848_ = v___x_3842_;
goto v___jp_3847_;
}
else
{
lean_object* v_val_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v_val_3852_ = lean_ctor_get(v_elseBranch_3841_, 0);
lean_inc(v_val_3852_);
lean_dec_ref_known(v_elseBranch_3841_, 1);
v___x_3853_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__22));
v___x_3854_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_val_3852_);
v___x_3855_ = l_List_appendTR___redArg(v___x_3853_, v___x_3854_);
v___y_3848_ = v___x_3855_;
goto v___jp_3847_;
}
v___jp_3847_:
{
lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3849_ = l_List_appendTR___redArg(v___x_3846_, v___y_3848_);
v___x_3850_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__20));
v___x_3851_ = l_List_appendTR___redArg(v___x_3849_, v___x_3850_);
return v___x_3851_;
}
}
case 17:
{
lean_object* v_binder_3856_; lean_object* v_source_3857_; lean_object* v_predicate_3858_; lean_object* v_projection_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___y_3864_; lean_object* v___y_3865_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___y_3875_; 
v_binder_3856_ = lean_ctor_get(v_x_3699_, 0);
lean_inc_ref(v_binder_3856_);
v_source_3857_ = lean_ctor_get(v_x_3699_, 1);
lean_inc(v_source_3857_);
v_predicate_3858_ = lean_ctor_get(v_x_3699_, 2);
lean_inc(v_predicate_3858_);
v_projection_3859_ = lean_ctor_get(v_x_3699_, 3);
lean_inc(v_projection_3859_);
lean_dec_ref_known(v_x_3699_, 4);
v___x_3860_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__11));
v___x_3861_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3861_, 0, v_binder_3856_);
v___x_3862_ = lean_box(0);
v___x_3869_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__24));
v___x_3870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3861_);
lean_ctor_set(v___x_3870_, 1, v___x_3869_);
v___x_3871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3860_);
lean_ctor_set(v___x_3871_, 1, v___x_3870_);
v___x_3872_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_source_3857_);
v___x_3873_ = l_List_appendTR___redArg(v___x_3871_, v___x_3872_);
if (lean_obj_tag(v_predicate_3858_) == 0)
{
v___y_3875_ = v___x_3862_;
goto v___jp_3874_;
}
else
{
lean_object* v_val_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; 
v_val_3881_ = lean_ctor_get(v_predicate_3858_, 0);
lean_inc(v_val_3881_);
lean_dec_ref_known(v_predicate_3858_, 1);
v___x_3882_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__4));
v___x_3883_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_val_3881_);
v___x_3884_ = l_List_appendTR___redArg(v___x_3882_, v___x_3883_);
v___y_3875_ = v___x_3884_;
goto v___jp_3874_;
}
v___jp_3863_:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3866_ = l_List_appendTR___redArg(v___y_3864_, v___y_3865_);
v___x_3867_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__6));
v___x_3868_ = l_List_appendTR___redArg(v___x_3866_, v___x_3867_);
return v___x_3868_;
}
v___jp_3874_:
{
lean_object* v___x_3876_; 
v___x_3876_ = l_List_appendTR___redArg(v___x_3873_, v___y_3875_);
if (lean_obj_tag(v_projection_3859_) == 0)
{
v___y_3864_ = v___x_3876_;
v___y_3865_ = v___x_3862_;
goto v___jp_3863_;
}
else
{
lean_object* v_val_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v_val_3877_ = lean_ctor_get(v_projection_3859_, 0);
lean_inc(v_val_3877_);
lean_dec_ref_known(v_projection_3859_, 1);
v___x_3878_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__26));
v___x_3879_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_val_3877_);
v___x_3880_ = l_List_appendTR___redArg(v___x_3878_, v___x_3879_);
v___y_3864_ = v___x_3876_;
v___y_3865_ = v___x_3880_;
goto v___jp_3863_;
}
}
}
case 18:
{
uint8_t v_quantifier_3885_; lean_object* v_binder_3886_; lean_object* v_source_3887_; lean_object* v_predicate_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; 
v_quantifier_3885_ = lean_ctor_get_uint8(v_x_3699_, sizeof(void*)*3);
v_binder_3886_ = lean_ctor_get(v_x_3699_, 0);
lean_inc_ref(v_binder_3886_);
v_source_3887_ = lean_ctor_get(v_x_3699_, 1);
lean_inc(v_source_3887_);
v_predicate_3888_ = lean_ctor_get(v_x_3699_, 2);
lean_inc(v_predicate_3888_);
lean_dec_ref_known(v_x_3699_, 3);
v___x_3889_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_3889_, 0, v_quantifier_3885_);
v___x_3890_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__0));
v___x_3891_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3891_, 0, v_binder_3886_);
v___x_3892_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__24));
v___x_3893_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3891_);
lean_ctor_set(v___x_3893_, 1, v___x_3892_);
v___x_3894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3890_);
lean_ctor_set(v___x_3894_, 1, v___x_3893_);
v___x_3895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3889_);
lean_ctor_set(v___x_3895_, 1, v___x_3894_);
v___x_3896_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_source_3887_);
v___x_3897_ = l_List_appendTR___redArg(v___x_3895_, v___x_3896_);
v___x_3898_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__4));
v___x_3899_ = l_List_appendTR___redArg(v___x_3897_, v___x_3898_);
v___x_3900_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_predicate_3888_);
v___x_3901_ = l_List_appendTR___redArg(v___x_3899_, v___x_3900_);
v___x_3902_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3903_ = l_List_appendTR___redArg(v___x_3901_, v___x_3902_);
return v___x_3903_;
}
case 19:
{
lean_object* v_accumulator_3904_; lean_object* v_initial_3905_; lean_object* v_binder_3906_; lean_object* v_source_3907_; lean_object* v_step_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; 
v_accumulator_3904_ = lean_ctor_get(v_x_3699_, 0);
lean_inc_ref(v_accumulator_3904_);
v_initial_3905_ = lean_ctor_get(v_x_3699_, 1);
lean_inc(v_initial_3905_);
v_binder_3906_ = lean_ctor_get(v_x_3699_, 2);
lean_inc_ref(v_binder_3906_);
v_source_3907_ = lean_ctor_get(v_x_3699_, 3);
lean_inc(v_source_3907_);
v_step_3908_ = lean_ctor_get(v_x_3699_, 4);
lean_inc(v_step_3908_);
lean_dec_ref_known(v_x_3699_, 5);
v___x_3909_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__27));
v___x_3910_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__0));
v___x_3911_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3911_, 0, v_accumulator_3904_);
v___x_3912_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__29));
v___x_3913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3913_, 0, v___x_3911_);
lean_ctor_set(v___x_3913_, 1, v___x_3912_);
v___x_3914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3910_);
lean_ctor_set(v___x_3914_, 1, v___x_3913_);
v___x_3915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3909_);
lean_ctor_set(v___x_3915_, 1, v___x_3914_);
v___x_3916_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_initial_3905_);
v___x_3917_ = l_List_appendTR___redArg(v___x_3915_, v___x_3916_);
v___x_3918_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__0));
v___x_3919_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3919_, 0, v_binder_3906_);
v___x_3920_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__24));
v___x_3921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3919_);
lean_ctor_set(v___x_3921_, 1, v___x_3920_);
v___x_3922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3918_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
v___x_3923_ = l_List_appendTR___redArg(v___x_3917_, v___x_3922_);
v___x_3924_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_source_3907_);
v___x_3925_ = l_List_appendTR___redArg(v___x_3923_, v___x_3924_);
v___x_3926_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__26));
v___x_3927_ = l_List_appendTR___redArg(v___x_3925_, v___x_3926_);
v___x_3928_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_step_3908_);
v___x_3929_ = l_List_appendTR___redArg(v___x_3927_, v___x_3928_);
v___x_3930_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3931_ = l_List_appendTR___redArg(v___x_3929_, v___x_3930_);
return v___x_3931_;
}
case 20:
{
lean_object* v_query_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v_query_3932_ = lean_ctor_get(v_x_3699_, 0);
lean_inc_ref(v_query_3932_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3933_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__31));
v___x_3934_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printQuery(v_query_3932_);
v___x_3935_ = l_List_appendTR___redArg(v___x_3933_, v___x_3934_);
v___x_3936_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3));
v___x_3937_ = l_List_appendTR___redArg(v___x_3935_, v___x_3936_);
return v___x_3937_;
}
default: 
{
lean_object* v_query_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; 
v_query_3938_ = lean_ctor_get(v_x_3699_, 0);
lean_inc_ref(v_query_3938_);
lean_dec_ref_known(v_x_3699_, 1);
v___x_3939_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr___closed__33));
v___x_3940_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printQuery(v_query_3938_);
v___x_3941_ = l_List_appendTR___redArg(v___x_3939_, v___x_3940_);
v___x_3942_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3));
v___x_3943_ = l_List_appendTR___redArg(v___x_3941_, v___x_3942_);
return v___x_3943_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__1(lean_object* v_a_3944_, lean_object* v_a_3945_){
_start:
{
if (lean_obj_tag(v_a_3944_) == 0)
{
lean_object* v___x_3946_; 
v___x_3946_ = l_List_reverse___redArg(v_a_3945_);
return v___x_3946_;
}
else
{
lean_object* v_head_3947_; lean_object* v_tail_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3966_; 
v_head_3947_ = lean_ctor_get(v_a_3944_, 0);
v_tail_3948_ = lean_ctor_get(v_a_3944_, 1);
v_isSharedCheck_3966_ = !lean_is_exclusive(v_a_3944_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3950_ = v_a_3944_;
v_isShared_3951_ = v_isSharedCheck_3966_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_tail_3948_);
lean_inc(v_head_3947_);
lean_dec(v_a_3944_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3966_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v_fst_3952_; lean_object* v_snd_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3965_; 
v_fst_3952_ = lean_ctor_get(v_head_3947_, 0);
v_snd_3953_ = lean_ctor_get(v_head_3947_, 1);
v_isSharedCheck_3965_ = !lean_is_exclusive(v_head_3947_);
if (v_isSharedCheck_3965_ == 0)
{
v___x_3955_ = v_head_3947_;
v_isShared_3956_ = v_isSharedCheck_3965_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_snd_3953_);
lean_inc(v_fst_3952_);
lean_dec(v_head_3947_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3965_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3957_; lean_object* v___x_3959_; 
v___x_3957_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printExpr(v_snd_3953_);
if (v_isShared_3956_ == 0)
{
lean_ctor_set(v___x_3955_, 1, v___x_3957_);
v___x_3959_ = v___x_3955_;
goto v_reusejp_3958_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v_fst_3952_);
lean_ctor_set(v_reuseFailAlloc_3964_, 1, v___x_3957_);
v___x_3959_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3958_;
}
v_reusejp_3958_:
{
lean_object* v___x_3961_; 
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 1, v_a_3945_);
lean_ctor_set(v___x_3950_, 0, v___x_3959_);
v___x_3961_ = v___x_3950_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v___x_3959_);
lean_ctor_set(v_reuseFailAlloc_3963_, 1, v_a_3945_);
v___x_3961_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
v_a_3944_ = v_tail_3948_;
v_a_3945_ = v___x_3961_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode(lean_object* v_x_3967_){
_start:
{
lean_object* v_varName_3968_; lean_object* v_labels_3969_; lean_object* v_properties_3970_; lean_object* v___x_3971_; lean_object* v___y_3973_; lean_object* v___y_3974_; lean_object* v___x_3978_; lean_object* v___y_3980_; 
v_varName_3968_ = lean_ctor_get(v_x_3967_, 0);
lean_inc(v_varName_3968_);
v_labels_3969_ = lean_ctor_get(v_x_3967_, 1);
lean_inc(v_labels_3969_);
v_properties_3970_ = lean_ctor_get(v_x_3967_, 2);
lean_inc(v_properties_3970_);
lean_dec_ref(v_x_3967_);
v___x_3971_ = lean_box(0);
v___x_3978_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__1));
if (lean_obj_tag(v_varName_3968_) == 0)
{
v___y_3980_ = v___x_3971_;
goto v___jp_3979_;
}
else
{
lean_object* v_val_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4000_; 
v_val_3992_ = lean_ctor_get(v_varName_3968_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v_varName_3968_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3994_ = v_varName_3968_;
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_val_3992_);
lean_dec(v_varName_3968_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
lean_ctor_set_tag(v___x_3994_, 2);
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_val_3992_);
v___x_3997_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v___x_3998_; 
v___x_3998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
lean_ctor_set(v___x_3998_, 1, v___x_3971_);
v___y_3980_ = v___x_3998_;
goto v___jp_3979_;
}
}
}
v___jp_3972_:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v___x_3975_ = l_List_appendTR___redArg(v___y_3973_, v___y_3974_);
v___x_3976_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printReceiver___closed__3));
v___x_3977_ = l_List_appendTR___redArg(v___x_3975_, v___x_3976_);
return v___x_3977_;
}
v___jp_3979_:
{
lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; uint8_t v___x_3985_; 
v___x_3981_ = l_List_appendTR___redArg(v___x_3978_, v___y_3980_);
v___x_3982_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2));
v___x_3983_ = lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printNode_spec__14(v_labels_3969_, v___x_3982_);
v___x_3984_ = l_List_appendTR___redArg(v___x_3981_, v___x_3983_);
v___x_3985_ = l_List_isEmpty___redArg(v_properties_3970_);
if (v___x_3985_ == 0)
{
lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; 
v___x_3986_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1));
v___x_3987_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__1(v_properties_3970_, v___x_3971_);
v___x_3988_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_colonEntries(v___x_3987_);
v___x_3989_ = l_List_appendTR___redArg(v___x_3986_, v___x_3988_);
v___x_3990_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3));
v___x_3991_ = l_List_appendTR___redArg(v___x_3989_, v___x_3990_);
v___y_3973_ = v___x_3984_;
v___y_3974_ = v___x_3991_;
goto v___jp_3972_;
}
else
{
lean_dec(v_properties_3970_);
v___y_3973_ = v___x_3984_;
v___y_3974_ = v___x_3971_;
goto v___jp_3972_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel(lean_object* v_x_4030_){
_start:
{
lean_object* v___y_4032_; lean_object* v___y_4033_; lean_object* v___y_4034_; uint8_t v_direction_4037_; lean_object* v_varName_4038_; lean_object* v_relType_4039_; lean_object* v_bounds_4040_; lean_object* v_properties_4041_; lean_object* v___y_4043_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4087_; lean_object* v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4119_; 
v_direction_4037_ = lean_ctor_get_uint8(v_x_4030_, sizeof(void*)*4);
v_varName_4038_ = lean_ctor_get(v_x_4030_, 0);
lean_inc(v_varName_4038_);
v_relType_4039_ = lean_ctor_get(v_x_4030_, 1);
lean_inc(v_relType_4039_);
v_bounds_4040_ = lean_ctor_get(v_x_4030_, 2);
lean_inc(v_bounds_4040_);
v_properties_4041_ = lean_ctor_get(v_x_4030_, 3);
lean_inc(v_properties_4041_);
lean_dec_ref(v_x_4030_);
if (v_direction_4037_ == 1)
{
lean_object* v___x_4122_; 
v___x_4122_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__14));
v___y_4119_ = v___x_4122_;
goto v___jp_4118_;
}
else
{
lean_object* v___x_4123_; 
v___x_4123_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__13));
v___y_4119_ = v___x_4123_;
goto v___jp_4118_;
}
v___jp_4031_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; 
v___x_4035_ = l_List_appendTR___redArg(v___y_4033_, v___y_4034_);
lean_inc(v___y_4032_);
v___x_4036_ = l_List_appendTR___redArg(v___x_4035_, v___y_4032_);
return v___x_4036_;
}
v___jp_4042_:
{
lean_object* v___x_4046_; uint8_t v___x_4047_; 
v___x_4046_ = l_List_appendTR___redArg(v___y_4043_, v___y_4045_);
v___x_4047_ = l_List_isEmpty___redArg(v_properties_4041_);
if (v___x_4047_ == 0)
{
lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v___x_4048_ = lean_box(0);
v___x_4049_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__1));
v___x_4050_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printExpr_spec__1(v_properties_4041_, v___x_4048_);
v___x_4051_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_colonEntries(v___x_4050_);
v___x_4052_ = l_List_appendTR___redArg(v___x_4049_, v___x_4051_);
v___x_4053_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode___closed__3));
v___x_4054_ = l_List_appendTR___redArg(v___x_4052_, v___x_4053_);
v___y_4032_ = v___y_4044_;
v___y_4033_ = v___x_4046_;
v___y_4034_ = v___x_4054_;
goto v___jp_4031_;
}
else
{
lean_object* v___x_4055_; 
lean_dec(v_properties_4041_);
v___x_4055_ = lean_box(0);
v___y_4032_ = v___y_4044_;
v___y_4033_ = v___x_4046_;
v___y_4034_ = v___x_4055_;
goto v___jp_4031_;
}
}
v___jp_4056_:
{
lean_object* v___x_4060_; 
v___x_4060_ = l_List_appendTR___redArg(v___y_4058_, v___y_4059_);
if (lean_obj_tag(v_bounds_4040_) == 0)
{
lean_object* v___x_4061_; 
v___x_4061_ = lean_box(0);
v___y_4043_ = v___x_4060_;
v___y_4044_ = v___y_4057_;
v___y_4045_ = v___x_4061_;
goto v___jp_4042_;
}
else
{
lean_object* v_val_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4085_; 
v_val_4062_ = lean_ctor_get(v_bounds_4040_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v_bounds_4040_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4064_ = v_bounds_4040_;
v_isShared_4065_ = v_isSharedCheck_4085_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_val_4062_);
lean_dec(v_bounds_4040_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4085_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v_fst_4066_; lean_object* v_snd_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4084_; 
v_fst_4066_ = lean_ctor_get(v_val_4062_, 0);
v_snd_4067_ = lean_ctor_get(v_val_4062_, 1);
v_isSharedCheck_4084_ = !lean_is_exclusive(v_val_4062_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4069_ = v_val_4062_;
v_isShared_4070_ = v_isSharedCheck_4084_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_snd_4067_);
lean_inc(v_fst_4066_);
lean_dec(v_val_4062_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4084_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4071_; lean_object* v___x_4073_; 
v___x_4071_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__0));
if (v_isShared_4065_ == 0)
{
lean_ctor_set_tag(v___x_4064_, 9);
lean_ctor_set(v___x_4064_, 0, v_fst_4066_);
v___x_4073_ = v___x_4064_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_fst_4066_);
v___x_4073_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4078_; 
v___x_4074_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__1));
v___x_4075_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_4075_, 0, v_snd_4067_);
v___x_4076_ = lean_box(0);
if (v_isShared_4070_ == 0)
{
lean_ctor_set_tag(v___x_4069_, 1);
lean_ctor_set(v___x_4069_, 1, v___x_4076_);
lean_ctor_set(v___x_4069_, 0, v___x_4075_);
v___x_4078_ = v___x_4069_;
goto v_reusejp_4077_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v___x_4075_);
lean_ctor_set(v_reuseFailAlloc_4082_, 1, v___x_4076_);
v___x_4078_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4077_;
}
v_reusejp_4077_:
{
lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4079_, 0, v___x_4074_);
lean_ctor_set(v___x_4079_, 1, v___x_4078_);
v___x_4080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4080_, 0, v___x_4073_);
lean_ctor_set(v___x_4080_, 1, v___x_4079_);
v___x_4081_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4071_);
lean_ctor_set(v___x_4081_, 1, v___x_4080_);
v___y_4043_ = v___x_4060_;
v___y_4044_ = v___y_4057_;
v___y_4045_ = v___x_4081_;
goto v___jp_4042_;
}
}
}
}
}
}
v___jp_4086_:
{
lean_object* v___x_4090_; 
lean_inc(v___y_4088_);
v___x_4090_ = l_List_appendTR___redArg(v___y_4088_, v___y_4089_);
if (lean_obj_tag(v_relType_4039_) == 0)
{
lean_object* v___x_4091_; 
v___x_4091_ = lean_box(0);
v___y_4057_ = v___y_4087_;
v___y_4058_ = v___x_4090_;
v___y_4059_ = v___x_4091_;
goto v___jp_4056_;
}
else
{
lean_object* v_val_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4103_; 
v_val_4092_ = lean_ctor_get(v_relType_4039_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v_relType_4039_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4094_ = v_relType_4039_;
v_isShared_4095_ = v_isSharedCheck_4103_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_val_4092_);
lean_dec(v_relType_4039_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4103_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4096_; lean_object* v___x_4098_; 
v___x_4096_ = ((lean_object*)(lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_colonEntries_spec__0___closed__0));
if (v_isShared_4095_ == 0)
{
lean_ctor_set_tag(v___x_4094_, 2);
v___x_4098_ = v___x_4094_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v_val_4092_);
v___x_4098_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4099_ = lean_box(0);
v___x_4100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4098_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
v___x_4101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4096_);
lean_ctor_set(v___x_4101_, 1, v___x_4100_);
v___y_4057_ = v___y_4087_;
v___y_4058_ = v___x_4090_;
v___y_4059_ = v___x_4101_;
goto v___jp_4056_;
}
}
}
}
v___jp_4104_:
{
if (lean_obj_tag(v_varName_4038_) == 0)
{
lean_object* v___x_4107_; 
v___x_4107_ = lean_box(0);
v___y_4087_ = v___y_4106_;
v___y_4088_ = v___y_4105_;
v___y_4089_ = v___x_4107_;
goto v___jp_4086_;
}
else
{
lean_object* v_val_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4117_; 
v_val_4108_ = lean_ctor_get(v_varName_4038_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v_varName_4038_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4110_ = v_varName_4038_;
v_isShared_4111_ = v_isSharedCheck_4117_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_val_4108_);
lean_dec(v_varName_4038_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4117_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
lean_ctor_set_tag(v___x_4110_, 2);
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_val_4108_);
v___x_4113_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
lean_object* v___x_4114_; lean_object* v___x_4115_; 
v___x_4114_ = lean_box(0);
v___x_4115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4113_);
lean_ctor_set(v___x_4115_, 1, v___x_4114_);
v___y_4087_ = v___y_4106_;
v___y_4088_ = v___y_4105_;
v___y_4089_ = v___x_4115_;
goto v___jp_4086_;
}
}
}
}
v___jp_4118_:
{
if (v_direction_4037_ == 0)
{
lean_object* v___x_4120_; 
v___x_4120_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__7));
v___y_4105_ = v___y_4119_;
v___y_4106_ = v___x_4120_;
goto v___jp_4104_;
}
else
{
lean_object* v___x_4121_; 
v___x_4121_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel___closed__9));
v___y_4105_ = v___y_4119_;
v___y_4106_ = v___x_4121_;
goto v___jp_4104_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printPath_spec__11(lean_object* v_a_4124_, lean_object* v_a_4125_){
_start:
{
if (lean_obj_tag(v_a_4124_) == 0)
{
lean_object* v___x_4126_; 
v___x_4126_ = lean_array_to_list(v_a_4125_);
return v___x_4126_;
}
else
{
lean_object* v_head_4127_; lean_object* v_tail_4128_; lean_object* v_fst_4129_; lean_object* v_snd_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; 
v_head_4127_ = lean_ctor_get(v_a_4124_, 0);
lean_inc(v_head_4127_);
v_tail_4128_ = lean_ctor_get(v_a_4124_, 1);
lean_inc(v_tail_4128_);
lean_dec_ref_known(v_a_4124_, 2);
v_fst_4129_ = lean_ctor_get(v_head_4127_, 0);
lean_inc(v_fst_4129_);
v_snd_4130_ = lean_ctor_get(v_head_4127_, 1);
lean_inc(v_snd_4130_);
lean_dec(v_head_4127_);
v___x_4131_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printRel(v_fst_4129_);
v___x_4132_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode(v_snd_4130_);
v___x_4133_ = l_List_appendTR___redArg(v___x_4131_, v___x_4132_);
v___x_4134_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_4125_, v___x_4133_);
v_a_4124_ = v_tail_4128_;
v_a_4125_ = v___x_4134_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printPath(lean_object* v_x_4136_){
_start:
{
lean_object* v_first_4137_; lean_object* v_tail_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; 
v_first_4137_ = lean_ctor_get(v_x_4136_, 0);
lean_inc_ref(v_first_4137_);
v_tail_4138_ = lean_ctor_get(v_x_4136_, 1);
lean_inc(v_tail_4138_);
lean_dec_ref(v_x_4136_);
v___x_4139_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printNode(v_first_4137_);
v___x_4140_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep___closed__2));
v___x_4141_ = lp_Ocl2CypherProof___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Ocl2Gratra_CypherCanonicalGrammar_printPath_spec__11(v_tail_4138_, v___x_4140_);
v___x_4142_ = l_List_appendTR___redArg(v___x_4139_, v___x_4141_);
return v___x_4142_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printPattern_spec__9(lean_object* v_a_4143_, lean_object* v_a_4144_){
_start:
{
if (lean_obj_tag(v_a_4143_) == 0)
{
lean_object* v___x_4145_; 
v___x_4145_ = l_List_reverse___redArg(v_a_4144_);
return v___x_4145_;
}
else
{
lean_object* v_head_4146_; lean_object* v_tail_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4156_; 
v_head_4146_ = lean_ctor_get(v_a_4143_, 0);
v_tail_4147_ = lean_ctor_get(v_a_4143_, 1);
v_isSharedCheck_4156_ = !lean_is_exclusive(v_a_4143_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4149_ = v_a_4143_;
v_isShared_4150_ = v_isSharedCheck_4156_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_tail_4147_);
lean_inc(v_head_4146_);
lean_dec(v_a_4143_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4156_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4151_; lean_object* v___x_4153_; 
v___x_4151_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printPath(v_head_4146_);
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 1, v_a_4144_);
lean_ctor_set(v___x_4149_, 0, v___x_4151_);
v___x_4153_ = v___x_4149_;
goto v_reusejp_4152_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v___x_4151_);
lean_ctor_set(v_reuseFailAlloc_4155_, 1, v_a_4144_);
v___x_4153_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4152_;
}
v_reusejp_4152_:
{
v_a_4143_ = v_tail_4147_;
v_a_4144_ = v___x_4153_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printPattern(lean_object* v_x_4157_){
_start:
{
lean_object* v_paths_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v_paths_4158_ = lean_ctor_get(v_x_4157_, 0);
lean_inc(v_paths_4158_);
lean_dec_ref(v_x_4157_);
v___x_4159_ = lean_box(0);
v___x_4160_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_CypherCanonicalGrammar_printPattern_spec__9(v_paths_4158_, v___x_4159_);
v___x_4161_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_commaSep(v___x_4160_);
return v___x_4161_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__1(void){
_start:
{
lean_object* v___x_4164_; lean_object* v___x_4165_; 
v___x_4164_ = lean_unsigned_to_nat(5u);
v___x_4165_ = lean_nat_to_int(v___x_4164_);
return v___x_4165_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__2(void){
_start:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; 
v___x_4166_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__1, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__1_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__1);
v___x_4167_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4167_, 0, v___x_4166_);
return v___x_4167_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__3(void){
_start:
{
lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4168_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printClause___closed__2));
v___x_4169_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__2, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__2_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__2);
v___x_4170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
lean_ctor_set(v___x_4170_, 1, v___x_4168_);
return v___x_4170_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__4(void){
_start:
{
lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4171_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__3);
v___x_4172_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__0));
v___x_4173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4173_, 0, v___x_4172_);
lean_ctor_set(v___x_4173_, 1, v___x_4171_);
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact(lean_object* v_query_4174_){
_start:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; 
v___x_4175_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printArtifact___closed__4);
v___x_4176_ = lp_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar_printQuery(v_query_4174_);
v___x_4177_ = l_List_appendTR___redArg(v___x_4175_, v___x_4176_);
return v___x_4177_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_CypherCanonicalGrammar(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
