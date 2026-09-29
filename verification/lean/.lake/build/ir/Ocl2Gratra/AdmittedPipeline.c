// Lean compiler output
// Module: Ocl2Gratra.AdmittedPipeline
// Imports: public import Init public meta import Init public import Ocl2Gratra.Boolean3Kleene public import Ocl2Gratra.ProductionQSyntax
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_not(uint8_t);
uint8_t lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_and(uint8_t, uint8_t);
uint8_t lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_or(uint8_t, uint8_t);
uint8_t lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_implies(uint8_t, uint8_t);
uint8_t lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instDecidableEqBool3(uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instReprBool3_repr(uint8_t, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_ite3(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_ite3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_literal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_literal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_variable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_variable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_not_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_not_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_and_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_and_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_or_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_or_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_implies_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_implies_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ifExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ifExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_letExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_letExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.literal"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__2_value;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3;
static lean_once_cell_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.variable"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__5_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__5_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__7_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.not"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__8_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__8_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__9_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__10_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.and"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__11_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__11_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__13_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.or"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__14_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__14_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__15_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__16_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.implies"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__17_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__17_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__19_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.ifExpr"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__20_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__20_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__21 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__21_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__22 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__22_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.AdmittedPipeline.SurfaceExpr.letExpr"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__23 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__23_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__23_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__24 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__24_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__24_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__25 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__25_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr___closed__0_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_literal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_literal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_variable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_variable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_not_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_not_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_and_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_and_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_or_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_or_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ifExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ifExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_letExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_letExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Ocl2Gratra.AdmittedPipeline.CoreExpr.literal"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__2_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Ocl2Gratra.AdmittedPipeline.CoreExpr.variable"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__3_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__3_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__5_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Ocl2Gratra.AdmittedPipeline.CoreExpr.not"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__6_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__7_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__8_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Ocl2Gratra.AdmittedPipeline.CoreExpr.and"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__9_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__9_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__11_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Ocl2Gratra.AdmittedPipeline.CoreExpr.or"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__13_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__14_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Ocl2Gratra.AdmittedPipeline.CoreExpr.ifExpr"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__15_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__15_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__16_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__17_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Ocl2Gratra.AdmittedPipeline.CoreExpr.letExpr"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__18_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__19_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__20_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__0_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__2_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_evalQ_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_evalQ_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_variable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_variable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_constant_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_constant_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_not_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_not_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_and_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_and_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_or_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_or_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ifExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ifExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_letExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_letExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.AdmittedPipeline.CypherExpr.variable"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__0_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__0_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__1_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__2_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Ocl2Gratra.AdmittedPipeline.CypherExpr.constant"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__3_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__3_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__4 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__4_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__5 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__5_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.AdmittedPipeline.CypherExpr.not"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__6 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__6_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__6_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__7 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__7_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__8 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__8_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Ocl2Gratra.AdmittedPipeline.CypherExpr.and"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__9 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__9_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__9_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__10 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__10_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__11 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__11_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Ocl2Gratra.AdmittedPipeline.CypherExpr.or"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__12 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__12_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__12_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__13 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__13_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__14 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__14_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Ocl2Gratra.AdmittedPipeline.CypherExpr.ifExpr"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__15 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__15_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__15_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__16 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__16_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__17 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__17_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Ocl2Gratra.AdmittedPipeline.CypherExpr.letExpr"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__18 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__18_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__18_value)}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__19 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__19_value;
static const lean_ctor_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__20 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__20_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr___closed__0_value;
LEAN_EXPORT const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr___closed__0_value;
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_cypherViolationId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_AdmittedPipeline_sourceViolationIds_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationIds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationIds___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationIds___closed__0_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationIds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_AdmittedPipeline_cypherViolationIds_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_cypherViolationIds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__List_filterMap_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__List_filterMap_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind(lean_object* v_environment_1_, lean_object* v_declaration_2_, uint8_t v_value_3_, lean_object* v_candidate_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_eq(v_candidate_4_, v_declaration_2_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_apply_1(v_environment_1_, v_candidate_4_);
v___x_7_ = lean_unbox(v___x_6_);
return v___x_7_;
}
else
{
lean_dec(v_candidate_4_);
lean_dec_ref(v_environment_1_);
return v_value_3_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind___boxed(lean_object* v_environment_8_, lean_object* v_declaration_9_, lean_object* v_value_10_, lean_object* v_candidate_11_){
_start:
{
uint8_t v_value_boxed_12_; uint8_t v_res_13_; lean_object* v_r_14_; 
v_value_boxed_12_ = lean_unbox(v_value_10_);
v_res_13_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind(v_environment_8_, v_declaration_9_, v_value_boxed_12_, v_candidate_11_);
lean_dec(v_declaration_9_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_ite3(uint8_t v_x_15_, uint8_t v_x_16_, uint8_t v_x_17_){
_start:
{
switch(v_x_15_)
{
case 0:
{
return v_x_16_;
}
case 1:
{
return v_x_17_;
}
default: 
{
return v_x_15_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_ite3___boxed(lean_object* v_x_18_, lean_object* v_x_19_, lean_object* v_x_20_){
_start:
{
uint8_t v_x_21__boxed_21_; uint8_t v_x_22__boxed_22_; uint8_t v_x_23__boxed_23_; uint8_t v_res_24_; lean_object* v_r_25_; 
v_x_21__boxed_21_ = lean_unbox(v_x_18_);
v_x_22__boxed_22_ = lean_unbox(v_x_19_);
v_x_23__boxed_23_ = lean_unbox(v_x_20_);
v_res_24_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_ite3(v_x_21__boxed_21_, v_x_22__boxed_22_, v_x_23__boxed_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorIdx(lean_object* v_x_26_){
_start:
{
switch(lean_obj_tag(v_x_26_))
{
case 0:
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(0u);
return v___x_27_;
}
case 1:
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(1u);
return v___x_28_;
}
case 2:
{
lean_object* v___x_29_; 
v___x_29_ = lean_unsigned_to_nat(2u);
return v___x_29_;
}
case 3:
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(3u);
return v___x_30_;
}
case 4:
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(4u);
return v___x_31_;
}
case 5:
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(5u);
return v___x_32_;
}
case 6:
{
lean_object* v___x_33_; 
v___x_33_ = lean_unsigned_to_nat(6u);
return v___x_33_;
}
default: 
{
lean_object* v___x_34_; 
v___x_34_ = lean_unsigned_to_nat(7u);
return v___x_34_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorIdx___boxed(lean_object* v_x_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorIdx(v_x_35_);
lean_dec_ref(v_x_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(lean_object* v_t_37_, lean_object* v_k_38_){
_start:
{
switch(lean_obj_tag(v_t_37_))
{
case 0:
{
uint8_t v_value_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v_value_39_ = lean_ctor_get_uint8(v_t_37_, 0);
lean_dec_ref_known(v_t_37_, 0);
v___x_40_ = lean_box(v_value_39_);
v___x_41_ = lean_apply_1(v_k_38_, v___x_40_);
return v___x_41_;
}
case 1:
{
lean_object* v_declaration_42_; lean_object* v___x_43_; 
v_declaration_42_ = lean_ctor_get(v_t_37_, 0);
lean_inc(v_declaration_42_);
lean_dec_ref_known(v_t_37_, 1);
v___x_43_ = lean_apply_1(v_k_38_, v_declaration_42_);
return v___x_43_;
}
case 2:
{
lean_object* v_body_44_; lean_object* v___x_45_; 
v_body_44_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_body_44_);
lean_dec_ref_known(v_t_37_, 1);
v___x_45_ = lean_apply_1(v_k_38_, v_body_44_);
return v___x_45_;
}
case 6:
{
lean_object* v_condition_46_; lean_object* v_thenExpr_47_; lean_object* v_elseExpr_48_; lean_object* v___x_49_; 
v_condition_46_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_condition_46_);
v_thenExpr_47_ = lean_ctor_get(v_t_37_, 1);
lean_inc_ref(v_thenExpr_47_);
v_elseExpr_48_ = lean_ctor_get(v_t_37_, 2);
lean_inc_ref(v_elseExpr_48_);
lean_dec_ref_known(v_t_37_, 3);
v___x_49_ = lean_apply_3(v_k_38_, v_condition_46_, v_thenExpr_47_, v_elseExpr_48_);
return v___x_49_;
}
case 7:
{
lean_object* v_binder_50_; lean_object* v_value_51_; lean_object* v_body_52_; lean_object* v___x_53_; 
v_binder_50_ = lean_ctor_get(v_t_37_, 0);
lean_inc(v_binder_50_);
v_value_51_ = lean_ctor_get(v_t_37_, 1);
lean_inc_ref(v_value_51_);
v_body_52_ = lean_ctor_get(v_t_37_, 2);
lean_inc_ref(v_body_52_);
lean_dec_ref_known(v_t_37_, 3);
v___x_53_ = lean_apply_3(v_k_38_, v_binder_50_, v_value_51_, v_body_52_);
return v___x_53_;
}
default: 
{
lean_object* v_left_54_; lean_object* v_right_55_; lean_object* v___x_56_; 
v_left_54_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_left_54_);
v_right_55_ = lean_ctor_get(v_t_37_, 1);
lean_inc_ref(v_right_55_);
lean_dec_ref(v_t_37_);
v___x_56_ = lean_apply_2(v_k_38_, v_left_54_, v_right_55_);
return v___x_56_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim(lean_object* v_motive_57_, lean_object* v_ctorIdx_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_k_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_59_, v_k_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___boxed(lean_object* v_motive_63_, lean_object* v_ctorIdx_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_k_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim(v_motive_63_, v_ctorIdx_64_, v_t_65_, v_h_66_, v_k_67_);
lean_dec(v_ctorIdx_64_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_literal_elim___redArg(lean_object* v_t_69_, lean_object* v_literal_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_69_, v_literal_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_literal_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_literal_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_73_, v_literal_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_variable_elim___redArg(lean_object* v_t_77_, lean_object* v_variable_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_77_, v_variable_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_variable_elim(lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_variable_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_81_, v_variable_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_not_elim___redArg(lean_object* v_t_85_, lean_object* v_not_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_85_, v_not_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_not_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_not_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_89_, v_not_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_and_elim___redArg(lean_object* v_t_93_, lean_object* v_and_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_93_, v_and_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_and_elim(lean_object* v_motive_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_and_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_97_, v_and_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_or_elim___redArg(lean_object* v_t_101_, lean_object* v_or_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_101_, v_or_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_or_elim(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_or_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_105_, v_or_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_implies_elim___redArg(lean_object* v_t_109_, lean_object* v_implies_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_109_, v_implies_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_implies_elim(lean_object* v_motive_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_implies_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_113_, v_implies_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ifExpr_elim___redArg(lean_object* v_t_117_, lean_object* v_ifExpr_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_117_, v_ifExpr_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ifExpr_elim(lean_object* v_motive_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_ifExpr_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_121_, v_ifExpr_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_letExpr_elim___redArg(lean_object* v_t_125_, lean_object* v_letExpr_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_125_, v_letExpr_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_letExpr_elim(lean_object* v_motive_128_, lean_object* v_t_129_, lean_object* v_h_130_, lean_object* v_letExpr_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_SurfaceExpr_ctorElim___redArg(v_t_129_, v_letExpr_131_);
return v___x_132_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_unsigned_to_nat(2u);
v___x_140_ = lean_nat_to_int(v___x_139_);
return v___x_140_;
}
}
static lean_object* _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_nat_to_int(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(lean_object* v_x_185_, lean_object* v_prec_186_){
_start:
{
switch(lean_obj_tag(v_x_185_))
{
case 0:
{
uint8_t v_value_187_; lean_object* v___y_189_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_value_187_ = lean_ctor_get_uint8(v_x_185_, 0);
lean_dec_ref_known(v_x_185_, 0);
v___x_198_ = lean_unsigned_to_nat(1024u);
v___x_199_ = lean_nat_dec_le(v___x_198_, v_prec_186_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_189_ = v___x_200_;
goto v___jp_188_;
}
else
{
lean_object* v___x_201_; 
v___x_201_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_189_ = v___x_201_;
goto v___jp_188_;
}
v___jp_188_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_190_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__2));
v___x_191_ = lean_unsigned_to_nat(1024u);
v___x_192_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instReprBool3_repr(v_value_187_, v___x_191_);
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_190_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
lean_inc(v___y_189_);
v___x_194_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_194_, 0, v___y_189_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = 0;
v___x_196_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*1, v___x_195_);
v___x_197_ = l_Repr_addAppParen(v___x_196_, v_prec_186_);
return v___x_197_;
}
}
case 1:
{
lean_object* v_declaration_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_222_; 
v_declaration_202_ = lean_ctor_get(v_x_185_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_222_ == 0)
{
v___x_204_ = v_x_185_;
v_isShared_205_ = v_isSharedCheck_222_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_declaration_202_);
lean_dec(v_x_185_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_222_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___y_207_; lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_218_ = lean_unsigned_to_nat(1024u);
v___x_219_ = lean_nat_dec_le(v___x_218_, v_prec_186_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_207_ = v___x_220_;
goto v___jp_206_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_207_ = v___x_221_;
goto v___jp_206_;
}
v___jp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_208_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__7));
v___x_209_ = l_Nat_reprFast(v_declaration_202_);
if (v_isShared_205_ == 0)
{
lean_ctor_set_tag(v___x_204_, 3);
lean_ctor_set(v___x_204_, 0, v___x_209_);
v___x_211_ = v___x_204_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_217_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_208_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
lean_inc(v___y_207_);
v___x_213_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_213_, 0, v___y_207_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = 0;
v___x_215_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*1, v___x_214_);
v___x_216_ = l_Repr_addAppParen(v___x_215_, v_prec_186_);
return v___x_216_;
}
}
}
}
case 2:
{
lean_object* v_body_223_; lean_object* v___x_224_; lean_object* v___y_226_; uint8_t v___x_234_; 
v_body_223_ = lean_ctor_get(v_x_185_, 0);
lean_inc_ref(v_body_223_);
lean_dec_ref_known(v_x_185_, 1);
v___x_224_ = lean_unsigned_to_nat(1024u);
v___x_234_ = lean_nat_dec_le(v___x_224_, v_prec_186_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; 
v___x_235_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_226_ = v___x_235_;
goto v___jp_225_;
}
else
{
lean_object* v___x_236_; 
v___x_236_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_226_ = v___x_236_;
goto v___jp_225_;
}
v___jp_225_:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_227_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__10));
v___x_228_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_body_223_, v___x_224_);
v___x_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
lean_inc(v___y_226_);
v___x_230_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_230_, 0, v___y_226_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = 0;
v___x_232_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set_uint8(v___x_232_, sizeof(void*)*1, v___x_231_);
v___x_233_ = l_Repr_addAppParen(v___x_232_, v_prec_186_);
return v___x_233_;
}
}
case 3:
{
lean_object* v_left_237_; lean_object* v_right_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_261_; 
v_left_237_ = lean_ctor_get(v_x_185_, 0);
v_right_238_ = lean_ctor_get(v_x_185_, 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_261_ == 0)
{
v___x_240_ = v_x_185_;
v_isShared_241_ = v_isSharedCheck_261_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_right_238_);
lean_inc(v_left_237_);
lean_dec(v_x_185_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_261_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___y_244_; uint8_t v___x_258_; 
v___x_242_ = lean_unsigned_to_nat(1024u);
v___x_258_ = lean_nat_dec_le(v___x_242_, v_prec_186_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; 
v___x_259_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_244_ = v___x_259_;
goto v___jp_243_;
}
else
{
lean_object* v___x_260_; 
v___x_260_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_244_ = v___x_260_;
goto v___jp_243_;
}
v___jp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_245_ = lean_box(1);
v___x_246_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__13));
v___x_247_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_left_237_, v___x_242_);
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 5);
lean_ctor_set(v___x_240_, 1, v___x_247_);
lean_ctor_set(v___x_240_, 0, v___x_246_);
v___x_249_ = v___x_240_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v___x_247_);
v___x_249_ = v_reuseFailAlloc_257_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set(v___x_250_, 1, v___x_245_);
v___x_251_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_right_238_, v___x_242_);
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
lean_inc(v___y_244_);
v___x_253_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_253_, 0, v___y_244_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = 0;
v___x_255_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set_uint8(v___x_255_, sizeof(void*)*1, v___x_254_);
v___x_256_ = l_Repr_addAppParen(v___x_255_, v_prec_186_);
return v___x_256_;
}
}
}
}
case 4:
{
lean_object* v_left_262_; lean_object* v_right_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_286_; 
v_left_262_ = lean_ctor_get(v_x_185_, 0);
v_right_263_ = lean_ctor_get(v_x_185_, 1);
v_isSharedCheck_286_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_286_ == 0)
{
v___x_265_ = v_x_185_;
v_isShared_266_ = v_isSharedCheck_286_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_right_263_);
lean_inc(v_left_262_);
lean_dec(v_x_185_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_286_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_267_; lean_object* v___y_269_; uint8_t v___x_283_; 
v___x_267_ = lean_unsigned_to_nat(1024u);
v___x_283_ = lean_nat_dec_le(v___x_267_, v_prec_186_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_269_ = v___x_284_;
goto v___jp_268_;
}
else
{
lean_object* v___x_285_; 
v___x_285_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_269_ = v___x_285_;
goto v___jp_268_;
}
v___jp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_270_ = lean_box(1);
v___x_271_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__16));
v___x_272_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_left_262_, v___x_267_);
if (v_isShared_266_ == 0)
{
lean_ctor_set_tag(v___x_265_, 5);
lean_ctor_set(v___x_265_, 1, v___x_272_);
lean_ctor_set(v___x_265_, 0, v___x_271_);
v___x_274_ = v___x_265_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_272_);
v___x_274_ = v_reuseFailAlloc_282_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v___x_270_);
v___x_276_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_right_263_, v___x_267_);
v___x_277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_275_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
lean_inc(v___y_269_);
v___x_278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_278_, 0, v___y_269_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = 0;
v___x_280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set_uint8(v___x_280_, sizeof(void*)*1, v___x_279_);
v___x_281_ = l_Repr_addAppParen(v___x_280_, v_prec_186_);
return v___x_281_;
}
}
}
}
case 5:
{
lean_object* v_left_287_; lean_object* v_right_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_311_; 
v_left_287_ = lean_ctor_get(v_x_185_, 0);
v_right_288_ = lean_ctor_get(v_x_185_, 1);
v_isSharedCheck_311_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_311_ == 0)
{
v___x_290_ = v_x_185_;
v_isShared_291_ = v_isSharedCheck_311_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_right_288_);
lean_inc(v_left_287_);
lean_dec(v_x_185_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_311_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___y_294_; uint8_t v___x_308_; 
v___x_292_ = lean_unsigned_to_nat(1024u);
v___x_308_ = lean_nat_dec_le(v___x_292_, v_prec_186_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; 
v___x_309_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_294_ = v___x_309_;
goto v___jp_293_;
}
else
{
lean_object* v___x_310_; 
v___x_310_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_294_ = v___x_310_;
goto v___jp_293_;
}
v___jp_293_:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_295_ = lean_box(1);
v___x_296_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__19));
v___x_297_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_left_287_, v___x_292_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 1, v___x_297_);
lean_ctor_set(v___x_290_, 0, v___x_296_);
v___x_299_ = v___x_290_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v___x_297_);
v___x_299_ = v_reuseFailAlloc_307_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_295_);
v___x_301_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_right_288_, v___x_292_);
v___x_302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
lean_inc(v___y_294_);
v___x_303_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_303_, 0, v___y_294_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v___x_304_ = 0;
v___x_305_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_305_, 0, v___x_303_);
lean_ctor_set_uint8(v___x_305_, sizeof(void*)*1, v___x_304_);
v___x_306_ = l_Repr_addAppParen(v___x_305_, v_prec_186_);
return v___x_306_;
}
}
}
}
case 6:
{
lean_object* v_condition_312_; lean_object* v_thenExpr_313_; lean_object* v_elseExpr_314_; lean_object* v___x_315_; lean_object* v___y_317_; uint8_t v___x_332_; 
v_condition_312_ = lean_ctor_get(v_x_185_, 0);
lean_inc_ref(v_condition_312_);
v_thenExpr_313_ = lean_ctor_get(v_x_185_, 1);
lean_inc_ref(v_thenExpr_313_);
v_elseExpr_314_ = lean_ctor_get(v_x_185_, 2);
lean_inc_ref(v_elseExpr_314_);
lean_dec_ref_known(v_x_185_, 3);
v___x_315_ = lean_unsigned_to_nat(1024u);
v___x_332_ = lean_nat_dec_le(v___x_315_, v_prec_186_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; 
v___x_333_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_317_ = v___x_333_;
goto v___jp_316_;
}
else
{
lean_object* v___x_334_; 
v___x_334_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_317_ = v___x_334_;
goto v___jp_316_;
}
v___jp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_318_ = lean_box(1);
v___x_319_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__22));
v___x_320_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_condition_312_, v___x_315_);
v___x_321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___x_318_);
v___x_323_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_thenExpr_313_, v___x_315_);
v___x_324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_322_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___x_318_);
v___x_326_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_elseExpr_314_, v___x_315_);
v___x_327_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
lean_inc(v___y_317_);
v___x_328_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_328_, 0, v___y_317_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = 0;
v___x_330_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_330_, 0, v___x_328_);
lean_ctor_set_uint8(v___x_330_, sizeof(void*)*1, v___x_329_);
v___x_331_ = l_Repr_addAppParen(v___x_330_, v_prec_186_);
return v___x_331_;
}
}
default: 
{
lean_object* v_binder_335_; lean_object* v_value_336_; lean_object* v_body_337_; lean_object* v___x_338_; lean_object* v___y_340_; uint8_t v___x_356_; 
v_binder_335_ = lean_ctor_get(v_x_185_, 0);
lean_inc(v_binder_335_);
v_value_336_ = lean_ctor_get(v_x_185_, 1);
lean_inc_ref(v_value_336_);
v_body_337_ = lean_ctor_get(v_x_185_, 2);
lean_inc_ref(v_body_337_);
lean_dec_ref_known(v_x_185_, 3);
v___x_338_ = lean_unsigned_to_nat(1024u);
v___x_356_ = lean_nat_dec_le(v___x_338_, v_prec_186_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; 
v___x_357_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_340_ = v___x_357_;
goto v___jp_339_;
}
else
{
lean_object* v___x_358_; 
v___x_358_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_340_ = v___x_358_;
goto v___jp_339_;
}
v___jp_339_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_341_ = lean_box(1);
v___x_342_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__25));
v___x_343_ = l_Nat_reprFast(v_binder_335_);
v___x_344_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
v___x_345_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_342_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
v___x_346_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_341_);
v___x_347_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_value_336_, v___x_338_);
v___x_348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_346_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
v___x_349_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___x_341_);
v___x_350_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_body_337_, v___x_338_);
v___x_351_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
lean_inc(v___y_340_);
v___x_352_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_352_, 0, v___y_340_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = 0;
v___x_354_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_354_, 0, v___x_352_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*1, v___x_353_);
v___x_355_ = l_Repr_addAppParen(v___x_354_, v_prec_186_);
return v___x_355_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___boxed(lean_object* v_x_359_, lean_object* v_prec_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr(v_x_359_, v_prec_360_);
lean_dec(v_prec_360_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorIdx(lean_object* v_x_364_){
_start:
{
switch(lean_obj_tag(v_x_364_))
{
case 0:
{
lean_object* v___x_365_; 
v___x_365_ = lean_unsigned_to_nat(0u);
return v___x_365_;
}
case 1:
{
lean_object* v___x_366_; 
v___x_366_ = lean_unsigned_to_nat(1u);
return v___x_366_;
}
case 2:
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(2u);
return v___x_367_;
}
case 3:
{
lean_object* v___x_368_; 
v___x_368_ = lean_unsigned_to_nat(3u);
return v___x_368_;
}
case 4:
{
lean_object* v___x_369_; 
v___x_369_ = lean_unsigned_to_nat(4u);
return v___x_369_;
}
case 5:
{
lean_object* v___x_370_; 
v___x_370_ = lean_unsigned_to_nat(5u);
return v___x_370_;
}
default: 
{
lean_object* v___x_371_; 
v___x_371_ = lean_unsigned_to_nat(6u);
return v___x_371_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorIdx___boxed(lean_object* v_x_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorIdx(v_x_372_);
lean_dec_ref(v_x_372_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(lean_object* v_t_374_, lean_object* v_k_375_){
_start:
{
switch(lean_obj_tag(v_t_374_))
{
case 0:
{
uint8_t v_value_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_value_376_ = lean_ctor_get_uint8(v_t_374_, 0);
lean_dec_ref_known(v_t_374_, 0);
v___x_377_ = lean_box(v_value_376_);
v___x_378_ = lean_apply_1(v_k_375_, v___x_377_);
return v___x_378_;
}
case 1:
{
lean_object* v_declaration_379_; lean_object* v___x_380_; 
v_declaration_379_ = lean_ctor_get(v_t_374_, 0);
lean_inc(v_declaration_379_);
lean_dec_ref_known(v_t_374_, 1);
v___x_380_ = lean_apply_1(v_k_375_, v_declaration_379_);
return v___x_380_;
}
case 2:
{
lean_object* v_body_381_; lean_object* v___x_382_; 
v_body_381_ = lean_ctor_get(v_t_374_, 0);
lean_inc_ref(v_body_381_);
lean_dec_ref_known(v_t_374_, 1);
v___x_382_ = lean_apply_1(v_k_375_, v_body_381_);
return v___x_382_;
}
case 5:
{
lean_object* v_condition_383_; lean_object* v_thenExpr_384_; lean_object* v_elseExpr_385_; lean_object* v___x_386_; 
v_condition_383_ = lean_ctor_get(v_t_374_, 0);
lean_inc_ref(v_condition_383_);
v_thenExpr_384_ = lean_ctor_get(v_t_374_, 1);
lean_inc_ref(v_thenExpr_384_);
v_elseExpr_385_ = lean_ctor_get(v_t_374_, 2);
lean_inc_ref(v_elseExpr_385_);
lean_dec_ref_known(v_t_374_, 3);
v___x_386_ = lean_apply_3(v_k_375_, v_condition_383_, v_thenExpr_384_, v_elseExpr_385_);
return v___x_386_;
}
case 6:
{
lean_object* v_binder_387_; lean_object* v_value_388_; lean_object* v_body_389_; lean_object* v___x_390_; 
v_binder_387_ = lean_ctor_get(v_t_374_, 0);
lean_inc(v_binder_387_);
v_value_388_ = lean_ctor_get(v_t_374_, 1);
lean_inc_ref(v_value_388_);
v_body_389_ = lean_ctor_get(v_t_374_, 2);
lean_inc_ref(v_body_389_);
lean_dec_ref_known(v_t_374_, 3);
v___x_390_ = lean_apply_3(v_k_375_, v_binder_387_, v_value_388_, v_body_389_);
return v___x_390_;
}
default: 
{
lean_object* v_left_391_; lean_object* v_right_392_; lean_object* v___x_393_; 
v_left_391_ = lean_ctor_get(v_t_374_, 0);
lean_inc_ref(v_left_391_);
v_right_392_ = lean_ctor_get(v_t_374_, 1);
lean_inc_ref(v_right_392_);
lean_dec_ref(v_t_374_);
v___x_393_ = lean_apply_2(v_k_375_, v_left_391_, v_right_392_);
return v___x_393_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim(lean_object* v_motive_394_, lean_object* v_ctorIdx_395_, lean_object* v_t_396_, lean_object* v_h_397_, lean_object* v_k_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_396_, v_k_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___boxed(lean_object* v_motive_400_, lean_object* v_ctorIdx_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_k_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim(v_motive_400_, v_ctorIdx_401_, v_t_402_, v_h_403_, v_k_404_);
lean_dec(v_ctorIdx_401_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_literal_elim___redArg(lean_object* v_t_406_, lean_object* v_literal_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_406_, v_literal_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_literal_elim(lean_object* v_motive_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_literal_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_410_, v_literal_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_variable_elim___redArg(lean_object* v_t_414_, lean_object* v_variable_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_414_, v_variable_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_variable_elim(lean_object* v_motive_417_, lean_object* v_t_418_, lean_object* v_h_419_, lean_object* v_variable_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_418_, v_variable_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_not_elim___redArg(lean_object* v_t_422_, lean_object* v_not_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_422_, v_not_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_not_elim(lean_object* v_motive_425_, lean_object* v_t_426_, lean_object* v_h_427_, lean_object* v_not_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_426_, v_not_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_and_elim___redArg(lean_object* v_t_430_, lean_object* v_and_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_430_, v_and_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_and_elim(lean_object* v_motive_433_, lean_object* v_t_434_, lean_object* v_h_435_, lean_object* v_and_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_434_, v_and_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_or_elim___redArg(lean_object* v_t_438_, lean_object* v_or_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_438_, v_or_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_or_elim(lean_object* v_motive_441_, lean_object* v_t_442_, lean_object* v_h_443_, lean_object* v_or_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_442_, v_or_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ifExpr_elim___redArg(lean_object* v_t_446_, lean_object* v_ifExpr_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_446_, v_ifExpr_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ifExpr_elim(lean_object* v_motive_449_, lean_object* v_t_450_, lean_object* v_h_451_, lean_object* v_ifExpr_452_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_450_, v_ifExpr_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_letExpr_elim___redArg(lean_object* v_t_454_, lean_object* v_letExpr_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_454_, v_letExpr_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_letExpr_elim(lean_object* v_motive_457_, lean_object* v_t_458_, lean_object* v_h_459_, lean_object* v_letExpr_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CoreExpr_ctorElim___redArg(v_t_458_, v_letExpr_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(lean_object* v_x_504_, lean_object* v_prec_505_){
_start:
{
switch(lean_obj_tag(v_x_504_))
{
case 0:
{
uint8_t v_value_506_; lean_object* v___y_508_; lean_object* v___x_517_; uint8_t v___x_518_; 
v_value_506_ = lean_ctor_get_uint8(v_x_504_, 0);
lean_dec_ref_known(v_x_504_, 0);
v___x_517_ = lean_unsigned_to_nat(1024u);
v___x_518_ = lean_nat_dec_le(v___x_517_, v_prec_505_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
v___x_519_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_508_ = v___x_519_;
goto v___jp_507_;
}
else
{
lean_object* v___x_520_; 
v___x_520_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_508_ = v___x_520_;
goto v___jp_507_;
}
v___jp_507_:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_509_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__2));
v___x_510_ = lean_unsigned_to_nat(1024u);
v___x_511_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instReprBool3_repr(v_value_506_, v___x_510_);
v___x_512_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_509_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
lean_inc(v___y_508_);
v___x_513_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_513_, 0, v___y_508_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = 0;
v___x_515_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_515_, 0, v___x_513_);
lean_ctor_set_uint8(v___x_515_, sizeof(void*)*1, v___x_514_);
v___x_516_ = l_Repr_addAppParen(v___x_515_, v_prec_505_);
return v___x_516_;
}
}
case 1:
{
lean_object* v_declaration_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_541_; 
v_declaration_521_ = lean_ctor_get(v_x_504_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_541_ == 0)
{
v___x_523_ = v_x_504_;
v_isShared_524_ = v_isSharedCheck_541_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_declaration_521_);
lean_dec(v_x_504_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_541_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___y_526_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(1024u);
v___x_538_ = lean_nat_dec_le(v___x_537_, v_prec_505_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
v___x_539_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_526_ = v___x_539_;
goto v___jp_525_;
}
else
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_526_ = v___x_540_;
goto v___jp_525_;
}
v___jp_525_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_527_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__5));
v___x_528_ = l_Nat_reprFast(v_declaration_521_);
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 3);
lean_ctor_set(v___x_523_, 0, v___x_528_);
v___x_530_ = v___x_523_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v___x_528_);
v___x_530_ = v_reuseFailAlloc_536_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_531_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_527_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
lean_inc(v___y_526_);
v___x_532_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_532_, 0, v___y_526_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = 0;
v___x_534_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set_uint8(v___x_534_, sizeof(void*)*1, v___x_533_);
v___x_535_ = l_Repr_addAppParen(v___x_534_, v_prec_505_);
return v___x_535_;
}
}
}
}
case 2:
{
lean_object* v_body_542_; lean_object* v___x_543_; lean_object* v___y_545_; uint8_t v___x_553_; 
v_body_542_ = lean_ctor_get(v_x_504_, 0);
lean_inc_ref(v_body_542_);
lean_dec_ref_known(v_x_504_, 1);
v___x_543_ = lean_unsigned_to_nat(1024u);
v___x_553_ = lean_nat_dec_le(v___x_543_, v_prec_505_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; 
v___x_554_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_545_ = v___x_554_;
goto v___jp_544_;
}
else
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_545_ = v___x_555_;
goto v___jp_544_;
}
v___jp_544_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_546_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__8));
v___x_547_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_body_542_, v___x_543_);
v___x_548_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_546_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
lean_inc(v___y_545_);
v___x_549_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_549_, 0, v___y_545_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = 0;
v___x_551_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set_uint8(v___x_551_, sizeof(void*)*1, v___x_550_);
v___x_552_ = l_Repr_addAppParen(v___x_551_, v_prec_505_);
return v___x_552_;
}
}
case 3:
{
lean_object* v_left_556_; lean_object* v_right_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_580_; 
v_left_556_ = lean_ctor_get(v_x_504_, 0);
v_right_557_ = lean_ctor_get(v_x_504_, 1);
v_isSharedCheck_580_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_580_ == 0)
{
v___x_559_ = v_x_504_;
v_isShared_560_ = v_isSharedCheck_580_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_right_557_);
lean_inc(v_left_556_);
lean_dec(v_x_504_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_580_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; lean_object* v___y_563_; uint8_t v___x_577_; 
v___x_561_ = lean_unsigned_to_nat(1024u);
v___x_577_ = lean_nat_dec_le(v___x_561_, v_prec_505_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; 
v___x_578_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_563_ = v___x_578_;
goto v___jp_562_;
}
else
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_563_ = v___x_579_;
goto v___jp_562_;
}
v___jp_562_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_568_; 
v___x_564_ = lean_box(1);
v___x_565_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__11));
v___x_566_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_left_556_, v___x_561_);
if (v_isShared_560_ == 0)
{
lean_ctor_set_tag(v___x_559_, 5);
lean_ctor_set(v___x_559_, 1, v___x_566_);
lean_ctor_set(v___x_559_, 0, v___x_565_);
v___x_568_ = v___x_559_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v___x_566_);
v___x_568_ = v_reuseFailAlloc_576_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; uint8_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v___x_564_);
v___x_570_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_right_557_, v___x_561_);
v___x_571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
lean_inc(v___y_563_);
v___x_572_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_572_, 0, v___y_563_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = 0;
v___x_574_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_574_, 0, v___x_572_);
lean_ctor_set_uint8(v___x_574_, sizeof(void*)*1, v___x_573_);
v___x_575_ = l_Repr_addAppParen(v___x_574_, v_prec_505_);
return v___x_575_;
}
}
}
}
case 4:
{
lean_object* v_left_581_; lean_object* v_right_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_605_; 
v_left_581_ = lean_ctor_get(v_x_504_, 0);
v_right_582_ = lean_ctor_get(v_x_504_, 1);
v_isSharedCheck_605_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_605_ == 0)
{
v___x_584_ = v_x_504_;
v_isShared_585_ = v_isSharedCheck_605_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_right_582_);
lean_inc(v_left_581_);
lean_dec(v_x_504_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_605_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_586_; lean_object* v___y_588_; uint8_t v___x_602_; 
v___x_586_ = lean_unsigned_to_nat(1024u);
v___x_602_ = lean_nat_dec_le(v___x_586_, v_prec_505_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
v___x_603_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_588_ = v___x_603_;
goto v___jp_587_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_588_ = v___x_604_;
goto v___jp_587_;
}
v___jp_587_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_589_ = lean_box(1);
v___x_590_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__14));
v___x_591_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_left_581_, v___x_586_);
if (v_isShared_585_ == 0)
{
lean_ctor_set_tag(v___x_584_, 5);
lean_ctor_set(v___x_584_, 1, v___x_591_);
lean_ctor_set(v___x_584_, 0, v___x_590_);
v___x_593_ = v___x_584_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v___x_591_);
v___x_593_ = v_reuseFailAlloc_601_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_594_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
lean_ctor_set(v___x_594_, 1, v___x_589_);
v___x_595_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_right_582_, v___x_586_);
v___x_596_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
lean_inc(v___y_588_);
v___x_597_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_597_, 0, v___y_588_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = 0;
v___x_599_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_599_, 0, v___x_597_);
lean_ctor_set_uint8(v___x_599_, sizeof(void*)*1, v___x_598_);
v___x_600_ = l_Repr_addAppParen(v___x_599_, v_prec_505_);
return v___x_600_;
}
}
}
}
case 5:
{
lean_object* v_condition_606_; lean_object* v_thenExpr_607_; lean_object* v_elseExpr_608_; lean_object* v___x_609_; lean_object* v___y_611_; uint8_t v___x_626_; 
v_condition_606_ = lean_ctor_get(v_x_504_, 0);
lean_inc_ref(v_condition_606_);
v_thenExpr_607_ = lean_ctor_get(v_x_504_, 1);
lean_inc_ref(v_thenExpr_607_);
v_elseExpr_608_ = lean_ctor_get(v_x_504_, 2);
lean_inc_ref(v_elseExpr_608_);
lean_dec_ref_known(v_x_504_, 3);
v___x_609_ = lean_unsigned_to_nat(1024u);
v___x_626_ = lean_nat_dec_le(v___x_609_, v_prec_505_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; 
v___x_627_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_611_ = v___x_627_;
goto v___jp_610_;
}
else
{
lean_object* v___x_628_; 
v___x_628_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_611_ = v___x_628_;
goto v___jp_610_;
}
v___jp_610_:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_612_ = lean_box(1);
v___x_613_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__17));
v___x_614_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_condition_606_, v___x_609_);
v___x_615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_613_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
lean_ctor_set(v___x_616_, 1, v___x_612_);
v___x_617_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_thenExpr_607_, v___x_609_);
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_616_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___x_612_);
v___x_620_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_elseExpr_608_, v___x_609_);
v___x_621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
lean_inc(v___y_611_);
v___x_622_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_622_, 0, v___y_611_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = 0;
v___x_624_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*1, v___x_623_);
v___x_625_ = l_Repr_addAppParen(v___x_624_, v_prec_505_);
return v___x_625_;
}
}
default: 
{
lean_object* v_binder_629_; lean_object* v_value_630_; lean_object* v_body_631_; lean_object* v___x_632_; lean_object* v___y_634_; uint8_t v___x_650_; 
v_binder_629_ = lean_ctor_get(v_x_504_, 0);
lean_inc(v_binder_629_);
v_value_630_ = lean_ctor_get(v_x_504_, 1);
lean_inc_ref(v_value_630_);
v_body_631_ = lean_ctor_get(v_x_504_, 2);
lean_inc_ref(v_body_631_);
lean_dec_ref_known(v_x_504_, 3);
v___x_632_ = lean_unsigned_to_nat(1024u);
v___x_650_ = lean_nat_dec_le(v___x_632_, v_prec_505_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
v___x_651_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_634_ = v___x_651_;
goto v___jp_633_;
}
else
{
lean_object* v___x_652_; 
v___x_652_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_634_ = v___x_652_;
goto v___jp_633_;
}
v___jp_633_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_635_ = lean_box(1);
v___x_636_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___closed__20));
v___x_637_ = l_Nat_reprFast(v_binder_629_);
v___x_638_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
v___x_639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_636_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___x_635_);
v___x_641_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_value_630_, v___x_632_);
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v___x_635_);
v___x_644_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_body_631_, v___x_632_);
v___x_645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
lean_inc(v___y_634_);
v___x_646_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_646_, 0, v___y_634_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = 0;
v___x_648_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set_uint8(v___x_648_, sizeof(void*)*1, v___x_647_);
v___x_649_ = l_Repr_addAppParen(v___x_648_, v_prec_505_);
return v___x_649_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr___boxed(lean_object* v_x_653_, lean_object* v_prec_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr(v_x_653_, v_prec_654_);
lean_dec(v_prec_654_);
return v_res_655_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(lean_object* v_environment_658_, lean_object* v_x_659_){
_start:
{
switch(lean_obj_tag(v_x_659_))
{
case 0:
{
uint8_t v_value_660_; 
lean_dec_ref(v_environment_658_);
v_value_660_ = lean_ctor_get_uint8(v_x_659_, 0);
lean_dec_ref_known(v_x_659_, 0);
return v_value_660_;
}
case 1:
{
lean_object* v_declaration_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v_declaration_661_ = lean_ctor_get(v_x_659_, 0);
lean_inc(v_declaration_661_);
lean_dec_ref_known(v_x_659_, 1);
v___x_662_ = lean_apply_1(v_environment_658_, v_declaration_661_);
v___x_663_ = lean_unbox(v___x_662_);
return v___x_663_;
}
case 2:
{
lean_object* v_body_664_; uint8_t v___x_665_; uint8_t v___x_666_; 
v_body_664_ = lean_ctor_get(v_x_659_, 0);
lean_inc_ref(v_body_664_);
lean_dec_ref_known(v_x_659_, 1);
v___x_665_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_body_664_);
v___x_666_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_not(v___x_665_);
return v___x_666_;
}
case 3:
{
lean_object* v_left_667_; lean_object* v_right_668_; uint8_t v___x_669_; uint8_t v___x_670_; uint8_t v___x_671_; 
v_left_667_ = lean_ctor_get(v_x_659_, 0);
lean_inc_ref(v_left_667_);
v_right_668_ = lean_ctor_get(v_x_659_, 1);
lean_inc_ref(v_right_668_);
lean_dec_ref_known(v_x_659_, 2);
lean_inc_ref(v_environment_658_);
v___x_669_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_left_667_);
v___x_670_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_right_668_);
v___x_671_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_and(v___x_669_, v___x_670_);
return v___x_671_;
}
case 4:
{
lean_object* v_left_672_; lean_object* v_right_673_; uint8_t v___x_674_; uint8_t v___x_675_; uint8_t v___x_676_; 
v_left_672_ = lean_ctor_get(v_x_659_, 0);
lean_inc_ref(v_left_672_);
v_right_673_ = lean_ctor_get(v_x_659_, 1);
lean_inc_ref(v_right_673_);
lean_dec_ref_known(v_x_659_, 2);
lean_inc_ref(v_environment_658_);
v___x_674_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_left_672_);
v___x_675_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_right_673_);
v___x_676_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_or(v___x_674_, v___x_675_);
return v___x_676_;
}
case 5:
{
lean_object* v_left_677_; lean_object* v_right_678_; uint8_t v___x_679_; uint8_t v___x_680_; uint8_t v___x_681_; 
v_left_677_ = lean_ctor_get(v_x_659_, 0);
lean_inc_ref(v_left_677_);
v_right_678_ = lean_ctor_get(v_x_659_, 1);
lean_inc_ref(v_right_678_);
lean_dec_ref_known(v_x_659_, 2);
lean_inc_ref(v_environment_658_);
v___x_679_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_left_677_);
v___x_680_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_right_678_);
v___x_681_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_implies(v___x_679_, v___x_680_);
return v___x_681_;
}
case 6:
{
lean_object* v_condition_682_; lean_object* v_thenExpr_683_; lean_object* v_elseExpr_684_; uint8_t v___x_685_; 
v_condition_682_ = lean_ctor_get(v_x_659_, 0);
lean_inc_ref(v_condition_682_);
v_thenExpr_683_ = lean_ctor_get(v_x_659_, 1);
lean_inc_ref(v_thenExpr_683_);
v_elseExpr_684_ = lean_ctor_get(v_x_659_, 2);
lean_inc_ref(v_elseExpr_684_);
lean_dec_ref_known(v_x_659_, 3);
lean_inc_ref(v_environment_658_);
v___x_685_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_condition_682_);
switch(v___x_685_)
{
case 0:
{
lean_dec_ref(v_elseExpr_684_);
v_x_659_ = v_thenExpr_683_;
goto _start;
}
case 1:
{
lean_dec_ref(v_thenExpr_683_);
v_x_659_ = v_elseExpr_684_;
goto _start;
}
default: 
{
lean_dec_ref(v_elseExpr_684_);
lean_dec_ref(v_thenExpr_683_);
lean_dec_ref(v_environment_658_);
return v___x_685_;
}
}
}
default: 
{
lean_object* v_binder_688_; lean_object* v_value_689_; lean_object* v_body_690_; uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v_binder_688_ = lean_ctor_get(v_x_659_, 0);
lean_inc(v_binder_688_);
v_value_689_ = lean_ctor_get(v_x_659_, 1);
lean_inc_ref(v_value_689_);
v_body_690_ = lean_ctor_get(v_x_659_, 2);
lean_inc_ref(v_body_690_);
lean_dec_ref_known(v_x_659_, 3);
lean_inc_ref(v_environment_658_);
v___x_691_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_658_, v_value_689_);
v___x_692_ = lean_box(v___x_691_);
v___x_693_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind___boxed), 4, 3);
lean_closure_set(v___x_693_, 0, v_environment_658_);
lean_closure_set(v___x_693_, 1, v_binder_688_);
lean_closure_set(v___x_693_, 2, v___x_692_);
v_environment_658_ = v___x_693_;
v_x_659_ = v_body_690_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface___boxed(lean_object* v_environment_695_, lean_object* v_x_696_){
_start:
{
uint8_t v_res_697_; lean_object* v_r_698_; 
v_res_697_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_695_, v_x_696_);
v_r_698_ = lean_box(v_res_697_);
return v_r_698_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(lean_object* v_environment_699_, lean_object* v_x_700_){
_start:
{
switch(lean_obj_tag(v_x_700_))
{
case 0:
{
uint8_t v_value_701_; 
lean_dec_ref(v_environment_699_);
v_value_701_ = lean_ctor_get_uint8(v_x_700_, 0);
lean_dec_ref_known(v_x_700_, 0);
return v_value_701_;
}
case 1:
{
lean_object* v_declaration_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v_declaration_702_ = lean_ctor_get(v_x_700_, 0);
lean_inc(v_declaration_702_);
lean_dec_ref_known(v_x_700_, 1);
v___x_703_ = lean_apply_1(v_environment_699_, v_declaration_702_);
v___x_704_ = lean_unbox(v___x_703_);
return v___x_704_;
}
case 2:
{
lean_object* v_body_705_; uint8_t v___x_706_; uint8_t v___x_707_; 
v_body_705_ = lean_ctor_get(v_x_700_, 0);
lean_inc_ref(v_body_705_);
lean_dec_ref_known(v_x_700_, 1);
v___x_706_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_699_, v_body_705_);
v___x_707_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_not(v___x_706_);
return v___x_707_;
}
case 3:
{
lean_object* v_left_708_; lean_object* v_right_709_; uint8_t v___x_710_; uint8_t v___x_711_; uint8_t v___x_712_; 
v_left_708_ = lean_ctor_get(v_x_700_, 0);
lean_inc_ref(v_left_708_);
v_right_709_ = lean_ctor_get(v_x_700_, 1);
lean_inc_ref(v_right_709_);
lean_dec_ref_known(v_x_700_, 2);
lean_inc_ref(v_environment_699_);
v___x_710_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_699_, v_left_708_);
v___x_711_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_699_, v_right_709_);
v___x_712_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_and(v___x_710_, v___x_711_);
return v___x_712_;
}
case 4:
{
lean_object* v_left_713_; lean_object* v_right_714_; uint8_t v___x_715_; uint8_t v___x_716_; uint8_t v___x_717_; 
v_left_713_ = lean_ctor_get(v_x_700_, 0);
lean_inc_ref(v_left_713_);
v_right_714_ = lean_ctor_get(v_x_700_, 1);
lean_inc_ref(v_right_714_);
lean_dec_ref_known(v_x_700_, 2);
lean_inc_ref(v_environment_699_);
v___x_715_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_699_, v_left_713_);
v___x_716_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_699_, v_right_714_);
v___x_717_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_or(v___x_715_, v___x_716_);
return v___x_717_;
}
case 5:
{
lean_object* v_condition_718_; lean_object* v_thenExpr_719_; lean_object* v_elseExpr_720_; uint8_t v___x_721_; 
v_condition_718_ = lean_ctor_get(v_x_700_, 0);
lean_inc_ref(v_condition_718_);
v_thenExpr_719_ = lean_ctor_get(v_x_700_, 1);
lean_inc_ref(v_thenExpr_719_);
v_elseExpr_720_ = lean_ctor_get(v_x_700_, 2);
lean_inc_ref(v_elseExpr_720_);
lean_dec_ref_known(v_x_700_, 3);
lean_inc_ref(v_environment_699_);
v___x_721_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_699_, v_condition_718_);
switch(v___x_721_)
{
case 0:
{
lean_dec_ref(v_elseExpr_720_);
v_x_700_ = v_thenExpr_719_;
goto _start;
}
case 1:
{
lean_dec_ref(v_thenExpr_719_);
v_x_700_ = v_elseExpr_720_;
goto _start;
}
default: 
{
lean_dec_ref(v_elseExpr_720_);
lean_dec_ref(v_thenExpr_719_);
lean_dec_ref(v_environment_699_);
return v___x_721_;
}
}
}
default: 
{
lean_object* v_binder_724_; lean_object* v_value_725_; lean_object* v_body_726_; uint8_t v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v_binder_724_ = lean_ctor_get(v_x_700_, 0);
lean_inc(v_binder_724_);
v_value_725_ = lean_ctor_get(v_x_700_, 1);
lean_inc_ref(v_value_725_);
v_body_726_ = lean_ctor_get(v_x_700_, 2);
lean_inc_ref(v_body_726_);
lean_dec_ref_known(v_x_700_, 3);
lean_inc_ref(v_environment_699_);
v___x_727_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_699_, v_value_725_);
v___x_728_ = lean_box(v___x_727_);
v___x_729_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind___boxed), 4, 3);
lean_closure_set(v___x_729_, 0, v_environment_699_);
lean_closure_set(v___x_729_, 1, v_binder_724_);
lean_closure_set(v___x_729_, 2, v___x_728_);
v_environment_699_ = v___x_729_;
v_x_700_ = v_body_726_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore___boxed(lean_object* v_environment_731_, lean_object* v_x_732_){
_start:
{
uint8_t v_res_733_; lean_object* v_r_734_; 
v_res_733_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCore(v_environment_731_, v_x_732_);
v_r_734_ = lean_box(v_res_733_);
return v_r_734_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(lean_object* v_x_735_){
_start:
{
switch(lean_obj_tag(v_x_735_))
{
case 0:
{
uint8_t v_value_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
v_value_736_ = lean_ctor_get_uint8(v_x_735_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v_x_735_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_dec(v_x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_742_, 0, v_value_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
case 1:
{
lean_object* v_declaration_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
v_declaration_744_ = lean_ctor_get(v_x_735_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v_x_735_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_declaration_744_);
lean_dec(v_x_735_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_declaration_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
case 2:
{
lean_object* v_body_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_760_; 
v_body_752_ = lean_ctor_get(v_x_735_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_760_ == 0)
{
v___x_754_ = v_x_735_;
v_isShared_755_ = v_isSharedCheck_760_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_body_752_);
lean_dec(v_x_735_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_760_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_756_; lean_object* v___x_758_; 
v___x_756_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_body_752_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 0, v___x_756_);
v___x_758_ = v___x_754_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_756_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
case 3:
{
lean_object* v_left_761_; lean_object* v_right_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_771_; 
v_left_761_ = lean_ctor_get(v_x_735_, 0);
v_right_762_ = lean_ctor_get(v_x_735_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_771_ == 0)
{
v___x_764_ = v_x_735_;
v_isShared_765_ = v_isSharedCheck_771_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_right_762_);
lean_inc(v_left_761_);
lean_dec(v_x_735_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_771_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_766_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_left_761_);
v___x_767_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_right_762_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 1, v___x_767_);
lean_ctor_set(v___x_764_, 0, v___x_766_);
v___x_769_ = v___x_764_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v___x_767_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
case 4:
{
lean_object* v_left_772_; lean_object* v_right_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_782_; 
v_left_772_ = lean_ctor_get(v_x_735_, 0);
v_right_773_ = lean_ctor_get(v_x_735_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_782_ == 0)
{
v___x_775_ = v_x_735_;
v_isShared_776_ = v_isSharedCheck_782_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_right_773_);
lean_inc(v_left_772_);
lean_dec(v_x_735_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_782_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_777_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_left_772_);
v___x_778_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_right_773_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 1, v___x_778_);
lean_ctor_set(v___x_775_, 0, v___x_777_);
v___x_780_ = v___x_775_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_777_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
case 5:
{
lean_object* v_left_783_; lean_object* v_right_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_794_; 
v_left_783_ = lean_ctor_get(v_x_735_, 0);
v_right_784_ = lean_ctor_get(v_x_735_, 1);
v_isSharedCheck_794_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_794_ == 0)
{
v___x_786_ = v_x_735_;
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_right_784_);
lean_inc(v_left_783_);
lean_dec(v_x_735_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_788_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_left_783_);
v___x_789_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
v___x_790_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_right_784_);
if (v_isShared_787_ == 0)
{
lean_ctor_set_tag(v___x_786_, 4);
lean_ctor_set(v___x_786_, 1, v___x_790_);
lean_ctor_set(v___x_786_, 0, v___x_789_);
v___x_792_ = v___x_786_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_789_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
case 6:
{
lean_object* v_condition_795_; lean_object* v_thenExpr_796_; lean_object* v_elseExpr_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_807_; 
v_condition_795_ = lean_ctor_get(v_x_735_, 0);
v_thenExpr_796_ = lean_ctor_get(v_x_735_, 1);
v_elseExpr_797_ = lean_ctor_get(v_x_735_, 2);
v_isSharedCheck_807_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_807_ == 0)
{
v___x_799_ = v_x_735_;
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_elseExpr_797_);
lean_inc(v_thenExpr_796_);
lean_inc(v_condition_795_);
lean_dec(v_x_735_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_801_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_condition_795_);
v___x_802_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_thenExpr_796_);
v___x_803_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_elseExpr_797_);
if (v_isShared_800_ == 0)
{
lean_ctor_set_tag(v___x_799_, 5);
lean_ctor_set(v___x_799_, 2, v___x_803_);
lean_ctor_set(v___x_799_, 1, v___x_802_);
lean_ctor_set(v___x_799_, 0, v___x_801_);
v___x_805_ = v___x_799_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_801_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v___x_802_);
lean_ctor_set(v_reuseFailAlloc_806_, 2, v___x_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
default: 
{
lean_object* v_binder_808_; lean_object* v_value_809_; lean_object* v_body_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_819_; 
v_binder_808_ = lean_ctor_get(v_x_735_, 0);
v_value_809_ = lean_ctor_get(v_x_735_, 1);
v_body_810_ = lean_ctor_get(v_x_735_, 2);
v_isSharedCheck_819_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_819_ == 0)
{
v___x_812_ = v_x_735_;
v_isShared_813_ = v_isSharedCheck_819_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_body_810_);
lean_inc(v_value_809_);
lean_inc(v_binder_808_);
lean_dec(v_x_735_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_819_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_817_; 
v___x_814_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_value_809_);
v___x_815_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_body_810_);
if (v_isShared_813_ == 0)
{
lean_ctor_set_tag(v___x_812_, 6);
lean_ctor_set(v___x_812_, 2, v___x_815_);
lean_ctor_set(v___x_812_, 1, v___x_814_);
v___x_817_ = v___x_812_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_binder_808_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_818_, 2, v___x_815_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr_match__1_splitter___redArg(lean_object* v_x_820_, lean_object* v_h__1_821_, lean_object* v_h__2_822_, lean_object* v_h__3_823_, lean_object* v_h__4_824_, lean_object* v_h__5_825_, lean_object* v_h__6_826_, lean_object* v_h__7_827_, lean_object* v_h__8_828_){
_start:
{
switch(lean_obj_tag(v_x_820_))
{
case 0:
{
uint8_t v_value_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec(v_h__8_828_);
lean_dec(v_h__7_827_);
lean_dec(v_h__6_826_);
lean_dec(v_h__5_825_);
lean_dec(v_h__4_824_);
lean_dec(v_h__3_823_);
lean_dec(v_h__2_822_);
v_value_829_ = lean_ctor_get_uint8(v_x_820_, 0);
lean_dec_ref_known(v_x_820_, 0);
v___x_830_ = lean_box(v_value_829_);
v___x_831_ = lean_apply_1(v_h__1_821_, v___x_830_);
return v___x_831_;
}
case 1:
{
lean_object* v_declaration_832_; lean_object* v___x_833_; 
lean_dec(v_h__8_828_);
lean_dec(v_h__7_827_);
lean_dec(v_h__6_826_);
lean_dec(v_h__5_825_);
lean_dec(v_h__4_824_);
lean_dec(v_h__3_823_);
lean_dec(v_h__1_821_);
v_declaration_832_ = lean_ctor_get(v_x_820_, 0);
lean_inc(v_declaration_832_);
lean_dec_ref_known(v_x_820_, 1);
v___x_833_ = lean_apply_1(v_h__2_822_, v_declaration_832_);
return v___x_833_;
}
case 2:
{
lean_object* v_body_834_; lean_object* v___x_835_; 
lean_dec(v_h__8_828_);
lean_dec(v_h__7_827_);
lean_dec(v_h__6_826_);
lean_dec(v_h__5_825_);
lean_dec(v_h__4_824_);
lean_dec(v_h__2_822_);
lean_dec(v_h__1_821_);
v_body_834_ = lean_ctor_get(v_x_820_, 0);
lean_inc_ref(v_body_834_);
lean_dec_ref_known(v_x_820_, 1);
v___x_835_ = lean_apply_1(v_h__3_823_, v_body_834_);
return v___x_835_;
}
case 3:
{
lean_object* v_left_836_; lean_object* v_right_837_; lean_object* v___x_838_; 
lean_dec(v_h__8_828_);
lean_dec(v_h__7_827_);
lean_dec(v_h__6_826_);
lean_dec(v_h__5_825_);
lean_dec(v_h__3_823_);
lean_dec(v_h__2_822_);
lean_dec(v_h__1_821_);
v_left_836_ = lean_ctor_get(v_x_820_, 0);
lean_inc_ref(v_left_836_);
v_right_837_ = lean_ctor_get(v_x_820_, 1);
lean_inc_ref(v_right_837_);
lean_dec_ref_known(v_x_820_, 2);
v___x_838_ = lean_apply_2(v_h__4_824_, v_left_836_, v_right_837_);
return v___x_838_;
}
case 4:
{
lean_object* v_left_839_; lean_object* v_right_840_; lean_object* v___x_841_; 
lean_dec(v_h__8_828_);
lean_dec(v_h__7_827_);
lean_dec(v_h__6_826_);
lean_dec(v_h__4_824_);
lean_dec(v_h__3_823_);
lean_dec(v_h__2_822_);
lean_dec(v_h__1_821_);
v_left_839_ = lean_ctor_get(v_x_820_, 0);
lean_inc_ref(v_left_839_);
v_right_840_ = lean_ctor_get(v_x_820_, 1);
lean_inc_ref(v_right_840_);
lean_dec_ref_known(v_x_820_, 2);
v___x_841_ = lean_apply_2(v_h__5_825_, v_left_839_, v_right_840_);
return v___x_841_;
}
case 5:
{
lean_object* v_left_842_; lean_object* v_right_843_; lean_object* v___x_844_; 
lean_dec(v_h__8_828_);
lean_dec(v_h__7_827_);
lean_dec(v_h__5_825_);
lean_dec(v_h__4_824_);
lean_dec(v_h__3_823_);
lean_dec(v_h__2_822_);
lean_dec(v_h__1_821_);
v_left_842_ = lean_ctor_get(v_x_820_, 0);
lean_inc_ref(v_left_842_);
v_right_843_ = lean_ctor_get(v_x_820_, 1);
lean_inc_ref(v_right_843_);
lean_dec_ref_known(v_x_820_, 2);
v___x_844_ = lean_apply_2(v_h__6_826_, v_left_842_, v_right_843_);
return v___x_844_;
}
case 6:
{
lean_object* v_condition_845_; lean_object* v_thenExpr_846_; lean_object* v_elseExpr_847_; lean_object* v___x_848_; 
lean_dec(v_h__8_828_);
lean_dec(v_h__6_826_);
lean_dec(v_h__5_825_);
lean_dec(v_h__4_824_);
lean_dec(v_h__3_823_);
lean_dec(v_h__2_822_);
lean_dec(v_h__1_821_);
v_condition_845_ = lean_ctor_get(v_x_820_, 0);
lean_inc_ref(v_condition_845_);
v_thenExpr_846_ = lean_ctor_get(v_x_820_, 1);
lean_inc_ref(v_thenExpr_846_);
v_elseExpr_847_ = lean_ctor_get(v_x_820_, 2);
lean_inc_ref(v_elseExpr_847_);
lean_dec_ref_known(v_x_820_, 3);
v___x_848_ = lean_apply_3(v_h__7_827_, v_condition_845_, v_thenExpr_846_, v_elseExpr_847_);
return v___x_848_;
}
default: 
{
lean_object* v_binder_849_; lean_object* v_value_850_; lean_object* v_body_851_; lean_object* v___x_852_; 
lean_dec(v_h__7_827_);
lean_dec(v_h__6_826_);
lean_dec(v_h__5_825_);
lean_dec(v_h__4_824_);
lean_dec(v_h__3_823_);
lean_dec(v_h__2_822_);
lean_dec(v_h__1_821_);
v_binder_849_ = lean_ctor_get(v_x_820_, 0);
lean_inc(v_binder_849_);
v_value_850_ = lean_ctor_get(v_x_820_, 1);
lean_inc_ref(v_value_850_);
v_body_851_ = lean_ctor_get(v_x_820_, 2);
lean_inc_ref(v_body_851_);
lean_dec_ref_known(v_x_820_, 3);
v___x_852_ = lean_apply_3(v_h__8_828_, v_binder_849_, v_value_850_, v_body_851_);
return v___x_852_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr_match__1_splitter(lean_object* v_motive_853_, lean_object* v_x_854_, lean_object* v_h__1_855_, lean_object* v_h__2_856_, lean_object* v_h__3_857_, lean_object* v_h__4_858_, lean_object* v_h__5_859_, lean_object* v_h__6_860_, lean_object* v_h__7_861_, lean_object* v_h__8_862_){
_start:
{
switch(lean_obj_tag(v_x_854_))
{
case 0:
{
uint8_t v_value_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
lean_dec(v_h__8_862_);
lean_dec(v_h__7_861_);
lean_dec(v_h__6_860_);
lean_dec(v_h__5_859_);
lean_dec(v_h__4_858_);
lean_dec(v_h__3_857_);
lean_dec(v_h__2_856_);
v_value_863_ = lean_ctor_get_uint8(v_x_854_, 0);
lean_dec_ref_known(v_x_854_, 0);
v___x_864_ = lean_box(v_value_863_);
v___x_865_ = lean_apply_1(v_h__1_855_, v___x_864_);
return v___x_865_;
}
case 1:
{
lean_object* v_declaration_866_; lean_object* v___x_867_; 
lean_dec(v_h__8_862_);
lean_dec(v_h__7_861_);
lean_dec(v_h__6_860_);
lean_dec(v_h__5_859_);
lean_dec(v_h__4_858_);
lean_dec(v_h__3_857_);
lean_dec(v_h__1_855_);
v_declaration_866_ = lean_ctor_get(v_x_854_, 0);
lean_inc(v_declaration_866_);
lean_dec_ref_known(v_x_854_, 1);
v___x_867_ = lean_apply_1(v_h__2_856_, v_declaration_866_);
return v___x_867_;
}
case 2:
{
lean_object* v_body_868_; lean_object* v___x_869_; 
lean_dec(v_h__8_862_);
lean_dec(v_h__7_861_);
lean_dec(v_h__6_860_);
lean_dec(v_h__5_859_);
lean_dec(v_h__4_858_);
lean_dec(v_h__2_856_);
lean_dec(v_h__1_855_);
v_body_868_ = lean_ctor_get(v_x_854_, 0);
lean_inc_ref(v_body_868_);
lean_dec_ref_known(v_x_854_, 1);
v___x_869_ = lean_apply_1(v_h__3_857_, v_body_868_);
return v___x_869_;
}
case 3:
{
lean_object* v_left_870_; lean_object* v_right_871_; lean_object* v___x_872_; 
lean_dec(v_h__8_862_);
lean_dec(v_h__7_861_);
lean_dec(v_h__6_860_);
lean_dec(v_h__5_859_);
lean_dec(v_h__3_857_);
lean_dec(v_h__2_856_);
lean_dec(v_h__1_855_);
v_left_870_ = lean_ctor_get(v_x_854_, 0);
lean_inc_ref(v_left_870_);
v_right_871_ = lean_ctor_get(v_x_854_, 1);
lean_inc_ref(v_right_871_);
lean_dec_ref_known(v_x_854_, 2);
v___x_872_ = lean_apply_2(v_h__4_858_, v_left_870_, v_right_871_);
return v___x_872_;
}
case 4:
{
lean_object* v_left_873_; lean_object* v_right_874_; lean_object* v___x_875_; 
lean_dec(v_h__8_862_);
lean_dec(v_h__7_861_);
lean_dec(v_h__6_860_);
lean_dec(v_h__4_858_);
lean_dec(v_h__3_857_);
lean_dec(v_h__2_856_);
lean_dec(v_h__1_855_);
v_left_873_ = lean_ctor_get(v_x_854_, 0);
lean_inc_ref(v_left_873_);
v_right_874_ = lean_ctor_get(v_x_854_, 1);
lean_inc_ref(v_right_874_);
lean_dec_ref_known(v_x_854_, 2);
v___x_875_ = lean_apply_2(v_h__5_859_, v_left_873_, v_right_874_);
return v___x_875_;
}
case 5:
{
lean_object* v_left_876_; lean_object* v_right_877_; lean_object* v___x_878_; 
lean_dec(v_h__8_862_);
lean_dec(v_h__7_861_);
lean_dec(v_h__5_859_);
lean_dec(v_h__4_858_);
lean_dec(v_h__3_857_);
lean_dec(v_h__2_856_);
lean_dec(v_h__1_855_);
v_left_876_ = lean_ctor_get(v_x_854_, 0);
lean_inc_ref(v_left_876_);
v_right_877_ = lean_ctor_get(v_x_854_, 1);
lean_inc_ref(v_right_877_);
lean_dec_ref_known(v_x_854_, 2);
v___x_878_ = lean_apply_2(v_h__6_860_, v_left_876_, v_right_877_);
return v___x_878_;
}
case 6:
{
lean_object* v_condition_879_; lean_object* v_thenExpr_880_; lean_object* v_elseExpr_881_; lean_object* v___x_882_; 
lean_dec(v_h__8_862_);
lean_dec(v_h__6_860_);
lean_dec(v_h__5_859_);
lean_dec(v_h__4_858_);
lean_dec(v_h__3_857_);
lean_dec(v_h__2_856_);
lean_dec(v_h__1_855_);
v_condition_879_ = lean_ctor_get(v_x_854_, 0);
lean_inc_ref(v_condition_879_);
v_thenExpr_880_ = lean_ctor_get(v_x_854_, 1);
lean_inc_ref(v_thenExpr_880_);
v_elseExpr_881_ = lean_ctor_get(v_x_854_, 2);
lean_inc_ref(v_elseExpr_881_);
lean_dec_ref_known(v_x_854_, 3);
v___x_882_ = lean_apply_3(v_h__7_861_, v_condition_879_, v_thenExpr_880_, v_elseExpr_881_);
return v___x_882_;
}
default: 
{
lean_object* v_binder_883_; lean_object* v_value_884_; lean_object* v_body_885_; lean_object* v___x_886_; 
lean_dec(v_h__7_861_);
lean_dec(v_h__6_860_);
lean_dec(v_h__5_859_);
lean_dec(v_h__4_858_);
lean_dec(v_h__3_857_);
lean_dec(v_h__2_856_);
lean_dec(v_h__1_855_);
v_binder_883_ = lean_ctor_get(v_x_854_, 0);
lean_inc(v_binder_883_);
v_value_884_ = lean_ctor_get(v_x_854_, 1);
lean_inc_ref(v_value_884_);
v_body_885_ = lean_ctor_get(v_x_854_, 2);
lean_inc_ref(v_body_885_);
lean_dec_ref_known(v_x_854_, 3);
v___x_886_ = lean_apply_3(v_h__8_862_, v_binder_883_, v_value_884_, v_body_885_);
return v___x_886_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr_match__1_splitter___redArg(lean_object* v_x_887_, lean_object* v_h__1_888_, lean_object* v_h__2_889_, lean_object* v_h__3_890_, lean_object* v_h__4_891_, lean_object* v_h__5_892_, lean_object* v_h__6_893_, lean_object* v_h__7_894_){
_start:
{
switch(lean_obj_tag(v_x_887_))
{
case 0:
{
uint8_t v_value_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec(v_h__7_894_);
lean_dec(v_h__6_893_);
lean_dec(v_h__5_892_);
lean_dec(v_h__4_891_);
lean_dec(v_h__3_890_);
lean_dec(v_h__2_889_);
v_value_895_ = lean_ctor_get_uint8(v_x_887_, 0);
lean_dec_ref_known(v_x_887_, 0);
v___x_896_ = lean_box(v_value_895_);
v___x_897_ = lean_apply_1(v_h__1_888_, v___x_896_);
return v___x_897_;
}
case 1:
{
lean_object* v_declaration_898_; lean_object* v___x_899_; 
lean_dec(v_h__7_894_);
lean_dec(v_h__6_893_);
lean_dec(v_h__5_892_);
lean_dec(v_h__4_891_);
lean_dec(v_h__3_890_);
lean_dec(v_h__1_888_);
v_declaration_898_ = lean_ctor_get(v_x_887_, 0);
lean_inc(v_declaration_898_);
lean_dec_ref_known(v_x_887_, 1);
v___x_899_ = lean_apply_1(v_h__2_889_, v_declaration_898_);
return v___x_899_;
}
case 2:
{
lean_object* v_body_900_; lean_object* v___x_901_; 
lean_dec(v_h__7_894_);
lean_dec(v_h__6_893_);
lean_dec(v_h__5_892_);
lean_dec(v_h__4_891_);
lean_dec(v_h__2_889_);
lean_dec(v_h__1_888_);
v_body_900_ = lean_ctor_get(v_x_887_, 0);
lean_inc_ref(v_body_900_);
lean_dec_ref_known(v_x_887_, 1);
v___x_901_ = lean_apply_1(v_h__3_890_, v_body_900_);
return v___x_901_;
}
case 3:
{
lean_object* v_left_902_; lean_object* v_right_903_; lean_object* v___x_904_; 
lean_dec(v_h__7_894_);
lean_dec(v_h__6_893_);
lean_dec(v_h__5_892_);
lean_dec(v_h__3_890_);
lean_dec(v_h__2_889_);
lean_dec(v_h__1_888_);
v_left_902_ = lean_ctor_get(v_x_887_, 0);
lean_inc_ref(v_left_902_);
v_right_903_ = lean_ctor_get(v_x_887_, 1);
lean_inc_ref(v_right_903_);
lean_dec_ref_known(v_x_887_, 2);
v___x_904_ = lean_apply_2(v_h__4_891_, v_left_902_, v_right_903_);
return v___x_904_;
}
case 4:
{
lean_object* v_left_905_; lean_object* v_right_906_; lean_object* v___x_907_; 
lean_dec(v_h__7_894_);
lean_dec(v_h__6_893_);
lean_dec(v_h__4_891_);
lean_dec(v_h__3_890_);
lean_dec(v_h__2_889_);
lean_dec(v_h__1_888_);
v_left_905_ = lean_ctor_get(v_x_887_, 0);
lean_inc_ref(v_left_905_);
v_right_906_ = lean_ctor_get(v_x_887_, 1);
lean_inc_ref(v_right_906_);
lean_dec_ref_known(v_x_887_, 2);
v___x_907_ = lean_apply_2(v_h__5_892_, v_left_905_, v_right_906_);
return v___x_907_;
}
case 5:
{
lean_object* v_condition_908_; lean_object* v_thenExpr_909_; lean_object* v_elseExpr_910_; lean_object* v___x_911_; 
lean_dec(v_h__7_894_);
lean_dec(v_h__5_892_);
lean_dec(v_h__4_891_);
lean_dec(v_h__3_890_);
lean_dec(v_h__2_889_);
lean_dec(v_h__1_888_);
v_condition_908_ = lean_ctor_get(v_x_887_, 0);
lean_inc_ref(v_condition_908_);
v_thenExpr_909_ = lean_ctor_get(v_x_887_, 1);
lean_inc_ref(v_thenExpr_909_);
v_elseExpr_910_ = lean_ctor_get(v_x_887_, 2);
lean_inc_ref(v_elseExpr_910_);
lean_dec_ref_known(v_x_887_, 3);
v___x_911_ = lean_apply_3(v_h__6_893_, v_condition_908_, v_thenExpr_909_, v_elseExpr_910_);
return v___x_911_;
}
default: 
{
lean_object* v_binder_912_; lean_object* v_value_913_; lean_object* v_body_914_; lean_object* v___x_915_; 
lean_dec(v_h__6_893_);
lean_dec(v_h__5_892_);
lean_dec(v_h__4_891_);
lean_dec(v_h__3_890_);
lean_dec(v_h__2_889_);
lean_dec(v_h__1_888_);
v_binder_912_ = lean_ctor_get(v_x_887_, 0);
lean_inc(v_binder_912_);
v_value_913_ = lean_ctor_get(v_x_887_, 1);
lean_inc_ref(v_value_913_);
v_body_914_ = lean_ctor_get(v_x_887_, 2);
lean_inc_ref(v_body_914_);
lean_dec_ref_known(v_x_887_, 3);
v___x_915_ = lean_apply_3(v_h__7_894_, v_binder_912_, v_value_913_, v_body_914_);
return v___x_915_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCoreExpr_repr_match__1_splitter(lean_object* v_motive_916_, lean_object* v_x_917_, lean_object* v_h__1_918_, lean_object* v_h__2_919_, lean_object* v_h__3_920_, lean_object* v_h__4_921_, lean_object* v_h__5_922_, lean_object* v_h__6_923_, lean_object* v_h__7_924_){
_start:
{
switch(lean_obj_tag(v_x_917_))
{
case 0:
{
uint8_t v_value_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
v_value_925_ = lean_ctor_get_uint8(v_x_917_, 0);
lean_dec_ref_known(v_x_917_, 0);
v___x_926_ = lean_box(v_value_925_);
v___x_927_ = lean_apply_1(v_h__1_918_, v___x_926_);
return v___x_927_;
}
case 1:
{
lean_object* v_declaration_928_; lean_object* v___x_929_; 
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__1_918_);
v_declaration_928_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_declaration_928_);
lean_dec_ref_known(v_x_917_, 1);
v___x_929_ = lean_apply_1(v_h__2_919_, v_declaration_928_);
return v___x_929_;
}
case 2:
{
lean_object* v_body_930_; lean_object* v___x_931_; 
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_body_930_ = lean_ctor_get(v_x_917_, 0);
lean_inc_ref(v_body_930_);
lean_dec_ref_known(v_x_917_, 1);
v___x_931_ = lean_apply_1(v_h__3_920_, v_body_930_);
return v___x_931_;
}
case 3:
{
lean_object* v_left_932_; lean_object* v_right_933_; lean_object* v___x_934_; 
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_left_932_ = lean_ctor_get(v_x_917_, 0);
lean_inc_ref(v_left_932_);
v_right_933_ = lean_ctor_get(v_x_917_, 1);
lean_inc_ref(v_right_933_);
lean_dec_ref_known(v_x_917_, 2);
v___x_934_ = lean_apply_2(v_h__4_921_, v_left_932_, v_right_933_);
return v___x_934_;
}
case 4:
{
lean_object* v_left_935_; lean_object* v_right_936_; lean_object* v___x_937_; 
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_left_935_ = lean_ctor_get(v_x_917_, 0);
lean_inc_ref(v_left_935_);
v_right_936_ = lean_ctor_get(v_x_917_, 1);
lean_inc_ref(v_right_936_);
lean_dec_ref_known(v_x_917_, 2);
v___x_937_ = lean_apply_2(v_h__5_922_, v_left_935_, v_right_936_);
return v___x_937_;
}
case 5:
{
lean_object* v_condition_938_; lean_object* v_thenExpr_939_; lean_object* v_elseExpr_940_; lean_object* v___x_941_; 
lean_dec(v_h__7_924_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_condition_938_ = lean_ctor_get(v_x_917_, 0);
lean_inc_ref(v_condition_938_);
v_thenExpr_939_ = lean_ctor_get(v_x_917_, 1);
lean_inc_ref(v_thenExpr_939_);
v_elseExpr_940_ = lean_ctor_get(v_x_917_, 2);
lean_inc_ref(v_elseExpr_940_);
lean_dec_ref_known(v_x_917_, 3);
v___x_941_ = lean_apply_3(v_h__6_923_, v_condition_938_, v_thenExpr_939_, v_elseExpr_940_);
return v___x_941_;
}
default: 
{
lean_object* v_binder_942_; lean_object* v_value_943_; lean_object* v_body_944_; lean_object* v___x_945_; 
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_binder_942_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_binder_942_);
v_value_943_ = lean_ctor_get(v_x_917_, 1);
lean_inc_ref(v_value_943_);
v_body_944_ = lean_ctor_get(v_x_917_, 2);
lean_inc_ref(v_body_944_);
lean_dec_ref_known(v_x_917_, 3);
v___x_945_ = lean_apply_3(v_h__7_924_, v_binder_942_, v_value_943_, v_body_944_);
return v___x_945_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(lean_object* v_x_949_){
_start:
{
switch(lean_obj_tag(v_x_949_))
{
case 0:
{
uint8_t v_value_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_958_; 
v_value_950_ = lean_ctor_get_uint8(v_x_949_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v_x_949_);
if (v_isSharedCheck_958_ == 0)
{
v___x_952_ = v_x_949_;
v_isShared_953_ = v_isSharedCheck_958_;
goto v_resetjp_951_;
}
else
{
lean_dec(v_x_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_958_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_957_, 0, v_value_950_);
v___x_955_ = v_reuseFailAlloc_957_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_956_; 
v___x_956_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
}
case 1:
{
lean_object* v_declaration_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v_declaration_959_ = lean_ctor_get(v_x_949_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v_x_949_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v_x_949_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_declaration_959_);
lean_dec(v_x_949_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
lean_ctor_set_tag(v___x_961_, 0);
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_declaration_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
case 2:
{
lean_object* v_body_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v_body_967_ = lean_ctor_get(v_x_949_, 0);
lean_inc_ref(v_body_967_);
lean_dec_ref_known(v_x_949_, 1);
v___x_968_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__0));
v___x_969_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_body_967_);
v___x_970_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
return v___x_970_;
}
case 3:
{
lean_object* v_left_971_; lean_object* v_right_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_left_971_ = lean_ctor_get(v_x_949_, 0);
lean_inc_ref(v_left_971_);
v_right_972_ = lean_ctor_get(v_x_949_, 1);
lean_inc_ref(v_right_972_);
lean_dec_ref_known(v_x_949_, 2);
v___x_973_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__1));
v___x_974_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_left_971_);
v___x_975_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_right_972_);
v___x_976_ = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(v___x_976_, 0, v___x_973_);
lean_ctor_set(v___x_976_, 1, v___x_974_);
lean_ctor_set(v___x_976_, 2, v___x_975_);
return v___x_976_;
}
case 4:
{
lean_object* v_left_977_; lean_object* v_right_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v_left_977_ = lean_ctor_get(v_x_949_, 0);
lean_inc_ref(v_left_977_);
v_right_978_ = lean_ctor_get(v_x_949_, 1);
lean_inc_ref(v_right_978_);
lean_dec_ref_known(v_x_949_, 2);
v___x_979_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__2));
v___x_980_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_left_977_);
v___x_981_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_right_978_);
v___x_982_ = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(v___x_982_, 0, v___x_979_);
lean_ctor_set(v___x_982_, 1, v___x_980_);
lean_ctor_set(v___x_982_, 2, v___x_981_);
return v___x_982_;
}
case 5:
{
lean_object* v_condition_983_; lean_object* v_thenExpr_984_; lean_object* v_elseExpr_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_995_; 
v_condition_983_ = lean_ctor_get(v_x_949_, 0);
v_thenExpr_984_ = lean_ctor_get(v_x_949_, 1);
v_elseExpr_985_ = lean_ctor_get(v_x_949_, 2);
v_isSharedCheck_995_ = !lean_is_exclusive(v_x_949_);
if (v_isSharedCheck_995_ == 0)
{
v___x_987_ = v_x_949_;
v_isShared_988_ = v_isSharedCheck_995_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_elseExpr_985_);
lean_inc(v_thenExpr_984_);
lean_inc(v_condition_983_);
lean_dec(v_x_949_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_995_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_993_; 
v___x_989_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_condition_983_);
v___x_990_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_thenExpr_984_);
v___x_991_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_elseExpr_985_);
if (v_isShared_988_ == 0)
{
lean_ctor_set_tag(v___x_987_, 6);
lean_ctor_set(v___x_987_, 2, v___x_991_);
lean_ctor_set(v___x_987_, 1, v___x_990_);
lean_ctor_set(v___x_987_, 0, v___x_989_);
v___x_993_ = v___x_987_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_994_, 2, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
default: 
{
lean_object* v_binder_996_; lean_object* v_value_997_; lean_object* v_body_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1007_; 
v_binder_996_ = lean_ctor_get(v_x_949_, 0);
v_value_997_ = lean_ctor_get(v_x_949_, 1);
v_body_998_ = lean_ctor_get(v_x_949_, 2);
v_isSharedCheck_1007_ = !lean_is_exclusive(v_x_949_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1000_ = v_x_949_;
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_body_998_);
lean_inc(v_value_997_);
lean_inc(v_binder_996_);
lean_dec(v_x_949_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1002_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_value_997_);
v___x_1003_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore(v_body_998_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set_tag(v___x_1000_, 5);
lean_ctor_set(v___x_1000_, 2, v___x_1003_);
lean_ctor_set(v___x_1000_, 1, v___x_1002_);
v___x_1005_ = v___x_1000_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_binder_996_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1006_, 2, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(lean_object* v_environment_1008_, lean_object* v_x_1009_){
_start:
{
switch(lean_obj_tag(v_x_1009_))
{
case 0:
{
lean_object* v_declarationId_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v_declarationId_1010_ = lean_ctor_get(v_x_1009_, 0);
lean_inc(v_declarationId_1010_);
lean_dec_ref_known(v_x_1009_, 1);
v___x_1011_ = lean_apply_1(v_environment_1008_, v_declarationId_1010_);
v___x_1012_ = lean_unbox(v___x_1011_);
return v___x_1012_;
}
case 3:
{
lean_object* v_value_1013_; 
lean_dec_ref(v_environment_1008_);
v_value_1013_ = lean_ctor_get(v_x_1009_, 0);
lean_inc_ref(v_value_1013_);
lean_dec_ref_known(v_x_1009_, 1);
if (lean_obj_tag(v_value_1013_) == 0)
{
uint8_t v_b_1014_; 
v_b_1014_ = lean_ctor_get_uint8(v_value_1013_, 0);
lean_dec_ref_known(v_value_1013_, 0);
return v_b_1014_;
}
else
{
uint8_t v___x_1015_; 
lean_dec_ref(v_value_1013_);
v___x_1015_ = 2;
return v___x_1015_;
}
}
case 11:
{
lean_object* v_operator_1016_; lean_object* v_operand_1017_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v_operator_1016_ = lean_ctor_get(v_x_1009_, 0);
lean_inc_ref(v_operator_1016_);
v_operand_1017_ = lean_ctor_get(v_x_1009_, 1);
lean_inc_ref(v_operand_1017_);
lean_dec_ref_known(v_x_1009_, 2);
v___x_1018_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__0));
v___x_1019_ = lean_string_dec_eq(v_operator_1016_, v___x_1018_);
lean_dec_ref(v_operator_1016_);
if (v___x_1019_ == 0)
{
uint8_t v___x_1020_; 
lean_dec_ref(v_operand_1017_);
lean_dec_ref(v_environment_1008_);
v___x_1020_ = 2;
return v___x_1020_;
}
else
{
uint8_t v___x_1021_; uint8_t v___x_1022_; 
v___x_1021_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1008_, v_operand_1017_);
v___x_1022_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_not(v___x_1021_);
return v___x_1022_;
}
}
case 12:
{
lean_object* v_operator_1023_; lean_object* v_left_1024_; lean_object* v_right_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; 
v_operator_1023_ = lean_ctor_get(v_x_1009_, 0);
lean_inc_ref(v_operator_1023_);
v_left_1024_ = lean_ctor_get(v_x_1009_, 1);
lean_inc_ref(v_left_1024_);
v_right_1025_ = lean_ctor_get(v_x_1009_, 2);
lean_inc_ref(v_right_1025_);
lean_dec_ref_known(v_x_1009_, 3);
v___x_1026_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__1));
v___x_1027_ = lean_string_dec_eq(v_operator_1023_, v___x_1026_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___x_1028_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__2));
v___x_1029_ = lean_string_dec_eq(v_operator_1023_, v___x_1028_);
lean_dec_ref(v_operator_1023_);
if (v___x_1029_ == 0)
{
uint8_t v___x_1030_; 
lean_dec_ref(v_right_1025_);
lean_dec_ref(v_left_1024_);
lean_dec_ref(v_environment_1008_);
v___x_1030_ = 2;
return v___x_1030_;
}
else
{
uint8_t v___x_1031_; uint8_t v___x_1032_; uint8_t v___x_1033_; 
lean_inc_ref(v_environment_1008_);
v___x_1031_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1008_, v_left_1024_);
v___x_1032_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1008_, v_right_1025_);
v___x_1033_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_or(v___x_1031_, v___x_1032_);
return v___x_1033_;
}
}
else
{
uint8_t v___x_1034_; uint8_t v___x_1035_; uint8_t v___x_1036_; 
lean_dec_ref(v_operator_1023_);
lean_inc_ref(v_environment_1008_);
v___x_1034_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1008_, v_left_1024_);
v___x_1035_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1008_, v_right_1025_);
v___x_1036_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_and(v___x_1034_, v___x_1035_);
return v___x_1036_;
}
}
case 6:
{
lean_object* v_condition_1037_; lean_object* v_thenExpr_1038_; lean_object* v_elseExpr_1039_; uint8_t v___x_1040_; 
v_condition_1037_ = lean_ctor_get(v_x_1009_, 0);
lean_inc_ref(v_condition_1037_);
v_thenExpr_1038_ = lean_ctor_get(v_x_1009_, 1);
lean_inc_ref(v_thenExpr_1038_);
v_elseExpr_1039_ = lean_ctor_get(v_x_1009_, 2);
lean_inc_ref(v_elseExpr_1039_);
lean_dec_ref_known(v_x_1009_, 3);
lean_inc_ref(v_environment_1008_);
v___x_1040_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1008_, v_condition_1037_);
switch(v___x_1040_)
{
case 0:
{
lean_dec_ref(v_elseExpr_1039_);
v_x_1009_ = v_thenExpr_1038_;
goto _start;
}
case 1:
{
lean_dec_ref(v_thenExpr_1038_);
v_x_1009_ = v_elseExpr_1039_;
goto _start;
}
default: 
{
lean_dec_ref(v_elseExpr_1039_);
lean_dec_ref(v_thenExpr_1038_);
lean_dec_ref(v_environment_1008_);
return v___x_1040_;
}
}
}
case 5:
{
lean_object* v_binderId_1043_; lean_object* v_value_1044_; lean_object* v_body_1045_; uint8_t v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_binderId_1043_ = lean_ctor_get(v_x_1009_, 0);
lean_inc(v_binderId_1043_);
v_value_1044_ = lean_ctor_get(v_x_1009_, 1);
lean_inc_ref(v_value_1044_);
v_body_1045_ = lean_ctor_get(v_x_1009_, 2);
lean_inc_ref(v_body_1045_);
lean_dec_ref_known(v_x_1009_, 3);
lean_inc_ref(v_environment_1008_);
v___x_1046_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1008_, v_value_1044_);
v___x_1047_ = lean_box(v___x_1046_);
v___x_1048_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind___boxed), 4, 3);
lean_closure_set(v___x_1048_, 0, v_environment_1008_);
lean_closure_set(v___x_1048_, 1, v_binderId_1043_);
lean_closure_set(v___x_1048_, 2, v___x_1047_);
v_environment_1008_ = v___x_1048_;
v_x_1009_ = v_body_1045_;
goto _start;
}
default: 
{
uint8_t v___x_1050_; 
lean_dec_ref(v_x_1009_);
lean_dec_ref(v_environment_1008_);
v___x_1050_ = 2;
return v___x_1050_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ___boxed(lean_object* v_environment_1051_, lean_object* v_x_1052_){
_start:
{
uint8_t v_res_1053_; lean_object* v_r_1054_; 
v_res_1053_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalQ(v_environment_1051_, v_x_1052_);
v_r_1054_ = lean_box(v_res_1053_);
return v_r_1054_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_evalQ_match__1_splitter___redArg(lean_object* v_x_1055_, lean_object* v_h__1_1056_, lean_object* v_h__2_1057_, lean_object* v_h__3_1058_, lean_object* v_h__4_1059_, lean_object* v_h__5_1060_, lean_object* v_h__6_1061_, lean_object* v_h__7_1062_){
_start:
{
switch(lean_obj_tag(v_x_1055_))
{
case 0:
{
lean_object* v_declarationId_1063_; lean_object* v___x_1064_; 
lean_dec(v_h__7_1062_);
lean_dec(v_h__6_1061_);
lean_dec(v_h__5_1060_);
lean_dec(v_h__4_1059_);
lean_dec(v_h__3_1058_);
lean_dec(v_h__2_1057_);
v_declarationId_1063_ = lean_ctor_get(v_x_1055_, 0);
lean_inc(v_declarationId_1063_);
lean_dec_ref_known(v_x_1055_, 1);
v___x_1064_ = lean_apply_1(v_h__1_1056_, v_declarationId_1063_);
return v___x_1064_;
}
case 3:
{
lean_object* v_value_1065_; 
lean_dec(v_h__6_1061_);
lean_dec(v_h__5_1060_);
lean_dec(v_h__4_1059_);
lean_dec(v_h__3_1058_);
lean_dec(v_h__1_1056_);
v_value_1065_ = lean_ctor_get(v_x_1055_, 0);
if (lean_obj_tag(v_value_1065_) == 0)
{
uint8_t v_b_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_inc_ref(v_value_1065_);
lean_dec_ref_known(v_x_1055_, 1);
lean_dec(v_h__7_1062_);
v_b_1066_ = lean_ctor_get_uint8(v_value_1065_, 0);
lean_dec_ref_known(v_value_1065_, 0);
v___x_1067_ = lean_box(v_b_1066_);
v___x_1068_ = lean_apply_1(v_h__2_1057_, v___x_1067_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; 
lean_dec(v_h__2_1057_);
v___x_1069_ = lean_apply_7(v_h__7_1062_, v_x_1055_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1069_;
}
}
case 11:
{
lean_object* v_operator_1070_; lean_object* v_operand_1071_; lean_object* v___x_1072_; 
lean_dec(v_h__7_1062_);
lean_dec(v_h__6_1061_);
lean_dec(v_h__5_1060_);
lean_dec(v_h__4_1059_);
lean_dec(v_h__2_1057_);
lean_dec(v_h__1_1056_);
v_operator_1070_ = lean_ctor_get(v_x_1055_, 0);
lean_inc_ref(v_operator_1070_);
v_operand_1071_ = lean_ctor_get(v_x_1055_, 1);
lean_inc_ref(v_operand_1071_);
lean_dec_ref_known(v_x_1055_, 2);
v___x_1072_ = lean_apply_2(v_h__3_1058_, v_operator_1070_, v_operand_1071_);
return v___x_1072_;
}
case 12:
{
lean_object* v_operator_1073_; lean_object* v_left_1074_; lean_object* v_right_1075_; lean_object* v___x_1076_; 
lean_dec(v_h__7_1062_);
lean_dec(v_h__6_1061_);
lean_dec(v_h__5_1060_);
lean_dec(v_h__3_1058_);
lean_dec(v_h__2_1057_);
lean_dec(v_h__1_1056_);
v_operator_1073_ = lean_ctor_get(v_x_1055_, 0);
lean_inc_ref(v_operator_1073_);
v_left_1074_ = lean_ctor_get(v_x_1055_, 1);
lean_inc_ref(v_left_1074_);
v_right_1075_ = lean_ctor_get(v_x_1055_, 2);
lean_inc_ref(v_right_1075_);
lean_dec_ref_known(v_x_1055_, 3);
v___x_1076_ = lean_apply_3(v_h__4_1059_, v_operator_1073_, v_left_1074_, v_right_1075_);
return v___x_1076_;
}
case 6:
{
lean_object* v_condition_1077_; lean_object* v_thenExpr_1078_; lean_object* v_elseExpr_1079_; lean_object* v___x_1080_; 
lean_dec(v_h__7_1062_);
lean_dec(v_h__6_1061_);
lean_dec(v_h__4_1059_);
lean_dec(v_h__3_1058_);
lean_dec(v_h__2_1057_);
lean_dec(v_h__1_1056_);
v_condition_1077_ = lean_ctor_get(v_x_1055_, 0);
lean_inc_ref(v_condition_1077_);
v_thenExpr_1078_ = lean_ctor_get(v_x_1055_, 1);
lean_inc_ref(v_thenExpr_1078_);
v_elseExpr_1079_ = lean_ctor_get(v_x_1055_, 2);
lean_inc_ref(v_elseExpr_1079_);
lean_dec_ref_known(v_x_1055_, 3);
v___x_1080_ = lean_apply_3(v_h__5_1060_, v_condition_1077_, v_thenExpr_1078_, v_elseExpr_1079_);
return v___x_1080_;
}
case 5:
{
lean_object* v_binderId_1081_; lean_object* v_value_1082_; lean_object* v_body_1083_; lean_object* v___x_1084_; 
lean_dec(v_h__7_1062_);
lean_dec(v_h__5_1060_);
lean_dec(v_h__4_1059_);
lean_dec(v_h__3_1058_);
lean_dec(v_h__2_1057_);
lean_dec(v_h__1_1056_);
v_binderId_1081_ = lean_ctor_get(v_x_1055_, 0);
lean_inc(v_binderId_1081_);
v_value_1082_ = lean_ctor_get(v_x_1055_, 1);
lean_inc_ref(v_value_1082_);
v_body_1083_ = lean_ctor_get(v_x_1055_, 2);
lean_inc_ref(v_body_1083_);
lean_dec_ref_known(v_x_1055_, 3);
v___x_1084_ = lean_apply_3(v_h__6_1061_, v_binderId_1081_, v_value_1082_, v_body_1083_);
return v___x_1084_;
}
default: 
{
lean_object* v___x_1085_; 
lean_dec(v_h__6_1061_);
lean_dec(v_h__5_1060_);
lean_dec(v_h__4_1059_);
lean_dec(v_h__3_1058_);
lean_dec(v_h__2_1057_);
lean_dec(v_h__1_1056_);
v___x_1085_ = lean_apply_7(v_h__7_1062_, v_x_1055_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1085_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_evalQ_match__1_splitter(lean_object* v_motive_1086_, lean_object* v_x_1087_, lean_object* v_h__1_1088_, lean_object* v_h__2_1089_, lean_object* v_h__3_1090_, lean_object* v_h__4_1091_, lean_object* v_h__5_1092_, lean_object* v_h__6_1093_, lean_object* v_h__7_1094_){
_start:
{
switch(lean_obj_tag(v_x_1087_))
{
case 0:
{
lean_object* v_declarationId_1095_; lean_object* v___x_1096_; 
lean_dec(v_h__7_1094_);
lean_dec(v_h__6_1093_);
lean_dec(v_h__5_1092_);
lean_dec(v_h__4_1091_);
lean_dec(v_h__3_1090_);
lean_dec(v_h__2_1089_);
v_declarationId_1095_ = lean_ctor_get(v_x_1087_, 0);
lean_inc(v_declarationId_1095_);
lean_dec_ref_known(v_x_1087_, 1);
v___x_1096_ = lean_apply_1(v_h__1_1088_, v_declarationId_1095_);
return v___x_1096_;
}
case 3:
{
lean_object* v_value_1097_; 
lean_dec(v_h__6_1093_);
lean_dec(v_h__5_1092_);
lean_dec(v_h__4_1091_);
lean_dec(v_h__3_1090_);
lean_dec(v_h__1_1088_);
v_value_1097_ = lean_ctor_get(v_x_1087_, 0);
if (lean_obj_tag(v_value_1097_) == 0)
{
uint8_t v_b_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
lean_inc_ref(v_value_1097_);
lean_dec_ref_known(v_x_1087_, 1);
lean_dec(v_h__7_1094_);
v_b_1098_ = lean_ctor_get_uint8(v_value_1097_, 0);
lean_dec_ref_known(v_value_1097_, 0);
v___x_1099_ = lean_box(v_b_1098_);
v___x_1100_ = lean_apply_1(v_h__2_1089_, v___x_1099_);
return v___x_1100_;
}
else
{
lean_object* v___x_1101_; 
lean_dec(v_h__2_1089_);
v___x_1101_ = lean_apply_7(v_h__7_1094_, v_x_1087_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1101_;
}
}
case 11:
{
lean_object* v_operator_1102_; lean_object* v_operand_1103_; lean_object* v___x_1104_; 
lean_dec(v_h__7_1094_);
lean_dec(v_h__6_1093_);
lean_dec(v_h__5_1092_);
lean_dec(v_h__4_1091_);
lean_dec(v_h__2_1089_);
lean_dec(v_h__1_1088_);
v_operator_1102_ = lean_ctor_get(v_x_1087_, 0);
lean_inc_ref(v_operator_1102_);
v_operand_1103_ = lean_ctor_get(v_x_1087_, 1);
lean_inc_ref(v_operand_1103_);
lean_dec_ref_known(v_x_1087_, 2);
v___x_1104_ = lean_apply_2(v_h__3_1090_, v_operator_1102_, v_operand_1103_);
return v___x_1104_;
}
case 12:
{
lean_object* v_operator_1105_; lean_object* v_left_1106_; lean_object* v_right_1107_; lean_object* v___x_1108_; 
lean_dec(v_h__7_1094_);
lean_dec(v_h__6_1093_);
lean_dec(v_h__5_1092_);
lean_dec(v_h__3_1090_);
lean_dec(v_h__2_1089_);
lean_dec(v_h__1_1088_);
v_operator_1105_ = lean_ctor_get(v_x_1087_, 0);
lean_inc_ref(v_operator_1105_);
v_left_1106_ = lean_ctor_get(v_x_1087_, 1);
lean_inc_ref(v_left_1106_);
v_right_1107_ = lean_ctor_get(v_x_1087_, 2);
lean_inc_ref(v_right_1107_);
lean_dec_ref_known(v_x_1087_, 3);
v___x_1108_ = lean_apply_3(v_h__4_1091_, v_operator_1105_, v_left_1106_, v_right_1107_);
return v___x_1108_;
}
case 6:
{
lean_object* v_condition_1109_; lean_object* v_thenExpr_1110_; lean_object* v_elseExpr_1111_; lean_object* v___x_1112_; 
lean_dec(v_h__7_1094_);
lean_dec(v_h__6_1093_);
lean_dec(v_h__4_1091_);
lean_dec(v_h__3_1090_);
lean_dec(v_h__2_1089_);
lean_dec(v_h__1_1088_);
v_condition_1109_ = lean_ctor_get(v_x_1087_, 0);
lean_inc_ref(v_condition_1109_);
v_thenExpr_1110_ = lean_ctor_get(v_x_1087_, 1);
lean_inc_ref(v_thenExpr_1110_);
v_elseExpr_1111_ = lean_ctor_get(v_x_1087_, 2);
lean_inc_ref(v_elseExpr_1111_);
lean_dec_ref_known(v_x_1087_, 3);
v___x_1112_ = lean_apply_3(v_h__5_1092_, v_condition_1109_, v_thenExpr_1110_, v_elseExpr_1111_);
return v___x_1112_;
}
case 5:
{
lean_object* v_binderId_1113_; lean_object* v_value_1114_; lean_object* v_body_1115_; lean_object* v___x_1116_; 
lean_dec(v_h__7_1094_);
lean_dec(v_h__5_1092_);
lean_dec(v_h__4_1091_);
lean_dec(v_h__3_1090_);
lean_dec(v_h__2_1089_);
lean_dec(v_h__1_1088_);
v_binderId_1113_ = lean_ctor_get(v_x_1087_, 0);
lean_inc(v_binderId_1113_);
v_value_1114_ = lean_ctor_get(v_x_1087_, 1);
lean_inc_ref(v_value_1114_);
v_body_1115_ = lean_ctor_get(v_x_1087_, 2);
lean_inc_ref(v_body_1115_);
lean_dec_ref_known(v_x_1087_, 3);
v___x_1116_ = lean_apply_3(v_h__6_1093_, v_binderId_1113_, v_value_1114_, v_body_1115_);
return v___x_1116_;
}
default: 
{
lean_object* v___x_1117_; 
lean_dec(v_h__6_1093_);
lean_dec(v_h__5_1092_);
lean_dec(v_h__4_1091_);
lean_dec(v_h__3_1090_);
lean_dec(v_h__2_1089_);
lean_dec(v_h__1_1088_);
v___x_1117_ = lean_apply_7(v_h__7_1094_, v_x_1087_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1117_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorIdx(lean_object* v_x_1118_){
_start:
{
switch(lean_obj_tag(v_x_1118_))
{
case 0:
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_unsigned_to_nat(0u);
return v___x_1119_;
}
case 1:
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_unsigned_to_nat(1u);
return v___x_1120_;
}
case 2:
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_unsigned_to_nat(2u);
return v___x_1121_;
}
case 3:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_unsigned_to_nat(3u);
return v___x_1122_;
}
case 4:
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_unsigned_to_nat(4u);
return v___x_1123_;
}
case 5:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_unsigned_to_nat(5u);
return v___x_1124_;
}
default: 
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_unsigned_to_nat(6u);
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorIdx___boxed(lean_object* v_x_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorIdx(v_x_1126_);
lean_dec_ref(v_x_1126_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(lean_object* v_t_1128_, lean_object* v_k_1129_){
_start:
{
switch(lean_obj_tag(v_t_1128_))
{
case 0:
{
lean_object* v_declaration_1130_; lean_object* v___x_1131_; 
v_declaration_1130_ = lean_ctor_get(v_t_1128_, 0);
lean_inc(v_declaration_1130_);
lean_dec_ref_known(v_t_1128_, 1);
v___x_1131_ = lean_apply_1(v_k_1129_, v_declaration_1130_);
return v___x_1131_;
}
case 1:
{
uint8_t v_value_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v_value_1132_ = lean_ctor_get_uint8(v_t_1128_, 0);
lean_dec_ref_known(v_t_1128_, 0);
v___x_1133_ = lean_box(v_value_1132_);
v___x_1134_ = lean_apply_1(v_k_1129_, v___x_1133_);
return v___x_1134_;
}
case 2:
{
lean_object* v_body_1135_; lean_object* v___x_1136_; 
v_body_1135_ = lean_ctor_get(v_t_1128_, 0);
lean_inc_ref(v_body_1135_);
lean_dec_ref_known(v_t_1128_, 1);
v___x_1136_ = lean_apply_1(v_k_1129_, v_body_1135_);
return v___x_1136_;
}
case 5:
{
lean_object* v_condition_1137_; lean_object* v_thenExpr_1138_; lean_object* v_elseExpr_1139_; lean_object* v___x_1140_; 
v_condition_1137_ = lean_ctor_get(v_t_1128_, 0);
lean_inc_ref(v_condition_1137_);
v_thenExpr_1138_ = lean_ctor_get(v_t_1128_, 1);
lean_inc_ref(v_thenExpr_1138_);
v_elseExpr_1139_ = lean_ctor_get(v_t_1128_, 2);
lean_inc_ref(v_elseExpr_1139_);
lean_dec_ref_known(v_t_1128_, 3);
v___x_1140_ = lean_apply_3(v_k_1129_, v_condition_1137_, v_thenExpr_1138_, v_elseExpr_1139_);
return v___x_1140_;
}
case 6:
{
lean_object* v_binder_1141_; lean_object* v_value_1142_; lean_object* v_body_1143_; lean_object* v___x_1144_; 
v_binder_1141_ = lean_ctor_get(v_t_1128_, 0);
lean_inc(v_binder_1141_);
v_value_1142_ = lean_ctor_get(v_t_1128_, 1);
lean_inc_ref(v_value_1142_);
v_body_1143_ = lean_ctor_get(v_t_1128_, 2);
lean_inc_ref(v_body_1143_);
lean_dec_ref_known(v_t_1128_, 3);
v___x_1144_ = lean_apply_3(v_k_1129_, v_binder_1141_, v_value_1142_, v_body_1143_);
return v___x_1144_;
}
default: 
{
lean_object* v_left_1145_; lean_object* v_right_1146_; lean_object* v___x_1147_; 
v_left_1145_ = lean_ctor_get(v_t_1128_, 0);
lean_inc_ref(v_left_1145_);
v_right_1146_ = lean_ctor_get(v_t_1128_, 1);
lean_inc_ref(v_right_1146_);
lean_dec_ref(v_t_1128_);
v___x_1147_ = lean_apply_2(v_k_1129_, v_left_1145_, v_right_1146_);
return v___x_1147_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim(lean_object* v_motive_1148_, lean_object* v_ctorIdx_1149_, lean_object* v_t_1150_, lean_object* v_h_1151_, lean_object* v_k_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1150_, v_k_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___boxed(lean_object* v_motive_1154_, lean_object* v_ctorIdx_1155_, lean_object* v_t_1156_, lean_object* v_h_1157_, lean_object* v_k_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim(v_motive_1154_, v_ctorIdx_1155_, v_t_1156_, v_h_1157_, v_k_1158_);
lean_dec(v_ctorIdx_1155_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_variable_elim___redArg(lean_object* v_t_1160_, lean_object* v_variable_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1160_, v_variable_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_variable_elim(lean_object* v_motive_1163_, lean_object* v_t_1164_, lean_object* v_h_1165_, lean_object* v_variable_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1164_, v_variable_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_constant_elim___redArg(lean_object* v_t_1168_, lean_object* v_constant_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1168_, v_constant_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_constant_elim(lean_object* v_motive_1171_, lean_object* v_t_1172_, lean_object* v_h_1173_, lean_object* v_constant_1174_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1172_, v_constant_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_not_elim___redArg(lean_object* v_t_1176_, lean_object* v_not_1177_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1176_, v_not_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_not_elim(lean_object* v_motive_1179_, lean_object* v_t_1180_, lean_object* v_h_1181_, lean_object* v_not_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1180_, v_not_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_and_elim___redArg(lean_object* v_t_1184_, lean_object* v_and_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1184_, v_and_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_and_elim(lean_object* v_motive_1187_, lean_object* v_t_1188_, lean_object* v_h_1189_, lean_object* v_and_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1188_, v_and_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_or_elim___redArg(lean_object* v_t_1192_, lean_object* v_or_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1192_, v_or_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_or_elim(lean_object* v_motive_1195_, lean_object* v_t_1196_, lean_object* v_h_1197_, lean_object* v_or_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1196_, v_or_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ifExpr_elim___redArg(lean_object* v_t_1200_, lean_object* v_ifExpr_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1200_, v_ifExpr_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ifExpr_elim(lean_object* v_motive_1203_, lean_object* v_t_1204_, lean_object* v_h_1205_, lean_object* v_ifExpr_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1204_, v_ifExpr_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_letExpr_elim___redArg(lean_object* v_t_1208_, lean_object* v_letExpr_1209_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1208_, v_letExpr_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_letExpr_elim(lean_object* v_motive_1211_, lean_object* v_t_1212_, lean_object* v_h_1213_, lean_object* v_letExpr_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_CypherExpr_ctorElim___redArg(v_t_1212_, v_letExpr_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(lean_object* v_x_1258_, lean_object* v_prec_1259_){
_start:
{
switch(lean_obj_tag(v_x_1258_))
{
case 0:
{
lean_object* v_declaration_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1280_; 
v_declaration_1260_ = lean_ctor_get(v_x_1258_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v_x_1258_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1262_ = v_x_1258_;
v_isShared_1263_ = v_isSharedCheck_1280_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_declaration_1260_);
lean_dec(v_x_1258_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1280_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___y_1265_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = lean_unsigned_to_nat(1024u);
v___x_1277_ = lean_nat_dec_le(v___x_1276_, v_prec_1259_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1278_; 
v___x_1278_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_1265_ = v___x_1278_;
goto v___jp_1264_;
}
else
{
lean_object* v___x_1279_; 
v___x_1279_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_1265_ = v___x_1279_;
goto v___jp_1264_;
}
v___jp_1264_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1266_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__2));
v___x_1267_ = l_Nat_reprFast(v_declaration_1260_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set_tag(v___x_1262_, 3);
lean_ctor_set(v___x_1262_, 0, v___x_1267_);
v___x_1269_ = v___x_1262_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; uint8_t v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1266_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
lean_inc(v___y_1265_);
v___x_1271_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___y_1265_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
v___x_1272_ = 0;
v___x_1273_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1273_, 0, v___x_1271_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*1, v___x_1272_);
v___x_1274_ = l_Repr_addAppParen(v___x_1273_, v_prec_1259_);
return v___x_1274_;
}
}
}
}
case 1:
{
uint8_t v_value_1281_; lean_object* v___y_1283_; lean_object* v___x_1292_; uint8_t v___x_1293_; 
v_value_1281_ = lean_ctor_get_uint8(v_x_1258_, 0);
lean_dec_ref_known(v_x_1258_, 0);
v___x_1292_ = lean_unsigned_to_nat(1024u);
v___x_1293_ = lean_nat_dec_le(v___x_1292_, v_prec_1259_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_1283_ = v___x_1294_;
goto v___jp_1282_;
}
else
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_1283_ = v___x_1295_;
goto v___jp_1282_;
}
v___jp_1282_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1284_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__5));
v___x_1285_ = lean_unsigned_to_nat(1024u);
v___x_1286_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instReprBool3_repr(v_value_1281_, v___x_1285_);
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1284_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
lean_inc(v___y_1283_);
v___x_1288_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___y_1283_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = 0;
v___x_1290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set_uint8(v___x_1290_, sizeof(void*)*1, v___x_1289_);
v___x_1291_ = l_Repr_addAppParen(v___x_1290_, v_prec_1259_);
return v___x_1291_;
}
}
case 2:
{
lean_object* v_body_1296_; lean_object* v___x_1297_; lean_object* v___y_1299_; uint8_t v___x_1307_; 
v_body_1296_ = lean_ctor_get(v_x_1258_, 0);
lean_inc_ref(v_body_1296_);
lean_dec_ref_known(v_x_1258_, 1);
v___x_1297_ = lean_unsigned_to_nat(1024u);
v___x_1307_ = lean_nat_dec_le(v___x_1297_, v_prec_1259_);
if (v___x_1307_ == 0)
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_1299_ = v___x_1308_;
goto v___jp_1298_;
}
else
{
lean_object* v___x_1309_; 
v___x_1309_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_1299_ = v___x_1309_;
goto v___jp_1298_;
}
v___jp_1298_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1300_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__8));
v___x_1301_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_body_1296_, v___x_1297_);
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
lean_inc(v___y_1299_);
v___x_1303_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___y_1299_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = 0;
v___x_1305_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set_uint8(v___x_1305_, sizeof(void*)*1, v___x_1304_);
v___x_1306_ = l_Repr_addAppParen(v___x_1305_, v_prec_1259_);
return v___x_1306_;
}
}
case 3:
{
lean_object* v_left_1310_; lean_object* v_right_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1334_; 
v_left_1310_ = lean_ctor_get(v_x_1258_, 0);
v_right_1311_ = lean_ctor_get(v_x_1258_, 1);
v_isSharedCheck_1334_ = !lean_is_exclusive(v_x_1258_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1313_ = v_x_1258_;
v_isShared_1314_ = v_isSharedCheck_1334_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_right_1311_);
lean_inc(v_left_1310_);
lean_dec(v_x_1258_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1334_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___y_1317_; uint8_t v___x_1331_; 
v___x_1315_ = lean_unsigned_to_nat(1024u);
v___x_1331_ = lean_nat_dec_le(v___x_1315_, v_prec_1259_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; 
v___x_1332_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_1317_ = v___x_1332_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_1317_ = v___x_1333_;
goto v___jp_1316_;
}
v___jp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1322_; 
v___x_1318_ = lean_box(1);
v___x_1319_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__11));
v___x_1320_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_left_1310_, v___x_1315_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set_tag(v___x_1313_, 5);
lean_ctor_set(v___x_1313_, 1, v___x_1320_);
lean_ctor_set(v___x_1313_, 0, v___x_1319_);
v___x_1322_ = v___x_1313_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1319_);
lean_ctor_set(v_reuseFailAlloc_1330_, 1, v___x_1320_);
v___x_1322_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
lean_ctor_set(v___x_1323_, 1, v___x_1318_);
v___x_1324_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_right_1311_, v___x_1315_);
v___x_1325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
lean_inc(v___y_1317_);
v___x_1326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___y_1317_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = 0;
v___x_1328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set_uint8(v___x_1328_, sizeof(void*)*1, v___x_1327_);
v___x_1329_ = l_Repr_addAppParen(v___x_1328_, v_prec_1259_);
return v___x_1329_;
}
}
}
}
case 4:
{
lean_object* v_left_1335_; lean_object* v_right_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1359_; 
v_left_1335_ = lean_ctor_get(v_x_1258_, 0);
v_right_1336_ = lean_ctor_get(v_x_1258_, 1);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_x_1258_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1338_ = v_x_1258_;
v_isShared_1339_ = v_isSharedCheck_1359_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_right_1336_);
lean_inc(v_left_1335_);
lean_dec(v_x_1258_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1359_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; lean_object* v___y_1342_; uint8_t v___x_1356_; 
v___x_1340_ = lean_unsigned_to_nat(1024u);
v___x_1356_ = lean_nat_dec_le(v___x_1340_, v_prec_1259_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_1342_ = v___x_1357_;
goto v___jp_1341_;
}
else
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_1342_ = v___x_1358_;
goto v___jp_1341_;
}
v___jp_1341_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1343_ = lean_box(1);
v___x_1344_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__14));
v___x_1345_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_left_1335_, v___x_1340_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set_tag(v___x_1338_, 5);
lean_ctor_set(v___x_1338_, 1, v___x_1345_);
lean_ctor_set(v___x_1338_, 0, v___x_1344_);
v___x_1347_ = v___x_1338_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1344_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v___x_1345_);
v___x_1347_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
lean_ctor_set(v___x_1348_, 1, v___x_1343_);
v___x_1349_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_right_1336_, v___x_1340_);
v___x_1350_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
lean_inc(v___y_1342_);
v___x_1351_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___y_1342_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = 0;
v___x_1353_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1353_, 0, v___x_1351_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*1, v___x_1352_);
v___x_1354_ = l_Repr_addAppParen(v___x_1353_, v_prec_1259_);
return v___x_1354_;
}
}
}
}
case 5:
{
lean_object* v_condition_1360_; lean_object* v_thenExpr_1361_; lean_object* v_elseExpr_1362_; lean_object* v___x_1363_; lean_object* v___y_1365_; uint8_t v___x_1380_; 
v_condition_1360_ = lean_ctor_get(v_x_1258_, 0);
lean_inc_ref(v_condition_1360_);
v_thenExpr_1361_ = lean_ctor_get(v_x_1258_, 1);
lean_inc_ref(v_thenExpr_1361_);
v_elseExpr_1362_ = lean_ctor_get(v_x_1258_, 2);
lean_inc_ref(v_elseExpr_1362_);
lean_dec_ref_known(v_x_1258_, 3);
v___x_1363_ = lean_unsigned_to_nat(1024u);
v___x_1380_ = lean_nat_dec_le(v___x_1363_, v_prec_1259_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_1365_ = v___x_1381_;
goto v___jp_1364_;
}
else
{
lean_object* v___x_1382_; 
v___x_1382_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_1365_ = v___x_1382_;
goto v___jp_1364_;
}
v___jp_1364_:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1366_ = lean_box(1);
v___x_1367_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__17));
v___x_1368_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_condition_1360_, v___x_1363_);
v___x_1369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1367_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
v___x_1370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
lean_ctor_set(v___x_1370_, 1, v___x_1366_);
v___x_1371_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_thenExpr_1361_, v___x_1363_);
v___x_1372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1372_);
lean_ctor_set(v___x_1373_, 1, v___x_1366_);
v___x_1374_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_elseExpr_1362_, v___x_1363_);
v___x_1375_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
lean_inc(v___y_1365_);
v___x_1376_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___y_1365_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = 0;
v___x_1378_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1378_, 0, v___x_1376_);
lean_ctor_set_uint8(v___x_1378_, sizeof(void*)*1, v___x_1377_);
v___x_1379_ = l_Repr_addAppParen(v___x_1378_, v_prec_1259_);
return v___x_1379_;
}
}
default: 
{
lean_object* v_binder_1383_; lean_object* v_value_1384_; lean_object* v_body_1385_; lean_object* v___x_1386_; lean_object* v___y_1388_; uint8_t v___x_1404_; 
v_binder_1383_ = lean_ctor_get(v_x_1258_, 0);
lean_inc(v_binder_1383_);
v_value_1384_ = lean_ctor_get(v_x_1258_, 1);
lean_inc_ref(v_value_1384_);
v_body_1385_ = lean_ctor_get(v_x_1258_, 2);
lean_inc_ref(v_body_1385_);
lean_dec_ref_known(v_x_1258_, 3);
v___x_1386_ = lean_unsigned_to_nat(1024u);
v___x_1404_ = lean_nat_dec_le(v___x_1386_, v_prec_1259_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; 
v___x_1405_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__3);
v___y_1388_ = v___x_1405_;
goto v___jp_1387_;
}
else
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_obj_once(&lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4, &lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4_once, _init_lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprSurfaceExpr_repr___closed__4);
v___y_1388_ = v___x_1406_;
goto v___jp_1387_;
}
v___jp_1387_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1389_ = lean_box(1);
v___x_1390_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___closed__20));
v___x_1391_ = l_Nat_reprFast(v_binder_1383_);
v___x_1392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
v___x_1393_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1390_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
lean_ctor_set(v___x_1394_, 1, v___x_1389_);
v___x_1395_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_value_1384_, v___x_1386_);
v___x_1396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1394_);
lean_ctor_set(v___x_1396_, 1, v___x_1395_);
v___x_1397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
lean_ctor_set(v___x_1397_, 1, v___x_1389_);
v___x_1398_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_body_1385_, v___x_1386_);
v___x_1399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1397_);
lean_ctor_set(v___x_1399_, 1, v___x_1398_);
lean_inc(v___y_1388_);
v___x_1400_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___y_1388_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = 0;
v___x_1402_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set_uint8(v___x_1402_, sizeof(void*)*1, v___x_1401_);
v___x_1403_ = l_Repr_addAppParen(v___x_1402_, v_prec_1259_);
return v___x_1403_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr___boxed(lean_object* v_x_1407_, lean_object* v_prec_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr(v_x_1407_, v_prec_1408_);
lean_dec(v_prec_1408_);
return v_res_1409_;
}
}
LEAN_EXPORT uint8_t lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(lean_object* v_environment_1412_, lean_object* v_x_1413_){
_start:
{
switch(lean_obj_tag(v_x_1413_))
{
case 0:
{
lean_object* v_declaration_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; 
v_declaration_1414_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_declaration_1414_);
lean_dec_ref_known(v_x_1413_, 1);
v___x_1415_ = lean_apply_1(v_environment_1412_, v_declaration_1414_);
v___x_1416_ = lean_unbox(v___x_1415_);
return v___x_1416_;
}
case 1:
{
uint8_t v_value_1417_; 
lean_dec_ref(v_environment_1412_);
v_value_1417_ = lean_ctor_get_uint8(v_x_1413_, 0);
lean_dec_ref_known(v_x_1413_, 0);
return v_value_1417_;
}
case 2:
{
lean_object* v_body_1418_; uint8_t v___x_1419_; uint8_t v___x_1420_; 
v_body_1418_ = lean_ctor_get(v_x_1413_, 0);
lean_inc_ref(v_body_1418_);
lean_dec_ref_known(v_x_1413_, 1);
v___x_1419_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1412_, v_body_1418_);
v___x_1420_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_not(v___x_1419_);
return v___x_1420_;
}
case 3:
{
lean_object* v_left_1421_; lean_object* v_right_1422_; uint8_t v___x_1423_; uint8_t v___x_1424_; uint8_t v___x_1425_; 
v_left_1421_ = lean_ctor_get(v_x_1413_, 0);
lean_inc_ref(v_left_1421_);
v_right_1422_ = lean_ctor_get(v_x_1413_, 1);
lean_inc_ref(v_right_1422_);
lean_dec_ref_known(v_x_1413_, 2);
lean_inc_ref(v_environment_1412_);
v___x_1423_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1412_, v_left_1421_);
v___x_1424_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1412_, v_right_1422_);
v___x_1425_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_and(v___x_1423_, v___x_1424_);
return v___x_1425_;
}
case 4:
{
lean_object* v_left_1426_; lean_object* v_right_1427_; uint8_t v___x_1428_; uint8_t v___x_1429_; uint8_t v___x_1430_; 
v_left_1426_ = lean_ctor_get(v_x_1413_, 0);
lean_inc_ref(v_left_1426_);
v_right_1427_ = lean_ctor_get(v_x_1413_, 1);
lean_inc_ref(v_right_1427_);
lean_dec_ref_known(v_x_1413_, 2);
lean_inc_ref(v_environment_1412_);
v___x_1428_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1412_, v_left_1426_);
v___x_1429_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1412_, v_right_1427_);
v___x_1430_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_or(v___x_1428_, v___x_1429_);
return v___x_1430_;
}
case 5:
{
lean_object* v_condition_1431_; lean_object* v_thenExpr_1432_; lean_object* v_elseExpr_1433_; uint8_t v___x_1434_; 
v_condition_1431_ = lean_ctor_get(v_x_1413_, 0);
lean_inc_ref(v_condition_1431_);
v_thenExpr_1432_ = lean_ctor_get(v_x_1413_, 1);
lean_inc_ref(v_thenExpr_1432_);
v_elseExpr_1433_ = lean_ctor_get(v_x_1413_, 2);
lean_inc_ref(v_elseExpr_1433_);
lean_dec_ref_known(v_x_1413_, 3);
lean_inc_ref(v_environment_1412_);
v___x_1434_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1412_, v_condition_1431_);
switch(v___x_1434_)
{
case 0:
{
lean_dec_ref(v_elseExpr_1433_);
v_x_1413_ = v_thenExpr_1432_;
goto _start;
}
case 1:
{
lean_dec_ref(v_thenExpr_1432_);
v_x_1413_ = v_elseExpr_1433_;
goto _start;
}
default: 
{
lean_dec_ref(v_elseExpr_1433_);
lean_dec_ref(v_thenExpr_1432_);
lean_dec_ref(v_environment_1412_);
return v___x_1434_;
}
}
}
default: 
{
lean_object* v_binder_1437_; lean_object* v_value_1438_; lean_object* v_body_1439_; uint8_t v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v_binder_1437_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_binder_1437_);
v_value_1438_ = lean_ctor_get(v_x_1413_, 1);
lean_inc_ref(v_value_1438_);
v_body_1439_ = lean_ctor_get(v_x_1413_, 2);
lean_inc_ref(v_body_1439_);
lean_dec_ref_known(v_x_1413_, 3);
lean_inc_ref(v_environment_1412_);
v___x_1440_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1412_, v_value_1438_);
v___x_1441_ = lean_box(v___x_1440_);
v___x_1442_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_bind___boxed), 4, 3);
lean_closure_set(v___x_1442_, 0, v_environment_1412_);
lean_closure_set(v___x_1442_, 1, v_binder_1437_);
lean_closure_set(v___x_1442_, 2, v___x_1441_);
v_environment_1412_ = v___x_1442_;
v_x_1413_ = v_body_1439_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher___boxed(lean_object* v_environment_1444_, lean_object* v_x_1445_){
_start:
{
uint8_t v_res_1446_; lean_object* v_r_1447_; 
v_res_1446_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1444_, v_x_1445_);
v_r_1447_ = lean_box(v_res_1446_);
return v_r_1447_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(lean_object* v_x_1448_){
_start:
{
switch(lean_obj_tag(v_x_1448_))
{
case 0:
{
lean_object* v_declarationId_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1457_; 
v_declarationId_1449_ = lean_ctor_get(v_x_1448_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_x_1448_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1451_ = v_x_1448_;
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_declarationId_1449_);
lean_dec(v_x_1448_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_declarationId_1449_);
v___x_1454_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
return v___x_1455_;
}
}
}
case 3:
{
lean_object* v_value_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1474_; 
v_value_1458_ = lean_ctor_get(v_x_1448_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_x_1448_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1460_ = v_x_1448_;
v_isShared_1461_ = v_isSharedCheck_1474_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_value_1458_);
lean_dec(v_x_1448_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1474_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
if (lean_obj_tag(v_value_1458_) == 0)
{
uint8_t v_b_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1472_; 
v_b_1462_ = lean_ctor_get_uint8(v_value_1458_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_value_1458_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1464_ = v_value_1458_;
v_isShared_1465_ = v_isSharedCheck_1472_;
goto v_resetjp_1463_;
}
else
{
lean_dec(v_value_1458_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1472_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
lean_ctor_set_tag(v___x_1464_, 1);
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1471_, 0, v_b_1462_);
v___x_1467_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
lean_object* v___x_1469_; 
if (v_isShared_1461_ == 0)
{
lean_ctor_set_tag(v___x_1460_, 1);
lean_ctor_set(v___x_1460_, 0, v___x_1467_);
v___x_1469_ = v___x_1460_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
else
{
lean_object* v___x_1473_; 
lean_del_object(v___x_1460_);
lean_dec_ref(v_value_1458_);
v___x_1473_ = lean_box(0);
return v___x_1473_;
}
}
}
case 11:
{
lean_object* v_operator_1475_; lean_object* v_operand_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v_operator_1475_ = lean_ctor_get(v_x_1448_, 0);
lean_inc_ref(v_operator_1475_);
v_operand_1476_ = lean_ctor_get(v_x_1448_, 1);
lean_inc_ref(v_operand_1476_);
lean_dec_ref_known(v_x_1448_, 2);
v___x_1477_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__0));
v___x_1478_ = lean_string_dec_eq(v_operator_1475_, v___x_1477_);
lean_dec_ref(v_operator_1475_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; 
lean_dec_ref(v_operand_1476_);
v___x_1479_ = lean_box(0);
return v___x_1479_;
}
else
{
lean_object* v___x_1480_; 
v___x_1480_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_operand_1476_);
if (lean_obj_tag(v___x_1480_) == 0)
{
return v___x_1480_;
}
else
{
lean_object* v_val_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1489_; 
v_val_1481_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1483_ = v___x_1480_;
v_isShared_1484_ = v_isSharedCheck_1489_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_val_1481_);
lean_dec(v___x_1480_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1489_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1487_; 
v___x_1485_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_val_1481_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v___x_1485_);
v___x_1487_ = v___x_1483_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
}
case 12:
{
lean_object* v_operator_1490_; lean_object* v_left_1491_; lean_object* v_right_1492_; lean_object* v___x_1493_; uint8_t v___x_1494_; 
v_operator_1490_ = lean_ctor_get(v_x_1448_, 0);
lean_inc_ref(v_operator_1490_);
v_left_1491_ = lean_ctor_get(v_x_1448_, 1);
lean_inc_ref(v_left_1491_);
v_right_1492_ = lean_ctor_get(v_x_1448_, 2);
lean_inc_ref(v_right_1492_);
lean_dec_ref_known(v_x_1448_, 3);
v___x_1493_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__1));
v___x_1494_ = lean_string_dec_eq(v_operator_1490_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1495_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_translateCore___closed__2));
v___x_1496_ = lean_string_dec_eq(v_operator_1490_, v___x_1495_);
lean_dec_ref(v_operator_1490_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; 
lean_dec_ref(v_right_1492_);
lean_dec_ref(v_left_1491_);
v___x_1497_ = lean_box(0);
return v___x_1497_;
}
else
{
lean_object* v___x_1498_; 
v___x_1498_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_left_1491_);
if (lean_obj_tag(v___x_1498_) == 1)
{
lean_object* v_val_1499_; lean_object* v___x_1500_; 
v_val_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_val_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1500_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_right_1492_);
if (lean_obj_tag(v___x_1500_) == 1)
{
lean_object* v_val_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1509_; 
v_val_1501_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1503_ = v___x_1500_;
v_isShared_1504_ = v_isSharedCheck_1509_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_val_1501_);
lean_dec(v___x_1500_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1509_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1505_; lean_object* v___x_1507_; 
v___x_1505_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1505_, 0, v_val_1499_);
lean_ctor_set(v___x_1505_, 1, v_val_1501_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 0, v___x_1505_);
v___x_1507_ = v___x_1503_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1505_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
else
{
lean_object* v___x_1510_; 
lean_dec(v___x_1500_);
lean_dec(v_val_1499_);
v___x_1510_ = lean_box(0);
return v___x_1510_;
}
}
else
{
lean_object* v___x_1511_; 
lean_dec(v___x_1498_);
lean_dec_ref(v_right_1492_);
v___x_1511_ = lean_box(0);
return v___x_1511_;
}
}
}
else
{
lean_object* v___x_1512_; 
lean_dec_ref(v_operator_1490_);
v___x_1512_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_left_1491_);
if (lean_obj_tag(v___x_1512_) == 1)
{
lean_object* v_val_1513_; lean_object* v___x_1514_; 
v_val_1513_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_val_1513_);
lean_dec_ref_known(v___x_1512_, 1);
v___x_1514_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_right_1492_);
if (lean_obj_tag(v___x_1514_) == 1)
{
lean_object* v_val_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1523_; 
v_val_1515_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1517_ = v___x_1514_;
v_isShared_1518_ = v_isSharedCheck_1523_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_val_1515_);
lean_dec(v___x_1514_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1523_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1519_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1519_, 0, v_val_1513_);
lean_ctor_set(v___x_1519_, 1, v_val_1515_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v___x_1519_);
v___x_1521_ = v___x_1517_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
else
{
lean_object* v___x_1524_; 
lean_dec(v___x_1514_);
lean_dec(v_val_1513_);
v___x_1524_ = lean_box(0);
return v___x_1524_;
}
}
else
{
lean_object* v___x_1525_; 
lean_dec(v___x_1512_);
lean_dec_ref(v_right_1492_);
v___x_1525_ = lean_box(0);
return v___x_1525_;
}
}
}
case 6:
{
lean_object* v_condition_1526_; lean_object* v_thenExpr_1527_; lean_object* v_elseExpr_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1551_; 
v_condition_1526_ = lean_ctor_get(v_x_1448_, 0);
v_thenExpr_1527_ = lean_ctor_get(v_x_1448_, 1);
v_elseExpr_1528_ = lean_ctor_get(v_x_1448_, 2);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_x_1448_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1530_ = v_x_1448_;
v_isShared_1531_ = v_isSharedCheck_1551_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_elseExpr_1528_);
lean_inc(v_thenExpr_1527_);
lean_inc(v_condition_1526_);
lean_dec(v_x_1448_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1551_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; 
v___x_1532_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_condition_1526_);
if (lean_obj_tag(v___x_1532_) == 1)
{
lean_object* v_val_1533_; lean_object* v___x_1534_; 
v_val_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_val_1533_);
lean_dec_ref_known(v___x_1532_, 1);
v___x_1534_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_thenExpr_1527_);
if (lean_obj_tag(v___x_1534_) == 1)
{
lean_object* v_val_1535_; lean_object* v___x_1536_; 
v_val_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_val_1535_);
lean_dec_ref_known(v___x_1534_, 1);
v___x_1536_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_elseExpr_1528_);
if (lean_obj_tag(v___x_1536_) == 1)
{
lean_object* v_val_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1547_; 
v_val_1537_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1539_ = v___x_1536_;
v_isShared_1540_ = v_isSharedCheck_1547_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_val_1537_);
lean_dec(v___x_1536_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1547_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1531_ == 0)
{
lean_ctor_set_tag(v___x_1530_, 5);
lean_ctor_set(v___x_1530_, 2, v_val_1537_);
lean_ctor_set(v___x_1530_, 1, v_val_1535_);
lean_ctor_set(v___x_1530_, 0, v_val_1533_);
v___x_1542_ = v___x_1530_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_val_1533_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_val_1535_);
lean_ctor_set(v_reuseFailAlloc_1546_, 2, v_val_1537_);
v___x_1542_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1544_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set(v___x_1539_, 0, v___x_1542_);
v___x_1544_ = v___x_1539_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
else
{
lean_object* v___x_1548_; 
lean_dec(v___x_1536_);
lean_dec(v_val_1535_);
lean_dec(v_val_1533_);
lean_del_object(v___x_1530_);
v___x_1548_ = lean_box(0);
return v___x_1548_;
}
}
else
{
lean_object* v___x_1549_; 
lean_dec(v___x_1534_);
lean_dec(v_val_1533_);
lean_del_object(v___x_1530_);
lean_dec_ref(v_elseExpr_1528_);
v___x_1549_ = lean_box(0);
return v___x_1549_;
}
}
else
{
lean_object* v___x_1550_; 
lean_dec(v___x_1532_);
lean_del_object(v___x_1530_);
lean_dec_ref(v_elseExpr_1528_);
lean_dec_ref(v_thenExpr_1527_);
v___x_1550_ = lean_box(0);
return v___x_1550_;
}
}
}
case 5:
{
lean_object* v_binderId_1552_; lean_object* v_value_1553_; lean_object* v_body_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1574_; 
v_binderId_1552_ = lean_ctor_get(v_x_1448_, 0);
v_value_1553_ = lean_ctor_get(v_x_1448_, 1);
v_body_1554_ = lean_ctor_get(v_x_1448_, 2);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_x_1448_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1556_ = v_x_1448_;
v_isShared_1557_ = v_isSharedCheck_1574_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_body_1554_);
lean_inc(v_value_1553_);
lean_inc(v_binderId_1552_);
lean_dec(v_x_1448_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1574_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; 
v___x_1558_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_value_1553_);
if (lean_obj_tag(v___x_1558_) == 1)
{
lean_object* v_val_1559_; lean_object* v___x_1560_; 
v_val_1559_ = lean_ctor_get(v___x_1558_, 0);
lean_inc(v_val_1559_);
lean_dec_ref_known(v___x_1558_, 1);
v___x_1560_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeQ(v_body_1554_);
if (lean_obj_tag(v___x_1560_) == 1)
{
lean_object* v_val_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1571_; 
v_val_1561_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1563_ = v___x_1560_;
v_isShared_1564_ = v_isSharedCheck_1571_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_val_1561_);
lean_dec(v___x_1560_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1571_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1557_ == 0)
{
lean_ctor_set_tag(v___x_1556_, 6);
lean_ctor_set(v___x_1556_, 2, v_val_1561_);
lean_ctor_set(v___x_1556_, 1, v_val_1559_);
v___x_1566_ = v___x_1556_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_binderId_1552_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_val_1559_);
lean_ctor_set(v_reuseFailAlloc_1570_, 2, v_val_1561_);
v___x_1566_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1568_; 
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 0, v___x_1566_);
v___x_1568_ = v___x_1563_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1566_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
else
{
lean_object* v___x_1572_; 
lean_dec(v___x_1560_);
lean_dec(v_val_1559_);
lean_del_object(v___x_1556_);
lean_dec(v_binderId_1552_);
v___x_1572_ = lean_box(0);
return v___x_1572_;
}
}
else
{
lean_object* v___x_1573_; 
lean_dec(v___x_1558_);
lean_del_object(v___x_1556_);
lean_dec_ref(v_body_1554_);
lean_dec(v_binderId_1552_);
v___x_1573_ = lean_box(0);
return v___x_1573_;
}
}
}
default: 
{
lean_object* v___x_1575_; 
lean_dec_ref(v_x_1448_);
v___x_1575_ = lean_box(0);
return v___x_1575_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(lean_object* v_x_1576_){
_start:
{
switch(lean_obj_tag(v_x_1576_))
{
case 0:
{
uint8_t v_value_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
v_value_1577_ = lean_ctor_get_uint8(v_x_1576_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v_x_1576_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_dec(v_x_1576_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
lean_ctor_set_tag(v___x_1579_, 1);
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1583_, 0, v_value_1577_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
case 1:
{
lean_object* v_declaration_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
v_declaration_1585_ = lean_ctor_get(v_x_1576_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v_x_1576_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_declaration_1585_);
lean_dec(v_x_1576_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
lean_ctor_set_tag(v___x_1587_, 0);
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_declaration_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
case 2:
{
lean_object* v_body_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1601_; 
v_body_1593_ = lean_ctor_get(v_x_1576_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1595_ = v_x_1576_;
v_isShared_1596_ = v_isSharedCheck_1601_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_body_1593_);
lean_dec(v_x_1576_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1601_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1597_; lean_object* v___x_1599_; 
v___x_1597_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_body_1593_);
if (v_isShared_1596_ == 0)
{
lean_ctor_set(v___x_1595_, 0, v___x_1597_);
v___x_1599_ = v___x_1595_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1597_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
case 3:
{
lean_object* v_left_1602_; lean_object* v_right_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1612_; 
v_left_1602_ = lean_ctor_get(v_x_1576_, 0);
v_right_1603_ = lean_ctor_get(v_x_1576_, 1);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1605_ = v_x_1576_;
v_isShared_1606_ = v_isSharedCheck_1612_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_right_1603_);
lean_inc(v_left_1602_);
lean_dec(v_x_1576_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1612_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1610_; 
v___x_1607_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_left_1602_);
v___x_1608_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_right_1603_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 1, v___x_1608_);
lean_ctor_set(v___x_1605_, 0, v___x_1607_);
v___x_1610_ = v___x_1605_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v___x_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
case 4:
{
lean_object* v_left_1613_; lean_object* v_right_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1623_; 
v_left_1613_ = lean_ctor_get(v_x_1576_, 0);
v_right_1614_ = lean_ctor_get(v_x_1576_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1616_ = v_x_1576_;
v_isShared_1617_ = v_isSharedCheck_1623_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_right_1614_);
lean_inc(v_left_1613_);
lean_dec(v_x_1576_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1623_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1621_; 
v___x_1618_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_left_1613_);
v___x_1619_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_right_1614_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 1, v___x_1619_);
lean_ctor_set(v___x_1616_, 0, v___x_1618_);
v___x_1621_ = v___x_1616_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1618_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
case 5:
{
lean_object* v_condition_1624_; lean_object* v_thenExpr_1625_; lean_object* v_elseExpr_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1636_; 
v_condition_1624_ = lean_ctor_get(v_x_1576_, 0);
v_thenExpr_1625_ = lean_ctor_get(v_x_1576_, 1);
v_elseExpr_1626_ = lean_ctor_get(v_x_1576_, 2);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1628_ = v_x_1576_;
v_isShared_1629_ = v_isSharedCheck_1636_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_elseExpr_1626_);
lean_inc(v_thenExpr_1625_);
lean_inc(v_condition_1624_);
lean_dec(v_x_1576_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1636_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1634_; 
v___x_1630_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_condition_1624_);
v___x_1631_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_thenExpr_1625_);
v___x_1632_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_elseExpr_1626_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 2, v___x_1632_);
lean_ctor_set(v___x_1628_, 1, v___x_1631_);
lean_ctor_set(v___x_1628_, 0, v___x_1630_);
v___x_1634_ = v___x_1628_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v___x_1631_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v___x_1632_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
default: 
{
lean_object* v_binder_1637_; lean_object* v_value_1638_; lean_object* v_body_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1648_; 
v_binder_1637_ = lean_ctor_get(v_x_1576_, 0);
v_value_1638_ = lean_ctor_get(v_x_1576_, 1);
v_body_1639_ = lean_ctor_get(v_x_1576_, 2);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1641_ = v_x_1576_;
v_isShared_1642_ = v_isSharedCheck_1648_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_body_1639_);
lean_inc(v_value_1638_);
lean_inc(v_binder_1637_);
lean_dec(v_x_1576_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1648_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1646_; 
v___x_1643_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_value_1638_);
v___x_1644_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v_body_1639_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 2, v___x_1644_);
lean_ctor_set(v___x_1641_, 1, v___x_1643_);
v___x_1646_ = v___x_1641_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_binder_1637_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v___x_1643_);
lean_ctor_set(v_reuseFailAlloc_1647_, 2, v___x_1644_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__1_splitter___redArg(lean_object* v_x_1649_, lean_object* v_x_1650_, lean_object* v_h__1_1651_, lean_object* v_h__2_1652_){
_start:
{
if (lean_obj_tag(v_x_1649_) == 1)
{
if (lean_obj_tag(v_x_1650_) == 1)
{
lean_object* v_val_1653_; lean_object* v_val_1654_; lean_object* v___x_1655_; 
lean_dec(v_h__2_1652_);
v_val_1653_ = lean_ctor_get(v_x_1649_, 0);
lean_inc(v_val_1653_);
lean_dec_ref_known(v_x_1649_, 1);
v_val_1654_ = lean_ctor_get(v_x_1650_, 0);
lean_inc(v_val_1654_);
lean_dec_ref_known(v_x_1650_, 1);
v___x_1655_ = lean_apply_2(v_h__1_1651_, v_val_1653_, v_val_1654_);
return v___x_1655_;
}
else
{
lean_object* v___x_1656_; 
lean_dec(v_h__1_1651_);
v___x_1656_ = lean_apply_3(v_h__2_1652_, v_x_1649_, v_x_1650_, lean_box(0));
return v___x_1656_;
}
}
else
{
lean_object* v___x_1657_; 
lean_dec(v_h__1_1651_);
v___x_1657_ = lean_apply_3(v_h__2_1652_, v_x_1649_, v_x_1650_, lean_box(0));
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__1_splitter(lean_object* v_motive_1658_, lean_object* v_x_1659_, lean_object* v_x_1660_, lean_object* v_h__1_1661_, lean_object* v_h__2_1662_){
_start:
{
if (lean_obj_tag(v_x_1659_) == 1)
{
if (lean_obj_tag(v_x_1660_) == 1)
{
lean_object* v_val_1663_; lean_object* v_val_1664_; lean_object* v___x_1665_; 
lean_dec(v_h__2_1662_);
v_val_1663_ = lean_ctor_get(v_x_1659_, 0);
lean_inc(v_val_1663_);
lean_dec_ref_known(v_x_1659_, 1);
v_val_1664_ = lean_ctor_get(v_x_1660_, 0);
lean_inc(v_val_1664_);
lean_dec_ref_known(v_x_1660_, 1);
v___x_1665_ = lean_apply_2(v_h__1_1661_, v_val_1663_, v_val_1664_);
return v___x_1665_;
}
else
{
lean_object* v___x_1666_; 
lean_dec(v_h__1_1661_);
v___x_1666_ = lean_apply_3(v_h__2_1662_, v_x_1659_, v_x_1660_, lean_box(0));
return v___x_1666_;
}
}
else
{
lean_object* v___x_1667_; 
lean_dec(v_h__1_1661_);
v___x_1667_ = lean_apply_3(v_h__2_1662_, v_x_1659_, v_x_1660_, lean_box(0));
return v___x_1667_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__4_splitter___redArg(lean_object* v_x_1668_, lean_object* v_x_1669_, lean_object* v_x_1670_, lean_object* v_h__1_1671_, lean_object* v_h__2_1672_){
_start:
{
if (lean_obj_tag(v_x_1668_) == 1)
{
if (lean_obj_tag(v_x_1669_) == 1)
{
if (lean_obj_tag(v_x_1670_) == 1)
{
lean_object* v_val_1673_; lean_object* v_val_1674_; lean_object* v_val_1675_; lean_object* v___x_1676_; 
lean_dec(v_h__2_1672_);
v_val_1673_ = lean_ctor_get(v_x_1668_, 0);
lean_inc(v_val_1673_);
lean_dec_ref_known(v_x_1668_, 1);
v_val_1674_ = lean_ctor_get(v_x_1669_, 0);
lean_inc(v_val_1674_);
lean_dec_ref_known(v_x_1669_, 1);
v_val_1675_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_val_1675_);
lean_dec_ref_known(v_x_1670_, 1);
v___x_1676_ = lean_apply_3(v_h__1_1671_, v_val_1673_, v_val_1674_, v_val_1675_);
return v___x_1676_;
}
else
{
lean_object* v___x_1677_; 
lean_dec(v_h__1_1671_);
v___x_1677_ = lean_apply_4(v_h__2_1672_, v_x_1668_, v_x_1669_, v_x_1670_, lean_box(0));
return v___x_1677_;
}
}
else
{
lean_object* v___x_1678_; 
lean_dec(v_h__1_1671_);
v___x_1678_ = lean_apply_4(v_h__2_1672_, v_x_1668_, v_x_1669_, v_x_1670_, lean_box(0));
return v___x_1678_;
}
}
else
{
lean_object* v___x_1679_; 
lean_dec(v_h__1_1671_);
v___x_1679_ = lean_apply_4(v_h__2_1672_, v_x_1668_, v_x_1669_, v_x_1670_, lean_box(0));
return v___x_1679_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_realizeQ_match__4_splitter(lean_object* v_motive_1680_, lean_object* v_x_1681_, lean_object* v_x_1682_, lean_object* v_x_1683_, lean_object* v_h__1_1684_, lean_object* v_h__2_1685_){
_start:
{
if (lean_obj_tag(v_x_1681_) == 1)
{
if (lean_obj_tag(v_x_1682_) == 1)
{
if (lean_obj_tag(v_x_1683_) == 1)
{
lean_object* v_val_1686_; lean_object* v_val_1687_; lean_object* v_val_1688_; lean_object* v___x_1689_; 
lean_dec(v_h__2_1685_);
v_val_1686_ = lean_ctor_get(v_x_1681_, 0);
lean_inc(v_val_1686_);
lean_dec_ref_known(v_x_1681_, 1);
v_val_1687_ = lean_ctor_get(v_x_1682_, 0);
lean_inc(v_val_1687_);
lean_dec_ref_known(v_x_1682_, 1);
v_val_1688_ = lean_ctor_get(v_x_1683_, 0);
lean_inc(v_val_1688_);
lean_dec_ref_known(v_x_1683_, 1);
v___x_1689_ = lean_apply_3(v_h__1_1684_, v_val_1686_, v_val_1687_, v_val_1688_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; 
lean_dec(v_h__1_1684_);
v___x_1690_ = lean_apply_4(v_h__2_1685_, v_x_1681_, v_x_1682_, v_x_1683_, lean_box(0));
return v___x_1690_;
}
}
else
{
lean_object* v___x_1691_; 
lean_dec(v_h__1_1684_);
v___x_1691_ = lean_apply_4(v_h__2_1685_, v_x_1681_, v_x_1682_, v_x_1683_, lean_box(0));
return v___x_1691_;
}
}
else
{
lean_object* v___x_1692_; 
lean_dec(v_h__1_1684_);
v___x_1692_ = lean_apply_4(v_h__2_1685_, v_x_1681_, v_x_1682_, v_x_1683_, lean_box(0));
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr_match__1_splitter___redArg(lean_object* v_x_1693_, lean_object* v_h__1_1694_, lean_object* v_h__2_1695_, lean_object* v_h__3_1696_, lean_object* v_h__4_1697_, lean_object* v_h__5_1698_, lean_object* v_h__6_1699_, lean_object* v_h__7_1700_){
_start:
{
switch(lean_obj_tag(v_x_1693_))
{
case 0:
{
lean_object* v_declaration_1701_; lean_object* v___x_1702_; 
lean_dec(v_h__7_1700_);
lean_dec(v_h__6_1699_);
lean_dec(v_h__5_1698_);
lean_dec(v_h__4_1697_);
lean_dec(v_h__3_1696_);
lean_dec(v_h__2_1695_);
v_declaration_1701_ = lean_ctor_get(v_x_1693_, 0);
lean_inc(v_declaration_1701_);
lean_dec_ref_known(v_x_1693_, 1);
v___x_1702_ = lean_apply_1(v_h__1_1694_, v_declaration_1701_);
return v___x_1702_;
}
case 1:
{
uint8_t v_value_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
lean_dec(v_h__7_1700_);
lean_dec(v_h__6_1699_);
lean_dec(v_h__5_1698_);
lean_dec(v_h__4_1697_);
lean_dec(v_h__3_1696_);
lean_dec(v_h__1_1694_);
v_value_1703_ = lean_ctor_get_uint8(v_x_1693_, 0);
lean_dec_ref_known(v_x_1693_, 0);
v___x_1704_ = lean_box(v_value_1703_);
v___x_1705_ = lean_apply_1(v_h__2_1695_, v___x_1704_);
return v___x_1705_;
}
case 2:
{
lean_object* v_body_1706_; lean_object* v___x_1707_; 
lean_dec(v_h__7_1700_);
lean_dec(v_h__6_1699_);
lean_dec(v_h__5_1698_);
lean_dec(v_h__4_1697_);
lean_dec(v_h__2_1695_);
lean_dec(v_h__1_1694_);
v_body_1706_ = lean_ctor_get(v_x_1693_, 0);
lean_inc_ref(v_body_1706_);
lean_dec_ref_known(v_x_1693_, 1);
v___x_1707_ = lean_apply_1(v_h__3_1696_, v_body_1706_);
return v___x_1707_;
}
case 3:
{
lean_object* v_left_1708_; lean_object* v_right_1709_; lean_object* v___x_1710_; 
lean_dec(v_h__7_1700_);
lean_dec(v_h__6_1699_);
lean_dec(v_h__5_1698_);
lean_dec(v_h__3_1696_);
lean_dec(v_h__2_1695_);
lean_dec(v_h__1_1694_);
v_left_1708_ = lean_ctor_get(v_x_1693_, 0);
lean_inc_ref(v_left_1708_);
v_right_1709_ = lean_ctor_get(v_x_1693_, 1);
lean_inc_ref(v_right_1709_);
lean_dec_ref_known(v_x_1693_, 2);
v___x_1710_ = lean_apply_2(v_h__4_1697_, v_left_1708_, v_right_1709_);
return v___x_1710_;
}
case 4:
{
lean_object* v_left_1711_; lean_object* v_right_1712_; lean_object* v___x_1713_; 
lean_dec(v_h__7_1700_);
lean_dec(v_h__6_1699_);
lean_dec(v_h__4_1697_);
lean_dec(v_h__3_1696_);
lean_dec(v_h__2_1695_);
lean_dec(v_h__1_1694_);
v_left_1711_ = lean_ctor_get(v_x_1693_, 0);
lean_inc_ref(v_left_1711_);
v_right_1712_ = lean_ctor_get(v_x_1693_, 1);
lean_inc_ref(v_right_1712_);
lean_dec_ref_known(v_x_1693_, 2);
v___x_1713_ = lean_apply_2(v_h__5_1698_, v_left_1711_, v_right_1712_);
return v___x_1713_;
}
case 5:
{
lean_object* v_condition_1714_; lean_object* v_thenExpr_1715_; lean_object* v_elseExpr_1716_; lean_object* v___x_1717_; 
lean_dec(v_h__7_1700_);
lean_dec(v_h__5_1698_);
lean_dec(v_h__4_1697_);
lean_dec(v_h__3_1696_);
lean_dec(v_h__2_1695_);
lean_dec(v_h__1_1694_);
v_condition_1714_ = lean_ctor_get(v_x_1693_, 0);
lean_inc_ref(v_condition_1714_);
v_thenExpr_1715_ = lean_ctor_get(v_x_1693_, 1);
lean_inc_ref(v_thenExpr_1715_);
v_elseExpr_1716_ = lean_ctor_get(v_x_1693_, 2);
lean_inc_ref(v_elseExpr_1716_);
lean_dec_ref_known(v_x_1693_, 3);
v___x_1717_ = lean_apply_3(v_h__6_1699_, v_condition_1714_, v_thenExpr_1715_, v_elseExpr_1716_);
return v___x_1717_;
}
default: 
{
lean_object* v_binder_1718_; lean_object* v_value_1719_; lean_object* v_body_1720_; lean_object* v___x_1721_; 
lean_dec(v_h__6_1699_);
lean_dec(v_h__5_1698_);
lean_dec(v_h__4_1697_);
lean_dec(v_h__3_1696_);
lean_dec(v_h__2_1695_);
lean_dec(v_h__1_1694_);
v_binder_1718_ = lean_ctor_get(v_x_1693_, 0);
lean_inc(v_binder_1718_);
v_value_1719_ = lean_ctor_get(v_x_1693_, 1);
lean_inc_ref(v_value_1719_);
v_body_1720_ = lean_ctor_get(v_x_1693_, 2);
lean_inc_ref(v_body_1720_);
lean_dec_ref_known(v_x_1693_, 3);
v___x_1721_ = lean_apply_3(v_h__7_1700_, v_binder_1718_, v_value_1719_, v_body_1720_);
return v___x_1721_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__Ocl2Gratra_AdmittedPipeline_instReprCypherExpr_repr_match__1_splitter(lean_object* v_motive_1722_, lean_object* v_x_1723_, lean_object* v_h__1_1724_, lean_object* v_h__2_1725_, lean_object* v_h__3_1726_, lean_object* v_h__4_1727_, lean_object* v_h__5_1728_, lean_object* v_h__6_1729_, lean_object* v_h__7_1730_){
_start:
{
switch(lean_obj_tag(v_x_1723_))
{
case 0:
{
lean_object* v_declaration_1731_; lean_object* v___x_1732_; 
lean_dec(v_h__7_1730_);
lean_dec(v_h__6_1729_);
lean_dec(v_h__5_1728_);
lean_dec(v_h__4_1727_);
lean_dec(v_h__3_1726_);
lean_dec(v_h__2_1725_);
v_declaration_1731_ = lean_ctor_get(v_x_1723_, 0);
lean_inc(v_declaration_1731_);
lean_dec_ref_known(v_x_1723_, 1);
v___x_1732_ = lean_apply_1(v_h__1_1724_, v_declaration_1731_);
return v___x_1732_;
}
case 1:
{
uint8_t v_value_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_dec(v_h__7_1730_);
lean_dec(v_h__6_1729_);
lean_dec(v_h__5_1728_);
lean_dec(v_h__4_1727_);
lean_dec(v_h__3_1726_);
lean_dec(v_h__1_1724_);
v_value_1733_ = lean_ctor_get_uint8(v_x_1723_, 0);
lean_dec_ref_known(v_x_1723_, 0);
v___x_1734_ = lean_box(v_value_1733_);
v___x_1735_ = lean_apply_1(v_h__2_1725_, v___x_1734_);
return v___x_1735_;
}
case 2:
{
lean_object* v_body_1736_; lean_object* v___x_1737_; 
lean_dec(v_h__7_1730_);
lean_dec(v_h__6_1729_);
lean_dec(v_h__5_1728_);
lean_dec(v_h__4_1727_);
lean_dec(v_h__2_1725_);
lean_dec(v_h__1_1724_);
v_body_1736_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_body_1736_);
lean_dec_ref_known(v_x_1723_, 1);
v___x_1737_ = lean_apply_1(v_h__3_1726_, v_body_1736_);
return v___x_1737_;
}
case 3:
{
lean_object* v_left_1738_; lean_object* v_right_1739_; lean_object* v___x_1740_; 
lean_dec(v_h__7_1730_);
lean_dec(v_h__6_1729_);
lean_dec(v_h__5_1728_);
lean_dec(v_h__3_1726_);
lean_dec(v_h__2_1725_);
lean_dec(v_h__1_1724_);
v_left_1738_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_left_1738_);
v_right_1739_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_right_1739_);
lean_dec_ref_known(v_x_1723_, 2);
v___x_1740_ = lean_apply_2(v_h__4_1727_, v_left_1738_, v_right_1739_);
return v___x_1740_;
}
case 4:
{
lean_object* v_left_1741_; lean_object* v_right_1742_; lean_object* v___x_1743_; 
lean_dec(v_h__7_1730_);
lean_dec(v_h__6_1729_);
lean_dec(v_h__4_1727_);
lean_dec(v_h__3_1726_);
lean_dec(v_h__2_1725_);
lean_dec(v_h__1_1724_);
v_left_1741_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_left_1741_);
v_right_1742_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_right_1742_);
lean_dec_ref_known(v_x_1723_, 2);
v___x_1743_ = lean_apply_2(v_h__5_1728_, v_left_1741_, v_right_1742_);
return v___x_1743_;
}
case 5:
{
lean_object* v_condition_1744_; lean_object* v_thenExpr_1745_; lean_object* v_elseExpr_1746_; lean_object* v___x_1747_; 
lean_dec(v_h__7_1730_);
lean_dec(v_h__5_1728_);
lean_dec(v_h__4_1727_);
lean_dec(v_h__3_1726_);
lean_dec(v_h__2_1725_);
lean_dec(v_h__1_1724_);
v_condition_1744_ = lean_ctor_get(v_x_1723_, 0);
lean_inc_ref(v_condition_1744_);
v_thenExpr_1745_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_thenExpr_1745_);
v_elseExpr_1746_ = lean_ctor_get(v_x_1723_, 2);
lean_inc_ref(v_elseExpr_1746_);
lean_dec_ref_known(v_x_1723_, 3);
v___x_1747_ = lean_apply_3(v_h__6_1729_, v_condition_1744_, v_thenExpr_1745_, v_elseExpr_1746_);
return v___x_1747_;
}
default: 
{
lean_object* v_binder_1748_; lean_object* v_value_1749_; lean_object* v_body_1750_; lean_object* v___x_1751_; 
lean_dec(v_h__6_1729_);
lean_dec(v_h__5_1728_);
lean_dec(v_h__4_1727_);
lean_dec(v_h__3_1726_);
lean_dec(v_h__2_1725_);
lean_dec(v_h__1_1724_);
v_binder_1748_ = lean_ctor_get(v_x_1723_, 0);
lean_inc(v_binder_1748_);
v_value_1749_ = lean_ctor_get(v_x_1723_, 1);
lean_inc_ref(v_value_1749_);
v_body_1750_ = lean_ctor_get(v_x_1723_, 2);
lean_inc_ref(v_body_1750_);
lean_dec_ref_known(v_x_1723_, 3);
v___x_1751_ = lean_apply_3(v_h__7_1730_, v_binder_1748_, v_value_1749_, v_body_1750_);
return v___x_1751_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationId(lean_object* v_expression_1752_, lean_object* v_object_1753_){
_start:
{
lean_object* v_stableId_1754_; lean_object* v_environment_1755_; uint8_t v___x_1756_; uint8_t v___x_1757_; uint8_t v___x_1758_; 
v_stableId_1754_ = lean_ctor_get(v_object_1753_, 0);
lean_inc_ref(v_stableId_1754_);
v_environment_1755_ = lean_ctor_get(v_object_1753_, 1);
lean_inc_ref(v_environment_1755_);
lean_dec_ref(v_object_1753_);
v___x_1756_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalSurface(v_environment_1755_, v_expression_1752_);
v___x_1757_ = 0;
v___x_1758_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instDecidableEqBool3(v___x_1756_, v___x_1757_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; 
v___x_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1759_, 0, v_stableId_1754_);
return v___x_1759_;
}
else
{
lean_object* v___x_1760_; 
lean_dec_ref(v_stableId_1754_);
v___x_1760_ = lean_box(0);
return v___x_1760_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_cypherViolationId(lean_object* v_expression_1761_, lean_object* v_object_1762_){
_start:
{
lean_object* v_stableId_1763_; lean_object* v_environment_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; uint8_t v___x_1767_; uint8_t v___x_1768_; uint8_t v___x_1769_; 
v_stableId_1763_ = lean_ctor_get(v_object_1762_, 0);
lean_inc_ref(v_stableId_1763_);
v_environment_1764_ = lean_ctor_get(v_object_1762_, 1);
lean_inc_ref(v_environment_1764_);
lean_dec_ref(v_object_1762_);
v___x_1765_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_normalize(v_expression_1761_);
v___x_1766_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_realizeCore(v___x_1765_);
v___x_1767_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_evalCypher(v_environment_1764_, v___x_1766_);
v___x_1768_ = 0;
v___x_1769_ = lp_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene_instDecidableEqBool3(v___x_1767_, v___x_1768_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1770_, 0, v_stableId_1763_);
return v___x_1770_;
}
else
{
lean_object* v___x_1771_; 
lean_dec_ref(v_stableId_1763_);
v___x_1771_ = lean_box(0);
return v___x_1771_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_AdmittedPipeline_sourceViolationIds_spec__0(lean_object* v_expression_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_){
_start:
{
if (lean_obj_tag(v_a_1773_) == 0)
{
lean_object* v___x_1775_; 
lean_dec_ref(v_expression_1772_);
v___x_1775_ = lean_array_to_list(v_a_1774_);
return v___x_1775_;
}
else
{
lean_object* v_head_1776_; lean_object* v_tail_1777_; lean_object* v___x_1778_; 
v_head_1776_ = lean_ctor_get(v_a_1773_, 0);
lean_inc(v_head_1776_);
v_tail_1777_ = lean_ctor_get(v_a_1773_, 1);
lean_inc(v_tail_1777_);
lean_dec_ref_known(v_a_1773_, 2);
lean_inc_ref(v_expression_1772_);
v___x_1778_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationId(v_expression_1772_, v_head_1776_);
if (lean_obj_tag(v___x_1778_) == 0)
{
v_a_1773_ = v_tail_1777_;
goto _start;
}
else
{
lean_object* v_val_1780_; lean_object* v___x_1781_; 
v_val_1780_ = lean_ctor_get(v___x_1778_, 0);
lean_inc(v_val_1780_);
lean_dec_ref_known(v___x_1778_, 1);
v___x_1781_ = lean_array_push(v_a_1774_, v_val_1780_);
v_a_1773_ = v_tail_1777_;
v_a_1774_ = v___x_1781_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationIds(lean_object* v_expression_1785_, lean_object* v_objects_1786_){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationIds___closed__0));
v___x_1788_ = lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_AdmittedPipeline_sourceViolationIds_spec__0(v_expression_1785_, v_objects_1786_, v___x_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_AdmittedPipeline_cypherViolationIds_spec__0(lean_object* v_expression_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_){
_start:
{
if (lean_obj_tag(v_a_1790_) == 0)
{
lean_object* v___x_1792_; 
lean_dec_ref(v_expression_1789_);
v___x_1792_ = lean_array_to_list(v_a_1791_);
return v___x_1792_;
}
else
{
lean_object* v_head_1793_; lean_object* v_tail_1794_; lean_object* v___x_1795_; 
v_head_1793_ = lean_ctor_get(v_a_1790_, 0);
lean_inc(v_head_1793_);
v_tail_1794_ = lean_ctor_get(v_a_1790_, 1);
lean_inc(v_tail_1794_);
lean_dec_ref_known(v_a_1790_, 2);
lean_inc_ref(v_expression_1789_);
v___x_1795_ = lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_cypherViolationId(v_expression_1789_, v_head_1793_);
if (lean_obj_tag(v___x_1795_) == 0)
{
v_a_1790_ = v_tail_1794_;
goto _start;
}
else
{
lean_object* v_val_1797_; lean_object* v___x_1798_; 
v_val_1797_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_val_1797_);
lean_dec_ref_known(v___x_1795_, 1);
v___x_1798_ = lean_array_push(v_a_1791_, v_val_1797_);
v_a_1790_ = v_tail_1794_;
v_a_1791_ = v___x_1798_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_cypherViolationIds(lean_object* v_expression_1800_, lean_object* v_objects_1801_){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline_sourceViolationIds___closed__0));
v___x_1803_ = lp_Ocl2CypherProof_List_filterMapTR_go___at___00Ocl2Gratra_AdmittedPipeline_cypherViolationIds_spec__0(v_expression_1800_, v_objects_1801_, v___x_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__List_filterMap_match__1_splitter___redArg(lean_object* v_x_1804_, lean_object* v_h__1_1805_, lean_object* v_h__2_1806_){
_start:
{
if (lean_obj_tag(v_x_1804_) == 0)
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
lean_dec(v_h__2_1806_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_apply_1(v_h__1_1805_, v___x_1807_);
return v___x_1808_;
}
else
{
lean_object* v_val_1809_; lean_object* v___x_1810_; 
lean_dec(v_h__1_1805_);
v_val_1809_ = lean_ctor_get(v_x_1804_, 0);
lean_inc(v_val_1809_);
lean_dec_ref_known(v_x_1804_, 1);
v___x_1810_ = lean_apply_1(v_h__2_1806_, v_val_1809_);
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_AdmittedPipeline_0__List_filterMap_match__1_splitter(lean_object* v_00_u03b2_1811_, lean_object* v_motive_1812_, lean_object* v_x_1813_, lean_object* v_h__1_1814_, lean_object* v_h__2_1815_){
_start:
{
if (lean_obj_tag(v_x_1813_) == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
lean_dec(v_h__2_1815_);
v___x_1816_ = lean_box(0);
v___x_1817_ = lean_apply_1(v_h__1_1814_, v___x_1816_);
return v___x_1817_;
}
else
{
lean_object* v_val_1818_; lean_object* v___x_1819_; 
lean_dec(v_h__1_1814_);
v_val_1818_ = lean_ctor_get(v_x_1813_, 0);
lean_inc(v_val_1818_);
lean_dec_ref_known(v_x_1813_, 1);
v___x_1819_ = lean_apply_1(v_h__2_1815_, v_val_1818_);
return v___x_1819_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_Boolean3Kleene(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_ProductionQSyntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_AdmittedPipeline(uint8_t builtin) {
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
res = initialize_Ocl2CypherProof_Ocl2Gratra_ProductionQSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
