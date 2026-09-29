// Lean compiler output
// Module: Ocl2Gratra.FullP3P4
// Imports: public import Init public meta import Init public import Ocl2Gratra.ProductionQSyntax
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_variable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_variable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_parameter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_parameter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_bottom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_bottom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_constant_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_constant_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_coerce_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_coerce_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_letExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_letExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ifExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ifExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_readAttribute_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_readAttribute_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_navigateOne_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_navigateOne_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeTest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeTest_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeCast_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeCast_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_unary_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_unary_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_binary_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_binary_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_exists3_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_exists3_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_forAll3_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_forAll3_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_collectionLiteral_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_collectionLiteral_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_includesFamily_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_includesFamily_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_countFamily_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_countFamily_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_setAlgebra_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_setAlgebra_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_materialize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_materialize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_fromCollection_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_fromCollection_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_scanClass_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_scanClass_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_navigateMany_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_navigateMany_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_filter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_filter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_collect_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_collect_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_distinct_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_distinct_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_planLet_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_planLet_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__0 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__0_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__1 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__1_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "implies"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__2 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__2_value;
static const lean_string_object lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "implies.normalized"};
static const lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__3 = (const lean_object*)&lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_normalizeExpr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__List_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__List_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizePlan_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizePlan_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_lowerExpr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_variable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_variable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_parameter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_parameter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_bottom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_bottom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_constant_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_constant_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_coerce_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_coerce_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_letExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_letExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ifExpr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ifExpr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_readAttribute_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_readAttribute_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_navigateOne_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_navigateOne_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeTest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeTest_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeCast_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeCast_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_unary_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_unary_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_binary_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_binary_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_exists3_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_exists3_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_forAll3_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_forAll3_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_collectionLiteral_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_collectionLiteral_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_includesFamily_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_includesFamily_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_countFamily_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_countFamily_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_setAlgebra_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_setAlgebra_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_materialize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_materialize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_fromCollection_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_fromCollection_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_scanClass_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_scanClass_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_navigateMany_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_navigateMany_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_filter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_filter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_collect_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_collect_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_distinct_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_distinct_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_planLet_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_planLet_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_realizeExpr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_realizeExpr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_realizeExpr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_serialize(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_serialize___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_parse(lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalArtifact___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalArtifact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___redArg(lean_object* v_environment_1_, lean_object* v_declaration_2_, lean_object* v_value_3_, lean_object* v_candidate_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_eq(v_candidate_4_, v_declaration_2_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_apply_1(v_environment_1_, v_candidate_4_);
return v___x_6_;
}
else
{
lean_dec(v_candidate_4_);
lean_dec(v_environment_1_);
lean_inc(v_value_3_);
return v_value_3_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___redArg___boxed(lean_object* v_environment_7_, lean_object* v_declaration_8_, lean_object* v_value_9_, lean_object* v_candidate_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___redArg(v_environment_7_, v_declaration_8_, v_value_9_, v_candidate_10_);
lean_dec(v_value_9_);
lean_dec(v_declaration_8_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind(lean_object* v_Value_12_, lean_object* v_environment_13_, lean_object* v_declaration_14_, lean_object* v_value_15_, lean_object* v_candidate_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___redArg(v_environment_13_, v_declaration_14_, v_value_15_, v_candidate_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed(lean_object* v_Value_18_, lean_object* v_environment_19_, lean_object* v_declaration_20_, lean_object* v_value_21_, lean_object* v_candidate_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind(v_Value_18_, v_environment_19_, v_declaration_20_, v_value_21_, v_candidate_22_);
lean_dec(v_value_21_);
lean_dec(v_declaration_20_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorIdx(lean_object* v_x_24_){
_start:
{
switch(lean_obj_tag(v_x_24_))
{
case 0:
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(0u);
return v___x_25_;
}
case 1:
{
lean_object* v___x_26_; 
v___x_26_ = lean_unsigned_to_nat(1u);
return v___x_26_;
}
case 2:
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(2u);
return v___x_27_;
}
case 3:
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(3u);
return v___x_28_;
}
case 4:
{
lean_object* v___x_29_; 
v___x_29_ = lean_unsigned_to_nat(4u);
return v___x_29_;
}
case 5:
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(5u);
return v___x_30_;
}
case 6:
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(6u);
return v___x_31_;
}
case 7:
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(7u);
return v___x_32_;
}
case 8:
{
lean_object* v___x_33_; 
v___x_33_ = lean_unsigned_to_nat(8u);
return v___x_33_;
}
case 9:
{
lean_object* v___x_34_; 
v___x_34_ = lean_unsigned_to_nat(9u);
return v___x_34_;
}
case 10:
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(10u);
return v___x_35_;
}
case 11:
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(11u);
return v___x_36_;
}
case 12:
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(12u);
return v___x_37_;
}
case 13:
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(13u);
return v___x_38_;
}
case 14:
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(14u);
return v___x_39_;
}
case 15:
{
lean_object* v___x_40_; 
v___x_40_ = lean_unsigned_to_nat(15u);
return v___x_40_;
}
case 16:
{
lean_object* v___x_41_; 
v___x_41_ = lean_unsigned_to_nat(16u);
return v___x_41_;
}
case 17:
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(17u);
return v___x_42_;
}
case 18:
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(18u);
return v___x_43_;
}
default: 
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(19u);
return v___x_44_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorIdx___boxed(lean_object* v_x_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorIdx(v_x_45_);
lean_dec_ref(v_x_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(lean_object* v_t_47_, lean_object* v_k_48_){
_start:
{
switch(lean_obj_tag(v_t_47_))
{
case 0:
{
lean_object* v_declarationId_49_; lean_object* v___x_50_; 
v_declarationId_49_ = lean_ctor_get(v_t_47_, 0);
lean_inc(v_declarationId_49_);
lean_dec_ref_known(v_t_47_, 1);
v___x_50_ = lean_apply_1(v_k_48_, v_declarationId_49_);
return v___x_50_;
}
case 1:
{
lean_object* v_name_51_; lean_object* v___x_52_; 
v_name_51_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_name_51_);
lean_dec_ref_known(v_t_47_, 1);
v___x_52_ = lean_apply_1(v_k_48_, v_name_51_);
return v___x_52_;
}
case 2:
{
lean_object* v_type_53_; lean_object* v___x_54_; 
v_type_53_ = lean_ctor_get(v_t_47_, 0);
lean_inc(v_type_53_);
lean_dec_ref_known(v_t_47_, 1);
v___x_54_ = lean_apply_1(v_k_48_, v_type_53_);
return v___x_54_;
}
case 3:
{
lean_object* v_value_55_; lean_object* v___x_56_; 
v_value_55_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_value_55_);
lean_dec_ref_known(v_t_47_, 1);
v___x_56_ = lean_apply_1(v_k_48_, v_value_55_);
return v___x_56_;
}
case 4:
{
lean_object* v_coercion_57_; lean_object* v_source_58_; lean_object* v___x_59_; 
v_coercion_57_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_coercion_57_);
v_source_58_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_source_58_);
lean_dec_ref_known(v_t_47_, 2);
v___x_59_ = lean_apply_2(v_k_48_, v_coercion_57_, v_source_58_);
return v___x_59_;
}
case 5:
{
lean_object* v_binderId_60_; lean_object* v_value_61_; lean_object* v_body_62_; lean_object* v___x_63_; 
v_binderId_60_ = lean_ctor_get(v_t_47_, 0);
lean_inc(v_binderId_60_);
v_value_61_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_value_61_);
v_body_62_ = lean_ctor_get(v_t_47_, 2);
lean_inc_ref(v_body_62_);
lean_dec_ref_known(v_t_47_, 3);
v___x_63_ = lean_apply_3(v_k_48_, v_binderId_60_, v_value_61_, v_body_62_);
return v___x_63_;
}
case 8:
{
lean_object* v_source_64_; lean_object* v_association_65_; lean_object* v_role_66_; lean_object* v_qualifiers_67_; uint8_t v_reverse_68_; uint8_t v_associationClass_69_; uint8_t v_viaAssociationClass_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_source_64_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_source_64_);
v_association_65_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_association_65_);
v_role_66_ = lean_ctor_get(v_t_47_, 2);
lean_inc_ref(v_role_66_);
v_qualifiers_67_ = lean_ctor_get(v_t_47_, 3);
lean_inc(v_qualifiers_67_);
v_reverse_68_ = lean_ctor_get_uint8(v_t_47_, sizeof(void*)*4);
v_associationClass_69_ = lean_ctor_get_uint8(v_t_47_, sizeof(void*)*4 + 1);
v_viaAssociationClass_70_ = lean_ctor_get_uint8(v_t_47_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_t_47_, 4);
v___x_71_ = lean_box(v_reverse_68_);
v___x_72_ = lean_box(v_associationClass_69_);
v___x_73_ = lean_box(v_viaAssociationClass_70_);
v___x_74_ = lean_apply_7(v_k_48_, v_source_64_, v_association_65_, v_role_66_, v_qualifiers_67_, v___x_71_, v___x_72_, v___x_73_);
return v___x_74_;
}
case 9:
{
lean_object* v_source_75_; lean_object* v_targetClass_76_; uint8_t v_exact_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v_source_75_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_source_75_);
v_targetClass_76_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_targetClass_76_);
v_exact_77_ = lean_ctor_get_uint8(v_t_47_, sizeof(void*)*2);
lean_dec_ref_known(v_t_47_, 2);
v___x_78_ = lean_box(v_exact_77_);
v___x_79_ = lean_apply_3(v_k_48_, v_source_75_, v_targetClass_76_, v___x_78_);
return v___x_79_;
}
case 10:
{
lean_object* v_source_80_; lean_object* v_targetClass_81_; lean_object* v___x_82_; 
v_source_80_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_source_80_);
v_targetClass_81_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_targetClass_81_);
lean_dec_ref_known(v_t_47_, 2);
v___x_82_ = lean_apply_2(v_k_48_, v_source_80_, v_targetClass_81_);
return v___x_82_;
}
case 11:
{
lean_object* v_operator_83_; lean_object* v_operand_84_; lean_object* v___x_85_; 
v_operator_83_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_operator_83_);
v_operand_84_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_operand_84_);
lean_dec_ref_known(v_t_47_, 2);
v___x_85_ = lean_apply_2(v_k_48_, v_operator_83_, v_operand_84_);
return v___x_85_;
}
case 13:
{
lean_object* v_source_86_; lean_object* v_iteratorId_87_; lean_object* v_predicate_88_; lean_object* v___x_89_; 
v_source_86_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_source_86_);
v_iteratorId_87_ = lean_ctor_get(v_t_47_, 1);
lean_inc(v_iteratorId_87_);
v_predicate_88_ = lean_ctor_get(v_t_47_, 2);
lean_inc_ref(v_predicate_88_);
lean_dec_ref_known(v_t_47_, 3);
v___x_89_ = lean_apply_3(v_k_48_, v_source_86_, v_iteratorId_87_, v_predicate_88_);
return v___x_89_;
}
case 14:
{
lean_object* v_source_90_; lean_object* v_iteratorId_91_; lean_object* v_predicate_92_; lean_object* v___x_93_; 
v_source_90_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_source_90_);
v_iteratorId_91_ = lean_ctor_get(v_t_47_, 1);
lean_inc(v_iteratorId_91_);
v_predicate_92_ = lean_ctor_get(v_t_47_, 2);
lean_inc_ref(v_predicate_92_);
lean_dec_ref_known(v_t_47_, 3);
v___x_93_ = lean_apply_3(v_k_48_, v_source_90_, v_iteratorId_91_, v_predicate_92_);
return v___x_93_;
}
case 15:
{
uint8_t v_kind_94_; lean_object* v_elements_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_kind_94_ = lean_ctor_get_uint8(v_t_47_, sizeof(void*)*1);
v_elements_95_ = lean_ctor_get(v_t_47_, 0);
lean_inc(v_elements_95_);
lean_dec_ref_known(v_t_47_, 1);
v___x_96_ = lean_box(v_kind_94_);
v___x_97_ = lean_apply_2(v_k_48_, v___x_96_, v_elements_95_);
return v___x_97_;
}
case 17:
{
lean_object* v_operation_98_; lean_object* v_source_99_; lean_object* v_element_100_; lean_object* v___x_101_; 
v_operation_98_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_operation_98_);
v_source_99_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_source_99_);
v_element_100_ = lean_ctor_get(v_t_47_, 2);
lean_inc(v_element_100_);
lean_dec_ref_known(v_t_47_, 3);
v___x_101_ = lean_apply_3(v_k_48_, v_operation_98_, v_source_99_, v_element_100_);
return v___x_101_;
}
case 19:
{
lean_object* v_plan_102_; lean_object* v___x_103_; 
v_plan_102_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_plan_102_);
lean_dec_ref_known(v_t_47_, 1);
v___x_103_ = lean_apply_1(v_k_48_, v_plan_102_);
return v___x_103_;
}
default: 
{
lean_object* v_condition_104_; lean_object* v_thenExpr_105_; lean_object* v_elseExpr_106_; lean_object* v___x_107_; 
v_condition_104_ = lean_ctor_get(v_t_47_, 0);
lean_inc_ref(v_condition_104_);
v_thenExpr_105_ = lean_ctor_get(v_t_47_, 1);
lean_inc_ref(v_thenExpr_105_);
v_elseExpr_106_ = lean_ctor_get(v_t_47_, 2);
lean_inc_ref(v_elseExpr_106_);
lean_dec_ref(v_t_47_);
v___x_107_ = lean_apply_3(v_k_48_, v_condition_104_, v_thenExpr_105_, v_elseExpr_106_);
return v___x_107_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim(lean_object* v_motive__1_108_, lean_object* v_ctorIdx_109_, lean_object* v_t_110_, lean_object* v_h_111_, lean_object* v_k_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_110_, v_k_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___boxed(lean_object* v_motive__1_114_, lean_object* v_ctorIdx_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_k_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim(v_motive__1_114_, v_ctorIdx_115_, v_t_116_, v_h_117_, v_k_118_);
lean_dec(v_ctorIdx_115_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_variable_elim___redArg(lean_object* v_t_120_, lean_object* v_variable_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_120_, v_variable_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_variable_elim(lean_object* v_motive__1_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_variable_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_124_, v_variable_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_parameter_elim___redArg(lean_object* v_t_128_, lean_object* v_parameter_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_128_, v_parameter_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_parameter_elim(lean_object* v_motive__1_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_parameter_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_132_, v_parameter_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_bottom_elim___redArg(lean_object* v_t_136_, lean_object* v_bottom_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_136_, v_bottom_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_bottom_elim(lean_object* v_motive__1_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_bottom_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_140_, v_bottom_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_constant_elim___redArg(lean_object* v_t_144_, lean_object* v_constant_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_144_, v_constant_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_constant_elim(lean_object* v_motive__1_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_constant_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_148_, v_constant_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_coerce_elim___redArg(lean_object* v_t_152_, lean_object* v_coerce_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_152_, v_coerce_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_coerce_elim(lean_object* v_motive__1_155_, lean_object* v_t_156_, lean_object* v_h_157_, lean_object* v_coerce_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_156_, v_coerce_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_letExpr_elim___redArg(lean_object* v_t_160_, lean_object* v_letExpr_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_160_, v_letExpr_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_letExpr_elim(lean_object* v_motive__1_163_, lean_object* v_t_164_, lean_object* v_h_165_, lean_object* v_letExpr_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_164_, v_letExpr_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ifExpr_elim___redArg(lean_object* v_t_168_, lean_object* v_ifExpr_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_168_, v_ifExpr_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ifExpr_elim(lean_object* v_motive__1_171_, lean_object* v_t_172_, lean_object* v_h_173_, lean_object* v_ifExpr_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_172_, v_ifExpr_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_readAttribute_elim___redArg(lean_object* v_t_176_, lean_object* v_readAttribute_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_176_, v_readAttribute_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_readAttribute_elim(lean_object* v_motive__1_179_, lean_object* v_t_180_, lean_object* v_h_181_, lean_object* v_readAttribute_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_180_, v_readAttribute_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_navigateOne_elim___redArg(lean_object* v_t_184_, lean_object* v_navigateOne_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_184_, v_navigateOne_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_navigateOne_elim(lean_object* v_motive__1_187_, lean_object* v_t_188_, lean_object* v_h_189_, lean_object* v_navigateOne_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_188_, v_navigateOne_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeTest_elim___redArg(lean_object* v_t_192_, lean_object* v_typeTest_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_192_, v_typeTest_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeTest_elim(lean_object* v_motive__1_195_, lean_object* v_t_196_, lean_object* v_h_197_, lean_object* v_typeTest_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_196_, v_typeTest_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeCast_elim___redArg(lean_object* v_t_200_, lean_object* v_typeCast_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_200_, v_typeCast_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_typeCast_elim(lean_object* v_motive__1_203_, lean_object* v_t_204_, lean_object* v_h_205_, lean_object* v_typeCast_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_204_, v_typeCast_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_unary_elim___redArg(lean_object* v_t_208_, lean_object* v_unary_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_208_, v_unary_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_unary_elim(lean_object* v_motive__1_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_unary_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_212_, v_unary_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_binary_elim___redArg(lean_object* v_t_216_, lean_object* v_binary_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_216_, v_binary_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_binary_elim(lean_object* v_motive__1_219_, lean_object* v_t_220_, lean_object* v_h_221_, lean_object* v_binary_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_220_, v_binary_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_exists3_elim___redArg(lean_object* v_t_224_, lean_object* v_exists3_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_224_, v_exists3_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_exists3_elim(lean_object* v_motive__1_227_, lean_object* v_t_228_, lean_object* v_h_229_, lean_object* v_exists3_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_228_, v_exists3_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_forAll3_elim___redArg(lean_object* v_t_232_, lean_object* v_forAll3_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_232_, v_forAll3_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_forAll3_elim(lean_object* v_motive__1_235_, lean_object* v_t_236_, lean_object* v_h_237_, lean_object* v_forAll3_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_236_, v_forAll3_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_collectionLiteral_elim___redArg(lean_object* v_t_240_, lean_object* v_collectionLiteral_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_240_, v_collectionLiteral_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_collectionLiteral_elim(lean_object* v_motive__1_243_, lean_object* v_t_244_, lean_object* v_h_245_, lean_object* v_collectionLiteral_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_244_, v_collectionLiteral_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_includesFamily_elim___redArg(lean_object* v_t_248_, lean_object* v_includesFamily_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_248_, v_includesFamily_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_includesFamily_elim(lean_object* v_motive__1_251_, lean_object* v_t_252_, lean_object* v_h_253_, lean_object* v_includesFamily_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_252_, v_includesFamily_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_countFamily_elim___redArg(lean_object* v_t_256_, lean_object* v_countFamily_257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_256_, v_countFamily_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_countFamily_elim(lean_object* v_motive__1_259_, lean_object* v_t_260_, lean_object* v_h_261_, lean_object* v_countFamily_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_260_, v_countFamily_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_setAlgebra_elim___redArg(lean_object* v_t_264_, lean_object* v_setAlgebra_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_264_, v_setAlgebra_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_setAlgebra_elim(lean_object* v_motive__1_267_, lean_object* v_t_268_, lean_object* v_h_269_, lean_object* v_setAlgebra_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_268_, v_setAlgebra_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_materialize_elim___redArg(lean_object* v_t_272_, lean_object* v_materialize_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_272_, v_materialize_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_materialize_elim(lean_object* v_motive__1_275_, lean_object* v_t_276_, lean_object* v_h_277_, lean_object* v_materialize_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CoreExpr_ctorElim___redArg(v_t_276_, v_materialize_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorIdx(lean_object* v_x_280_){
_start:
{
switch(lean_obj_tag(v_x_280_))
{
case 0:
{
lean_object* v___x_281_; 
v___x_281_ = lean_unsigned_to_nat(0u);
return v___x_281_;
}
case 1:
{
lean_object* v___x_282_; 
v___x_282_ = lean_unsigned_to_nat(1u);
return v___x_282_;
}
case 2:
{
lean_object* v___x_283_; 
v___x_283_ = lean_unsigned_to_nat(2u);
return v___x_283_;
}
case 3:
{
lean_object* v___x_284_; 
v___x_284_ = lean_unsigned_to_nat(3u);
return v___x_284_;
}
case 4:
{
lean_object* v___x_285_; 
v___x_285_ = lean_unsigned_to_nat(4u);
return v___x_285_;
}
case 5:
{
lean_object* v___x_286_; 
v___x_286_ = lean_unsigned_to_nat(5u);
return v___x_286_;
}
default: 
{
lean_object* v___x_287_; 
v___x_287_ = lean_unsigned_to_nat(6u);
return v___x_287_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorIdx___boxed(lean_object* v_x_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorIdx(v_x_288_);
lean_dec_ref(v_x_288_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(lean_object* v_t_290_, lean_object* v_k_291_){
_start:
{
switch(lean_obj_tag(v_t_290_))
{
case 1:
{
lean_object* v_classKey_292_; lean_object* v_declarationId_293_; lean_object* v___x_294_; 
v_classKey_292_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_classKey_292_);
v_declarationId_293_ = lean_ctor_get(v_t_290_, 1);
lean_inc(v_declarationId_293_);
lean_dec_ref_known(v_t_290_, 2);
v___x_294_ = lean_apply_2(v_k_291_, v_classKey_292_, v_declarationId_293_);
return v___x_294_;
}
case 2:
{
lean_object* v_source_295_; lean_object* v_association_296_; lean_object* v_role_297_; lean_object* v_qualifiers_298_; uint8_t v_reverse_299_; uint8_t v_associationClass_300_; uint8_t v_viaAssociationClass_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_source_295_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_source_295_);
v_association_296_ = lean_ctor_get(v_t_290_, 1);
lean_inc_ref(v_association_296_);
v_role_297_ = lean_ctor_get(v_t_290_, 2);
lean_inc_ref(v_role_297_);
v_qualifiers_298_ = lean_ctor_get(v_t_290_, 3);
lean_inc(v_qualifiers_298_);
v_reverse_299_ = lean_ctor_get_uint8(v_t_290_, sizeof(void*)*4);
v_associationClass_300_ = lean_ctor_get_uint8(v_t_290_, sizeof(void*)*4 + 1);
v_viaAssociationClass_301_ = lean_ctor_get_uint8(v_t_290_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_t_290_, 4);
v___x_302_ = lean_box(v_reverse_299_);
v___x_303_ = lean_box(v_associationClass_300_);
v___x_304_ = lean_box(v_viaAssociationClass_301_);
v___x_305_ = lean_apply_7(v_k_291_, v_source_295_, v_association_296_, v_role_297_, v_qualifiers_298_, v___x_302_, v___x_303_, v___x_304_);
return v___x_305_;
}
case 3:
{
lean_object* v_source_306_; lean_object* v_iteratorId_307_; lean_object* v_predicate_308_; uint8_t v_isSelect_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_source_306_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_source_306_);
v_iteratorId_307_ = lean_ctor_get(v_t_290_, 1);
lean_inc(v_iteratorId_307_);
v_predicate_308_ = lean_ctor_get(v_t_290_, 2);
lean_inc_ref(v_predicate_308_);
v_isSelect_309_ = lean_ctor_get_uint8(v_t_290_, sizeof(void*)*3);
lean_dec_ref_known(v_t_290_, 3);
v___x_310_ = lean_box(v_isSelect_309_);
v___x_311_ = lean_apply_4(v_k_291_, v_source_306_, v_iteratorId_307_, v_predicate_308_, v___x_310_);
return v___x_311_;
}
case 4:
{
lean_object* v_source_312_; lean_object* v_iteratorId_313_; lean_object* v_body_314_; lean_object* v___x_315_; 
v_source_312_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_source_312_);
v_iteratorId_313_ = lean_ctor_get(v_t_290_, 1);
lean_inc(v_iteratorId_313_);
v_body_314_ = lean_ctor_get(v_t_290_, 2);
lean_inc_ref(v_body_314_);
lean_dec_ref_known(v_t_290_, 3);
v___x_315_ = lean_apply_3(v_k_291_, v_source_312_, v_iteratorId_313_, v_body_314_);
return v___x_315_;
}
case 6:
{
lean_object* v_binderId_316_; lean_object* v_value_317_; lean_object* v_body_318_; lean_object* v___x_319_; 
v_binderId_316_ = lean_ctor_get(v_t_290_, 0);
lean_inc(v_binderId_316_);
v_value_317_ = lean_ctor_get(v_t_290_, 1);
lean_inc_ref(v_value_317_);
v_body_318_ = lean_ctor_get(v_t_290_, 2);
lean_inc_ref(v_body_318_);
lean_dec_ref_known(v_t_290_, 3);
v___x_319_ = lean_apply_3(v_k_291_, v_binderId_316_, v_value_317_, v_body_318_);
return v___x_319_;
}
default: 
{
lean_object* v_collection_320_; lean_object* v___x_321_; 
v_collection_320_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_collection_320_);
lean_dec_ref(v_t_290_);
v___x_321_ = lean_apply_1(v_k_291_, v_collection_320_);
return v___x_321_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim(lean_object* v_motive__2_322_, lean_object* v_ctorIdx_323_, lean_object* v_t_324_, lean_object* v_h_325_, lean_object* v_k_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_324_, v_k_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___boxed(lean_object* v_motive__2_328_, lean_object* v_ctorIdx_329_, lean_object* v_t_330_, lean_object* v_h_331_, lean_object* v_k_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim(v_motive__2_328_, v_ctorIdx_329_, v_t_330_, v_h_331_, v_k_332_);
lean_dec(v_ctorIdx_329_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_fromCollection_elim___redArg(lean_object* v_t_334_, lean_object* v_fromCollection_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_334_, v_fromCollection_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_fromCollection_elim(lean_object* v_motive__2_337_, lean_object* v_t_338_, lean_object* v_h_339_, lean_object* v_fromCollection_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_338_, v_fromCollection_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_scanClass_elim___redArg(lean_object* v_t_342_, lean_object* v_scanClass_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_342_, v_scanClass_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_scanClass_elim(lean_object* v_motive__2_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_scanClass_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_346_, v_scanClass_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_navigateMany_elim___redArg(lean_object* v_t_350_, lean_object* v_navigateMany_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_350_, v_navigateMany_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_navigateMany_elim(lean_object* v_motive__2_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_navigateMany_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_354_, v_navigateMany_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_filter_elim___redArg(lean_object* v_t_358_, lean_object* v_filter_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_358_, v_filter_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_filter_elim(lean_object* v_motive__2_361_, lean_object* v_t_362_, lean_object* v_h_363_, lean_object* v_filter_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_362_, v_filter_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_collect_elim___redArg(lean_object* v_t_366_, lean_object* v_collect_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_366_, v_collect_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_collect_elim(lean_object* v_motive__2_369_, lean_object* v_t_370_, lean_object* v_h_371_, lean_object* v_collect_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_370_, v_collect_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_distinct_elim___redArg(lean_object* v_t_374_, lean_object* v_distinct_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_374_, v_distinct_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_distinct_elim(lean_object* v_motive__2_377_, lean_object* v_t_378_, lean_object* v_h_379_, lean_object* v_distinct_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_378_, v_distinct_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_planLet_elim___redArg(lean_object* v_t_382_, lean_object* v_planLet_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_382_, v_planLet_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_planLet_elim(lean_object* v_motive__2_385_, lean_object* v_t_386_, lean_object* v_h_387_, lean_object* v_planLet_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_CorePlan_ctorElim___redArg(v_t_386_, v_planLet_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg(lean_object* v_semantics_394_, lean_object* v_operator_395_, lean_object* v_left_396_, lean_object* v_right_397_){
_start:
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__2));
v___x_406_ = lean_string_dec_eq(v_operator_395_, v___x_405_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_407_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__3));
v___x_408_ = lean_string_dec_eq(v_operator_395_, v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v_binary_409_; lean_object* v___x_410_; 
v_binary_409_ = lean_ctor_get(v_semantics_394_, 12);
lean_inc(v_binary_409_);
lean_dec_ref(v_semantics_394_);
v___x_410_ = lean_apply_3(v_binary_409_, v_operator_395_, v_left_396_, v_right_397_);
return v___x_410_;
}
else
{
lean_dec_ref(v_operator_395_);
goto v___jp_398_;
}
}
else
{
lean_dec_ref(v_operator_395_);
goto v___jp_398_;
}
v___jp_398_:
{
lean_object* v_unary_399_; lean_object* v_binary_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v_unary_399_ = lean_ctor_get(v_semantics_394_, 11);
lean_inc(v_unary_399_);
v_binary_400_ = lean_ctor_get(v_semantics_394_, 12);
lean_inc(v_binary_400_);
lean_dec_ref(v_semantics_394_);
v___x_401_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__0));
v___x_402_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__1));
v___x_403_ = lean_apply_2(v_unary_399_, v___x_402_, v_left_396_);
v___x_404_ = lean_apply_3(v_binary_400_, v___x_401_, v___x_403_, v_right_397_);
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary(lean_object* v_Value_411_, lean_object* v_Collection_412_, lean_object* v_semantics_413_, lean_object* v_operator_414_, lean_object* v_left_415_, lean_object* v_right_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg(v_semantics_413_, v_operator_414_, v_left_415_, v_right_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(lean_object* v_x_418_){
_start:
{
switch(lean_obj_tag(v_x_418_))
{
case 0:
{
lean_object* v_collection_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_427_; 
v_collection_419_ = lean_ctor_get(v_x_418_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_427_ == 0)
{
v___x_421_ = v_x_418_;
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_collection_419_);
lean_dec(v_x_418_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_collection_419_);
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 0, v___x_423_);
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
case 1:
{
return v_x_418_;
}
case 2:
{
lean_object* v_source_428_; lean_object* v_association_429_; lean_object* v_role_430_; lean_object* v_qualifiers_431_; uint8_t v_reverse_432_; uint8_t v_associationClass_433_; uint8_t v_viaAssociationClass_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_444_; 
v_source_428_ = lean_ctor_get(v_x_418_, 0);
v_association_429_ = lean_ctor_get(v_x_418_, 1);
v_role_430_ = lean_ctor_get(v_x_418_, 2);
v_qualifiers_431_ = lean_ctor_get(v_x_418_, 3);
v_reverse_432_ = lean_ctor_get_uint8(v_x_418_, sizeof(void*)*4);
v_associationClass_433_ = lean_ctor_get_uint8(v_x_418_, sizeof(void*)*4 + 1);
v_viaAssociationClass_434_ = lean_ctor_get_uint8(v_x_418_, sizeof(void*)*4 + 2);
v_isSharedCheck_444_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_444_ == 0)
{
v___x_436_ = v_x_418_;
v_isShared_437_ = v_isSharedCheck_444_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_qualifiers_431_);
lean_inc(v_role_430_);
lean_inc(v_association_429_);
lean_inc(v_source_428_);
lean_dec(v_x_418_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_444_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_438_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_428_);
v___x_439_ = lean_box(0);
v___x_440_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_normalizeExpr_spec__0(v_qualifiers_431_, v___x_439_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 3, v___x_440_);
lean_ctor_set(v___x_436_, 0, v___x_438_);
v___x_442_ = v___x_436_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(2, 4, 3);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_association_429_);
lean_ctor_set(v_reuseFailAlloc_443_, 2, v_role_430_);
lean_ctor_set(v_reuseFailAlloc_443_, 3, v___x_440_);
lean_ctor_set_uint8(v_reuseFailAlloc_443_, sizeof(void*)*4, v_reverse_432_);
lean_ctor_set_uint8(v_reuseFailAlloc_443_, sizeof(void*)*4 + 1, v_associationClass_433_);
lean_ctor_set_uint8(v_reuseFailAlloc_443_, sizeof(void*)*4 + 2, v_viaAssociationClass_434_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
case 3:
{
lean_object* v_source_445_; lean_object* v_iteratorId_446_; lean_object* v_predicate_447_; uint8_t v_isSelect_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_457_; 
v_source_445_ = lean_ctor_get(v_x_418_, 0);
v_iteratorId_446_ = lean_ctor_get(v_x_418_, 1);
v_predicate_447_ = lean_ctor_get(v_x_418_, 2);
v_isSelect_448_ = lean_ctor_get_uint8(v_x_418_, sizeof(void*)*3);
v_isSharedCheck_457_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_457_ == 0)
{
v___x_450_ = v_x_418_;
v_isShared_451_ = v_isSharedCheck_457_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_predicate_447_);
lean_inc(v_iteratorId_446_);
lean_inc(v_source_445_);
lean_dec(v_x_418_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_457_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_455_; 
v___x_452_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(v_source_445_);
v___x_453_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_predicate_447_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 2, v___x_453_);
lean_ctor_set(v___x_450_, 0, v___x_452_);
v___x_455_ = v___x_450_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_iteratorId_446_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v___x_453_);
lean_ctor_set_uint8(v_reuseFailAlloc_456_, sizeof(void*)*3, v_isSelect_448_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
case 4:
{
lean_object* v_source_458_; lean_object* v_iteratorId_459_; lean_object* v_body_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_469_; 
v_source_458_ = lean_ctor_get(v_x_418_, 0);
v_iteratorId_459_ = lean_ctor_get(v_x_418_, 1);
v_body_460_ = lean_ctor_get(v_x_418_, 2);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_469_ == 0)
{
v___x_462_ = v_x_418_;
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_body_460_);
lean_inc(v_iteratorId_459_);
lean_inc(v_source_458_);
lean_dec(v_x_418_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_464_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(v_source_458_);
v___x_465_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_body_460_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 2, v___x_465_);
lean_ctor_set(v___x_462_, 0, v___x_464_);
v___x_467_ = v___x_462_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_iteratorId_459_);
lean_ctor_set(v_reuseFailAlloc_468_, 2, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
case 5:
{
lean_object* v_source_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_478_; 
v_source_470_ = lean_ctor_get(v_x_418_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_478_ == 0)
{
v___x_472_ = v_x_418_;
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_source_470_);
lean_dec(v_x_418_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(v_source_470_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_474_);
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
default: 
{
lean_object* v_binderId_479_; lean_object* v_value_480_; lean_object* v_body_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_490_; 
v_binderId_479_ = lean_ctor_get(v_x_418_, 0);
v_value_480_ = lean_ctor_get(v_x_418_, 1);
v_body_481_ = lean_ctor_get(v_x_418_, 2);
v_isSharedCheck_490_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_490_ == 0)
{
v___x_483_ = v_x_418_;
v_isShared_484_ = v_isSharedCheck_490_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_body_481_);
lean_inc(v_value_480_);
lean_inc(v_binderId_479_);
lean_dec(v_x_418_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_490_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_485_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_value_480_);
v___x_486_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(v_body_481_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 2, v___x_486_);
lean_ctor_set(v___x_483_, 1, v___x_485_);
v___x_488_ = v___x_483_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_binderId_479_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_489_, 2, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(lean_object* v_x_491_){
_start:
{
switch(lean_obj_tag(v_x_491_))
{
case 4:
{
lean_object* v_coercion_492_; lean_object* v_source_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_501_; 
v_coercion_492_ = lean_ctor_get(v_x_491_, 0);
v_source_493_ = lean_ctor_get(v_x_491_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_501_ == 0)
{
v___x_495_ = v_x_491_;
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_source_493_);
lean_inc(v_coercion_492_);
lean_dec(v_x_491_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_497_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_493_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 1, v___x_497_);
v___x_499_ = v___x_495_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_coercion_492_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v___x_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
case 5:
{
lean_object* v_binderId_502_; lean_object* v_value_503_; lean_object* v_body_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_513_; 
v_binderId_502_ = lean_ctor_get(v_x_491_, 0);
v_value_503_ = lean_ctor_get(v_x_491_, 1);
v_body_504_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_513_ == 0)
{
v___x_506_ = v_x_491_;
v_isShared_507_ = v_isSharedCheck_513_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_body_504_);
lean_inc(v_value_503_);
lean_inc(v_binderId_502_);
lean_dec(v_x_491_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_513_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_508_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_value_503_);
v___x_509_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_body_504_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 2, v___x_509_);
lean_ctor_set(v___x_506_, 1, v___x_508_);
v___x_511_ = v___x_506_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_binderId_502_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v___x_508_);
lean_ctor_set(v_reuseFailAlloc_512_, 2, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
case 6:
{
lean_object* v_condition_514_; lean_object* v_thenExpr_515_; lean_object* v_elseExpr_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_526_; 
v_condition_514_ = lean_ctor_get(v_x_491_, 0);
v_thenExpr_515_ = lean_ctor_get(v_x_491_, 1);
v_elseExpr_516_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_526_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_526_ == 0)
{
v___x_518_ = v_x_491_;
v_isShared_519_ = v_isSharedCheck_526_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_elseExpr_516_);
lean_inc(v_thenExpr_515_);
lean_inc(v_condition_514_);
lean_dec(v_x_491_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_526_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_520_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_condition_514_);
v___x_521_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_thenExpr_515_);
v___x_522_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_elseExpr_516_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 2, v___x_522_);
lean_ctor_set(v___x_518_, 1, v___x_521_);
lean_ctor_set(v___x_518_, 0, v___x_520_);
v___x_524_ = v___x_518_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
case 7:
{
lean_object* v_source_527_; lean_object* v_ownerClass_528_; lean_object* v_attributeName_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_537_; 
v_source_527_ = lean_ctor_get(v_x_491_, 0);
v_ownerClass_528_ = lean_ctor_get(v_x_491_, 1);
v_attributeName_529_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_537_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_537_ == 0)
{
v___x_531_ = v_x_491_;
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_attributeName_529_);
lean_inc(v_ownerClass_528_);
lean_inc(v_source_527_);
lean_dec(v_x_491_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_533_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_527_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v___x_533_);
v___x_535_ = v___x_531_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(7, 3, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v_ownerClass_528_);
lean_ctor_set(v_reuseFailAlloc_536_, 2, v_attributeName_529_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
case 8:
{
lean_object* v_source_538_; lean_object* v_association_539_; lean_object* v_role_540_; lean_object* v_qualifiers_541_; uint8_t v_reverse_542_; uint8_t v_associationClass_543_; uint8_t v_viaAssociationClass_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_554_; 
v_source_538_ = lean_ctor_get(v_x_491_, 0);
v_association_539_ = lean_ctor_get(v_x_491_, 1);
v_role_540_ = lean_ctor_get(v_x_491_, 2);
v_qualifiers_541_ = lean_ctor_get(v_x_491_, 3);
v_reverse_542_ = lean_ctor_get_uint8(v_x_491_, sizeof(void*)*4);
v_associationClass_543_ = lean_ctor_get_uint8(v_x_491_, sizeof(void*)*4 + 1);
v_viaAssociationClass_544_ = lean_ctor_get_uint8(v_x_491_, sizeof(void*)*4 + 2);
v_isSharedCheck_554_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_554_ == 0)
{
v___x_546_ = v_x_491_;
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_qualifiers_541_);
lean_inc(v_role_540_);
lean_inc(v_association_539_);
lean_inc(v_source_538_);
lean_dec(v_x_491_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_548_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_538_);
v___x_549_ = lean_box(0);
v___x_550_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_normalizeExpr_spec__0(v_qualifiers_541_, v___x_549_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 3, v___x_550_);
lean_ctor_set(v___x_546_, 0, v___x_548_);
v___x_552_ = v___x_546_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(8, 4, 3);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_association_539_);
lean_ctor_set(v_reuseFailAlloc_553_, 2, v_role_540_);
lean_ctor_set(v_reuseFailAlloc_553_, 3, v___x_550_);
lean_ctor_set_uint8(v_reuseFailAlloc_553_, sizeof(void*)*4, v_reverse_542_);
lean_ctor_set_uint8(v_reuseFailAlloc_553_, sizeof(void*)*4 + 1, v_associationClass_543_);
lean_ctor_set_uint8(v_reuseFailAlloc_553_, sizeof(void*)*4 + 2, v_viaAssociationClass_544_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
case 9:
{
lean_object* v_source_555_; lean_object* v_targetClass_556_; uint8_t v_exact_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_565_; 
v_source_555_ = lean_ctor_get(v_x_491_, 0);
v_targetClass_556_ = lean_ctor_get(v_x_491_, 1);
v_exact_557_ = lean_ctor_get_uint8(v_x_491_, sizeof(void*)*2);
v_isSharedCheck_565_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_565_ == 0)
{
v___x_559_ = v_x_491_;
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_targetClass_556_);
lean_inc(v_source_555_);
lean_dec(v_x_491_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; lean_object* v___x_563_; 
v___x_561_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_555_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_561_);
v___x_563_ = v___x_559_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(9, 2, 1);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_561_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_targetClass_556_);
lean_ctor_set_uint8(v_reuseFailAlloc_564_, sizeof(void*)*2, v_exact_557_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
case 10:
{
lean_object* v_source_566_; lean_object* v_targetClass_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_575_; 
v_source_566_ = lean_ctor_get(v_x_491_, 0);
v_targetClass_567_ = lean_ctor_get(v_x_491_, 1);
v_isSharedCheck_575_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_575_ == 0)
{
v___x_569_ = v_x_491_;
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_targetClass_567_);
lean_inc(v_source_566_);
lean_dec(v_x_491_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_571_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_566_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 0, v___x_571_);
v___x_573_ = v___x_569_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_targetClass_567_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
case 11:
{
lean_object* v_operator_576_; lean_object* v_operand_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_585_; 
v_operator_576_ = lean_ctor_get(v_x_491_, 0);
v_operand_577_ = lean_ctor_get(v_x_491_, 1);
v_isSharedCheck_585_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_585_ == 0)
{
v___x_579_ = v_x_491_;
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_operand_577_);
lean_inc(v_operator_576_);
lean_dec(v_x_491_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_581_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_operand_577_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 1, v___x_581_);
v___x_583_ = v___x_579_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_operator_576_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v___x_581_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
case 12:
{
lean_object* v_operator_586_; lean_object* v_left_587_; lean_object* v_right_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_603_; 
v_operator_586_ = lean_ctor_get(v_x_491_, 0);
v_left_587_ = lean_ctor_get(v_x_491_, 1);
v_right_588_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_603_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_603_ == 0)
{
v___x_590_ = v_x_491_;
v_isShared_591_ = v_isSharedCheck_603_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_right_588_);
lean_inc(v_left_587_);
lean_inc(v_operator_586_);
lean_dec(v_x_491_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_603_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v_normalizedLeft_592_; lean_object* v_normalizedRight_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v_normalizedLeft_592_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_left_587_);
v_normalizedRight_593_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_right_588_);
v___x_594_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__2));
v___x_595_ = lean_string_dec_eq(v_operator_586_, v___x_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_597_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 2, v_normalizedRight_593_);
lean_ctor_set(v___x_590_, 1, v_normalizedLeft_592_);
v___x_597_ = v___x_590_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_operator_586_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_normalizedLeft_592_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v_normalizedRight_593_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
else
{
lean_object* v___x_599_; lean_object* v___x_601_; 
lean_dec_ref(v_operator_586_);
v___x_599_ = ((lean_object*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg___closed__3));
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 2, v_normalizedRight_593_);
lean_ctor_set(v___x_590_, 1, v_normalizedLeft_592_);
lean_ctor_set(v___x_590_, 0, v___x_599_);
v___x_601_ = v___x_590_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_599_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_normalizedLeft_592_);
lean_ctor_set(v_reuseFailAlloc_602_, 2, v_normalizedRight_593_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
case 13:
{
lean_object* v_source_604_; lean_object* v_iteratorId_605_; lean_object* v_predicate_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_615_; 
v_source_604_ = lean_ctor_get(v_x_491_, 0);
v_iteratorId_605_ = lean_ctor_get(v_x_491_, 1);
v_predicate_606_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_615_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_615_ == 0)
{
v___x_608_ = v_x_491_;
v_isShared_609_ = v_isSharedCheck_615_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_predicate_606_);
lean_inc(v_iteratorId_605_);
lean_inc(v_source_604_);
lean_dec(v_x_491_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_615_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_610_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(v_source_604_);
v___x_611_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_predicate_606_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 2, v___x_611_);
lean_ctor_set(v___x_608_, 0, v___x_610_);
v___x_613_ = v___x_608_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(13, 3, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v_iteratorId_605_);
lean_ctor_set(v_reuseFailAlloc_614_, 2, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
case 14:
{
lean_object* v_source_616_; lean_object* v_iteratorId_617_; lean_object* v_predicate_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_627_; 
v_source_616_ = lean_ctor_get(v_x_491_, 0);
v_iteratorId_617_ = lean_ctor_get(v_x_491_, 1);
v_predicate_618_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_627_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_627_ == 0)
{
v___x_620_ = v_x_491_;
v_isShared_621_ = v_isSharedCheck_627_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_predicate_618_);
lean_inc(v_iteratorId_617_);
lean_inc(v_source_616_);
lean_dec(v_x_491_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_627_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_622_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(v_source_616_);
v___x_623_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_predicate_618_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 2, v___x_623_);
lean_ctor_set(v___x_620_, 0, v___x_622_);
v___x_625_ = v___x_620_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(14, 3, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_iteratorId_617_);
lean_ctor_set(v_reuseFailAlloc_626_, 2, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
case 15:
{
uint8_t v_kind_628_; lean_object* v_elements_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_638_; 
v_kind_628_ = lean_ctor_get_uint8(v_x_491_, sizeof(void*)*1);
v_elements_629_ = lean_ctor_get(v_x_491_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_638_ == 0)
{
v___x_631_ = v_x_491_;
v_isShared_632_ = v_isSharedCheck_638_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_elements_629_);
lean_dec(v_x_491_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_638_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_633_ = lean_box(0);
v___x_634_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_normalizeExpr_spec__0(v_elements_629_, v___x_633_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v___x_634_);
v___x_636_ = v___x_631_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(15, 1, 1);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_634_);
lean_ctor_set_uint8(v_reuseFailAlloc_637_, sizeof(void*)*1, v_kind_628_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
case 16:
{
lean_object* v_operation_639_; lean_object* v_source_640_; lean_object* v_element_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_650_; 
v_operation_639_ = lean_ctor_get(v_x_491_, 0);
v_source_640_ = lean_ctor_get(v_x_491_, 1);
v_element_641_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_650_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_650_ == 0)
{
v___x_643_ = v_x_491_;
v_isShared_644_ = v_isSharedCheck_650_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_element_641_);
lean_inc(v_source_640_);
lean_inc(v_operation_639_);
lean_dec(v_x_491_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_650_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_648_; 
v___x_645_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_640_);
v___x_646_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_element_641_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 2, v___x_646_);
lean_ctor_set(v___x_643_, 1, v___x_645_);
v___x_648_ = v___x_643_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(16, 3, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_operation_639_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_649_, 2, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
case 17:
{
lean_object* v_operation_651_; lean_object* v_source_652_; lean_object* v_element_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_673_; 
v_operation_651_ = lean_ctor_get(v_x_491_, 0);
v_source_652_ = lean_ctor_get(v_x_491_, 1);
v_element_653_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_673_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_673_ == 0)
{
v___x_655_ = v_x_491_;
v_isShared_656_ = v_isSharedCheck_673_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_element_653_);
lean_inc(v_source_652_);
lean_inc(v_operation_651_);
lean_dec(v_x_491_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_673_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; 
v___x_657_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_source_652_);
if (lean_obj_tag(v_element_653_) == 0)
{
lean_object* v___x_659_; 
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 1, v___x_657_);
v___x_659_ = v___x_655_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_operation_651_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v___x_657_);
lean_ctor_set(v_reuseFailAlloc_660_, 2, v_element_653_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
else
{
lean_object* v_val_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_672_; 
v_val_661_ = lean_ctor_get(v_element_653_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v_element_653_);
if (v_isSharedCheck_672_ == 0)
{
v___x_663_ = v_element_653_;
v_isShared_664_ = v_isSharedCheck_672_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_val_661_);
lean_dec(v_element_653_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_672_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_665_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_val_661_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v___x_665_);
v___x_667_ = v___x_663_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_665_);
v___x_667_ = v_reuseFailAlloc_671_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_669_; 
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 2, v___x_667_);
lean_ctor_set(v___x_655_, 1, v___x_657_);
v___x_669_ = v___x_655_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_operation_651_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v___x_657_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v___x_667_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
}
}
case 18:
{
lean_object* v_operation_674_; lean_object* v_left_675_; lean_object* v_right_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_685_; 
v_operation_674_ = lean_ctor_get(v_x_491_, 0);
v_left_675_ = lean_ctor_get(v_x_491_, 1);
v_right_676_ = lean_ctor_get(v_x_491_, 2);
v_isSharedCheck_685_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_685_ == 0)
{
v___x_678_ = v_x_491_;
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_right_676_);
lean_inc(v_left_675_);
lean_inc(v_operation_674_);
lean_dec(v_x_491_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_680_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_left_675_);
v___x_681_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_right_676_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 2, v___x_681_);
lean_ctor_set(v___x_678_, 1, v___x_680_);
v___x_683_ = v___x_678_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(18, 3, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_operation_674_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
case 19:
{
lean_object* v_plan_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_694_; 
v_plan_686_ = lean_ctor_get(v_x_491_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_694_ == 0)
{
v___x_688_ = v_x_491_;
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_plan_686_);
lean_dec(v_x_491_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizePlan(v_plan_686_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_690_);
v___x_692_ = v___x_688_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(19, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_690_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
default: 
{
return v_x_491_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_normalizeExpr_spec__0(lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
if (lean_obj_tag(v_a_695_) == 0)
{
lean_object* v___x_697_; 
v___x_697_ = l_List_reverse___redArg(v_a_696_);
return v___x_697_;
}
else
{
lean_object* v_head_698_; lean_object* v_tail_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_708_; 
v_head_698_ = lean_ctor_get(v_a_695_, 0);
v_tail_699_ = lean_ctor_get(v_a_695_, 1);
v_isSharedCheck_708_ = !lean_is_exclusive(v_a_695_);
if (v_isSharedCheck_708_ == 0)
{
v___x_701_ = v_a_695_;
v_isShared_702_ = v_isSharedCheck_708_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_tail_699_);
lean_inc(v_head_698_);
lean_dec(v_a_695_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_708_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_703_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_normalizeExpr(v_head_698_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v_a_696_);
lean_ctor_set(v___x_701_, 0, v___x_703_);
v___x_705_ = v___x_701_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_a_696_);
v___x_705_ = v_reuseFailAlloc_707_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
v_a_695_ = v_tail_699_;
v_a_696_ = v___x_705_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter___redArg(lean_object* v_x_709_, lean_object* v_h__1_710_, lean_object* v_h__2_711_, lean_object* v_h__3_712_, lean_object* v_h__4_713_, lean_object* v_h__5_714_, lean_object* v_h__6_715_, lean_object* v_h__7_716_, lean_object* v_h__8_717_, lean_object* v_h__9_718_, lean_object* v_h__10_719_, lean_object* v_h__11_720_, lean_object* v_h__12_721_, lean_object* v_h__13_722_, lean_object* v_h__14_723_, lean_object* v_h__15_724_, lean_object* v_h__16_725_, lean_object* v_h__17_726_, lean_object* v_h__18_727_, lean_object* v_h__19_728_, lean_object* v_h__20_729_){
_start:
{
switch(lean_obj_tag(v_x_709_))
{
case 0:
{
lean_object* v_declarationId_730_; lean_object* v___x_731_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
v_declarationId_730_ = lean_ctor_get(v_x_709_, 0);
lean_inc(v_declarationId_730_);
lean_dec_ref_known(v_x_709_, 1);
v___x_731_ = lean_apply_1(v_h__1_710_, v_declarationId_730_);
return v___x_731_;
}
case 1:
{
lean_object* v_name_732_; lean_object* v___x_733_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__1_710_);
v_name_732_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_name_732_);
lean_dec_ref_known(v_x_709_, 1);
v___x_733_ = lean_apply_1(v_h__2_711_, v_name_732_);
return v___x_733_;
}
case 2:
{
lean_object* v_type_734_; lean_object* v___x_735_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_type_734_ = lean_ctor_get(v_x_709_, 0);
lean_inc(v_type_734_);
lean_dec_ref_known(v_x_709_, 1);
v___x_735_ = lean_apply_1(v_h__3_712_, v_type_734_);
return v___x_735_;
}
case 3:
{
lean_object* v_value_736_; lean_object* v___x_737_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_value_736_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_value_736_);
lean_dec_ref_known(v_x_709_, 1);
v___x_737_ = lean_apply_1(v_h__4_713_, v_value_736_);
return v___x_737_;
}
case 4:
{
lean_object* v_coercion_738_; lean_object* v_source_739_; lean_object* v___x_740_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_coercion_738_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_coercion_738_);
v_source_739_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_source_739_);
lean_dec_ref_known(v_x_709_, 2);
v___x_740_ = lean_apply_2(v_h__5_714_, v_coercion_738_, v_source_739_);
return v___x_740_;
}
case 5:
{
lean_object* v_binderId_741_; lean_object* v_value_742_; lean_object* v_body_743_; lean_object* v___x_744_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_binderId_741_ = lean_ctor_get(v_x_709_, 0);
lean_inc(v_binderId_741_);
v_value_742_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_value_742_);
v_body_743_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_body_743_);
lean_dec_ref_known(v_x_709_, 3);
v___x_744_ = lean_apply_3(v_h__6_715_, v_binderId_741_, v_value_742_, v_body_743_);
return v___x_744_;
}
case 6:
{
lean_object* v_condition_745_; lean_object* v_thenExpr_746_; lean_object* v_elseExpr_747_; lean_object* v___x_748_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_condition_745_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_condition_745_);
v_thenExpr_746_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_thenExpr_746_);
v_elseExpr_747_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_elseExpr_747_);
lean_dec_ref_known(v_x_709_, 3);
v___x_748_ = lean_apply_3(v_h__7_716_, v_condition_745_, v_thenExpr_746_, v_elseExpr_747_);
return v___x_748_;
}
case 7:
{
lean_object* v_source_749_; lean_object* v_ownerClass_750_; lean_object* v_attributeName_751_; lean_object* v___x_752_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_source_749_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_source_749_);
v_ownerClass_750_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_ownerClass_750_);
v_attributeName_751_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_attributeName_751_);
lean_dec_ref_known(v_x_709_, 3);
v___x_752_ = lean_apply_3(v_h__8_717_, v_source_749_, v_ownerClass_750_, v_attributeName_751_);
return v___x_752_;
}
case 8:
{
lean_object* v_source_753_; lean_object* v_association_754_; lean_object* v_role_755_; lean_object* v_qualifiers_756_; uint8_t v_reverse_757_; uint8_t v_associationClass_758_; uint8_t v_viaAssociationClass_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_source_753_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_source_753_);
v_association_754_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_association_754_);
v_role_755_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_role_755_);
v_qualifiers_756_ = lean_ctor_get(v_x_709_, 3);
lean_inc(v_qualifiers_756_);
v_reverse_757_ = lean_ctor_get_uint8(v_x_709_, sizeof(void*)*4);
v_associationClass_758_ = lean_ctor_get_uint8(v_x_709_, sizeof(void*)*4 + 1);
v_viaAssociationClass_759_ = lean_ctor_get_uint8(v_x_709_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_709_, 4);
v___x_760_ = lean_box(v_reverse_757_);
v___x_761_ = lean_box(v_associationClass_758_);
v___x_762_ = lean_box(v_viaAssociationClass_759_);
v___x_763_ = lean_apply_7(v_h__9_718_, v_source_753_, v_association_754_, v_role_755_, v_qualifiers_756_, v___x_760_, v___x_761_, v___x_762_);
return v___x_763_;
}
case 9:
{
lean_object* v_source_764_; lean_object* v_targetClass_765_; uint8_t v_exact_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_source_764_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_source_764_);
v_targetClass_765_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_targetClass_765_);
v_exact_766_ = lean_ctor_get_uint8(v_x_709_, sizeof(void*)*2);
lean_dec_ref_known(v_x_709_, 2);
v___x_767_ = lean_box(v_exact_766_);
v___x_768_ = lean_apply_3(v_h__10_719_, v_source_764_, v_targetClass_765_, v___x_767_);
return v___x_768_;
}
case 10:
{
lean_object* v_source_769_; lean_object* v_targetClass_770_; lean_object* v___x_771_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_source_769_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_source_769_);
v_targetClass_770_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_targetClass_770_);
lean_dec_ref_known(v_x_709_, 2);
v___x_771_ = lean_apply_2(v_h__11_720_, v_source_769_, v_targetClass_770_);
return v___x_771_;
}
case 11:
{
lean_object* v_operator_772_; lean_object* v_operand_773_; lean_object* v___x_774_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_operator_772_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_operator_772_);
v_operand_773_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_operand_773_);
lean_dec_ref_known(v_x_709_, 2);
v___x_774_ = lean_apply_2(v_h__12_721_, v_operator_772_, v_operand_773_);
return v___x_774_;
}
case 12:
{
lean_object* v_operator_775_; lean_object* v_left_776_; lean_object* v_right_777_; lean_object* v___x_778_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_operator_775_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_operator_775_);
v_left_776_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_left_776_);
v_right_777_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_right_777_);
lean_dec_ref_known(v_x_709_, 3);
v___x_778_ = lean_apply_3(v_h__13_722_, v_operator_775_, v_left_776_, v_right_777_);
return v___x_778_;
}
case 13:
{
lean_object* v_source_779_; lean_object* v_iteratorId_780_; lean_object* v_predicate_781_; lean_object* v___x_782_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_source_779_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_source_779_);
v_iteratorId_780_ = lean_ctor_get(v_x_709_, 1);
lean_inc(v_iteratorId_780_);
v_predicate_781_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_predicate_781_);
lean_dec_ref_known(v_x_709_, 3);
v___x_782_ = lean_apply_3(v_h__14_723_, v_source_779_, v_iteratorId_780_, v_predicate_781_);
return v___x_782_;
}
case 14:
{
lean_object* v_source_783_; lean_object* v_iteratorId_784_; lean_object* v_predicate_785_; lean_object* v___x_786_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_source_783_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_source_783_);
v_iteratorId_784_ = lean_ctor_get(v_x_709_, 1);
lean_inc(v_iteratorId_784_);
v_predicate_785_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_predicate_785_);
lean_dec_ref_known(v_x_709_, 3);
v___x_786_ = lean_apply_3(v_h__15_724_, v_source_783_, v_iteratorId_784_, v_predicate_785_);
return v___x_786_;
}
case 15:
{
uint8_t v_kind_787_; lean_object* v_elements_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_kind_787_ = lean_ctor_get_uint8(v_x_709_, sizeof(void*)*1);
v_elements_788_ = lean_ctor_get(v_x_709_, 0);
lean_inc(v_elements_788_);
lean_dec_ref_known(v_x_709_, 1);
v___x_789_ = lean_box(v_kind_787_);
v___x_790_ = lean_apply_2(v_h__16_725_, v___x_789_, v_elements_788_);
return v___x_790_;
}
case 16:
{
lean_object* v_operation_791_; lean_object* v_source_792_; lean_object* v_element_793_; lean_object* v___x_794_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_operation_791_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_operation_791_);
v_source_792_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_source_792_);
v_element_793_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_element_793_);
lean_dec_ref_known(v_x_709_, 3);
v___x_794_ = lean_apply_3(v_h__17_726_, v_operation_791_, v_source_792_, v_element_793_);
return v___x_794_;
}
case 17:
{
lean_object* v_operation_795_; lean_object* v_source_796_; lean_object* v_element_797_; lean_object* v___x_798_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__19_728_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_operation_795_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_operation_795_);
v_source_796_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_source_796_);
v_element_797_ = lean_ctor_get(v_x_709_, 2);
lean_inc(v_element_797_);
lean_dec_ref_known(v_x_709_, 3);
v___x_798_ = lean_apply_3(v_h__18_727_, v_operation_795_, v_source_796_, v_element_797_);
return v___x_798_;
}
case 18:
{
lean_object* v_operation_799_; lean_object* v_left_800_; lean_object* v_right_801_; lean_object* v___x_802_; 
lean_dec(v_h__20_729_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_operation_799_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_operation_799_);
v_left_800_ = lean_ctor_get(v_x_709_, 1);
lean_inc_ref(v_left_800_);
v_right_801_ = lean_ctor_get(v_x_709_, 2);
lean_inc_ref(v_right_801_);
lean_dec_ref_known(v_x_709_, 3);
v___x_802_ = lean_apply_3(v_h__19_728_, v_operation_799_, v_left_800_, v_right_801_);
return v___x_802_;
}
default: 
{
lean_object* v_plan_803_; lean_object* v___x_804_; 
lean_dec(v_h__19_728_);
lean_dec(v_h__18_727_);
lean_dec(v_h__17_726_);
lean_dec(v_h__16_725_);
lean_dec(v_h__15_724_);
lean_dec(v_h__14_723_);
lean_dec(v_h__13_722_);
lean_dec(v_h__12_721_);
lean_dec(v_h__11_720_);
lean_dec(v_h__10_719_);
lean_dec(v_h__9_718_);
lean_dec(v_h__8_717_);
lean_dec(v_h__7_716_);
lean_dec(v_h__6_715_);
lean_dec(v_h__5_714_);
lean_dec(v_h__4_713_);
lean_dec(v_h__3_712_);
lean_dec(v_h__2_711_);
lean_dec(v_h__1_710_);
v_plan_803_ = lean_ctor_get(v_x_709_, 0);
lean_inc_ref(v_plan_803_);
lean_dec_ref_known(v_x_709_, 1);
v___x_804_ = lean_apply_1(v_h__20_729_, v_plan_803_);
return v___x_804_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter___redArg___boxed(lean_object** _args){
lean_object* v_x_805_ = _args[0];
lean_object* v_h__1_806_ = _args[1];
lean_object* v_h__2_807_ = _args[2];
lean_object* v_h__3_808_ = _args[3];
lean_object* v_h__4_809_ = _args[4];
lean_object* v_h__5_810_ = _args[5];
lean_object* v_h__6_811_ = _args[6];
lean_object* v_h__7_812_ = _args[7];
lean_object* v_h__8_813_ = _args[8];
lean_object* v_h__9_814_ = _args[9];
lean_object* v_h__10_815_ = _args[10];
lean_object* v_h__11_816_ = _args[11];
lean_object* v_h__12_817_ = _args[12];
lean_object* v_h__13_818_ = _args[13];
lean_object* v_h__14_819_ = _args[14];
lean_object* v_h__15_820_ = _args[15];
lean_object* v_h__16_821_ = _args[16];
lean_object* v_h__17_822_ = _args[17];
lean_object* v_h__18_823_ = _args[18];
lean_object* v_h__19_824_ = _args[19];
lean_object* v_h__20_825_ = _args[20];
_start:
{
lean_object* v_res_826_; 
v_res_826_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter___redArg(v_x_805_, v_h__1_806_, v_h__2_807_, v_h__3_808_, v_h__4_809_, v_h__5_810_, v_h__6_811_, v_h__7_812_, v_h__8_813_, v_h__9_814_, v_h__10_815_, v_h__11_816_, v_h__12_817_, v_h__13_818_, v_h__14_819_, v_h__15_820_, v_h__16_821_, v_h__17_822_, v_h__18_823_, v_h__19_824_, v_h__20_825_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter(lean_object* v_motive_827_, lean_object* v_x_828_, lean_object* v_h__1_829_, lean_object* v_h__2_830_, lean_object* v_h__3_831_, lean_object* v_h__4_832_, lean_object* v_h__5_833_, lean_object* v_h__6_834_, lean_object* v_h__7_835_, lean_object* v_h__8_836_, lean_object* v_h__9_837_, lean_object* v_h__10_838_, lean_object* v_h__11_839_, lean_object* v_h__12_840_, lean_object* v_h__13_841_, lean_object* v_h__14_842_, lean_object* v_h__15_843_, lean_object* v_h__16_844_, lean_object* v_h__17_845_, lean_object* v_h__18_846_, lean_object* v_h__19_847_, lean_object* v_h__20_848_){
_start:
{
switch(lean_obj_tag(v_x_828_))
{
case 0:
{
lean_object* v_declarationId_849_; lean_object* v___x_850_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
v_declarationId_849_ = lean_ctor_get(v_x_828_, 0);
lean_inc(v_declarationId_849_);
lean_dec_ref_known(v_x_828_, 1);
v___x_850_ = lean_apply_1(v_h__1_829_, v_declarationId_849_);
return v___x_850_;
}
case 1:
{
lean_object* v_name_851_; lean_object* v___x_852_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__1_829_);
v_name_851_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_name_851_);
lean_dec_ref_known(v_x_828_, 1);
v___x_852_ = lean_apply_1(v_h__2_830_, v_name_851_);
return v___x_852_;
}
case 2:
{
lean_object* v_type_853_; lean_object* v___x_854_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_type_853_ = lean_ctor_get(v_x_828_, 0);
lean_inc(v_type_853_);
lean_dec_ref_known(v_x_828_, 1);
v___x_854_ = lean_apply_1(v_h__3_831_, v_type_853_);
return v___x_854_;
}
case 3:
{
lean_object* v_value_855_; lean_object* v___x_856_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_value_855_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_value_855_);
lean_dec_ref_known(v_x_828_, 1);
v___x_856_ = lean_apply_1(v_h__4_832_, v_value_855_);
return v___x_856_;
}
case 4:
{
lean_object* v_coercion_857_; lean_object* v_source_858_; lean_object* v___x_859_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_coercion_857_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_coercion_857_);
v_source_858_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_source_858_);
lean_dec_ref_known(v_x_828_, 2);
v___x_859_ = lean_apply_2(v_h__5_833_, v_coercion_857_, v_source_858_);
return v___x_859_;
}
case 5:
{
lean_object* v_binderId_860_; lean_object* v_value_861_; lean_object* v_body_862_; lean_object* v___x_863_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_binderId_860_ = lean_ctor_get(v_x_828_, 0);
lean_inc(v_binderId_860_);
v_value_861_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_value_861_);
v_body_862_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_body_862_);
lean_dec_ref_known(v_x_828_, 3);
v___x_863_ = lean_apply_3(v_h__6_834_, v_binderId_860_, v_value_861_, v_body_862_);
return v___x_863_;
}
case 6:
{
lean_object* v_condition_864_; lean_object* v_thenExpr_865_; lean_object* v_elseExpr_866_; lean_object* v___x_867_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_condition_864_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_condition_864_);
v_thenExpr_865_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_thenExpr_865_);
v_elseExpr_866_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_elseExpr_866_);
lean_dec_ref_known(v_x_828_, 3);
v___x_867_ = lean_apply_3(v_h__7_835_, v_condition_864_, v_thenExpr_865_, v_elseExpr_866_);
return v___x_867_;
}
case 7:
{
lean_object* v_source_868_; lean_object* v_ownerClass_869_; lean_object* v_attributeName_870_; lean_object* v___x_871_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_source_868_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_source_868_);
v_ownerClass_869_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_ownerClass_869_);
v_attributeName_870_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_attributeName_870_);
lean_dec_ref_known(v_x_828_, 3);
v___x_871_ = lean_apply_3(v_h__8_836_, v_source_868_, v_ownerClass_869_, v_attributeName_870_);
return v___x_871_;
}
case 8:
{
lean_object* v_source_872_; lean_object* v_association_873_; lean_object* v_role_874_; lean_object* v_qualifiers_875_; uint8_t v_reverse_876_; uint8_t v_associationClass_877_; uint8_t v_viaAssociationClass_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_source_872_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_source_872_);
v_association_873_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_association_873_);
v_role_874_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_role_874_);
v_qualifiers_875_ = lean_ctor_get(v_x_828_, 3);
lean_inc(v_qualifiers_875_);
v_reverse_876_ = lean_ctor_get_uint8(v_x_828_, sizeof(void*)*4);
v_associationClass_877_ = lean_ctor_get_uint8(v_x_828_, sizeof(void*)*4 + 1);
v_viaAssociationClass_878_ = lean_ctor_get_uint8(v_x_828_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_828_, 4);
v___x_879_ = lean_box(v_reverse_876_);
v___x_880_ = lean_box(v_associationClass_877_);
v___x_881_ = lean_box(v_viaAssociationClass_878_);
v___x_882_ = lean_apply_7(v_h__9_837_, v_source_872_, v_association_873_, v_role_874_, v_qualifiers_875_, v___x_879_, v___x_880_, v___x_881_);
return v___x_882_;
}
case 9:
{
lean_object* v_source_883_; lean_object* v_targetClass_884_; uint8_t v_exact_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_source_883_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_source_883_);
v_targetClass_884_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_targetClass_884_);
v_exact_885_ = lean_ctor_get_uint8(v_x_828_, sizeof(void*)*2);
lean_dec_ref_known(v_x_828_, 2);
v___x_886_ = lean_box(v_exact_885_);
v___x_887_ = lean_apply_3(v_h__10_838_, v_source_883_, v_targetClass_884_, v___x_886_);
return v___x_887_;
}
case 10:
{
lean_object* v_source_888_; lean_object* v_targetClass_889_; lean_object* v___x_890_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_source_888_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_source_888_);
v_targetClass_889_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_targetClass_889_);
lean_dec_ref_known(v_x_828_, 2);
v___x_890_ = lean_apply_2(v_h__11_839_, v_source_888_, v_targetClass_889_);
return v___x_890_;
}
case 11:
{
lean_object* v_operator_891_; lean_object* v_operand_892_; lean_object* v___x_893_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_operator_891_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_operator_891_);
v_operand_892_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_operand_892_);
lean_dec_ref_known(v_x_828_, 2);
v___x_893_ = lean_apply_2(v_h__12_840_, v_operator_891_, v_operand_892_);
return v___x_893_;
}
case 12:
{
lean_object* v_operator_894_; lean_object* v_left_895_; lean_object* v_right_896_; lean_object* v___x_897_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_operator_894_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_operator_894_);
v_left_895_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_left_895_);
v_right_896_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_right_896_);
lean_dec_ref_known(v_x_828_, 3);
v___x_897_ = lean_apply_3(v_h__13_841_, v_operator_894_, v_left_895_, v_right_896_);
return v___x_897_;
}
case 13:
{
lean_object* v_source_898_; lean_object* v_iteratorId_899_; lean_object* v_predicate_900_; lean_object* v___x_901_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_source_898_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_source_898_);
v_iteratorId_899_ = lean_ctor_get(v_x_828_, 1);
lean_inc(v_iteratorId_899_);
v_predicate_900_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_predicate_900_);
lean_dec_ref_known(v_x_828_, 3);
v___x_901_ = lean_apply_3(v_h__14_842_, v_source_898_, v_iteratorId_899_, v_predicate_900_);
return v___x_901_;
}
case 14:
{
lean_object* v_source_902_; lean_object* v_iteratorId_903_; lean_object* v_predicate_904_; lean_object* v___x_905_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_source_902_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_source_902_);
v_iteratorId_903_ = lean_ctor_get(v_x_828_, 1);
lean_inc(v_iteratorId_903_);
v_predicate_904_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_predicate_904_);
lean_dec_ref_known(v_x_828_, 3);
v___x_905_ = lean_apply_3(v_h__15_843_, v_source_902_, v_iteratorId_903_, v_predicate_904_);
return v___x_905_;
}
case 15:
{
uint8_t v_kind_906_; lean_object* v_elements_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_kind_906_ = lean_ctor_get_uint8(v_x_828_, sizeof(void*)*1);
v_elements_907_ = lean_ctor_get(v_x_828_, 0);
lean_inc(v_elements_907_);
lean_dec_ref_known(v_x_828_, 1);
v___x_908_ = lean_box(v_kind_906_);
v___x_909_ = lean_apply_2(v_h__16_844_, v___x_908_, v_elements_907_);
return v___x_909_;
}
case 16:
{
lean_object* v_operation_910_; lean_object* v_source_911_; lean_object* v_element_912_; lean_object* v___x_913_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_operation_910_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_operation_910_);
v_source_911_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_source_911_);
v_element_912_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_element_912_);
lean_dec_ref_known(v_x_828_, 3);
v___x_913_ = lean_apply_3(v_h__17_845_, v_operation_910_, v_source_911_, v_element_912_);
return v___x_913_;
}
case 17:
{
lean_object* v_operation_914_; lean_object* v_source_915_; lean_object* v_element_916_; lean_object* v___x_917_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__19_847_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_operation_914_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_operation_914_);
v_source_915_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_source_915_);
v_element_916_ = lean_ctor_get(v_x_828_, 2);
lean_inc(v_element_916_);
lean_dec_ref_known(v_x_828_, 3);
v___x_917_ = lean_apply_3(v_h__18_846_, v_operation_914_, v_source_915_, v_element_916_);
return v___x_917_;
}
case 18:
{
lean_object* v_operation_918_; lean_object* v_left_919_; lean_object* v_right_920_; lean_object* v___x_921_; 
lean_dec(v_h__20_848_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_operation_918_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_operation_918_);
v_left_919_ = lean_ctor_get(v_x_828_, 1);
lean_inc_ref(v_left_919_);
v_right_920_ = lean_ctor_get(v_x_828_, 2);
lean_inc_ref(v_right_920_);
lean_dec_ref_known(v_x_828_, 3);
v___x_921_ = lean_apply_3(v_h__19_847_, v_operation_918_, v_left_919_, v_right_920_);
return v___x_921_;
}
default: 
{
lean_object* v_plan_922_; lean_object* v___x_923_; 
lean_dec(v_h__19_847_);
lean_dec(v_h__18_846_);
lean_dec(v_h__17_845_);
lean_dec(v_h__16_844_);
lean_dec(v_h__15_843_);
lean_dec(v_h__14_842_);
lean_dec(v_h__13_841_);
lean_dec(v_h__12_840_);
lean_dec(v_h__11_839_);
lean_dec(v_h__10_838_);
lean_dec(v_h__9_837_);
lean_dec(v_h__8_836_);
lean_dec(v_h__7_835_);
lean_dec(v_h__6_834_);
lean_dec(v_h__5_833_);
lean_dec(v_h__4_832_);
lean_dec(v_h__3_831_);
lean_dec(v_h__2_830_);
lean_dec(v_h__1_829_);
v_plan_922_ = lean_ctor_get(v_x_828_, 0);
lean_inc_ref(v_plan_922_);
lean_dec_ref_known(v_x_828_, 1);
v___x_923_ = lean_apply_1(v_h__20_848_, v_plan_922_);
return v___x_923_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter___boxed(lean_object** _args){
lean_object* v_motive_924_ = _args[0];
lean_object* v_x_925_ = _args[1];
lean_object* v_h__1_926_ = _args[2];
lean_object* v_h__2_927_ = _args[3];
lean_object* v_h__3_928_ = _args[4];
lean_object* v_h__4_929_ = _args[5];
lean_object* v_h__5_930_ = _args[6];
lean_object* v_h__6_931_ = _args[7];
lean_object* v_h__7_932_ = _args[8];
lean_object* v_h__8_933_ = _args[9];
lean_object* v_h__9_934_ = _args[10];
lean_object* v_h__10_935_ = _args[11];
lean_object* v_h__11_936_ = _args[12];
lean_object* v_h__12_937_ = _args[13];
lean_object* v_h__13_938_ = _args[14];
lean_object* v_h__14_939_ = _args[15];
lean_object* v_h__15_940_ = _args[16];
lean_object* v_h__16_941_ = _args[17];
lean_object* v_h__17_942_ = _args[18];
lean_object* v_h__18_943_ = _args[19];
lean_object* v_h__19_944_ = _args[20];
lean_object* v_h__20_945_ = _args[21];
_start:
{
lean_object* v_res_946_; 
v_res_946_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__3_splitter(v_motive_924_, v_x_925_, v_h__1_926_, v_h__2_927_, v_h__3_928_, v_h__4_929_, v_h__5_930_, v_h__6_931_, v_h__7_932_, v_h__8_933_, v_h__9_934_, v_h__10_935_, v_h__11_936_, v_h__12_937_, v_h__13_938_, v_h__14_939_, v_h__15_940_, v_h__16_941_, v_h__17_942_, v_h__18_943_, v_h__19_944_, v_h__20_945_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_947_, lean_object* v_h__1_948_){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = lean_apply_2(v_h__1_948_, v_x_947_, lean_box(0));
return v___x_949_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_950_, lean_object* v_P_951_, lean_object* v_motive_952_, lean_object* v_x_953_, lean_object* v_h__1_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = lean_apply_2(v_h__1_954_, v_x_953_, lean_box(0));
return v___x_955_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__1_splitter___redArg(lean_object* v_element_956_, lean_object* v_h__1_957_, lean_object* v_h__2_958_){
_start:
{
if (lean_obj_tag(v_element_956_) == 0)
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec(v_h__2_958_);
v___x_959_ = lean_box(0);
v___x_960_ = lean_apply_1(v_h__1_957_, v___x_959_);
return v___x_960_;
}
else
{
lean_object* v_val_961_; lean_object* v___x_962_; 
lean_dec(v_h__1_957_);
v_val_961_ = lean_ctor_get(v_element_956_, 0);
lean_inc(v_val_961_);
lean_dec_ref_known(v_element_956_, 1);
v___x_962_ = lean_apply_1(v_h__2_958_, v_val_961_);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizeExpr_match__1_splitter(lean_object* v_motive_963_, lean_object* v_element_964_, lean_object* v_h__1_965_, lean_object* v_h__2_966_){
_start:
{
if (lean_obj_tag(v_element_964_) == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v_h__2_966_);
v___x_967_ = lean_box(0);
v___x_968_ = lean_apply_1(v_h__1_965_, v___x_967_);
return v___x_968_;
}
else
{
lean_object* v_val_969_; lean_object* v___x_970_; 
lean_dec(v_h__1_965_);
v_val_969_ = lean_ctor_get(v_element_964_, 0);
lean_inc(v_val_969_);
lean_dec_ref_known(v_element_964_, 1);
v___x_970_ = lean_apply_1(v_h__2_966_, v_val_969_);
return v___x_970_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizePlan_match__1_splitter___redArg(lean_object* v_x_971_, lean_object* v_h__1_972_, lean_object* v_h__2_973_, lean_object* v_h__3_974_, lean_object* v_h__4_975_, lean_object* v_h__5_976_, lean_object* v_h__6_977_, lean_object* v_h__7_978_){
_start:
{
switch(lean_obj_tag(v_x_971_))
{
case 0:
{
lean_object* v_collection_979_; lean_object* v___x_980_; 
lean_dec(v_h__7_978_);
lean_dec(v_h__6_977_);
lean_dec(v_h__5_976_);
lean_dec(v_h__4_975_);
lean_dec(v_h__3_974_);
lean_dec(v_h__2_973_);
v_collection_979_ = lean_ctor_get(v_x_971_, 0);
lean_inc_ref(v_collection_979_);
lean_dec_ref_known(v_x_971_, 1);
v___x_980_ = lean_apply_1(v_h__1_972_, v_collection_979_);
return v___x_980_;
}
case 1:
{
lean_object* v_classKey_981_; lean_object* v_declarationId_982_; lean_object* v___x_983_; 
lean_dec(v_h__7_978_);
lean_dec(v_h__6_977_);
lean_dec(v_h__5_976_);
lean_dec(v_h__4_975_);
lean_dec(v_h__3_974_);
lean_dec(v_h__1_972_);
v_classKey_981_ = lean_ctor_get(v_x_971_, 0);
lean_inc_ref(v_classKey_981_);
v_declarationId_982_ = lean_ctor_get(v_x_971_, 1);
lean_inc(v_declarationId_982_);
lean_dec_ref_known(v_x_971_, 2);
v___x_983_ = lean_apply_2(v_h__2_973_, v_classKey_981_, v_declarationId_982_);
return v___x_983_;
}
case 2:
{
lean_object* v_source_984_; lean_object* v_association_985_; lean_object* v_role_986_; lean_object* v_qualifiers_987_; uint8_t v_reverse_988_; uint8_t v_associationClass_989_; uint8_t v_viaAssociationClass_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec(v_h__7_978_);
lean_dec(v_h__6_977_);
lean_dec(v_h__5_976_);
lean_dec(v_h__4_975_);
lean_dec(v_h__2_973_);
lean_dec(v_h__1_972_);
v_source_984_ = lean_ctor_get(v_x_971_, 0);
lean_inc_ref(v_source_984_);
v_association_985_ = lean_ctor_get(v_x_971_, 1);
lean_inc_ref(v_association_985_);
v_role_986_ = lean_ctor_get(v_x_971_, 2);
lean_inc_ref(v_role_986_);
v_qualifiers_987_ = lean_ctor_get(v_x_971_, 3);
lean_inc(v_qualifiers_987_);
v_reverse_988_ = lean_ctor_get_uint8(v_x_971_, sizeof(void*)*4);
v_associationClass_989_ = lean_ctor_get_uint8(v_x_971_, sizeof(void*)*4 + 1);
v_viaAssociationClass_990_ = lean_ctor_get_uint8(v_x_971_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_971_, 4);
v___x_991_ = lean_box(v_reverse_988_);
v___x_992_ = lean_box(v_associationClass_989_);
v___x_993_ = lean_box(v_viaAssociationClass_990_);
v___x_994_ = lean_apply_7(v_h__3_974_, v_source_984_, v_association_985_, v_role_986_, v_qualifiers_987_, v___x_991_, v___x_992_, v___x_993_);
return v___x_994_;
}
case 3:
{
lean_object* v_source_995_; lean_object* v_iteratorId_996_; lean_object* v_predicate_997_; uint8_t v_isSelect_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
lean_dec(v_h__7_978_);
lean_dec(v_h__6_977_);
lean_dec(v_h__5_976_);
lean_dec(v_h__3_974_);
lean_dec(v_h__2_973_);
lean_dec(v_h__1_972_);
v_source_995_ = lean_ctor_get(v_x_971_, 0);
lean_inc_ref(v_source_995_);
v_iteratorId_996_ = lean_ctor_get(v_x_971_, 1);
lean_inc(v_iteratorId_996_);
v_predicate_997_ = lean_ctor_get(v_x_971_, 2);
lean_inc_ref(v_predicate_997_);
v_isSelect_998_ = lean_ctor_get_uint8(v_x_971_, sizeof(void*)*3);
lean_dec_ref_known(v_x_971_, 3);
v___x_999_ = lean_box(v_isSelect_998_);
v___x_1000_ = lean_apply_4(v_h__4_975_, v_source_995_, v_iteratorId_996_, v_predicate_997_, v___x_999_);
return v___x_1000_;
}
case 4:
{
lean_object* v_source_1001_; lean_object* v_iteratorId_1002_; lean_object* v_body_1003_; lean_object* v___x_1004_; 
lean_dec(v_h__7_978_);
lean_dec(v_h__6_977_);
lean_dec(v_h__4_975_);
lean_dec(v_h__3_974_);
lean_dec(v_h__2_973_);
lean_dec(v_h__1_972_);
v_source_1001_ = lean_ctor_get(v_x_971_, 0);
lean_inc_ref(v_source_1001_);
v_iteratorId_1002_ = lean_ctor_get(v_x_971_, 1);
lean_inc(v_iteratorId_1002_);
v_body_1003_ = lean_ctor_get(v_x_971_, 2);
lean_inc_ref(v_body_1003_);
lean_dec_ref_known(v_x_971_, 3);
v___x_1004_ = lean_apply_3(v_h__5_976_, v_source_1001_, v_iteratorId_1002_, v_body_1003_);
return v___x_1004_;
}
case 5:
{
lean_object* v_source_1005_; lean_object* v___x_1006_; 
lean_dec(v_h__7_978_);
lean_dec(v_h__5_976_);
lean_dec(v_h__4_975_);
lean_dec(v_h__3_974_);
lean_dec(v_h__2_973_);
lean_dec(v_h__1_972_);
v_source_1005_ = lean_ctor_get(v_x_971_, 0);
lean_inc_ref(v_source_1005_);
lean_dec_ref_known(v_x_971_, 1);
v___x_1006_ = lean_apply_1(v_h__6_977_, v_source_1005_);
return v___x_1006_;
}
default: 
{
lean_object* v_binderId_1007_; lean_object* v_value_1008_; lean_object* v_body_1009_; lean_object* v___x_1010_; 
lean_dec(v_h__6_977_);
lean_dec(v_h__5_976_);
lean_dec(v_h__4_975_);
lean_dec(v_h__3_974_);
lean_dec(v_h__2_973_);
lean_dec(v_h__1_972_);
v_binderId_1007_ = lean_ctor_get(v_x_971_, 0);
lean_inc(v_binderId_1007_);
v_value_1008_ = lean_ctor_get(v_x_971_, 1);
lean_inc_ref(v_value_1008_);
v_body_1009_ = lean_ctor_get(v_x_971_, 2);
lean_inc_ref(v_body_1009_);
lean_dec_ref_known(v_x_971_, 3);
v___x_1010_ = lean_apply_3(v_h__7_978_, v_binderId_1007_, v_value_1008_, v_body_1009_);
return v___x_1010_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_normalizePlan_match__1_splitter(lean_object* v_motive_1011_, lean_object* v_x_1012_, lean_object* v_h__1_1013_, lean_object* v_h__2_1014_, lean_object* v_h__3_1015_, lean_object* v_h__4_1016_, lean_object* v_h__5_1017_, lean_object* v_h__6_1018_, lean_object* v_h__7_1019_){
_start:
{
switch(lean_obj_tag(v_x_1012_))
{
case 0:
{
lean_object* v_collection_1020_; lean_object* v___x_1021_; 
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__3_1015_);
lean_dec(v_h__2_1014_);
v_collection_1020_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_collection_1020_);
lean_dec_ref_known(v_x_1012_, 1);
v___x_1021_ = lean_apply_1(v_h__1_1013_, v_collection_1020_);
return v___x_1021_;
}
case 1:
{
lean_object* v_classKey_1022_; lean_object* v_declarationId_1023_; lean_object* v___x_1024_; 
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__3_1015_);
lean_dec(v_h__1_1013_);
v_classKey_1022_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_classKey_1022_);
v_declarationId_1023_ = lean_ctor_get(v_x_1012_, 1);
lean_inc(v_declarationId_1023_);
lean_dec_ref_known(v_x_1012_, 2);
v___x_1024_ = lean_apply_2(v_h__2_1014_, v_classKey_1022_, v_declarationId_1023_);
return v___x_1024_;
}
case 2:
{
lean_object* v_source_1025_; lean_object* v_association_1026_; lean_object* v_role_1027_; lean_object* v_qualifiers_1028_; uint8_t v_reverse_1029_; uint8_t v_associationClass_1030_; uint8_t v_viaAssociationClass_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__2_1014_);
lean_dec(v_h__1_1013_);
v_source_1025_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_source_1025_);
v_association_1026_ = lean_ctor_get(v_x_1012_, 1);
lean_inc_ref(v_association_1026_);
v_role_1027_ = lean_ctor_get(v_x_1012_, 2);
lean_inc_ref(v_role_1027_);
v_qualifiers_1028_ = lean_ctor_get(v_x_1012_, 3);
lean_inc(v_qualifiers_1028_);
v_reverse_1029_ = lean_ctor_get_uint8(v_x_1012_, sizeof(void*)*4);
v_associationClass_1030_ = lean_ctor_get_uint8(v_x_1012_, sizeof(void*)*4 + 1);
v_viaAssociationClass_1031_ = lean_ctor_get_uint8(v_x_1012_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_1012_, 4);
v___x_1032_ = lean_box(v_reverse_1029_);
v___x_1033_ = lean_box(v_associationClass_1030_);
v___x_1034_ = lean_box(v_viaAssociationClass_1031_);
v___x_1035_ = lean_apply_7(v_h__3_1015_, v_source_1025_, v_association_1026_, v_role_1027_, v_qualifiers_1028_, v___x_1032_, v___x_1033_, v___x_1034_);
return v___x_1035_;
}
case 3:
{
lean_object* v_source_1036_; lean_object* v_iteratorId_1037_; lean_object* v_predicate_1038_; uint8_t v_isSelect_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__3_1015_);
lean_dec(v_h__2_1014_);
lean_dec(v_h__1_1013_);
v_source_1036_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_source_1036_);
v_iteratorId_1037_ = lean_ctor_get(v_x_1012_, 1);
lean_inc(v_iteratorId_1037_);
v_predicate_1038_ = lean_ctor_get(v_x_1012_, 2);
lean_inc_ref(v_predicate_1038_);
v_isSelect_1039_ = lean_ctor_get_uint8(v_x_1012_, sizeof(void*)*3);
lean_dec_ref_known(v_x_1012_, 3);
v___x_1040_ = lean_box(v_isSelect_1039_);
v___x_1041_ = lean_apply_4(v_h__4_1016_, v_source_1036_, v_iteratorId_1037_, v_predicate_1038_, v___x_1040_);
return v___x_1041_;
}
case 4:
{
lean_object* v_source_1042_; lean_object* v_iteratorId_1043_; lean_object* v_body_1044_; lean_object* v___x_1045_; 
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__3_1015_);
lean_dec(v_h__2_1014_);
lean_dec(v_h__1_1013_);
v_source_1042_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_source_1042_);
v_iteratorId_1043_ = lean_ctor_get(v_x_1012_, 1);
lean_inc(v_iteratorId_1043_);
v_body_1044_ = lean_ctor_get(v_x_1012_, 2);
lean_inc_ref(v_body_1044_);
lean_dec_ref_known(v_x_1012_, 3);
v___x_1045_ = lean_apply_3(v_h__5_1017_, v_source_1042_, v_iteratorId_1043_, v_body_1044_);
return v___x_1045_;
}
case 5:
{
lean_object* v_source_1046_; lean_object* v___x_1047_; 
lean_dec(v_h__7_1019_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__3_1015_);
lean_dec(v_h__2_1014_);
lean_dec(v_h__1_1013_);
v_source_1046_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_source_1046_);
lean_dec_ref_known(v_x_1012_, 1);
v___x_1047_ = lean_apply_1(v_h__6_1018_, v_source_1046_);
return v___x_1047_;
}
default: 
{
lean_object* v_binderId_1048_; lean_object* v_value_1049_; lean_object* v_body_1050_; lean_object* v___x_1051_; 
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__3_1015_);
lean_dec(v_h__2_1014_);
lean_dec(v_h__1_1013_);
v_binderId_1048_ = lean_ctor_get(v_x_1012_, 0);
lean_inc(v_binderId_1048_);
v_value_1049_ = lean_ctor_get(v_x_1012_, 1);
lean_inc_ref(v_value_1049_);
v_body_1050_ = lean_ctor_get(v_x_1012_, 2);
lean_inc_ref(v_body_1050_);
lean_dec_ref_known(v_x_1012_, 3);
v___x_1051_ = lean_apply_3(v_h__7_1019_, v_binderId_1048_, v_value_1049_, v_body_1050_);
return v___x_1051_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(lean_object* v_x_1052_){
_start:
{
switch(lean_obj_tag(v_x_1052_))
{
case 0:
{
lean_object* v_collection_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1061_; 
v_collection_1053_ = lean_ctor_get(v_x_1052_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1055_ = v_x_1052_;
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_collection_1053_);
lean_dec(v_x_1052_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1057_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_collection_1053_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1057_);
v___x_1059_ = v___x_1055_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
case 1:
{
lean_object* v_classKey_1062_; lean_object* v_declarationId_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
v_classKey_1062_ = lean_ctor_get(v_x_1052_, 0);
v_declarationId_1063_ = lean_ctor_get(v_x_1052_, 1);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v_x_1052_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_declarationId_1063_);
lean_inc(v_classKey_1062_);
lean_dec(v_x_1052_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_classKey_1062_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_declarationId_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
case 2:
{
lean_object* v_source_1071_; lean_object* v_association_1072_; lean_object* v_role_1073_; lean_object* v_qualifiers_1074_; uint8_t v_reverse_1075_; uint8_t v_associationClass_1076_; uint8_t v_viaAssociationClass_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1087_; 
v_source_1071_ = lean_ctor_get(v_x_1052_, 0);
v_association_1072_ = lean_ctor_get(v_x_1052_, 1);
v_role_1073_ = lean_ctor_get(v_x_1052_, 2);
v_qualifiers_1074_ = lean_ctor_get(v_x_1052_, 3);
v_reverse_1075_ = lean_ctor_get_uint8(v_x_1052_, sizeof(void*)*4);
v_associationClass_1076_ = lean_ctor_get_uint8(v_x_1052_, sizeof(void*)*4 + 1);
v_viaAssociationClass_1077_ = lean_ctor_get_uint8(v_x_1052_, sizeof(void*)*4 + 2);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1079_ = v_x_1052_;
v_isShared_1080_ = v_isSharedCheck_1087_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_qualifiers_1074_);
lean_inc(v_role_1073_);
lean_inc(v_association_1072_);
lean_inc(v_source_1071_);
lean_dec(v_x_1052_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1087_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1081_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1071_);
v___x_1082_ = lean_box(0);
v___x_1083_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_lowerExpr_spec__0(v_qualifiers_1074_, v___x_1082_);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 3, v___x_1083_);
lean_ctor_set(v___x_1079_, 0, v___x_1081_);
v___x_1085_ = v___x_1079_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(2, 4, 3);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v_association_1072_);
lean_ctor_set(v_reuseFailAlloc_1086_, 2, v_role_1073_);
lean_ctor_set(v_reuseFailAlloc_1086_, 3, v___x_1083_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, sizeof(void*)*4, v_reverse_1075_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, sizeof(void*)*4 + 1, v_associationClass_1076_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, sizeof(void*)*4 + 2, v_viaAssociationClass_1077_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
case 3:
{
lean_object* v_source_1088_; lean_object* v_iteratorId_1089_; lean_object* v_predicate_1090_; uint8_t v_isSelect_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1100_; 
v_source_1088_ = lean_ctor_get(v_x_1052_, 0);
v_iteratorId_1089_ = lean_ctor_get(v_x_1052_, 1);
v_predicate_1090_ = lean_ctor_get(v_x_1052_, 2);
v_isSelect_1091_ = lean_ctor_get_uint8(v_x_1052_, sizeof(void*)*3);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1093_ = v_x_1052_;
v_isShared_1094_ = v_isSharedCheck_1100_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_predicate_1090_);
lean_inc(v_iteratorId_1089_);
lean_inc(v_source_1088_);
lean_dec(v_x_1052_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1100_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1095_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(v_source_1088_);
v___x_1096_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_predicate_1090_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 2, v___x_1096_);
lean_ctor_set(v___x_1093_, 0, v___x_1095_);
v___x_1098_ = v___x_1093_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_iteratorId_1089_);
lean_ctor_set(v_reuseFailAlloc_1099_, 2, v___x_1096_);
lean_ctor_set_uint8(v_reuseFailAlloc_1099_, sizeof(void*)*3, v_isSelect_1091_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
case 4:
{
lean_object* v_source_1101_; lean_object* v_iteratorId_1102_; lean_object* v_body_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1112_; 
v_source_1101_ = lean_ctor_get(v_x_1052_, 0);
v_iteratorId_1102_ = lean_ctor_get(v_x_1052_, 1);
v_body_1103_ = lean_ctor_get(v_x_1052_, 2);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1105_ = v_x_1052_;
v_isShared_1106_ = v_isSharedCheck_1112_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_body_1103_);
lean_inc(v_iteratorId_1102_);
lean_inc(v_source_1101_);
lean_dec(v_x_1052_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1112_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1110_; 
v___x_1107_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(v_source_1101_);
v___x_1108_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_body_1103_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 2, v___x_1108_);
lean_ctor_set(v___x_1105_, 0, v___x_1107_);
v___x_1110_ = v___x_1105_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_iteratorId_1102_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
case 5:
{
lean_object* v_source_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1121_; 
v_source_1113_ = lean_ctor_get(v_x_1052_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1115_ = v_x_1052_;
v_isShared_1116_ = v_isSharedCheck_1121_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_source_1113_);
lean_dec(v_x_1052_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1121_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1117_; lean_object* v___x_1119_; 
v___x_1117_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(v_source_1113_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v___x_1117_);
v___x_1119_ = v___x_1115_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
default: 
{
lean_object* v_binderId_1122_; lean_object* v_value_1123_; lean_object* v_body_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1133_; 
v_binderId_1122_ = lean_ctor_get(v_x_1052_, 0);
v_value_1123_ = lean_ctor_get(v_x_1052_, 1);
v_body_1124_ = lean_ctor_get(v_x_1052_, 2);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1126_ = v_x_1052_;
v_isShared_1127_ = v_isSharedCheck_1133_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_body_1124_);
lean_inc(v_value_1123_);
lean_inc(v_binderId_1122_);
lean_dec(v_x_1052_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1133_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1131_; 
v___x_1128_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_value_1123_);
v___x_1129_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(v_body_1124_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 2, v___x_1129_);
lean_ctor_set(v___x_1126_, 1, v___x_1128_);
v___x_1131_ = v___x_1126_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_binderId_1122_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1132_, 2, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(lean_object* v_x_1134_){
_start:
{
switch(lean_obj_tag(v_x_1134_))
{
case 0:
{
lean_object* v_declarationId_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
v_declarationId_1135_ = lean_ctor_get(v_x_1134_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v_x_1134_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_declarationId_1135_);
lean_dec(v_x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_declarationId_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
case 1:
{
lean_object* v_name_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_name_1143_ = lean_ctor_get(v_x_1134_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v_x_1134_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_name_1143_);
lean_dec(v_x_1134_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_name_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
case 2:
{
lean_object* v_type_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
v_type_1151_ = lean_ctor_get(v_x_1134_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v_x_1134_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_type_1151_);
lean_dec(v_x_1134_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_type_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
case 3:
{
lean_object* v_value_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
v_value_1159_ = lean_ctor_get(v_x_1134_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v_x_1134_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_value_1159_);
lean_dec(v_x_1134_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_value_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
case 4:
{
lean_object* v_coercion_1167_; lean_object* v_source_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1176_; 
v_coercion_1167_ = lean_ctor_get(v_x_1134_, 0);
v_source_1168_ = lean_ctor_get(v_x_1134_, 1);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1170_ = v_x_1134_;
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_source_1168_);
lean_inc(v_coercion_1167_);
lean_dec(v_x_1134_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1172_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1168_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 1, v___x_1172_);
v___x_1174_ = v___x_1170_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_coercion_1167_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
case 5:
{
lean_object* v_binderId_1177_; lean_object* v_value_1178_; lean_object* v_body_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1188_; 
v_binderId_1177_ = lean_ctor_get(v_x_1134_, 0);
v_value_1178_ = lean_ctor_get(v_x_1134_, 1);
v_body_1179_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1181_ = v_x_1134_;
v_isShared_1182_ = v_isSharedCheck_1188_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_body_1179_);
lean_inc(v_value_1178_);
lean_inc(v_binderId_1177_);
lean_dec(v_x_1134_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1188_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1183_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_value_1178_);
v___x_1184_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_body_1179_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 2, v___x_1184_);
lean_ctor_set(v___x_1181_, 1, v___x_1183_);
v___x_1186_ = v___x_1181_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_binderId_1177_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v___x_1183_);
lean_ctor_set(v_reuseFailAlloc_1187_, 2, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
case 6:
{
lean_object* v_condition_1189_; lean_object* v_thenExpr_1190_; lean_object* v_elseExpr_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1201_; 
v_condition_1189_ = lean_ctor_get(v_x_1134_, 0);
v_thenExpr_1190_ = lean_ctor_get(v_x_1134_, 1);
v_elseExpr_1191_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1193_ = v_x_1134_;
v_isShared_1194_ = v_isSharedCheck_1201_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_elseExpr_1191_);
lean_inc(v_thenExpr_1190_);
lean_inc(v_condition_1189_);
lean_dec(v_x_1134_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1201_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1199_; 
v___x_1195_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_condition_1189_);
v___x_1196_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_thenExpr_1190_);
v___x_1197_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_elseExpr_1191_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 2, v___x_1197_);
lean_ctor_set(v___x_1193_, 1, v___x_1196_);
lean_ctor_set(v___x_1193_, 0, v___x_1195_);
v___x_1199_ = v___x_1193_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1195_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1200_, 2, v___x_1197_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
case 7:
{
lean_object* v_source_1202_; lean_object* v_ownerClass_1203_; lean_object* v_attributeName_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1212_; 
v_source_1202_ = lean_ctor_get(v_x_1134_, 0);
v_ownerClass_1203_ = lean_ctor_get(v_x_1134_, 1);
v_attributeName_1204_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1206_ = v_x_1134_;
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_attributeName_1204_);
lean_inc(v_ownerClass_1203_);
lean_inc(v_source_1202_);
lean_dec(v_x_1134_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1208_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1202_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1208_);
v___x_1210_ = v___x_1206_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(7, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_ownerClass_1203_);
lean_ctor_set(v_reuseFailAlloc_1211_, 2, v_attributeName_1204_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
case 8:
{
lean_object* v_source_1213_; lean_object* v_association_1214_; lean_object* v_role_1215_; lean_object* v_qualifiers_1216_; uint8_t v_reverse_1217_; uint8_t v_associationClass_1218_; uint8_t v_viaAssociationClass_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1229_; 
v_source_1213_ = lean_ctor_get(v_x_1134_, 0);
v_association_1214_ = lean_ctor_get(v_x_1134_, 1);
v_role_1215_ = lean_ctor_get(v_x_1134_, 2);
v_qualifiers_1216_ = lean_ctor_get(v_x_1134_, 3);
v_reverse_1217_ = lean_ctor_get_uint8(v_x_1134_, sizeof(void*)*4);
v_associationClass_1218_ = lean_ctor_get_uint8(v_x_1134_, sizeof(void*)*4 + 1);
v_viaAssociationClass_1219_ = lean_ctor_get_uint8(v_x_1134_, sizeof(void*)*4 + 2);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1221_ = v_x_1134_;
v_isShared_1222_ = v_isSharedCheck_1229_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_qualifiers_1216_);
lean_inc(v_role_1215_);
lean_inc(v_association_1214_);
lean_inc(v_source_1213_);
lean_dec(v_x_1134_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1229_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1223_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1213_);
v___x_1224_ = lean_box(0);
v___x_1225_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_lowerExpr_spec__0(v_qualifiers_1216_, v___x_1224_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 3, v___x_1225_);
lean_ctor_set(v___x_1221_, 0, v___x_1223_);
v___x_1227_ = v___x_1221_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(8, 4, 3);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_association_1214_);
lean_ctor_set(v_reuseFailAlloc_1228_, 2, v_role_1215_);
lean_ctor_set(v_reuseFailAlloc_1228_, 3, v___x_1225_);
lean_ctor_set_uint8(v_reuseFailAlloc_1228_, sizeof(void*)*4, v_reverse_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1228_, sizeof(void*)*4 + 1, v_associationClass_1218_);
lean_ctor_set_uint8(v_reuseFailAlloc_1228_, sizeof(void*)*4 + 2, v_viaAssociationClass_1219_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
case 9:
{
lean_object* v_source_1230_; lean_object* v_targetClass_1231_; uint8_t v_exact_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1240_; 
v_source_1230_ = lean_ctor_get(v_x_1134_, 0);
v_targetClass_1231_ = lean_ctor_get(v_x_1134_, 1);
v_exact_1232_ = lean_ctor_get_uint8(v_x_1134_, sizeof(void*)*2);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1234_ = v_x_1134_;
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_targetClass_1231_);
lean_inc(v_source_1230_);
lean_dec(v_x_1134_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1236_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1230_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v___x_1236_);
v___x_1238_ = v___x_1234_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(9, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_targetClass_1231_);
lean_ctor_set_uint8(v_reuseFailAlloc_1239_, sizeof(void*)*2, v_exact_1232_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
case 10:
{
lean_object* v_source_1241_; lean_object* v_targetClass_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1250_; 
v_source_1241_ = lean_ctor_get(v_x_1134_, 0);
v_targetClass_1242_ = lean_ctor_get(v_x_1134_, 1);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1244_ = v_x_1134_;
v_isShared_1245_ = v_isSharedCheck_1250_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_targetClass_1242_);
lean_inc(v_source_1241_);
lean_dec(v_x_1134_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1250_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1246_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1241_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 0, v___x_1246_);
v___x_1248_ = v___x_1244_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1246_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_targetClass_1242_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
case 11:
{
lean_object* v_operator_1251_; lean_object* v_operand_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1260_; 
v_operator_1251_ = lean_ctor_get(v_x_1134_, 0);
v_operand_1252_ = lean_ctor_get(v_x_1134_, 1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1254_ = v_x_1134_;
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_operand_1252_);
lean_inc(v_operator_1251_);
lean_dec(v_x_1134_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1256_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_operand_1252_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1256_);
v___x_1258_ = v___x_1254_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_operator_1251_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
case 12:
{
lean_object* v_operator_1261_; lean_object* v_left_1262_; lean_object* v_right_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1272_; 
v_operator_1261_ = lean_ctor_get(v_x_1134_, 0);
v_left_1262_ = lean_ctor_get(v_x_1134_, 1);
v_right_1263_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1265_ = v_x_1134_;
v_isShared_1266_ = v_isSharedCheck_1272_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_right_1263_);
lean_inc(v_left_1262_);
lean_inc(v_operator_1261_);
lean_dec(v_x_1134_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1272_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1270_; 
v___x_1267_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_left_1262_);
v___x_1268_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_right_1263_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 2, v___x_1268_);
lean_ctor_set(v___x_1265_, 1, v___x_1267_);
v___x_1270_ = v___x_1265_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_operator_1261_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v___x_1267_);
lean_ctor_set(v_reuseFailAlloc_1271_, 2, v___x_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
case 13:
{
lean_object* v_source_1273_; lean_object* v_iteratorId_1274_; lean_object* v_predicate_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1284_; 
v_source_1273_ = lean_ctor_get(v_x_1134_, 0);
v_iteratorId_1274_ = lean_ctor_get(v_x_1134_, 1);
v_predicate_1275_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1277_ = v_x_1134_;
v_isShared_1278_ = v_isSharedCheck_1284_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_predicate_1275_);
lean_inc(v_iteratorId_1274_);
lean_inc(v_source_1273_);
lean_dec(v_x_1134_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1284_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1279_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(v_source_1273_);
v___x_1280_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_predicate_1275_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 2, v___x_1280_);
lean_ctor_set(v___x_1277_, 0, v___x_1279_);
v___x_1282_ = v___x_1277_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(13, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1279_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v_iteratorId_1274_);
lean_ctor_set(v_reuseFailAlloc_1283_, 2, v___x_1280_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
case 14:
{
lean_object* v_source_1285_; lean_object* v_iteratorId_1286_; lean_object* v_predicate_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1296_; 
v_source_1285_ = lean_ctor_get(v_x_1134_, 0);
v_iteratorId_1286_ = lean_ctor_get(v_x_1134_, 1);
v_predicate_1287_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1296_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1289_ = v_x_1134_;
v_isShared_1290_ = v_isSharedCheck_1296_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_predicate_1287_);
lean_inc(v_iteratorId_1286_);
lean_inc(v_source_1285_);
lean_dec(v_x_1134_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1296_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v___x_1291_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(v_source_1285_);
v___x_1292_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_predicate_1287_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 2, v___x_1292_);
lean_ctor_set(v___x_1289_, 0, v___x_1291_);
v___x_1294_ = v___x_1289_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(14, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1291_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v_iteratorId_1286_);
lean_ctor_set(v_reuseFailAlloc_1295_, 2, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
case 15:
{
uint8_t v_kind_1297_; lean_object* v_elements_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1307_; 
v_kind_1297_ = lean_ctor_get_uint8(v_x_1134_, sizeof(void*)*1);
v_elements_1298_ = lean_ctor_get(v_x_1134_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1300_ = v_x_1134_;
v_isShared_1301_ = v_isSharedCheck_1307_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_elements_1298_);
lean_dec(v_x_1134_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1307_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1302_ = lean_box(0);
v___x_1303_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_lowerExpr_spec__0(v_elements_1298_, v___x_1302_);
if (v_isShared_1301_ == 0)
{
lean_ctor_set(v___x_1300_, 0, v___x_1303_);
v___x_1305_ = v___x_1300_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(15, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1303_);
lean_ctor_set_uint8(v_reuseFailAlloc_1306_, sizeof(void*)*1, v_kind_1297_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
case 16:
{
lean_object* v_operation_1308_; lean_object* v_source_1309_; lean_object* v_element_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1319_; 
v_operation_1308_ = lean_ctor_get(v_x_1134_, 0);
v_source_1309_ = lean_ctor_get(v_x_1134_, 1);
v_element_1310_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1319_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1312_ = v_x_1134_;
v_isShared_1313_ = v_isSharedCheck_1319_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_element_1310_);
lean_inc(v_source_1309_);
lean_inc(v_operation_1308_);
lean_dec(v_x_1134_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1319_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1314_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1309_);
v___x_1315_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_element_1310_);
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 2, v___x_1315_);
lean_ctor_set(v___x_1312_, 1, v___x_1314_);
v___x_1317_ = v___x_1312_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(16, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_operation_1308_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v___x_1314_);
lean_ctor_set(v_reuseFailAlloc_1318_, 2, v___x_1315_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
case 17:
{
lean_object* v_operation_1320_; lean_object* v_source_1321_; lean_object* v_element_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1343_; 
v_operation_1320_ = lean_ctor_get(v_x_1134_, 0);
v_source_1321_ = lean_ctor_get(v_x_1134_, 1);
v_element_1322_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1324_ = v_x_1134_;
v_isShared_1325_ = v_isSharedCheck_1343_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_element_1322_);
lean_inc(v_source_1321_);
lean_inc(v_operation_1320_);
lean_dec(v_x_1134_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1343_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; 
v___x_1326_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_source_1321_);
if (lean_obj_tag(v_element_1322_) == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = lean_box(0);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 2, v___x_1327_);
lean_ctor_set(v___x_1324_, 1, v___x_1326_);
v___x_1329_ = v___x_1324_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_operation_1320_);
lean_ctor_set(v_reuseFailAlloc_1330_, 1, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1330_, 2, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
else
{
lean_object* v_val_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1342_; 
v_val_1331_ = lean_ctor_get(v_element_1322_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v_element_1322_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1333_ = v_element_1322_;
v_isShared_1334_ = v_isSharedCheck_1342_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_val_1331_);
lean_dec(v_element_1322_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1342_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1335_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_val_1331_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1335_);
v___x_1337_ = v___x_1333_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
lean_object* v___x_1339_; 
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 2, v___x_1337_);
lean_ctor_set(v___x_1324_, 1, v___x_1326_);
v___x_1339_ = v___x_1324_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_operation_1320_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1340_, 2, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
}
}
case 18:
{
lean_object* v_operation_1344_; lean_object* v_left_1345_; lean_object* v_right_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1355_; 
v_operation_1344_ = lean_ctor_get(v_x_1134_, 0);
v_left_1345_ = lean_ctor_get(v_x_1134_, 1);
v_right_1346_ = lean_ctor_get(v_x_1134_, 2);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1348_ = v_x_1134_;
v_isShared_1349_ = v_isSharedCheck_1355_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_right_1346_);
lean_inc(v_left_1345_);
lean_inc(v_operation_1344_);
lean_dec(v_x_1134_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1355_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1350_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_left_1345_);
v___x_1351_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_right_1346_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 2, v___x_1351_);
lean_ctor_set(v___x_1348_, 1, v___x_1350_);
v___x_1353_ = v___x_1348_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(18, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_operation_1344_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1354_, 2, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
default: 
{
lean_object* v_plan_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1364_; 
v_plan_1356_ = lean_ctor_get(v_x_1134_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_x_1134_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1358_ = v_x_1134_;
v_isShared_1359_ = v_isSharedCheck_1364_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_plan_1356_);
lean_dec(v_x_1134_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1364_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1360_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerPlan(v_plan_1356_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1360_);
v___x_1362_ = v___x_1358_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(19, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_lowerExpr_spec__0(lean_object* v_a_1365_, lean_object* v_a_1366_){
_start:
{
if (lean_obj_tag(v_a_1365_) == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = l_List_reverse___redArg(v_a_1366_);
return v___x_1367_;
}
else
{
lean_object* v_head_1368_; lean_object* v_tail_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1378_; 
v_head_1368_ = lean_ctor_get(v_a_1365_, 0);
v_tail_1369_ = lean_ctor_get(v_a_1365_, 1);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_a_1365_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1371_ = v_a_1365_;
v_isShared_1372_ = v_isSharedCheck_1378_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_tail_1369_);
lean_inc(v_head_1368_);
lean_dec(v_a_1365_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1378_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1373_; lean_object* v___x_1375_; 
v___x_1373_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_lowerExpr(v_head_1368_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v_a_1366_);
lean_ctor_set(v___x_1371_, 0, v___x_1373_);
v___x_1375_ = v___x_1371_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_a_1366_);
v___x_1375_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
v_a_1365_ = v_tail_1369_;
v_a_1366_ = v___x_1375_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0___redArg(lean_object* v_semantics_1379_, lean_object* v_n_1380_, lean_object* v_x_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_){
_start:
{
if (lean_obj_tag(v_a_1382_) == 0)
{
lean_object* v___x_1384_; 
lean_dec(v_x_1381_);
lean_dec(v_n_1380_);
lean_dec_ref(v_semantics_1379_);
v___x_1384_ = l_List_reverse___redArg(v_a_1383_);
return v___x_1384_;
}
else
{
lean_object* v_head_1385_; lean_object* v_tail_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1395_; 
v_head_1385_ = lean_ctor_get(v_a_1382_, 0);
v_tail_1386_ = lean_ctor_get(v_a_1382_, 1);
v_isSharedCheck_1395_ = !lean_is_exclusive(v_a_1382_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1388_ = v_a_1382_;
v_isShared_1389_ = v_isSharedCheck_1395_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_tail_1386_);
lean_inc(v_head_1385_);
lean_dec(v_a_1382_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1395_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1392_; 
lean_inc(v_x_1381_);
lean_inc(v_n_1380_);
lean_inc_ref(v_semantics_1379_);
v___x_1390_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1379_, v_n_1380_, v_x_1381_, v_head_1385_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v_a_1383_);
lean_ctor_set(v___x_1388_, 0, v___x_1390_);
v___x_1392_ = v___x_1388_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v_a_1383_);
v___x_1392_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
v_a_1382_ = v_tail_1386_;
v_a_1383_ = v___x_1392_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg___lam__1(lean_object* v_x_1396_, lean_object* v_iteratorId_1397_, lean_object* v_semantics_1398_, lean_object* v_n_1399_, lean_object* v_body_1400_, lean_object* v_value_1401_){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1402_, 0, lean_box(0));
lean_closure_set(v___x_1402_, 1, v_x_1396_);
lean_closure_set(v___x_1402_, 2, v_iteratorId_1397_);
lean_closure_set(v___x_1402_, 3, v_value_1401_);
v___x_1403_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1398_, v_n_1399_, v___x_1402_, v_body_1400_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(lean_object* v_semantics_1404_, lean_object* v_x_1405_, lean_object* v_x_1406_, lean_object* v_x_1407_){
_start:
{
lean_object* v_zero_1408_; uint8_t v_isZero_1409_; 
v_zero_1408_ = lean_unsigned_to_nat(0u);
v_isZero_1409_ = lean_nat_dec_eq(v_x_1405_, v_zero_1408_);
if (v_isZero_1409_ == 1)
{
lean_object* v_outOfFuelCollection_1410_; 
lean_dec_ref(v_x_1407_);
lean_dec(v_x_1406_);
lean_dec(v_x_1405_);
v_outOfFuelCollection_1410_ = lean_ctor_get(v_semantics_1404_, 1);
lean_inc(v_outOfFuelCollection_1410_);
lean_dec_ref(v_semantics_1404_);
return v_outOfFuelCollection_1410_;
}
else
{
lean_object* v_one_1411_; lean_object* v_n_1412_; 
v_one_1411_ = lean_unsigned_to_nat(1u);
v_n_1412_ = lean_nat_sub(v_x_1405_, v_one_1411_);
lean_dec(v_x_1405_);
switch(lean_obj_tag(v_x_1407_))
{
case 0:
{
lean_object* v_collection_1413_; lean_object* v_fromCollection_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v_collection_1413_ = lean_ctor_get(v_x_1407_, 0);
lean_inc_ref(v_collection_1413_);
lean_dec_ref_known(v_x_1407_, 1);
v_fromCollection_1414_ = lean_ctor_get(v_semantics_1404_, 20);
lean_inc(v_fromCollection_1414_);
v___x_1415_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1404_, v_n_1412_, v_x_1406_, v_collection_1413_);
v___x_1416_ = lean_apply_1(v_fromCollection_1414_, v___x_1415_);
return v___x_1416_;
}
case 1:
{
lean_object* v_classKey_1417_; lean_object* v_declarationId_1418_; lean_object* v_scanClass_1419_; lean_object* v___x_1420_; 
lean_dec(v_n_1412_);
lean_dec(v_x_1406_);
v_classKey_1417_ = lean_ctor_get(v_x_1407_, 0);
lean_inc_ref(v_classKey_1417_);
v_declarationId_1418_ = lean_ctor_get(v_x_1407_, 1);
lean_inc(v_declarationId_1418_);
lean_dec_ref_known(v_x_1407_, 2);
v_scanClass_1419_ = lean_ctor_get(v_semantics_1404_, 21);
lean_inc(v_scanClass_1419_);
lean_dec_ref(v_semantics_1404_);
v___x_1420_ = lean_apply_2(v_scanClass_1419_, v_classKey_1417_, v_declarationId_1418_);
return v___x_1420_;
}
case 2:
{
lean_object* v_source_1421_; lean_object* v_association_1422_; lean_object* v_role_1423_; lean_object* v_qualifiers_1424_; uint8_t v_reverse_1425_; uint8_t v_associationClass_1426_; uint8_t v_viaAssociationClass_1427_; lean_object* v_navigateMany_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v_source_1421_ = lean_ctor_get(v_x_1407_, 0);
lean_inc_ref(v_source_1421_);
v_association_1422_ = lean_ctor_get(v_x_1407_, 1);
lean_inc_ref(v_association_1422_);
v_role_1423_ = lean_ctor_get(v_x_1407_, 2);
lean_inc_ref(v_role_1423_);
v_qualifiers_1424_ = lean_ctor_get(v_x_1407_, 3);
lean_inc(v_qualifiers_1424_);
v_reverse_1425_ = lean_ctor_get_uint8(v_x_1407_, sizeof(void*)*4);
v_associationClass_1426_ = lean_ctor_get_uint8(v_x_1407_, sizeof(void*)*4 + 1);
v_viaAssociationClass_1427_ = lean_ctor_get_uint8(v_x_1407_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_1407_, 4);
v_navigateMany_1428_ = lean_ctor_get(v_semantics_1404_, 22);
lean_inc(v_navigateMany_1428_);
lean_inc(v_x_1406_);
lean_inc(v_n_1412_);
lean_inc_ref(v_semantics_1404_);
v___x_1429_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1404_, v_n_1412_, v_x_1406_, v_source_1421_);
v___x_1430_ = lean_box(0);
v___x_1431_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0___redArg(v_semantics_1404_, v_n_1412_, v_x_1406_, v_qualifiers_1424_, v___x_1430_);
v___x_1432_ = lean_box(v_reverse_1425_);
v___x_1433_ = lean_box(v_associationClass_1426_);
v___x_1434_ = lean_box(v_viaAssociationClass_1427_);
v___x_1435_ = lean_apply_7(v_navigateMany_1428_, v___x_1429_, v_association_1422_, v_role_1423_, v___x_1431_, v___x_1432_, v___x_1433_, v___x_1434_);
return v___x_1435_;
}
case 3:
{
lean_object* v_source_1436_; lean_object* v_iteratorId_1437_; lean_object* v_predicate_1438_; uint8_t v_isSelect_1439_; lean_object* v_filter_1440_; lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v_source_1436_ = lean_ctor_get(v_x_1407_, 0);
lean_inc_ref(v_source_1436_);
v_iteratorId_1437_ = lean_ctor_get(v_x_1407_, 1);
lean_inc(v_iteratorId_1437_);
v_predicate_1438_ = lean_ctor_get(v_x_1407_, 2);
lean_inc_ref(v_predicate_1438_);
v_isSelect_1439_ = lean_ctor_get_uint8(v_x_1407_, sizeof(void*)*3);
lean_dec_ref_known(v_x_1407_, 3);
v_filter_1440_ = lean_ctor_get(v_semantics_1404_, 23);
lean_inc(v_filter_1440_);
lean_inc(v_n_1412_);
lean_inc_ref(v_semantics_1404_);
lean_inc(v_x_1406_);
v___f_1441_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1441_, 0, v_x_1406_);
lean_closure_set(v___f_1441_, 1, v_iteratorId_1437_);
lean_closure_set(v___f_1441_, 2, v_semantics_1404_);
lean_closure_set(v___f_1441_, 3, v_n_1412_);
lean_closure_set(v___f_1441_, 4, v_predicate_1438_);
v___x_1442_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(v_semantics_1404_, v_n_1412_, v_x_1406_, v_source_1436_);
v___x_1443_ = lean_box(v_isSelect_1439_);
v___x_1444_ = lean_apply_3(v_filter_1440_, v___x_1442_, v___f_1441_, v___x_1443_);
return v___x_1444_;
}
case 4:
{
lean_object* v_source_1445_; lean_object* v_iteratorId_1446_; lean_object* v_body_1447_; lean_object* v_collect_1448_; lean_object* v___f_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v_source_1445_ = lean_ctor_get(v_x_1407_, 0);
lean_inc_ref(v_source_1445_);
v_iteratorId_1446_ = lean_ctor_get(v_x_1407_, 1);
lean_inc(v_iteratorId_1446_);
v_body_1447_ = lean_ctor_get(v_x_1407_, 2);
lean_inc_ref(v_body_1447_);
lean_dec_ref_known(v_x_1407_, 3);
v_collect_1448_ = lean_ctor_get(v_semantics_1404_, 24);
lean_inc(v_collect_1448_);
lean_inc(v_n_1412_);
lean_inc_ref(v_semantics_1404_);
lean_inc(v_x_1406_);
v___f_1449_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg___lam__1), 6, 5);
lean_closure_set(v___f_1449_, 0, v_x_1406_);
lean_closure_set(v___f_1449_, 1, v_iteratorId_1446_);
lean_closure_set(v___f_1449_, 2, v_semantics_1404_);
lean_closure_set(v___f_1449_, 3, v_n_1412_);
lean_closure_set(v___f_1449_, 4, v_body_1447_);
v___x_1450_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(v_semantics_1404_, v_n_1412_, v_x_1406_, v_source_1445_);
v___x_1451_ = lean_apply_2(v_collect_1448_, v___x_1450_, v___f_1449_);
return v___x_1451_;
}
case 5:
{
lean_object* v_source_1452_; lean_object* v_distinct_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_source_1452_ = lean_ctor_get(v_x_1407_, 0);
lean_inc_ref(v_source_1452_);
lean_dec_ref_known(v_x_1407_, 1);
v_distinct_1453_ = lean_ctor_get(v_semantics_1404_, 25);
lean_inc(v_distinct_1453_);
v___x_1454_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(v_semantics_1404_, v_n_1412_, v_x_1406_, v_source_1452_);
v___x_1455_ = lean_apply_1(v_distinct_1453_, v___x_1454_);
return v___x_1455_;
}
default: 
{
lean_object* v_binderId_1456_; lean_object* v_value_1457_; lean_object* v_body_1458_; lean_object* v_denotation_1459_; lean_object* v___x_1460_; 
v_binderId_1456_ = lean_ctor_get(v_x_1407_, 0);
lean_inc(v_binderId_1456_);
v_value_1457_ = lean_ctor_get(v_x_1407_, 1);
lean_inc_ref(v_value_1457_);
v_body_1458_ = lean_ctor_get(v_x_1407_, 2);
lean_inc_ref(v_body_1458_);
lean_dec_ref_known(v_x_1407_, 3);
lean_inc(v_x_1406_);
lean_inc(v_n_1412_);
lean_inc_ref(v_semantics_1404_);
v_denotation_1459_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1404_, v_n_1412_, v_x_1406_, v_value_1457_);
v___x_1460_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1460_, 0, lean_box(0));
lean_closure_set(v___x_1460_, 1, v_x_1406_);
lean_closure_set(v___x_1460_, 2, v_binderId_1456_);
lean_closure_set(v___x_1460_, 3, v_denotation_1459_);
v_x_1405_ = v_n_1412_;
v_x_1406_ = v___x_1460_;
v_x_1407_ = v_body_1458_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(lean_object* v_semantics_1462_, lean_object* v_x_1463_, lean_object* v_x_1464_, lean_object* v_x_1465_){
_start:
{
lean_object* v_zero_1466_; uint8_t v_isZero_1467_; 
v_zero_1466_ = lean_unsigned_to_nat(0u);
v_isZero_1467_ = lean_nat_dec_eq(v_x_1463_, v_zero_1466_);
if (v_isZero_1467_ == 1)
{
lean_object* v_outOfFuelValue_1468_; 
lean_dec_ref(v_x_1465_);
lean_dec(v_x_1464_);
lean_dec(v_x_1463_);
v_outOfFuelValue_1468_ = lean_ctor_get(v_semantics_1462_, 0);
lean_inc(v_outOfFuelValue_1468_);
lean_dec_ref(v_semantics_1462_);
return v_outOfFuelValue_1468_;
}
else
{
lean_object* v_one_1469_; lean_object* v_n_1470_; 
v_one_1469_ = lean_unsigned_to_nat(1u);
v_n_1470_ = lean_nat_sub(v_x_1463_, v_one_1469_);
lean_dec(v_x_1463_);
switch(lean_obj_tag(v_x_1465_))
{
case 0:
{
lean_object* v_declarationId_1471_; lean_object* v___x_1472_; 
lean_dec(v_n_1470_);
lean_dec_ref(v_semantics_1462_);
v_declarationId_1471_ = lean_ctor_get(v_x_1465_, 0);
lean_inc(v_declarationId_1471_);
lean_dec_ref_known(v_x_1465_, 1);
v___x_1472_ = lean_apply_1(v_x_1464_, v_declarationId_1471_);
return v___x_1472_;
}
case 1:
{
lean_object* v_name_1473_; lean_object* v_parameter_1474_; lean_object* v___x_1475_; 
lean_dec(v_n_1470_);
lean_dec(v_x_1464_);
v_name_1473_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_name_1473_);
lean_dec_ref_known(v_x_1465_, 1);
v_parameter_1474_ = lean_ctor_get(v_semantics_1462_, 2);
lean_inc(v_parameter_1474_);
lean_dec_ref(v_semantics_1462_);
v___x_1475_ = lean_apply_1(v_parameter_1474_, v_name_1473_);
return v___x_1475_;
}
case 2:
{
lean_object* v_type_1476_; lean_object* v_bottom_1477_; lean_object* v___x_1478_; 
lean_dec(v_n_1470_);
lean_dec(v_x_1464_);
v_type_1476_ = lean_ctor_get(v_x_1465_, 0);
lean_inc(v_type_1476_);
lean_dec_ref_known(v_x_1465_, 1);
v_bottom_1477_ = lean_ctor_get(v_semantics_1462_, 3);
lean_inc(v_bottom_1477_);
lean_dec_ref(v_semantics_1462_);
v___x_1478_ = lean_apply_1(v_bottom_1477_, v_type_1476_);
return v___x_1478_;
}
case 3:
{
lean_object* v_value_1479_; lean_object* v_constant_1480_; lean_object* v___x_1481_; 
lean_dec(v_n_1470_);
lean_dec(v_x_1464_);
v_value_1479_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_value_1479_);
lean_dec_ref_known(v_x_1465_, 1);
v_constant_1480_ = lean_ctor_get(v_semantics_1462_, 4);
lean_inc(v_constant_1480_);
lean_dec_ref(v_semantics_1462_);
v___x_1481_ = lean_apply_1(v_constant_1480_, v_value_1479_);
return v___x_1481_;
}
case 4:
{
lean_object* v_coercion_1482_; lean_object* v_source_1483_; lean_object* v_coerce_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v_coercion_1482_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_coercion_1482_);
v_source_1483_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_source_1483_);
lean_dec_ref_known(v_x_1465_, 2);
v_coerce_1484_ = lean_ctor_get(v_semantics_1462_, 5);
lean_inc(v_coerce_1484_);
v___x_1485_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1483_);
v___x_1486_ = lean_apply_2(v_coerce_1484_, v_coercion_1482_, v___x_1485_);
return v___x_1486_;
}
case 5:
{
lean_object* v_binderId_1487_; lean_object* v_value_1488_; lean_object* v_body_1489_; lean_object* v_denotation_1490_; lean_object* v___x_1491_; 
v_binderId_1487_ = lean_ctor_get(v_x_1465_, 0);
lean_inc(v_binderId_1487_);
v_value_1488_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_value_1488_);
v_body_1489_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_body_1489_);
lean_dec_ref_known(v_x_1465_, 3);
lean_inc(v_x_1464_);
lean_inc(v_n_1470_);
lean_inc_ref(v_semantics_1462_);
v_denotation_1490_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_value_1488_);
v___x_1491_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1491_, 0, lean_box(0));
lean_closure_set(v___x_1491_, 1, v_x_1464_);
lean_closure_set(v___x_1491_, 2, v_binderId_1487_);
lean_closure_set(v___x_1491_, 3, v_denotation_1490_);
v_x_1463_ = v_n_1470_;
v_x_1464_ = v___x_1491_;
v_x_1465_ = v_body_1489_;
goto _start;
}
case 6:
{
lean_object* v_condition_1493_; lean_object* v_thenExpr_1494_; lean_object* v_elseExpr_1495_; lean_object* v_ite_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v_condition_1493_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_condition_1493_);
v_thenExpr_1494_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_thenExpr_1494_);
v_elseExpr_1495_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_elseExpr_1495_);
lean_dec_ref_known(v_x_1465_, 3);
v_ite_1496_ = lean_ctor_get(v_semantics_1462_, 6);
lean_inc(v_ite_1496_);
lean_inc_n(v_x_1464_, 2);
lean_inc_n(v_n_1470_, 2);
lean_inc_ref_n(v_semantics_1462_, 2);
v___x_1497_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_condition_1493_);
v___x_1498_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_thenExpr_1494_);
v___x_1499_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_elseExpr_1495_);
v___x_1500_ = lean_apply_3(v_ite_1496_, v___x_1497_, v___x_1498_, v___x_1499_);
return v___x_1500_;
}
case 7:
{
lean_object* v_source_1501_; lean_object* v_ownerClass_1502_; lean_object* v_attributeName_1503_; lean_object* v_readAttribute_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_source_1501_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_source_1501_);
v_ownerClass_1502_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_ownerClass_1502_);
v_attributeName_1503_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_attributeName_1503_);
lean_dec_ref_known(v_x_1465_, 3);
v_readAttribute_1504_ = lean_ctor_get(v_semantics_1462_, 7);
lean_inc(v_readAttribute_1504_);
v___x_1505_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1501_);
v___x_1506_ = lean_apply_3(v_readAttribute_1504_, v___x_1505_, v_ownerClass_1502_, v_attributeName_1503_);
return v___x_1506_;
}
case 8:
{
lean_object* v_source_1507_; lean_object* v_association_1508_; lean_object* v_role_1509_; lean_object* v_qualifiers_1510_; uint8_t v_reverse_1511_; uint8_t v_associationClass_1512_; uint8_t v_viaAssociationClass_1513_; lean_object* v_navigateOne_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v_source_1507_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_source_1507_);
v_association_1508_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_association_1508_);
v_role_1509_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_role_1509_);
v_qualifiers_1510_ = lean_ctor_get(v_x_1465_, 3);
lean_inc(v_qualifiers_1510_);
v_reverse_1511_ = lean_ctor_get_uint8(v_x_1465_, sizeof(void*)*4);
v_associationClass_1512_ = lean_ctor_get_uint8(v_x_1465_, sizeof(void*)*4 + 1);
v_viaAssociationClass_1513_ = lean_ctor_get_uint8(v_x_1465_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_1465_, 4);
v_navigateOne_1514_ = lean_ctor_get(v_semantics_1462_, 8);
lean_inc(v_navigateOne_1514_);
lean_inc(v_x_1464_);
lean_inc(v_n_1470_);
lean_inc_ref(v_semantics_1462_);
v___x_1515_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1507_);
v___x_1516_ = lean_box(0);
v___x_1517_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_qualifiers_1510_, v___x_1516_);
v___x_1518_ = lean_box(v_reverse_1511_);
v___x_1519_ = lean_box(v_associationClass_1512_);
v___x_1520_ = lean_box(v_viaAssociationClass_1513_);
v___x_1521_ = lean_apply_7(v_navigateOne_1514_, v___x_1515_, v_association_1508_, v_role_1509_, v___x_1517_, v___x_1518_, v___x_1519_, v___x_1520_);
return v___x_1521_;
}
case 9:
{
lean_object* v_source_1522_; lean_object* v_targetClass_1523_; uint8_t v_exact_1524_; lean_object* v_typeTest_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_source_1522_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_source_1522_);
v_targetClass_1523_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_targetClass_1523_);
v_exact_1524_ = lean_ctor_get_uint8(v_x_1465_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1465_, 2);
v_typeTest_1525_ = lean_ctor_get(v_semantics_1462_, 9);
lean_inc(v_typeTest_1525_);
v___x_1526_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1522_);
v___x_1527_ = lean_box(v_exact_1524_);
v___x_1528_ = lean_apply_3(v_typeTest_1525_, v___x_1526_, v_targetClass_1523_, v___x_1527_);
return v___x_1528_;
}
case 10:
{
lean_object* v_source_1529_; lean_object* v_targetClass_1530_; lean_object* v_typeCast_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_source_1529_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_source_1529_);
v_targetClass_1530_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_targetClass_1530_);
lean_dec_ref_known(v_x_1465_, 2);
v_typeCast_1531_ = lean_ctor_get(v_semantics_1462_, 10);
lean_inc(v_typeCast_1531_);
v___x_1532_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1529_);
v___x_1533_ = lean_apply_2(v_typeCast_1531_, v___x_1532_, v_targetClass_1530_);
return v___x_1533_;
}
case 11:
{
lean_object* v_operator_1534_; lean_object* v_operand_1535_; lean_object* v_unary_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v_operator_1534_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_operator_1534_);
v_operand_1535_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_operand_1535_);
lean_dec_ref_known(v_x_1465_, 2);
v_unary_1536_ = lean_ctor_get(v_semantics_1462_, 11);
lean_inc(v_unary_1536_);
v___x_1537_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_operand_1535_);
v___x_1538_ = lean_apply_2(v_unary_1536_, v_operator_1534_, v___x_1537_);
return v___x_1538_;
}
case 12:
{
lean_object* v_operator_1539_; lean_object* v_left_1540_; lean_object* v_right_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_operator_1539_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_operator_1539_);
v_left_1540_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_left_1540_);
v_right_1541_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_right_1541_);
lean_dec_ref_known(v_x_1465_, 3);
lean_inc(v_x_1464_);
lean_inc(v_n_1470_);
lean_inc_ref_n(v_semantics_1462_, 2);
v___x_1542_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_left_1540_);
v___x_1543_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_right_1541_);
v___x_1544_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg(v_semantics_1462_, v_operator_1539_, v___x_1542_, v___x_1543_);
return v___x_1544_;
}
case 13:
{
lean_object* v_source_1545_; lean_object* v_iteratorId_1546_; lean_object* v_predicate_1547_; lean_object* v_exists3_1548_; lean_object* v___f_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v_source_1545_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_source_1545_);
v_iteratorId_1546_ = lean_ctor_get(v_x_1465_, 1);
lean_inc(v_iteratorId_1546_);
v_predicate_1547_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_predicate_1547_);
lean_dec_ref_known(v_x_1465_, 3);
v_exists3_1548_ = lean_ctor_get(v_semantics_1462_, 13);
lean_inc(v_exists3_1548_);
lean_inc(v_n_1470_);
lean_inc_ref(v_semantics_1462_);
lean_inc(v_x_1464_);
v___f_1549_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1549_, 0, v_x_1464_);
lean_closure_set(v___f_1549_, 1, v_iteratorId_1546_);
lean_closure_set(v___f_1549_, 2, v_semantics_1462_);
lean_closure_set(v___f_1549_, 3, v_n_1470_);
lean_closure_set(v___f_1549_, 4, v_predicate_1547_);
v___x_1550_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1545_);
v___x_1551_ = lean_apply_2(v_exists3_1548_, v___x_1550_, v___f_1549_);
return v___x_1551_;
}
case 14:
{
lean_object* v_source_1552_; lean_object* v_iteratorId_1553_; lean_object* v_predicate_1554_; lean_object* v_forAll3_1555_; lean_object* v___f_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v_source_1552_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_source_1552_);
v_iteratorId_1553_ = lean_ctor_get(v_x_1465_, 1);
lean_inc(v_iteratorId_1553_);
v_predicate_1554_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_predicate_1554_);
lean_dec_ref_known(v_x_1465_, 3);
v_forAll3_1555_ = lean_ctor_get(v_semantics_1462_, 14);
lean_inc(v_forAll3_1555_);
lean_inc(v_n_1470_);
lean_inc_ref(v_semantics_1462_);
lean_inc(v_x_1464_);
v___f_1556_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1556_, 0, v_x_1464_);
lean_closure_set(v___f_1556_, 1, v_iteratorId_1553_);
lean_closure_set(v___f_1556_, 2, v_semantics_1462_);
lean_closure_set(v___f_1556_, 3, v_n_1470_);
lean_closure_set(v___f_1556_, 4, v_predicate_1554_);
v___x_1557_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1552_);
v___x_1558_ = lean_apply_2(v_forAll3_1555_, v___x_1557_, v___f_1556_);
return v___x_1558_;
}
case 15:
{
uint8_t v_kind_1559_; lean_object* v_elements_1560_; lean_object* v_collectionLiteral_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v_kind_1559_ = lean_ctor_get_uint8(v_x_1465_, sizeof(void*)*1);
v_elements_1560_ = lean_ctor_get(v_x_1465_, 0);
lean_inc(v_elements_1560_);
lean_dec_ref_known(v_x_1465_, 1);
v_collectionLiteral_1561_ = lean_ctor_get(v_semantics_1462_, 15);
lean_inc(v_collectionLiteral_1561_);
v___x_1562_ = lean_box(0);
v___x_1563_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_elements_1560_, v___x_1562_);
v___x_1564_ = lean_box(v_kind_1559_);
v___x_1565_ = lean_apply_2(v_collectionLiteral_1561_, v___x_1564_, v___x_1563_);
return v___x_1565_;
}
case 16:
{
lean_object* v_operation_1566_; lean_object* v_source_1567_; lean_object* v_element_1568_; lean_object* v_includesFamily_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_operation_1566_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_operation_1566_);
v_source_1567_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_source_1567_);
v_element_1568_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_element_1568_);
lean_dec_ref_known(v_x_1465_, 3);
v_includesFamily_1569_ = lean_ctor_get(v_semantics_1462_, 16);
lean_inc(v_includesFamily_1569_);
lean_inc(v_x_1464_);
lean_inc(v_n_1470_);
lean_inc_ref(v_semantics_1462_);
v___x_1570_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1567_);
v___x_1571_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_element_1568_);
v___x_1572_ = lean_apply_3(v_includesFamily_1569_, v_operation_1566_, v___x_1570_, v___x_1571_);
return v___x_1572_;
}
case 17:
{
lean_object* v_operation_1573_; lean_object* v_source_1574_; lean_object* v_element_1575_; lean_object* v_countFamily_1576_; lean_object* v___x_1577_; 
v_operation_1573_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_operation_1573_);
v_source_1574_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_source_1574_);
v_element_1575_ = lean_ctor_get(v_x_1465_, 2);
lean_inc(v_element_1575_);
lean_dec_ref_known(v_x_1465_, 3);
v_countFamily_1576_ = lean_ctor_get(v_semantics_1462_, 17);
lean_inc(v_countFamily_1576_);
lean_inc(v_x_1464_);
lean_inc(v_n_1470_);
lean_inc_ref(v_semantics_1462_);
v___x_1577_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_source_1574_);
if (lean_obj_tag(v_element_1575_) == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
lean_dec(v_n_1470_);
lean_dec(v_x_1464_);
lean_dec_ref(v_semantics_1462_);
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_apply_3(v_countFamily_1576_, v_operation_1573_, v___x_1577_, v___x_1578_);
return v___x_1579_;
}
else
{
lean_object* v_val_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1589_; 
v_val_1580_ = lean_ctor_get(v_element_1575_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_element_1575_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1582_ = v_element_1575_;
v_isShared_1583_ = v_isSharedCheck_1589_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_val_1580_);
lean_dec(v_element_1575_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1589_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1584_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_val_1580_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v___x_1584_);
v___x_1586_ = v___x_1582_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_apply_3(v_countFamily_1576_, v_operation_1573_, v___x_1577_, v___x_1586_);
return v___x_1587_;
}
}
}
}
case 18:
{
lean_object* v_operation_1590_; lean_object* v_left_1591_; lean_object* v_right_1592_; lean_object* v_setAlgebra_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v_operation_1590_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_operation_1590_);
v_left_1591_ = lean_ctor_get(v_x_1465_, 1);
lean_inc_ref(v_left_1591_);
v_right_1592_ = lean_ctor_get(v_x_1465_, 2);
lean_inc_ref(v_right_1592_);
lean_dec_ref_known(v_x_1465_, 3);
v_setAlgebra_1593_ = lean_ctor_get(v_semantics_1462_, 18);
lean_inc(v_setAlgebra_1593_);
lean_inc(v_x_1464_);
lean_inc(v_n_1470_);
lean_inc_ref(v_semantics_1462_);
v___x_1594_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_left_1591_);
v___x_1595_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_right_1592_);
v___x_1596_ = lean_apply_3(v_setAlgebra_1593_, v_operation_1590_, v___x_1594_, v___x_1595_);
return v___x_1596_;
}
default: 
{
lean_object* v_plan_1597_; lean_object* v_materialize_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v_plan_1597_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_ref(v_plan_1597_);
lean_dec_ref_known(v_x_1465_, 1);
v_materialize_1598_ = lean_ctor_get(v_semantics_1462_, 19);
lean_inc(v_materialize_1598_);
v___x_1599_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(v_semantics_1462_, v_n_1470_, v_x_1464_, v_plan_1597_);
v___x_1600_ = lean_apply_1(v_materialize_1598_, v___x_1599_);
return v___x_1600_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg___lam__0(lean_object* v_x_1601_, lean_object* v_iteratorId_1602_, lean_object* v_semantics_1603_, lean_object* v_n_1604_, lean_object* v_predicate_1605_, lean_object* v_value_1606_){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1607_, 0, lean_box(0));
lean_closure_set(v___x_1607_, 1, v_x_1601_);
lean_closure_set(v___x_1607_, 2, v_iteratorId_1602_);
lean_closure_set(v___x_1607_, 3, v_value_1606_);
v___x_1608_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1603_, v_n_1604_, v___x_1607_, v_predicate_1605_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr(lean_object* v_Value_1609_, lean_object* v_Collection_1610_, lean_object* v_semantics_1611_, lean_object* v_x_1612_, lean_object* v_x_1613_, lean_object* v_x_1614_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCoreExpr___redArg(v_semantics_1611_, v_x_1612_, v_x_1613_, v_x_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan(lean_object* v_Value_1616_, lean_object* v_Collection_1617_, lean_object* v_semantics_1618_, lean_object* v_x_1619_, lean_object* v_x_1620_, lean_object* v_x_1621_){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalCorePlan___redArg(v_semantics_1618_, v_x_1619_, v_x_1620_, v_x_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0(lean_object* v_Value_1623_, lean_object* v_Collection_1624_, lean_object* v_semantics_1625_, lean_object* v_n_1626_, lean_object* v_x_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalCoreExpr_spec__0___redArg(v_semantics_1625_, v_n_1626_, v_x_1627_, v_a_1628_, v_a_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter___redArg(lean_object* v_x_1631_, lean_object* v_x_1632_, lean_object* v_x_1633_, lean_object* v_h__1_1634_, lean_object* v_h__2_1635_){
_start:
{
lean_object* v_zero_1636_; uint8_t v_isZero_1637_; 
v_zero_1636_ = lean_unsigned_to_nat(0u);
v_isZero_1637_ = lean_nat_dec_eq(v_x_1631_, v_zero_1636_);
if (v_isZero_1637_ == 1)
{
lean_object* v___x_1638_; 
lean_dec(v_h__2_1635_);
v___x_1638_ = lean_apply_2(v_h__1_1634_, v_x_1632_, v_x_1633_);
return v___x_1638_;
}
else
{
lean_object* v_one_1639_; lean_object* v_n_1640_; lean_object* v___x_1641_; 
lean_dec(v_h__1_1634_);
v_one_1639_ = lean_unsigned_to_nat(1u);
v_n_1640_ = lean_nat_sub(v_x_1631_, v_one_1639_);
v___x_1641_ = lean_apply_3(v_h__2_1635_, v_n_1640_, v_x_1632_, v_x_1633_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter___redArg___boxed(lean_object* v_x_1642_, lean_object* v_x_1643_, lean_object* v_x_1644_, lean_object* v_h__1_1645_, lean_object* v_h__2_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter___redArg(v_x_1642_, v_x_1643_, v_x_1644_, v_h__1_1645_, v_h__2_1646_);
lean_dec(v_x_1642_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter(lean_object* v_Value_1648_, lean_object* v_motive_1649_, lean_object* v_x_1650_, lean_object* v_x_1651_, lean_object* v_x_1652_, lean_object* v_h__1_1653_, lean_object* v_h__2_1654_){
_start:
{
lean_object* v_zero_1655_; uint8_t v_isZero_1656_; 
v_zero_1655_ = lean_unsigned_to_nat(0u);
v_isZero_1656_ = lean_nat_dec_eq(v_x_1650_, v_zero_1655_);
if (v_isZero_1656_ == 1)
{
lean_object* v___x_1657_; 
lean_dec(v_h__2_1654_);
v___x_1657_ = lean_apply_2(v_h__1_1653_, v_x_1651_, v_x_1652_);
return v___x_1657_;
}
else
{
lean_object* v_one_1658_; lean_object* v_n_1659_; lean_object* v___x_1660_; 
lean_dec(v_h__1_1653_);
v_one_1658_ = lean_unsigned_to_nat(1u);
v_n_1659_ = lean_nat_sub(v_x_1650_, v_one_1658_);
v___x_1660_ = lean_apply_3(v_h__2_1654_, v_n_1659_, v_x_1651_, v_x_1652_);
return v___x_1660_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter___boxed(lean_object* v_Value_1661_, lean_object* v_motive_1662_, lean_object* v_x_1663_, lean_object* v_x_1664_, lean_object* v_x_1665_, lean_object* v_h__1_1666_, lean_object* v_h__2_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCoreExpr_match__1_splitter(v_Value_1661_, v_motive_1662_, v_x_1663_, v_x_1664_, v_x_1665_, v_h__1_1666_, v_h__2_1667_);
lean_dec(v_x_1663_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter___redArg(lean_object* v_x_1669_, lean_object* v_x_1670_, lean_object* v_x_1671_, lean_object* v_h__1_1672_, lean_object* v_h__2_1673_){
_start:
{
lean_object* v_zero_1674_; uint8_t v_isZero_1675_; 
v_zero_1674_ = lean_unsigned_to_nat(0u);
v_isZero_1675_ = lean_nat_dec_eq(v_x_1669_, v_zero_1674_);
if (v_isZero_1675_ == 1)
{
lean_object* v___x_1676_; 
lean_dec(v_h__2_1673_);
v___x_1676_ = lean_apply_2(v_h__1_1672_, v_x_1670_, v_x_1671_);
return v___x_1676_;
}
else
{
lean_object* v_one_1677_; lean_object* v_n_1678_; lean_object* v___x_1679_; 
lean_dec(v_h__1_1672_);
v_one_1677_ = lean_unsigned_to_nat(1u);
v_n_1678_ = lean_nat_sub(v_x_1669_, v_one_1677_);
v___x_1679_ = lean_apply_3(v_h__2_1673_, v_n_1678_, v_x_1670_, v_x_1671_);
return v___x_1679_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter___redArg___boxed(lean_object* v_x_1680_, lean_object* v_x_1681_, lean_object* v_x_1682_, lean_object* v_h__1_1683_, lean_object* v_h__2_1684_){
_start:
{
lean_object* v_res_1685_; 
v_res_1685_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter___redArg(v_x_1680_, v_x_1681_, v_x_1682_, v_h__1_1683_, v_h__2_1684_);
lean_dec(v_x_1680_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter(lean_object* v_Value_1686_, lean_object* v_motive_1687_, lean_object* v_x_1688_, lean_object* v_x_1689_, lean_object* v_x_1690_, lean_object* v_h__1_1691_, lean_object* v_h__2_1692_){
_start:
{
lean_object* v_zero_1693_; uint8_t v_isZero_1694_; 
v_zero_1693_ = lean_unsigned_to_nat(0u);
v_isZero_1694_ = lean_nat_dec_eq(v_x_1688_, v_zero_1693_);
if (v_isZero_1694_ == 1)
{
lean_object* v___x_1695_; 
lean_dec(v_h__2_1692_);
v___x_1695_ = lean_apply_2(v_h__1_1691_, v_x_1689_, v_x_1690_);
return v___x_1695_;
}
else
{
lean_object* v_one_1696_; lean_object* v_n_1697_; lean_object* v___x_1698_; 
lean_dec(v_h__1_1691_);
v_one_1696_ = lean_unsigned_to_nat(1u);
v_n_1697_ = lean_nat_sub(v_x_1688_, v_one_1696_);
v___x_1698_ = lean_apply_3(v_h__2_1692_, v_n_1697_, v_x_1689_, v_x_1690_);
return v___x_1698_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter___boxed(lean_object* v_Value_1699_, lean_object* v_motive_1700_, lean_object* v_x_1701_, lean_object* v_x_1702_, lean_object* v_x_1703_, lean_object* v_h__1_1704_, lean_object* v_h__2_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalCorePlan_match__1_splitter(v_Value_1699_, v_motive_1700_, v_x_1701_, v_x_1702_, v_x_1703_, v_h__1_1704_, v_h__2_1705_);
lean_dec(v_x_1701_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0___redArg(lean_object* v_semantics_1707_, lean_object* v_n_1708_, lean_object* v_x_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_){
_start:
{
if (lean_obj_tag(v_a_1710_) == 0)
{
lean_object* v___x_1712_; 
lean_dec(v_x_1709_);
lean_dec(v_n_1708_);
lean_dec_ref(v_semantics_1707_);
v___x_1712_ = l_List_reverse___redArg(v_a_1711_);
return v___x_1712_;
}
else
{
lean_object* v_head_1713_; lean_object* v_tail_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1723_; 
v_head_1713_ = lean_ctor_get(v_a_1710_, 0);
v_tail_1714_ = lean_ctor_get(v_a_1710_, 1);
v_isSharedCheck_1723_ = !lean_is_exclusive(v_a_1710_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1716_ = v_a_1710_;
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_tail_1714_);
lean_inc(v_head_1713_);
lean_dec(v_a_1710_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; lean_object* v___x_1720_; 
lean_inc(v_x_1709_);
lean_inc(v_n_1708_);
lean_inc_ref(v_semantics_1707_);
v___x_1718_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1707_, v_n_1708_, v_x_1709_, v_head_1713_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 1, v_a_1711_);
lean_ctor_set(v___x_1716_, 0, v___x_1718_);
v___x_1720_ = v___x_1716_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v_a_1711_);
v___x_1720_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
v_a_1710_ = v_tail_1714_;
v_a_1711_ = v___x_1720_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg___lam__1(lean_object* v_x_1724_, lean_object* v_iteratorId_1725_, lean_object* v_semantics_1726_, lean_object* v_n_1727_, lean_object* v_body_1728_, lean_object* v_value_1729_){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1730_, 0, lean_box(0));
lean_closure_set(v___x_1730_, 1, v_x_1724_);
lean_closure_set(v___x_1730_, 2, v_iteratorId_1725_);
lean_closure_set(v___x_1730_, 3, v_value_1729_);
v___x_1731_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1726_, v_n_1727_, v___x_1730_, v_body_1728_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(lean_object* v_semantics_1732_, lean_object* v_x_1733_, lean_object* v_x_1734_, lean_object* v_x_1735_){
_start:
{
lean_object* v_zero_1736_; uint8_t v_isZero_1737_; 
v_zero_1736_ = lean_unsigned_to_nat(0u);
v_isZero_1737_ = lean_nat_dec_eq(v_x_1733_, v_zero_1736_);
if (v_isZero_1737_ == 1)
{
lean_object* v_outOfFuelCollection_1738_; 
lean_dec_ref(v_x_1735_);
lean_dec(v_x_1734_);
lean_dec(v_x_1733_);
v_outOfFuelCollection_1738_ = lean_ctor_get(v_semantics_1732_, 1);
lean_inc(v_outOfFuelCollection_1738_);
lean_dec_ref(v_semantics_1732_);
return v_outOfFuelCollection_1738_;
}
else
{
lean_object* v_one_1739_; lean_object* v_n_1740_; 
v_one_1739_ = lean_unsigned_to_nat(1u);
v_n_1740_ = lean_nat_sub(v_x_1733_, v_one_1739_);
lean_dec(v_x_1733_);
switch(lean_obj_tag(v_x_1735_))
{
case 0:
{
lean_object* v_collection_1741_; lean_object* v_fromCollection_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v_collection_1741_ = lean_ctor_get(v_x_1735_, 0);
lean_inc_ref(v_collection_1741_);
lean_dec_ref_known(v_x_1735_, 1);
v_fromCollection_1742_ = lean_ctor_get(v_semantics_1732_, 20);
lean_inc(v_fromCollection_1742_);
v___x_1743_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1732_, v_n_1740_, v_x_1734_, v_collection_1741_);
v___x_1744_ = lean_apply_1(v_fromCollection_1742_, v___x_1743_);
return v___x_1744_;
}
case 1:
{
lean_object* v_classKey_1745_; lean_object* v_declarationId_1746_; lean_object* v_scanClass_1747_; lean_object* v___x_1748_; 
lean_dec(v_n_1740_);
lean_dec(v_x_1734_);
v_classKey_1745_ = lean_ctor_get(v_x_1735_, 0);
lean_inc_ref(v_classKey_1745_);
v_declarationId_1746_ = lean_ctor_get(v_x_1735_, 1);
lean_inc(v_declarationId_1746_);
lean_dec_ref_known(v_x_1735_, 2);
v_scanClass_1747_ = lean_ctor_get(v_semantics_1732_, 21);
lean_inc(v_scanClass_1747_);
lean_dec_ref(v_semantics_1732_);
v___x_1748_ = lean_apply_2(v_scanClass_1747_, v_classKey_1745_, v_declarationId_1746_);
return v___x_1748_;
}
case 2:
{
lean_object* v_source_1749_; lean_object* v_association_1750_; lean_object* v_role_1751_; lean_object* v_qualifiers_1752_; uint8_t v_reverse_1753_; uint8_t v_associationClass_1754_; uint8_t v_viaAssociationClass_1755_; lean_object* v_navigateMany_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v_source_1749_ = lean_ctor_get(v_x_1735_, 0);
lean_inc_ref(v_source_1749_);
v_association_1750_ = lean_ctor_get(v_x_1735_, 1);
lean_inc_ref(v_association_1750_);
v_role_1751_ = lean_ctor_get(v_x_1735_, 2);
lean_inc_ref(v_role_1751_);
v_qualifiers_1752_ = lean_ctor_get(v_x_1735_, 3);
lean_inc(v_qualifiers_1752_);
v_reverse_1753_ = lean_ctor_get_uint8(v_x_1735_, sizeof(void*)*4);
v_associationClass_1754_ = lean_ctor_get_uint8(v_x_1735_, sizeof(void*)*4 + 1);
v_viaAssociationClass_1755_ = lean_ctor_get_uint8(v_x_1735_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_1735_, 4);
v_navigateMany_1756_ = lean_ctor_get(v_semantics_1732_, 22);
lean_inc(v_navigateMany_1756_);
lean_inc(v_x_1734_);
lean_inc(v_n_1740_);
lean_inc_ref(v_semantics_1732_);
v___x_1757_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1732_, v_n_1740_, v_x_1734_, v_source_1749_);
v___x_1758_ = lean_box(0);
v___x_1759_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0___redArg(v_semantics_1732_, v_n_1740_, v_x_1734_, v_qualifiers_1752_, v___x_1758_);
v___x_1760_ = lean_box(v_reverse_1753_);
v___x_1761_ = lean_box(v_associationClass_1754_);
v___x_1762_ = lean_box(v_viaAssociationClass_1755_);
v___x_1763_ = lean_apply_7(v_navigateMany_1756_, v___x_1757_, v_association_1750_, v_role_1751_, v___x_1759_, v___x_1760_, v___x_1761_, v___x_1762_);
return v___x_1763_;
}
case 3:
{
lean_object* v_source_1764_; lean_object* v_iteratorId_1765_; lean_object* v_predicate_1766_; uint8_t v_isSelect_1767_; lean_object* v_filter_1768_; lean_object* v___f_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v_source_1764_ = lean_ctor_get(v_x_1735_, 0);
lean_inc_ref(v_source_1764_);
v_iteratorId_1765_ = lean_ctor_get(v_x_1735_, 1);
lean_inc(v_iteratorId_1765_);
v_predicate_1766_ = lean_ctor_get(v_x_1735_, 2);
lean_inc_ref(v_predicate_1766_);
v_isSelect_1767_ = lean_ctor_get_uint8(v_x_1735_, sizeof(void*)*3);
lean_dec_ref_known(v_x_1735_, 3);
v_filter_1768_ = lean_ctor_get(v_semantics_1732_, 23);
lean_inc(v_filter_1768_);
lean_inc(v_n_1740_);
lean_inc_ref(v_semantics_1732_);
lean_inc(v_x_1734_);
v___f_1769_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1769_, 0, v_x_1734_);
lean_closure_set(v___f_1769_, 1, v_iteratorId_1765_);
lean_closure_set(v___f_1769_, 2, v_semantics_1732_);
lean_closure_set(v___f_1769_, 3, v_n_1740_);
lean_closure_set(v___f_1769_, 4, v_predicate_1766_);
v___x_1770_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(v_semantics_1732_, v_n_1740_, v_x_1734_, v_source_1764_);
v___x_1771_ = lean_box(v_isSelect_1767_);
v___x_1772_ = lean_apply_3(v_filter_1768_, v___x_1770_, v___f_1769_, v___x_1771_);
return v___x_1772_;
}
case 4:
{
lean_object* v_source_1773_; lean_object* v_iteratorId_1774_; lean_object* v_body_1775_; lean_object* v_collect_1776_; lean_object* v___f_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v_source_1773_ = lean_ctor_get(v_x_1735_, 0);
lean_inc_ref(v_source_1773_);
v_iteratorId_1774_ = lean_ctor_get(v_x_1735_, 1);
lean_inc(v_iteratorId_1774_);
v_body_1775_ = lean_ctor_get(v_x_1735_, 2);
lean_inc_ref(v_body_1775_);
lean_dec_ref_known(v_x_1735_, 3);
v_collect_1776_ = lean_ctor_get(v_semantics_1732_, 24);
lean_inc(v_collect_1776_);
lean_inc(v_n_1740_);
lean_inc_ref(v_semantics_1732_);
lean_inc(v_x_1734_);
v___f_1777_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg___lam__1), 6, 5);
lean_closure_set(v___f_1777_, 0, v_x_1734_);
lean_closure_set(v___f_1777_, 1, v_iteratorId_1774_);
lean_closure_set(v___f_1777_, 2, v_semantics_1732_);
lean_closure_set(v___f_1777_, 3, v_n_1740_);
lean_closure_set(v___f_1777_, 4, v_body_1775_);
v___x_1778_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(v_semantics_1732_, v_n_1740_, v_x_1734_, v_source_1773_);
v___x_1779_ = lean_apply_2(v_collect_1776_, v___x_1778_, v___f_1777_);
return v___x_1779_;
}
case 5:
{
lean_object* v_source_1780_; lean_object* v_distinct_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v_source_1780_ = lean_ctor_get(v_x_1735_, 0);
lean_inc_ref(v_source_1780_);
lean_dec_ref_known(v_x_1735_, 1);
v_distinct_1781_ = lean_ctor_get(v_semantics_1732_, 25);
lean_inc(v_distinct_1781_);
v___x_1782_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(v_semantics_1732_, v_n_1740_, v_x_1734_, v_source_1780_);
v___x_1783_ = lean_apply_1(v_distinct_1781_, v___x_1782_);
return v___x_1783_;
}
default: 
{
lean_object* v_binderId_1784_; lean_object* v_value_1785_; lean_object* v_body_1786_; lean_object* v_denotation_1787_; lean_object* v___x_1788_; 
v_binderId_1784_ = lean_ctor_get(v_x_1735_, 0);
lean_inc(v_binderId_1784_);
v_value_1785_ = lean_ctor_get(v_x_1735_, 1);
lean_inc_ref(v_value_1785_);
v_body_1786_ = lean_ctor_get(v_x_1735_, 2);
lean_inc_ref(v_body_1786_);
lean_dec_ref_known(v_x_1735_, 3);
lean_inc(v_x_1734_);
lean_inc(v_n_1740_);
lean_inc_ref(v_semantics_1732_);
v_denotation_1787_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1732_, v_n_1740_, v_x_1734_, v_value_1785_);
v___x_1788_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1788_, 0, lean_box(0));
lean_closure_set(v___x_1788_, 1, v_x_1734_);
lean_closure_set(v___x_1788_, 2, v_binderId_1784_);
lean_closure_set(v___x_1788_, 3, v_denotation_1787_);
v_x_1733_ = v_n_1740_;
v_x_1734_ = v___x_1788_;
v_x_1735_ = v_body_1786_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(lean_object* v_semantics_1790_, lean_object* v_x_1791_, lean_object* v_x_1792_, lean_object* v_x_1793_){
_start:
{
lean_object* v_zero_1794_; uint8_t v_isZero_1795_; 
v_zero_1794_ = lean_unsigned_to_nat(0u);
v_isZero_1795_ = lean_nat_dec_eq(v_x_1791_, v_zero_1794_);
if (v_isZero_1795_ == 1)
{
lean_object* v_outOfFuelValue_1796_; 
lean_dec_ref(v_x_1793_);
lean_dec(v_x_1792_);
lean_dec(v_x_1791_);
v_outOfFuelValue_1796_ = lean_ctor_get(v_semantics_1790_, 0);
lean_inc(v_outOfFuelValue_1796_);
lean_dec_ref(v_semantics_1790_);
return v_outOfFuelValue_1796_;
}
else
{
lean_object* v_one_1797_; lean_object* v_n_1798_; 
v_one_1797_ = lean_unsigned_to_nat(1u);
v_n_1798_ = lean_nat_sub(v_x_1791_, v_one_1797_);
lean_dec(v_x_1791_);
switch(lean_obj_tag(v_x_1793_))
{
case 0:
{
lean_object* v_declarationId_1799_; lean_object* v___x_1800_; 
lean_dec(v_n_1798_);
lean_dec_ref(v_semantics_1790_);
v_declarationId_1799_ = lean_ctor_get(v_x_1793_, 0);
lean_inc(v_declarationId_1799_);
lean_dec_ref_known(v_x_1793_, 1);
v___x_1800_ = lean_apply_1(v_x_1792_, v_declarationId_1799_);
return v___x_1800_;
}
case 1:
{
lean_object* v_name_1801_; lean_object* v_parameter_1802_; lean_object* v___x_1803_; 
lean_dec(v_n_1798_);
lean_dec(v_x_1792_);
v_name_1801_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_name_1801_);
lean_dec_ref_known(v_x_1793_, 1);
v_parameter_1802_ = lean_ctor_get(v_semantics_1790_, 2);
lean_inc(v_parameter_1802_);
lean_dec_ref(v_semantics_1790_);
v___x_1803_ = lean_apply_1(v_parameter_1802_, v_name_1801_);
return v___x_1803_;
}
case 2:
{
lean_object* v_type_1804_; lean_object* v_bottom_1805_; lean_object* v___x_1806_; 
lean_dec(v_n_1798_);
lean_dec(v_x_1792_);
v_type_1804_ = lean_ctor_get(v_x_1793_, 0);
lean_inc(v_type_1804_);
lean_dec_ref_known(v_x_1793_, 1);
v_bottom_1805_ = lean_ctor_get(v_semantics_1790_, 3);
lean_inc(v_bottom_1805_);
lean_dec_ref(v_semantics_1790_);
v___x_1806_ = lean_apply_1(v_bottom_1805_, v_type_1804_);
return v___x_1806_;
}
case 3:
{
lean_object* v_value_1807_; lean_object* v_constant_1808_; lean_object* v___x_1809_; 
lean_dec(v_n_1798_);
lean_dec(v_x_1792_);
v_value_1807_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_value_1807_);
lean_dec_ref_known(v_x_1793_, 1);
v_constant_1808_ = lean_ctor_get(v_semantics_1790_, 4);
lean_inc(v_constant_1808_);
lean_dec_ref(v_semantics_1790_);
v___x_1809_ = lean_apply_1(v_constant_1808_, v_value_1807_);
return v___x_1809_;
}
case 4:
{
lean_object* v_coercion_1810_; lean_object* v_source_1811_; lean_object* v_coerce_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v_coercion_1810_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_coercion_1810_);
v_source_1811_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_source_1811_);
lean_dec_ref_known(v_x_1793_, 2);
v_coerce_1812_ = lean_ctor_get(v_semantics_1790_, 5);
lean_inc(v_coerce_1812_);
v___x_1813_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1811_);
v___x_1814_ = lean_apply_2(v_coerce_1812_, v_coercion_1810_, v___x_1813_);
return v___x_1814_;
}
case 5:
{
lean_object* v_binderId_1815_; lean_object* v_value_1816_; lean_object* v_body_1817_; lean_object* v_denotation_1818_; lean_object* v___x_1819_; 
v_binderId_1815_ = lean_ctor_get(v_x_1793_, 0);
lean_inc(v_binderId_1815_);
v_value_1816_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_value_1816_);
v_body_1817_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_body_1817_);
lean_dec_ref_known(v_x_1793_, 3);
lean_inc(v_x_1792_);
lean_inc(v_n_1798_);
lean_inc_ref(v_semantics_1790_);
v_denotation_1818_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_value_1816_);
v___x_1819_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1819_, 0, lean_box(0));
lean_closure_set(v___x_1819_, 1, v_x_1792_);
lean_closure_set(v___x_1819_, 2, v_binderId_1815_);
lean_closure_set(v___x_1819_, 3, v_denotation_1818_);
v_x_1791_ = v_n_1798_;
v_x_1792_ = v___x_1819_;
v_x_1793_ = v_body_1817_;
goto _start;
}
case 6:
{
lean_object* v_condition_1821_; lean_object* v_thenExpr_1822_; lean_object* v_elseExpr_1823_; lean_object* v_ite_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_condition_1821_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_condition_1821_);
v_thenExpr_1822_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_thenExpr_1822_);
v_elseExpr_1823_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_elseExpr_1823_);
lean_dec_ref_known(v_x_1793_, 3);
v_ite_1824_ = lean_ctor_get(v_semantics_1790_, 6);
lean_inc(v_ite_1824_);
lean_inc_n(v_x_1792_, 2);
lean_inc_n(v_n_1798_, 2);
lean_inc_ref_n(v_semantics_1790_, 2);
v___x_1825_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_condition_1821_);
v___x_1826_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_thenExpr_1822_);
v___x_1827_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_elseExpr_1823_);
v___x_1828_ = lean_apply_3(v_ite_1824_, v___x_1825_, v___x_1826_, v___x_1827_);
return v___x_1828_;
}
case 7:
{
lean_object* v_source_1829_; lean_object* v_ownerClass_1830_; lean_object* v_attributeName_1831_; lean_object* v_readAttribute_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v_source_1829_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_source_1829_);
v_ownerClass_1830_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_ownerClass_1830_);
v_attributeName_1831_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_attributeName_1831_);
lean_dec_ref_known(v_x_1793_, 3);
v_readAttribute_1832_ = lean_ctor_get(v_semantics_1790_, 7);
lean_inc(v_readAttribute_1832_);
v___x_1833_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1829_);
v___x_1834_ = lean_apply_3(v_readAttribute_1832_, v___x_1833_, v_ownerClass_1830_, v_attributeName_1831_);
return v___x_1834_;
}
case 8:
{
lean_object* v_source_1835_; lean_object* v_association_1836_; lean_object* v_role_1837_; lean_object* v_qualifiers_1838_; uint8_t v_reverse_1839_; uint8_t v_associationClass_1840_; uint8_t v_viaAssociationClass_1841_; lean_object* v_navigateOne_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v_source_1835_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_source_1835_);
v_association_1836_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_association_1836_);
v_role_1837_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_role_1837_);
v_qualifiers_1838_ = lean_ctor_get(v_x_1793_, 3);
lean_inc(v_qualifiers_1838_);
v_reverse_1839_ = lean_ctor_get_uint8(v_x_1793_, sizeof(void*)*4);
v_associationClass_1840_ = lean_ctor_get_uint8(v_x_1793_, sizeof(void*)*4 + 1);
v_viaAssociationClass_1841_ = lean_ctor_get_uint8(v_x_1793_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_1793_, 4);
v_navigateOne_1842_ = lean_ctor_get(v_semantics_1790_, 8);
lean_inc(v_navigateOne_1842_);
lean_inc(v_x_1792_);
lean_inc(v_n_1798_);
lean_inc_ref(v_semantics_1790_);
v___x_1843_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1835_);
v___x_1844_ = lean_box(0);
v___x_1845_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_qualifiers_1838_, v___x_1844_);
v___x_1846_ = lean_box(v_reverse_1839_);
v___x_1847_ = lean_box(v_associationClass_1840_);
v___x_1848_ = lean_box(v_viaAssociationClass_1841_);
v___x_1849_ = lean_apply_7(v_navigateOne_1842_, v___x_1843_, v_association_1836_, v_role_1837_, v___x_1845_, v___x_1846_, v___x_1847_, v___x_1848_);
return v___x_1849_;
}
case 9:
{
lean_object* v_source_1850_; lean_object* v_targetClass_1851_; uint8_t v_exact_1852_; lean_object* v_typeTest_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v_source_1850_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_source_1850_);
v_targetClass_1851_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_targetClass_1851_);
v_exact_1852_ = lean_ctor_get_uint8(v_x_1793_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1793_, 2);
v_typeTest_1853_ = lean_ctor_get(v_semantics_1790_, 9);
lean_inc(v_typeTest_1853_);
v___x_1854_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1850_);
v___x_1855_ = lean_box(v_exact_1852_);
v___x_1856_ = lean_apply_3(v_typeTest_1853_, v___x_1854_, v_targetClass_1851_, v___x_1855_);
return v___x_1856_;
}
case 10:
{
lean_object* v_source_1857_; lean_object* v_targetClass_1858_; lean_object* v_typeCast_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v_source_1857_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_source_1857_);
v_targetClass_1858_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_targetClass_1858_);
lean_dec_ref_known(v_x_1793_, 2);
v_typeCast_1859_ = lean_ctor_get(v_semantics_1790_, 10);
lean_inc(v_typeCast_1859_);
v___x_1860_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1857_);
v___x_1861_ = lean_apply_2(v_typeCast_1859_, v___x_1860_, v_targetClass_1858_);
return v___x_1861_;
}
case 11:
{
lean_object* v_operator_1862_; lean_object* v_operand_1863_; lean_object* v_unary_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v_operator_1862_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_operator_1862_);
v_operand_1863_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_operand_1863_);
lean_dec_ref_known(v_x_1793_, 2);
v_unary_1864_ = lean_ctor_get(v_semantics_1790_, 11);
lean_inc(v_unary_1864_);
v___x_1865_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_operand_1863_);
v___x_1866_ = lean_apply_2(v_unary_1864_, v_operator_1862_, v___x_1865_);
return v___x_1866_;
}
case 12:
{
lean_object* v_operator_1867_; lean_object* v_left_1868_; lean_object* v_right_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v_operator_1867_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_operator_1867_);
v_left_1868_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_left_1868_);
v_right_1869_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_right_1869_);
lean_dec_ref_known(v_x_1793_, 3);
lean_inc(v_x_1792_);
lean_inc(v_n_1798_);
lean_inc_ref_n(v_semantics_1790_, 2);
v___x_1870_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_left_1868_);
v___x_1871_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_right_1869_);
v___x_1872_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg(v_semantics_1790_, v_operator_1867_, v___x_1870_, v___x_1871_);
return v___x_1872_;
}
case 13:
{
lean_object* v_source_1873_; lean_object* v_iteratorId_1874_; lean_object* v_predicate_1875_; lean_object* v_exists3_1876_; lean_object* v___f_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v_source_1873_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_source_1873_);
v_iteratorId_1874_ = lean_ctor_get(v_x_1793_, 1);
lean_inc(v_iteratorId_1874_);
v_predicate_1875_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_predicate_1875_);
lean_dec_ref_known(v_x_1793_, 3);
v_exists3_1876_ = lean_ctor_get(v_semantics_1790_, 13);
lean_inc(v_exists3_1876_);
lean_inc(v_n_1798_);
lean_inc_ref(v_semantics_1790_);
lean_inc(v_x_1792_);
v___f_1877_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1877_, 0, v_x_1792_);
lean_closure_set(v___f_1877_, 1, v_iteratorId_1874_);
lean_closure_set(v___f_1877_, 2, v_semantics_1790_);
lean_closure_set(v___f_1877_, 3, v_n_1798_);
lean_closure_set(v___f_1877_, 4, v_predicate_1875_);
v___x_1878_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1873_);
v___x_1879_ = lean_apply_2(v_exists3_1876_, v___x_1878_, v___f_1877_);
return v___x_1879_;
}
case 14:
{
lean_object* v_source_1880_; lean_object* v_iteratorId_1881_; lean_object* v_predicate_1882_; lean_object* v_forAll3_1883_; lean_object* v___f_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v_source_1880_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_source_1880_);
v_iteratorId_1881_ = lean_ctor_get(v_x_1793_, 1);
lean_inc(v_iteratorId_1881_);
v_predicate_1882_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_predicate_1882_);
lean_dec_ref_known(v_x_1793_, 3);
v_forAll3_1883_ = lean_ctor_get(v_semantics_1790_, 14);
lean_inc(v_forAll3_1883_);
lean_inc(v_n_1798_);
lean_inc_ref(v_semantics_1790_);
lean_inc(v_x_1792_);
v___f_1884_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1884_, 0, v_x_1792_);
lean_closure_set(v___f_1884_, 1, v_iteratorId_1881_);
lean_closure_set(v___f_1884_, 2, v_semantics_1790_);
lean_closure_set(v___f_1884_, 3, v_n_1798_);
lean_closure_set(v___f_1884_, 4, v_predicate_1882_);
v___x_1885_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1880_);
v___x_1886_ = lean_apply_2(v_forAll3_1883_, v___x_1885_, v___f_1884_);
return v___x_1886_;
}
case 15:
{
uint8_t v_kind_1887_; lean_object* v_elements_1888_; lean_object* v_collectionLiteral_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; 
v_kind_1887_ = lean_ctor_get_uint8(v_x_1793_, sizeof(void*)*1);
v_elements_1888_ = lean_ctor_get(v_x_1793_, 0);
lean_inc(v_elements_1888_);
lean_dec_ref_known(v_x_1793_, 1);
v_collectionLiteral_1889_ = lean_ctor_get(v_semantics_1790_, 15);
lean_inc(v_collectionLiteral_1889_);
v___x_1890_ = lean_box(0);
v___x_1891_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_elements_1888_, v___x_1890_);
v___x_1892_ = lean_box(v_kind_1887_);
v___x_1893_ = lean_apply_2(v_collectionLiteral_1889_, v___x_1892_, v___x_1891_);
return v___x_1893_;
}
case 16:
{
lean_object* v_operation_1894_; lean_object* v_source_1895_; lean_object* v_element_1896_; lean_object* v_includesFamily_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v_operation_1894_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_operation_1894_);
v_source_1895_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_source_1895_);
v_element_1896_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_element_1896_);
lean_dec_ref_known(v_x_1793_, 3);
v_includesFamily_1897_ = lean_ctor_get(v_semantics_1790_, 16);
lean_inc(v_includesFamily_1897_);
lean_inc(v_x_1792_);
lean_inc(v_n_1798_);
lean_inc_ref(v_semantics_1790_);
v___x_1898_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1895_);
v___x_1899_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_element_1896_);
v___x_1900_ = lean_apply_3(v_includesFamily_1897_, v_operation_1894_, v___x_1898_, v___x_1899_);
return v___x_1900_;
}
case 17:
{
lean_object* v_operation_1901_; lean_object* v_source_1902_; lean_object* v_element_1903_; lean_object* v_countFamily_1904_; lean_object* v___x_1905_; 
v_operation_1901_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_operation_1901_);
v_source_1902_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_source_1902_);
v_element_1903_ = lean_ctor_get(v_x_1793_, 2);
lean_inc(v_element_1903_);
lean_dec_ref_known(v_x_1793_, 3);
v_countFamily_1904_ = lean_ctor_get(v_semantics_1790_, 17);
lean_inc(v_countFamily_1904_);
lean_inc(v_x_1792_);
lean_inc(v_n_1798_);
lean_inc_ref(v_semantics_1790_);
v___x_1905_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_source_1902_);
if (lean_obj_tag(v_element_1903_) == 0)
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
lean_dec(v_n_1798_);
lean_dec(v_x_1792_);
lean_dec_ref(v_semantics_1790_);
v___x_1906_ = lean_box(0);
v___x_1907_ = lean_apply_3(v_countFamily_1904_, v_operation_1901_, v___x_1905_, v___x_1906_);
return v___x_1907_;
}
else
{
lean_object* v_val_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1917_; 
v_val_1908_ = lean_ctor_get(v_element_1903_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v_element_1903_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1910_ = v_element_1903_;
v_isShared_1911_ = v_isSharedCheck_1917_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_val_1908_);
lean_dec(v_element_1903_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1917_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1912_; lean_object* v___x_1914_; 
v___x_1912_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_val_1908_);
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 0, v___x_1912_);
v___x_1914_ = v___x_1910_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
lean_object* v___x_1915_; 
v___x_1915_ = lean_apply_3(v_countFamily_1904_, v_operation_1901_, v___x_1905_, v___x_1914_);
return v___x_1915_;
}
}
}
}
case 18:
{
lean_object* v_operation_1918_; lean_object* v_left_1919_; lean_object* v_right_1920_; lean_object* v_setAlgebra_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v_operation_1918_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_operation_1918_);
v_left_1919_ = lean_ctor_get(v_x_1793_, 1);
lean_inc_ref(v_left_1919_);
v_right_1920_ = lean_ctor_get(v_x_1793_, 2);
lean_inc_ref(v_right_1920_);
lean_dec_ref_known(v_x_1793_, 3);
v_setAlgebra_1921_ = lean_ctor_get(v_semantics_1790_, 18);
lean_inc(v_setAlgebra_1921_);
lean_inc(v_x_1792_);
lean_inc(v_n_1798_);
lean_inc_ref(v_semantics_1790_);
v___x_1922_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_left_1919_);
v___x_1923_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_right_1920_);
v___x_1924_ = lean_apply_3(v_setAlgebra_1921_, v_operation_1918_, v___x_1922_, v___x_1923_);
return v___x_1924_;
}
default: 
{
lean_object* v_plan_1925_; lean_object* v_materialize_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v_plan_1925_ = lean_ctor_get(v_x_1793_, 0);
lean_inc_ref(v_plan_1925_);
lean_dec_ref_known(v_x_1793_, 1);
v_materialize_1926_ = lean_ctor_get(v_semantics_1790_, 19);
lean_inc(v_materialize_1926_);
v___x_1927_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(v_semantics_1790_, v_n_1798_, v_x_1792_, v_plan_1925_);
v___x_1928_ = lean_apply_1(v_materialize_1926_, v___x_1927_);
return v___x_1928_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg___lam__0(lean_object* v_x_1929_, lean_object* v_iteratorId_1930_, lean_object* v_semantics_1931_, lean_object* v_n_1932_, lean_object* v_predicate_1933_, lean_object* v_value_1934_){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_1935_, 0, lean_box(0));
lean_closure_set(v___x_1935_, 1, v_x_1929_);
lean_closure_set(v___x_1935_, 2, v_iteratorId_1930_);
lean_closure_set(v___x_1935_, 3, v_value_1934_);
v___x_1936_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1931_, v_n_1932_, v___x_1935_, v_predicate_1933_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr(lean_object* v_Value_1937_, lean_object* v_Collection_1938_, lean_object* v_semantics_1939_, lean_object* v_x_1940_, lean_object* v_x_1941_, lean_object* v_x_1942_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQExpr___redArg(v_semantics_1939_, v_x_1940_, v_x_1941_, v_x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan(lean_object* v_Value_1944_, lean_object* v_Collection_1945_, lean_object* v_semantics_1946_, lean_object* v_x_1947_, lean_object* v_x_1948_, lean_object* v_x_1949_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalQPlan___redArg(v_semantics_1946_, v_x_1947_, v_x_1948_, v_x_1949_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0(lean_object* v_Value_1951_, lean_object* v_Collection_1952_, lean_object* v_semantics_1953_, lean_object* v_n_1954_, lean_object* v_x_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalQExpr_spec__0___redArg(v_semantics_1953_, v_n_1954_, v_x_1955_, v_a_1956_, v_a_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter___redArg(lean_object* v_x_1959_, lean_object* v_x_1960_, lean_object* v_x_1961_, lean_object* v_h__1_1962_, lean_object* v_h__2_1963_){
_start:
{
lean_object* v_zero_1964_; uint8_t v_isZero_1965_; 
v_zero_1964_ = lean_unsigned_to_nat(0u);
v_isZero_1965_ = lean_nat_dec_eq(v_x_1959_, v_zero_1964_);
if (v_isZero_1965_ == 1)
{
lean_object* v___x_1966_; 
lean_dec(v_h__2_1963_);
v___x_1966_ = lean_apply_2(v_h__1_1962_, v_x_1960_, v_x_1961_);
return v___x_1966_;
}
else
{
lean_object* v_one_1967_; lean_object* v_n_1968_; lean_object* v___x_1969_; 
lean_dec(v_h__1_1962_);
v_one_1967_ = lean_unsigned_to_nat(1u);
v_n_1968_ = lean_nat_sub(v_x_1959_, v_one_1967_);
v___x_1969_ = lean_apply_3(v_h__2_1963_, v_n_1968_, v_x_1960_, v_x_1961_);
return v___x_1969_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter___redArg___boxed(lean_object* v_x_1970_, lean_object* v_x_1971_, lean_object* v_x_1972_, lean_object* v_h__1_1973_, lean_object* v_h__2_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter___redArg(v_x_1970_, v_x_1971_, v_x_1972_, v_h__1_1973_, v_h__2_1974_);
lean_dec(v_x_1970_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter(lean_object* v_Value_1976_, lean_object* v_motive_1977_, lean_object* v_x_1978_, lean_object* v_x_1979_, lean_object* v_x_1980_, lean_object* v_h__1_1981_, lean_object* v_h__2_1982_){
_start:
{
lean_object* v_zero_1983_; uint8_t v_isZero_1984_; 
v_zero_1983_ = lean_unsigned_to_nat(0u);
v_isZero_1984_ = lean_nat_dec_eq(v_x_1978_, v_zero_1983_);
if (v_isZero_1984_ == 1)
{
lean_object* v___x_1985_; 
lean_dec(v_h__2_1982_);
v___x_1985_ = lean_apply_2(v_h__1_1981_, v_x_1979_, v_x_1980_);
return v___x_1985_;
}
else
{
lean_object* v_one_1986_; lean_object* v_n_1987_; lean_object* v___x_1988_; 
lean_dec(v_h__1_1981_);
v_one_1986_ = lean_unsigned_to_nat(1u);
v_n_1987_ = lean_nat_sub(v_x_1978_, v_one_1986_);
v___x_1988_ = lean_apply_3(v_h__2_1982_, v_n_1987_, v_x_1979_, v_x_1980_);
return v___x_1988_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter___boxed(lean_object* v_Value_1989_, lean_object* v_motive_1990_, lean_object* v_x_1991_, lean_object* v_x_1992_, lean_object* v_x_1993_, lean_object* v_h__1_1994_, lean_object* v_h__2_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__3_splitter(v_Value_1989_, v_motive_1990_, v_x_1991_, v_x_1992_, v_x_1993_, v_h__1_1994_, v_h__2_1995_);
lean_dec(v_x_1991_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter___redArg(lean_object* v_expression_1997_, lean_object* v_h__1_1998_, lean_object* v_h__2_1999_, lean_object* v_h__3_2000_, lean_object* v_h__4_2001_, lean_object* v_h__5_2002_, lean_object* v_h__6_2003_, lean_object* v_h__7_2004_, lean_object* v_h__8_2005_, lean_object* v_h__9_2006_, lean_object* v_h__10_2007_, lean_object* v_h__11_2008_, lean_object* v_h__12_2009_, lean_object* v_h__13_2010_, lean_object* v_h__14_2011_, lean_object* v_h__15_2012_, lean_object* v_h__16_2013_, lean_object* v_h__17_2014_, lean_object* v_h__18_2015_, lean_object* v_h__19_2016_, lean_object* v_h__20_2017_){
_start:
{
switch(lean_obj_tag(v_expression_1997_))
{
case 0:
{
lean_object* v_declarationId_2018_; lean_object* v___x_2019_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
v_declarationId_2018_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc(v_declarationId_2018_);
lean_dec_ref_known(v_expression_1997_, 1);
v___x_2019_ = lean_apply_1(v_h__1_1998_, v_declarationId_2018_);
return v___x_2019_;
}
case 1:
{
lean_object* v_name_2020_; lean_object* v___x_2021_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__1_1998_);
v_name_2020_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_name_2020_);
lean_dec_ref_known(v_expression_1997_, 1);
v___x_2021_ = lean_apply_1(v_h__2_1999_, v_name_2020_);
return v___x_2021_;
}
case 2:
{
lean_object* v_type_2022_; lean_object* v___x_2023_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_type_2022_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc(v_type_2022_);
lean_dec_ref_known(v_expression_1997_, 1);
v___x_2023_ = lean_apply_1(v_h__3_2000_, v_type_2022_);
return v___x_2023_;
}
case 3:
{
lean_object* v_value_2024_; lean_object* v___x_2025_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_value_2024_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_value_2024_);
lean_dec_ref_known(v_expression_1997_, 1);
v___x_2025_ = lean_apply_1(v_h__4_2001_, v_value_2024_);
return v___x_2025_;
}
case 4:
{
lean_object* v_coercion_2026_; lean_object* v_source_2027_; lean_object* v___x_2028_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_coercion_2026_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_coercion_2026_);
v_source_2027_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_source_2027_);
lean_dec_ref_known(v_expression_1997_, 2);
v___x_2028_ = lean_apply_2(v_h__5_2002_, v_coercion_2026_, v_source_2027_);
return v___x_2028_;
}
case 5:
{
lean_object* v_binderId_2029_; lean_object* v_value_2030_; lean_object* v_body_2031_; lean_object* v___x_2032_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_binderId_2029_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc(v_binderId_2029_);
v_value_2030_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_value_2030_);
v_body_2031_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_body_2031_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2032_ = lean_apply_3(v_h__6_2003_, v_binderId_2029_, v_value_2030_, v_body_2031_);
return v___x_2032_;
}
case 6:
{
lean_object* v_condition_2033_; lean_object* v_thenExpr_2034_; lean_object* v_elseExpr_2035_; lean_object* v___x_2036_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_condition_2033_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_condition_2033_);
v_thenExpr_2034_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_thenExpr_2034_);
v_elseExpr_2035_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_elseExpr_2035_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2036_ = lean_apply_3(v_h__7_2004_, v_condition_2033_, v_thenExpr_2034_, v_elseExpr_2035_);
return v___x_2036_;
}
case 7:
{
lean_object* v_source_2037_; lean_object* v_ownerClass_2038_; lean_object* v_attributeName_2039_; lean_object* v___x_2040_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_source_2037_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_source_2037_);
v_ownerClass_2038_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_ownerClass_2038_);
v_attributeName_2039_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_attributeName_2039_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2040_ = lean_apply_3(v_h__8_2005_, v_source_2037_, v_ownerClass_2038_, v_attributeName_2039_);
return v___x_2040_;
}
case 8:
{
lean_object* v_source_2041_; lean_object* v_association_2042_; lean_object* v_role_2043_; lean_object* v_qualifiers_2044_; uint8_t v_reverse_2045_; uint8_t v_associationClass_2046_; uint8_t v_viaAssociationClass_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_source_2041_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_source_2041_);
v_association_2042_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_association_2042_);
v_role_2043_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_role_2043_);
v_qualifiers_2044_ = lean_ctor_get(v_expression_1997_, 3);
lean_inc(v_qualifiers_2044_);
v_reverse_2045_ = lean_ctor_get_uint8(v_expression_1997_, sizeof(void*)*4);
v_associationClass_2046_ = lean_ctor_get_uint8(v_expression_1997_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2047_ = lean_ctor_get_uint8(v_expression_1997_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_expression_1997_, 4);
v___x_2048_ = lean_box(v_reverse_2045_);
v___x_2049_ = lean_box(v_associationClass_2046_);
v___x_2050_ = lean_box(v_viaAssociationClass_2047_);
v___x_2051_ = lean_apply_7(v_h__9_2006_, v_source_2041_, v_association_2042_, v_role_2043_, v_qualifiers_2044_, v___x_2048_, v___x_2049_, v___x_2050_);
return v___x_2051_;
}
case 9:
{
lean_object* v_source_2052_; lean_object* v_targetClass_2053_; uint8_t v_exact_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_source_2052_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_source_2052_);
v_targetClass_2053_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_targetClass_2053_);
v_exact_2054_ = lean_ctor_get_uint8(v_expression_1997_, sizeof(void*)*2);
lean_dec_ref_known(v_expression_1997_, 2);
v___x_2055_ = lean_box(v_exact_2054_);
v___x_2056_ = lean_apply_3(v_h__10_2007_, v_source_2052_, v_targetClass_2053_, v___x_2055_);
return v___x_2056_;
}
case 10:
{
lean_object* v_source_2057_; lean_object* v_targetClass_2058_; lean_object* v___x_2059_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_source_2057_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_source_2057_);
v_targetClass_2058_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_targetClass_2058_);
lean_dec_ref_known(v_expression_1997_, 2);
v___x_2059_ = lean_apply_2(v_h__11_2008_, v_source_2057_, v_targetClass_2058_);
return v___x_2059_;
}
case 11:
{
lean_object* v_operator_2060_; lean_object* v_operand_2061_; lean_object* v___x_2062_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_operator_2060_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_operator_2060_);
v_operand_2061_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_operand_2061_);
lean_dec_ref_known(v_expression_1997_, 2);
v___x_2062_ = lean_apply_2(v_h__12_2009_, v_operator_2060_, v_operand_2061_);
return v___x_2062_;
}
case 12:
{
lean_object* v_operator_2063_; lean_object* v_left_2064_; lean_object* v_right_2065_; lean_object* v___x_2066_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_operator_2063_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_operator_2063_);
v_left_2064_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_left_2064_);
v_right_2065_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_right_2065_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2066_ = lean_apply_3(v_h__13_2010_, v_operator_2063_, v_left_2064_, v_right_2065_);
return v___x_2066_;
}
case 13:
{
lean_object* v_source_2067_; lean_object* v_iteratorId_2068_; lean_object* v_predicate_2069_; lean_object* v___x_2070_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_source_2067_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_source_2067_);
v_iteratorId_2068_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc(v_iteratorId_2068_);
v_predicate_2069_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_predicate_2069_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2070_ = lean_apply_3(v_h__14_2011_, v_source_2067_, v_iteratorId_2068_, v_predicate_2069_);
return v___x_2070_;
}
case 14:
{
lean_object* v_source_2071_; lean_object* v_iteratorId_2072_; lean_object* v_predicate_2073_; lean_object* v___x_2074_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_source_2071_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_source_2071_);
v_iteratorId_2072_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc(v_iteratorId_2072_);
v_predicate_2073_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_predicate_2073_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2074_ = lean_apply_3(v_h__15_2012_, v_source_2071_, v_iteratorId_2072_, v_predicate_2073_);
return v___x_2074_;
}
case 15:
{
uint8_t v_kind_2075_; lean_object* v_elements_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_kind_2075_ = lean_ctor_get_uint8(v_expression_1997_, sizeof(void*)*1);
v_elements_2076_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc(v_elements_2076_);
lean_dec_ref_known(v_expression_1997_, 1);
v___x_2077_ = lean_box(v_kind_2075_);
v___x_2078_ = lean_apply_2(v_h__16_2013_, v___x_2077_, v_elements_2076_);
return v___x_2078_;
}
case 16:
{
lean_object* v_operation_2079_; lean_object* v_source_2080_; lean_object* v_element_2081_; lean_object* v___x_2082_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_operation_2079_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_operation_2079_);
v_source_2080_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_source_2080_);
v_element_2081_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_element_2081_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2082_ = lean_apply_3(v_h__17_2014_, v_operation_2079_, v_source_2080_, v_element_2081_);
return v___x_2082_;
}
case 17:
{
lean_object* v_operation_2083_; lean_object* v_source_2084_; lean_object* v_element_2085_; lean_object* v___x_2086_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__19_2016_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_operation_2083_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_operation_2083_);
v_source_2084_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_source_2084_);
v_element_2085_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc(v_element_2085_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2086_ = lean_apply_3(v_h__18_2015_, v_operation_2083_, v_source_2084_, v_element_2085_);
return v___x_2086_;
}
case 18:
{
lean_object* v_operation_2087_; lean_object* v_left_2088_; lean_object* v_right_2089_; lean_object* v___x_2090_; 
lean_dec(v_h__20_2017_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_operation_2087_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_operation_2087_);
v_left_2088_ = lean_ctor_get(v_expression_1997_, 1);
lean_inc_ref(v_left_2088_);
v_right_2089_ = lean_ctor_get(v_expression_1997_, 2);
lean_inc_ref(v_right_2089_);
lean_dec_ref_known(v_expression_1997_, 3);
v___x_2090_ = lean_apply_3(v_h__19_2016_, v_operation_2087_, v_left_2088_, v_right_2089_);
return v___x_2090_;
}
default: 
{
lean_object* v_plan_2091_; lean_object* v___x_2092_; 
lean_dec(v_h__19_2016_);
lean_dec(v_h__18_2015_);
lean_dec(v_h__17_2014_);
lean_dec(v_h__16_2013_);
lean_dec(v_h__15_2012_);
lean_dec(v_h__14_2011_);
lean_dec(v_h__13_2010_);
lean_dec(v_h__12_2009_);
lean_dec(v_h__11_2008_);
lean_dec(v_h__10_2007_);
lean_dec(v_h__9_2006_);
lean_dec(v_h__8_2005_);
lean_dec(v_h__7_2004_);
lean_dec(v_h__6_2003_);
lean_dec(v_h__5_2002_);
lean_dec(v_h__4_2001_);
lean_dec(v_h__3_2000_);
lean_dec(v_h__2_1999_);
lean_dec(v_h__1_1998_);
v_plan_2091_ = lean_ctor_get(v_expression_1997_, 0);
lean_inc_ref(v_plan_2091_);
lean_dec_ref_known(v_expression_1997_, 1);
v___x_2092_ = lean_apply_1(v_h__20_2017_, v_plan_2091_);
return v___x_2092_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter___redArg___boxed(lean_object** _args){
lean_object* v_expression_2093_ = _args[0];
lean_object* v_h__1_2094_ = _args[1];
lean_object* v_h__2_2095_ = _args[2];
lean_object* v_h__3_2096_ = _args[3];
lean_object* v_h__4_2097_ = _args[4];
lean_object* v_h__5_2098_ = _args[5];
lean_object* v_h__6_2099_ = _args[6];
lean_object* v_h__7_2100_ = _args[7];
lean_object* v_h__8_2101_ = _args[8];
lean_object* v_h__9_2102_ = _args[9];
lean_object* v_h__10_2103_ = _args[10];
lean_object* v_h__11_2104_ = _args[11];
lean_object* v_h__12_2105_ = _args[12];
lean_object* v_h__13_2106_ = _args[13];
lean_object* v_h__14_2107_ = _args[14];
lean_object* v_h__15_2108_ = _args[15];
lean_object* v_h__16_2109_ = _args[16];
lean_object* v_h__17_2110_ = _args[17];
lean_object* v_h__18_2111_ = _args[18];
lean_object* v_h__19_2112_ = _args[19];
lean_object* v_h__20_2113_ = _args[20];
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter___redArg(v_expression_2093_, v_h__1_2094_, v_h__2_2095_, v_h__3_2096_, v_h__4_2097_, v_h__5_2098_, v_h__6_2099_, v_h__7_2100_, v_h__8_2101_, v_h__9_2102_, v_h__10_2103_, v_h__11_2104_, v_h__12_2105_, v_h__13_2106_, v_h__14_2107_, v_h__15_2108_, v_h__16_2109_, v_h__17_2110_, v_h__18_2111_, v_h__19_2112_, v_h__20_2113_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter(lean_object* v_motive_2115_, lean_object* v_expression_2116_, lean_object* v_h__1_2117_, lean_object* v_h__2_2118_, lean_object* v_h__3_2119_, lean_object* v_h__4_2120_, lean_object* v_h__5_2121_, lean_object* v_h__6_2122_, lean_object* v_h__7_2123_, lean_object* v_h__8_2124_, lean_object* v_h__9_2125_, lean_object* v_h__10_2126_, lean_object* v_h__11_2127_, lean_object* v_h__12_2128_, lean_object* v_h__13_2129_, lean_object* v_h__14_2130_, lean_object* v_h__15_2131_, lean_object* v_h__16_2132_, lean_object* v_h__17_2133_, lean_object* v_h__18_2134_, lean_object* v_h__19_2135_, lean_object* v_h__20_2136_){
_start:
{
switch(lean_obj_tag(v_expression_2116_))
{
case 0:
{
lean_object* v_declarationId_2137_; lean_object* v___x_2138_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
v_declarationId_2137_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc(v_declarationId_2137_);
lean_dec_ref_known(v_expression_2116_, 1);
v___x_2138_ = lean_apply_1(v_h__1_2117_, v_declarationId_2137_);
return v___x_2138_;
}
case 1:
{
lean_object* v_name_2139_; lean_object* v___x_2140_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__1_2117_);
v_name_2139_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_name_2139_);
lean_dec_ref_known(v_expression_2116_, 1);
v___x_2140_ = lean_apply_1(v_h__2_2118_, v_name_2139_);
return v___x_2140_;
}
case 2:
{
lean_object* v_type_2141_; lean_object* v___x_2142_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_type_2141_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc(v_type_2141_);
lean_dec_ref_known(v_expression_2116_, 1);
v___x_2142_ = lean_apply_1(v_h__3_2119_, v_type_2141_);
return v___x_2142_;
}
case 3:
{
lean_object* v_value_2143_; lean_object* v___x_2144_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_value_2143_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_value_2143_);
lean_dec_ref_known(v_expression_2116_, 1);
v___x_2144_ = lean_apply_1(v_h__4_2120_, v_value_2143_);
return v___x_2144_;
}
case 4:
{
lean_object* v_coercion_2145_; lean_object* v_source_2146_; lean_object* v___x_2147_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_coercion_2145_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_coercion_2145_);
v_source_2146_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_source_2146_);
lean_dec_ref_known(v_expression_2116_, 2);
v___x_2147_ = lean_apply_2(v_h__5_2121_, v_coercion_2145_, v_source_2146_);
return v___x_2147_;
}
case 5:
{
lean_object* v_binderId_2148_; lean_object* v_value_2149_; lean_object* v_body_2150_; lean_object* v___x_2151_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_binderId_2148_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc(v_binderId_2148_);
v_value_2149_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_value_2149_);
v_body_2150_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_body_2150_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2151_ = lean_apply_3(v_h__6_2122_, v_binderId_2148_, v_value_2149_, v_body_2150_);
return v___x_2151_;
}
case 6:
{
lean_object* v_condition_2152_; lean_object* v_thenExpr_2153_; lean_object* v_elseExpr_2154_; lean_object* v___x_2155_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_condition_2152_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_condition_2152_);
v_thenExpr_2153_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_thenExpr_2153_);
v_elseExpr_2154_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_elseExpr_2154_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2155_ = lean_apply_3(v_h__7_2123_, v_condition_2152_, v_thenExpr_2153_, v_elseExpr_2154_);
return v___x_2155_;
}
case 7:
{
lean_object* v_source_2156_; lean_object* v_ownerClass_2157_; lean_object* v_attributeName_2158_; lean_object* v___x_2159_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_source_2156_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_source_2156_);
v_ownerClass_2157_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_ownerClass_2157_);
v_attributeName_2158_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_attributeName_2158_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2159_ = lean_apply_3(v_h__8_2124_, v_source_2156_, v_ownerClass_2157_, v_attributeName_2158_);
return v___x_2159_;
}
case 8:
{
lean_object* v_source_2160_; lean_object* v_association_2161_; lean_object* v_role_2162_; lean_object* v_qualifiers_2163_; uint8_t v_reverse_2164_; uint8_t v_associationClass_2165_; uint8_t v_viaAssociationClass_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_source_2160_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_source_2160_);
v_association_2161_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_association_2161_);
v_role_2162_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_role_2162_);
v_qualifiers_2163_ = lean_ctor_get(v_expression_2116_, 3);
lean_inc(v_qualifiers_2163_);
v_reverse_2164_ = lean_ctor_get_uint8(v_expression_2116_, sizeof(void*)*4);
v_associationClass_2165_ = lean_ctor_get_uint8(v_expression_2116_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2166_ = lean_ctor_get_uint8(v_expression_2116_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_expression_2116_, 4);
v___x_2167_ = lean_box(v_reverse_2164_);
v___x_2168_ = lean_box(v_associationClass_2165_);
v___x_2169_ = lean_box(v_viaAssociationClass_2166_);
v___x_2170_ = lean_apply_7(v_h__9_2125_, v_source_2160_, v_association_2161_, v_role_2162_, v_qualifiers_2163_, v___x_2167_, v___x_2168_, v___x_2169_);
return v___x_2170_;
}
case 9:
{
lean_object* v_source_2171_; lean_object* v_targetClass_2172_; uint8_t v_exact_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_source_2171_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_source_2171_);
v_targetClass_2172_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_targetClass_2172_);
v_exact_2173_ = lean_ctor_get_uint8(v_expression_2116_, sizeof(void*)*2);
lean_dec_ref_known(v_expression_2116_, 2);
v___x_2174_ = lean_box(v_exact_2173_);
v___x_2175_ = lean_apply_3(v_h__10_2126_, v_source_2171_, v_targetClass_2172_, v___x_2174_);
return v___x_2175_;
}
case 10:
{
lean_object* v_source_2176_; lean_object* v_targetClass_2177_; lean_object* v___x_2178_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_source_2176_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_source_2176_);
v_targetClass_2177_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_targetClass_2177_);
lean_dec_ref_known(v_expression_2116_, 2);
v___x_2178_ = lean_apply_2(v_h__11_2127_, v_source_2176_, v_targetClass_2177_);
return v___x_2178_;
}
case 11:
{
lean_object* v_operator_2179_; lean_object* v_operand_2180_; lean_object* v___x_2181_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_operator_2179_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_operator_2179_);
v_operand_2180_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_operand_2180_);
lean_dec_ref_known(v_expression_2116_, 2);
v___x_2181_ = lean_apply_2(v_h__12_2128_, v_operator_2179_, v_operand_2180_);
return v___x_2181_;
}
case 12:
{
lean_object* v_operator_2182_; lean_object* v_left_2183_; lean_object* v_right_2184_; lean_object* v___x_2185_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_operator_2182_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_operator_2182_);
v_left_2183_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_left_2183_);
v_right_2184_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_right_2184_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2185_ = lean_apply_3(v_h__13_2129_, v_operator_2182_, v_left_2183_, v_right_2184_);
return v___x_2185_;
}
case 13:
{
lean_object* v_source_2186_; lean_object* v_iteratorId_2187_; lean_object* v_predicate_2188_; lean_object* v___x_2189_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_source_2186_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_source_2186_);
v_iteratorId_2187_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc(v_iteratorId_2187_);
v_predicate_2188_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_predicate_2188_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2189_ = lean_apply_3(v_h__14_2130_, v_source_2186_, v_iteratorId_2187_, v_predicate_2188_);
return v___x_2189_;
}
case 14:
{
lean_object* v_source_2190_; lean_object* v_iteratorId_2191_; lean_object* v_predicate_2192_; lean_object* v___x_2193_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_source_2190_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_source_2190_);
v_iteratorId_2191_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc(v_iteratorId_2191_);
v_predicate_2192_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_predicate_2192_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2193_ = lean_apply_3(v_h__15_2131_, v_source_2190_, v_iteratorId_2191_, v_predicate_2192_);
return v___x_2193_;
}
case 15:
{
uint8_t v_kind_2194_; lean_object* v_elements_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_kind_2194_ = lean_ctor_get_uint8(v_expression_2116_, sizeof(void*)*1);
v_elements_2195_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc(v_elements_2195_);
lean_dec_ref_known(v_expression_2116_, 1);
v___x_2196_ = lean_box(v_kind_2194_);
v___x_2197_ = lean_apply_2(v_h__16_2132_, v___x_2196_, v_elements_2195_);
return v___x_2197_;
}
case 16:
{
lean_object* v_operation_2198_; lean_object* v_source_2199_; lean_object* v_element_2200_; lean_object* v___x_2201_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_operation_2198_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_operation_2198_);
v_source_2199_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_source_2199_);
v_element_2200_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_element_2200_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2201_ = lean_apply_3(v_h__17_2133_, v_operation_2198_, v_source_2199_, v_element_2200_);
return v___x_2201_;
}
case 17:
{
lean_object* v_operation_2202_; lean_object* v_source_2203_; lean_object* v_element_2204_; lean_object* v___x_2205_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__19_2135_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_operation_2202_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_operation_2202_);
v_source_2203_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_source_2203_);
v_element_2204_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc(v_element_2204_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2205_ = lean_apply_3(v_h__18_2134_, v_operation_2202_, v_source_2203_, v_element_2204_);
return v___x_2205_;
}
case 18:
{
lean_object* v_operation_2206_; lean_object* v_left_2207_; lean_object* v_right_2208_; lean_object* v___x_2209_; 
lean_dec(v_h__20_2136_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_operation_2206_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_operation_2206_);
v_left_2207_ = lean_ctor_get(v_expression_2116_, 1);
lean_inc_ref(v_left_2207_);
v_right_2208_ = lean_ctor_get(v_expression_2116_, 2);
lean_inc_ref(v_right_2208_);
lean_dec_ref_known(v_expression_2116_, 3);
v___x_2209_ = lean_apply_3(v_h__19_2135_, v_operation_2206_, v_left_2207_, v_right_2208_);
return v___x_2209_;
}
default: 
{
lean_object* v_plan_2210_; lean_object* v___x_2211_; 
lean_dec(v_h__19_2135_);
lean_dec(v_h__18_2134_);
lean_dec(v_h__17_2133_);
lean_dec(v_h__16_2132_);
lean_dec(v_h__15_2131_);
lean_dec(v_h__14_2130_);
lean_dec(v_h__13_2129_);
lean_dec(v_h__12_2128_);
lean_dec(v_h__11_2127_);
lean_dec(v_h__10_2126_);
lean_dec(v_h__9_2125_);
lean_dec(v_h__8_2124_);
lean_dec(v_h__7_2123_);
lean_dec(v_h__6_2122_);
lean_dec(v_h__5_2121_);
lean_dec(v_h__4_2120_);
lean_dec(v_h__3_2119_);
lean_dec(v_h__2_2118_);
lean_dec(v_h__1_2117_);
v_plan_2210_ = lean_ctor_get(v_expression_2116_, 0);
lean_inc_ref(v_plan_2210_);
lean_dec_ref_known(v_expression_2116_, 1);
v___x_2211_ = lean_apply_1(v_h__20_2136_, v_plan_2210_);
return v___x_2211_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter___boxed(lean_object** _args){
lean_object* v_motive_2212_ = _args[0];
lean_object* v_expression_2213_ = _args[1];
lean_object* v_h__1_2214_ = _args[2];
lean_object* v_h__2_2215_ = _args[3];
lean_object* v_h__3_2216_ = _args[4];
lean_object* v_h__4_2217_ = _args[5];
lean_object* v_h__5_2218_ = _args[6];
lean_object* v_h__6_2219_ = _args[7];
lean_object* v_h__7_2220_ = _args[8];
lean_object* v_h__8_2221_ = _args[9];
lean_object* v_h__9_2222_ = _args[10];
lean_object* v_h__10_2223_ = _args[11];
lean_object* v_h__11_2224_ = _args[12];
lean_object* v_h__12_2225_ = _args[13];
lean_object* v_h__13_2226_ = _args[14];
lean_object* v_h__14_2227_ = _args[15];
lean_object* v_h__15_2228_ = _args[16];
lean_object* v_h__16_2229_ = _args[17];
lean_object* v_h__17_2230_ = _args[18];
lean_object* v_h__18_2231_ = _args[19];
lean_object* v_h__19_2232_ = _args[20];
lean_object* v_h__20_2233_ = _args[21];
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQExpr_match__1_splitter(v_motive_2212_, v_expression_2213_, v_h__1_2214_, v_h__2_2215_, v_h__3_2216_, v_h__4_2217_, v_h__5_2218_, v_h__6_2219_, v_h__7_2220_, v_h__8_2221_, v_h__9_2222_, v_h__10_2223_, v_h__11_2224_, v_h__12_2225_, v_h__13_2226_, v_h__14_2227_, v_h__15_2228_, v_h__16_2229_, v_h__17_2230_, v_h__18_2231_, v_h__19_2232_, v_h__20_2233_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter___redArg(lean_object* v_x_2235_, lean_object* v_x_2236_, lean_object* v_x_2237_, lean_object* v_h__1_2238_, lean_object* v_h__2_2239_){
_start:
{
lean_object* v_zero_2240_; uint8_t v_isZero_2241_; 
v_zero_2240_ = lean_unsigned_to_nat(0u);
v_isZero_2241_ = lean_nat_dec_eq(v_x_2235_, v_zero_2240_);
if (v_isZero_2241_ == 1)
{
lean_object* v___x_2242_; 
lean_dec(v_h__2_2239_);
v___x_2242_ = lean_apply_2(v_h__1_2238_, v_x_2236_, v_x_2237_);
return v___x_2242_;
}
else
{
lean_object* v_one_2243_; lean_object* v_n_2244_; lean_object* v___x_2245_; 
lean_dec(v_h__1_2238_);
v_one_2243_ = lean_unsigned_to_nat(1u);
v_n_2244_ = lean_nat_sub(v_x_2235_, v_one_2243_);
v___x_2245_ = lean_apply_3(v_h__2_2239_, v_n_2244_, v_x_2236_, v_x_2237_);
return v___x_2245_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter___redArg___boxed(lean_object* v_x_2246_, lean_object* v_x_2247_, lean_object* v_x_2248_, lean_object* v_h__1_2249_, lean_object* v_h__2_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter___redArg(v_x_2246_, v_x_2247_, v_x_2248_, v_h__1_2249_, v_h__2_2250_);
lean_dec(v_x_2246_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter(lean_object* v_Value_2252_, lean_object* v_motive_2253_, lean_object* v_x_2254_, lean_object* v_x_2255_, lean_object* v_x_2256_, lean_object* v_h__1_2257_, lean_object* v_h__2_2258_){
_start:
{
lean_object* v_zero_2259_; uint8_t v_isZero_2260_; 
v_zero_2259_ = lean_unsigned_to_nat(0u);
v_isZero_2260_ = lean_nat_dec_eq(v_x_2254_, v_zero_2259_);
if (v_isZero_2260_ == 1)
{
lean_object* v___x_2261_; 
lean_dec(v_h__2_2258_);
v___x_2261_ = lean_apply_2(v_h__1_2257_, v_x_2255_, v_x_2256_);
return v___x_2261_;
}
else
{
lean_object* v_one_2262_; lean_object* v_n_2263_; lean_object* v___x_2264_; 
lean_dec(v_h__1_2257_);
v_one_2262_ = lean_unsigned_to_nat(1u);
v_n_2263_ = lean_nat_sub(v_x_2254_, v_one_2262_);
v___x_2264_ = lean_apply_3(v_h__2_2258_, v_n_2263_, v_x_2255_, v_x_2256_);
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter___boxed(lean_object* v_Value_2265_, lean_object* v_motive_2266_, lean_object* v_x_2267_, lean_object* v_x_2268_, lean_object* v_x_2269_, lean_object* v_h__1_2270_, lean_object* v_h__2_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__3_splitter(v_Value_2265_, v_motive_2266_, v_x_2267_, v_x_2268_, v_x_2269_, v_h__1_2270_, v_h__2_2271_);
lean_dec(v_x_2267_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__1_splitter___redArg(lean_object* v_plan_2273_, lean_object* v_h__1_2274_, lean_object* v_h__2_2275_, lean_object* v_h__3_2276_, lean_object* v_h__4_2277_, lean_object* v_h__5_2278_, lean_object* v_h__6_2279_, lean_object* v_h__7_2280_){
_start:
{
switch(lean_obj_tag(v_plan_2273_))
{
case 0:
{
lean_object* v_collection_2281_; lean_object* v___x_2282_; 
lean_dec(v_h__7_2280_);
lean_dec(v_h__6_2279_);
lean_dec(v_h__5_2278_);
lean_dec(v_h__4_2277_);
lean_dec(v_h__3_2276_);
lean_dec(v_h__2_2275_);
v_collection_2281_ = lean_ctor_get(v_plan_2273_, 0);
lean_inc_ref(v_collection_2281_);
lean_dec_ref_known(v_plan_2273_, 1);
v___x_2282_ = lean_apply_1(v_h__1_2274_, v_collection_2281_);
return v___x_2282_;
}
case 1:
{
lean_object* v_classKey_2283_; lean_object* v_declarationId_2284_; lean_object* v___x_2285_; 
lean_dec(v_h__7_2280_);
lean_dec(v_h__6_2279_);
lean_dec(v_h__5_2278_);
lean_dec(v_h__4_2277_);
lean_dec(v_h__3_2276_);
lean_dec(v_h__1_2274_);
v_classKey_2283_ = lean_ctor_get(v_plan_2273_, 0);
lean_inc_ref(v_classKey_2283_);
v_declarationId_2284_ = lean_ctor_get(v_plan_2273_, 1);
lean_inc(v_declarationId_2284_);
lean_dec_ref_known(v_plan_2273_, 2);
v___x_2285_ = lean_apply_2(v_h__2_2275_, v_classKey_2283_, v_declarationId_2284_);
return v___x_2285_;
}
case 2:
{
lean_object* v_source_2286_; lean_object* v_association_2287_; lean_object* v_role_2288_; lean_object* v_qualifiers_2289_; uint8_t v_reverse_2290_; uint8_t v_associationClass_2291_; uint8_t v_viaAssociationClass_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
lean_dec(v_h__7_2280_);
lean_dec(v_h__6_2279_);
lean_dec(v_h__5_2278_);
lean_dec(v_h__4_2277_);
lean_dec(v_h__2_2275_);
lean_dec(v_h__1_2274_);
v_source_2286_ = lean_ctor_get(v_plan_2273_, 0);
lean_inc_ref(v_source_2286_);
v_association_2287_ = lean_ctor_get(v_plan_2273_, 1);
lean_inc_ref(v_association_2287_);
v_role_2288_ = lean_ctor_get(v_plan_2273_, 2);
lean_inc_ref(v_role_2288_);
v_qualifiers_2289_ = lean_ctor_get(v_plan_2273_, 3);
lean_inc(v_qualifiers_2289_);
v_reverse_2290_ = lean_ctor_get_uint8(v_plan_2273_, sizeof(void*)*4);
v_associationClass_2291_ = lean_ctor_get_uint8(v_plan_2273_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2292_ = lean_ctor_get_uint8(v_plan_2273_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_plan_2273_, 4);
v___x_2293_ = lean_box(v_reverse_2290_);
v___x_2294_ = lean_box(v_associationClass_2291_);
v___x_2295_ = lean_box(v_viaAssociationClass_2292_);
v___x_2296_ = lean_apply_7(v_h__3_2276_, v_source_2286_, v_association_2287_, v_role_2288_, v_qualifiers_2289_, v___x_2293_, v___x_2294_, v___x_2295_);
return v___x_2296_;
}
case 3:
{
lean_object* v_source_2297_; lean_object* v_iteratorId_2298_; lean_object* v_predicate_2299_; uint8_t v_isSelect_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec(v_h__7_2280_);
lean_dec(v_h__6_2279_);
lean_dec(v_h__5_2278_);
lean_dec(v_h__3_2276_);
lean_dec(v_h__2_2275_);
lean_dec(v_h__1_2274_);
v_source_2297_ = lean_ctor_get(v_plan_2273_, 0);
lean_inc_ref(v_source_2297_);
v_iteratorId_2298_ = lean_ctor_get(v_plan_2273_, 1);
lean_inc(v_iteratorId_2298_);
v_predicate_2299_ = lean_ctor_get(v_plan_2273_, 2);
lean_inc_ref(v_predicate_2299_);
v_isSelect_2300_ = lean_ctor_get_uint8(v_plan_2273_, sizeof(void*)*3);
lean_dec_ref_known(v_plan_2273_, 3);
v___x_2301_ = lean_box(v_isSelect_2300_);
v___x_2302_ = lean_apply_4(v_h__4_2277_, v_source_2297_, v_iteratorId_2298_, v_predicate_2299_, v___x_2301_);
return v___x_2302_;
}
case 4:
{
lean_object* v_source_2303_; lean_object* v_iteratorId_2304_; lean_object* v_body_2305_; lean_object* v___x_2306_; 
lean_dec(v_h__7_2280_);
lean_dec(v_h__6_2279_);
lean_dec(v_h__4_2277_);
lean_dec(v_h__3_2276_);
lean_dec(v_h__2_2275_);
lean_dec(v_h__1_2274_);
v_source_2303_ = lean_ctor_get(v_plan_2273_, 0);
lean_inc_ref(v_source_2303_);
v_iteratorId_2304_ = lean_ctor_get(v_plan_2273_, 1);
lean_inc(v_iteratorId_2304_);
v_body_2305_ = lean_ctor_get(v_plan_2273_, 2);
lean_inc_ref(v_body_2305_);
lean_dec_ref_known(v_plan_2273_, 3);
v___x_2306_ = lean_apply_3(v_h__5_2278_, v_source_2303_, v_iteratorId_2304_, v_body_2305_);
return v___x_2306_;
}
case 5:
{
lean_object* v_source_2307_; lean_object* v___x_2308_; 
lean_dec(v_h__7_2280_);
lean_dec(v_h__5_2278_);
lean_dec(v_h__4_2277_);
lean_dec(v_h__3_2276_);
lean_dec(v_h__2_2275_);
lean_dec(v_h__1_2274_);
v_source_2307_ = lean_ctor_get(v_plan_2273_, 0);
lean_inc_ref(v_source_2307_);
lean_dec_ref_known(v_plan_2273_, 1);
v___x_2308_ = lean_apply_1(v_h__6_2279_, v_source_2307_);
return v___x_2308_;
}
default: 
{
lean_object* v_binderId_2309_; lean_object* v_value_2310_; lean_object* v_body_2311_; lean_object* v___x_2312_; 
lean_dec(v_h__6_2279_);
lean_dec(v_h__5_2278_);
lean_dec(v_h__4_2277_);
lean_dec(v_h__3_2276_);
lean_dec(v_h__2_2275_);
lean_dec(v_h__1_2274_);
v_binderId_2309_ = lean_ctor_get(v_plan_2273_, 0);
lean_inc(v_binderId_2309_);
v_value_2310_ = lean_ctor_get(v_plan_2273_, 1);
lean_inc_ref(v_value_2310_);
v_body_2311_ = lean_ctor_get(v_plan_2273_, 2);
lean_inc_ref(v_body_2311_);
lean_dec_ref_known(v_plan_2273_, 3);
v___x_2312_ = lean_apply_3(v_h__7_2280_, v_binderId_2309_, v_value_2310_, v_body_2311_);
return v___x_2312_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalQPlan_match__1_splitter(lean_object* v_motive_2313_, lean_object* v_plan_2314_, lean_object* v_h__1_2315_, lean_object* v_h__2_2316_, lean_object* v_h__3_2317_, lean_object* v_h__4_2318_, lean_object* v_h__5_2319_, lean_object* v_h__6_2320_, lean_object* v_h__7_2321_){
_start:
{
switch(lean_obj_tag(v_plan_2314_))
{
case 0:
{
lean_object* v_collection_2322_; lean_object* v___x_2323_; 
lean_dec(v_h__7_2321_);
lean_dec(v_h__6_2320_);
lean_dec(v_h__5_2319_);
lean_dec(v_h__4_2318_);
lean_dec(v_h__3_2317_);
lean_dec(v_h__2_2316_);
v_collection_2322_ = lean_ctor_get(v_plan_2314_, 0);
lean_inc_ref(v_collection_2322_);
lean_dec_ref_known(v_plan_2314_, 1);
v___x_2323_ = lean_apply_1(v_h__1_2315_, v_collection_2322_);
return v___x_2323_;
}
case 1:
{
lean_object* v_classKey_2324_; lean_object* v_declarationId_2325_; lean_object* v___x_2326_; 
lean_dec(v_h__7_2321_);
lean_dec(v_h__6_2320_);
lean_dec(v_h__5_2319_);
lean_dec(v_h__4_2318_);
lean_dec(v_h__3_2317_);
lean_dec(v_h__1_2315_);
v_classKey_2324_ = lean_ctor_get(v_plan_2314_, 0);
lean_inc_ref(v_classKey_2324_);
v_declarationId_2325_ = lean_ctor_get(v_plan_2314_, 1);
lean_inc(v_declarationId_2325_);
lean_dec_ref_known(v_plan_2314_, 2);
v___x_2326_ = lean_apply_2(v_h__2_2316_, v_classKey_2324_, v_declarationId_2325_);
return v___x_2326_;
}
case 2:
{
lean_object* v_source_2327_; lean_object* v_association_2328_; lean_object* v_role_2329_; lean_object* v_qualifiers_2330_; uint8_t v_reverse_2331_; uint8_t v_associationClass_2332_; uint8_t v_viaAssociationClass_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
lean_dec(v_h__7_2321_);
lean_dec(v_h__6_2320_);
lean_dec(v_h__5_2319_);
lean_dec(v_h__4_2318_);
lean_dec(v_h__2_2316_);
lean_dec(v_h__1_2315_);
v_source_2327_ = lean_ctor_get(v_plan_2314_, 0);
lean_inc_ref(v_source_2327_);
v_association_2328_ = lean_ctor_get(v_plan_2314_, 1);
lean_inc_ref(v_association_2328_);
v_role_2329_ = lean_ctor_get(v_plan_2314_, 2);
lean_inc_ref(v_role_2329_);
v_qualifiers_2330_ = lean_ctor_get(v_plan_2314_, 3);
lean_inc(v_qualifiers_2330_);
v_reverse_2331_ = lean_ctor_get_uint8(v_plan_2314_, sizeof(void*)*4);
v_associationClass_2332_ = lean_ctor_get_uint8(v_plan_2314_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2333_ = lean_ctor_get_uint8(v_plan_2314_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_plan_2314_, 4);
v___x_2334_ = lean_box(v_reverse_2331_);
v___x_2335_ = lean_box(v_associationClass_2332_);
v___x_2336_ = lean_box(v_viaAssociationClass_2333_);
v___x_2337_ = lean_apply_7(v_h__3_2317_, v_source_2327_, v_association_2328_, v_role_2329_, v_qualifiers_2330_, v___x_2334_, v___x_2335_, v___x_2336_);
return v___x_2337_;
}
case 3:
{
lean_object* v_source_2338_; lean_object* v_iteratorId_2339_; lean_object* v_predicate_2340_; uint8_t v_isSelect_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
lean_dec(v_h__7_2321_);
lean_dec(v_h__6_2320_);
lean_dec(v_h__5_2319_);
lean_dec(v_h__3_2317_);
lean_dec(v_h__2_2316_);
lean_dec(v_h__1_2315_);
v_source_2338_ = lean_ctor_get(v_plan_2314_, 0);
lean_inc_ref(v_source_2338_);
v_iteratorId_2339_ = lean_ctor_get(v_plan_2314_, 1);
lean_inc(v_iteratorId_2339_);
v_predicate_2340_ = lean_ctor_get(v_plan_2314_, 2);
lean_inc_ref(v_predicate_2340_);
v_isSelect_2341_ = lean_ctor_get_uint8(v_plan_2314_, sizeof(void*)*3);
lean_dec_ref_known(v_plan_2314_, 3);
v___x_2342_ = lean_box(v_isSelect_2341_);
v___x_2343_ = lean_apply_4(v_h__4_2318_, v_source_2338_, v_iteratorId_2339_, v_predicate_2340_, v___x_2342_);
return v___x_2343_;
}
case 4:
{
lean_object* v_source_2344_; lean_object* v_iteratorId_2345_; lean_object* v_body_2346_; lean_object* v___x_2347_; 
lean_dec(v_h__7_2321_);
lean_dec(v_h__6_2320_);
lean_dec(v_h__4_2318_);
lean_dec(v_h__3_2317_);
lean_dec(v_h__2_2316_);
lean_dec(v_h__1_2315_);
v_source_2344_ = lean_ctor_get(v_plan_2314_, 0);
lean_inc_ref(v_source_2344_);
v_iteratorId_2345_ = lean_ctor_get(v_plan_2314_, 1);
lean_inc(v_iteratorId_2345_);
v_body_2346_ = lean_ctor_get(v_plan_2314_, 2);
lean_inc_ref(v_body_2346_);
lean_dec_ref_known(v_plan_2314_, 3);
v___x_2347_ = lean_apply_3(v_h__5_2319_, v_source_2344_, v_iteratorId_2345_, v_body_2346_);
return v___x_2347_;
}
case 5:
{
lean_object* v_source_2348_; lean_object* v___x_2349_; 
lean_dec(v_h__7_2321_);
lean_dec(v_h__5_2319_);
lean_dec(v_h__4_2318_);
lean_dec(v_h__3_2317_);
lean_dec(v_h__2_2316_);
lean_dec(v_h__1_2315_);
v_source_2348_ = lean_ctor_get(v_plan_2314_, 0);
lean_inc_ref(v_source_2348_);
lean_dec_ref_known(v_plan_2314_, 1);
v___x_2349_ = lean_apply_1(v_h__6_2320_, v_source_2348_);
return v___x_2349_;
}
default: 
{
lean_object* v_binderId_2350_; lean_object* v_value_2351_; lean_object* v_body_2352_; lean_object* v___x_2353_; 
lean_dec(v_h__6_2320_);
lean_dec(v_h__5_2319_);
lean_dec(v_h__4_2318_);
lean_dec(v_h__3_2317_);
lean_dec(v_h__2_2316_);
lean_dec(v_h__1_2315_);
v_binderId_2350_ = lean_ctor_get(v_plan_2314_, 0);
lean_inc(v_binderId_2350_);
v_value_2351_ = lean_ctor_get(v_plan_2314_, 1);
lean_inc_ref(v_value_2351_);
v_body_2352_ = lean_ctor_get(v_plan_2314_, 2);
lean_inc_ref(v_body_2352_);
lean_dec_ref_known(v_plan_2314_, 3);
v___x_2353_ = lean_apply_3(v_h__7_2321_, v_binderId_2350_, v_value_2351_, v_body_2352_);
return v___x_2353_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorIdx(lean_object* v_x_2354_){
_start:
{
switch(lean_obj_tag(v_x_2354_))
{
case 0:
{
lean_object* v___x_2355_; 
v___x_2355_ = lean_unsigned_to_nat(0u);
return v___x_2355_;
}
case 1:
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_unsigned_to_nat(1u);
return v___x_2356_;
}
case 2:
{
lean_object* v___x_2357_; 
v___x_2357_ = lean_unsigned_to_nat(2u);
return v___x_2357_;
}
case 3:
{
lean_object* v___x_2358_; 
v___x_2358_ = lean_unsigned_to_nat(3u);
return v___x_2358_;
}
case 4:
{
lean_object* v___x_2359_; 
v___x_2359_ = lean_unsigned_to_nat(4u);
return v___x_2359_;
}
case 5:
{
lean_object* v___x_2360_; 
v___x_2360_ = lean_unsigned_to_nat(5u);
return v___x_2360_;
}
case 6:
{
lean_object* v___x_2361_; 
v___x_2361_ = lean_unsigned_to_nat(6u);
return v___x_2361_;
}
case 7:
{
lean_object* v___x_2362_; 
v___x_2362_ = lean_unsigned_to_nat(7u);
return v___x_2362_;
}
case 8:
{
lean_object* v___x_2363_; 
v___x_2363_ = lean_unsigned_to_nat(8u);
return v___x_2363_;
}
case 9:
{
lean_object* v___x_2364_; 
v___x_2364_ = lean_unsigned_to_nat(9u);
return v___x_2364_;
}
case 10:
{
lean_object* v___x_2365_; 
v___x_2365_ = lean_unsigned_to_nat(10u);
return v___x_2365_;
}
case 11:
{
lean_object* v___x_2366_; 
v___x_2366_ = lean_unsigned_to_nat(11u);
return v___x_2366_;
}
case 12:
{
lean_object* v___x_2367_; 
v___x_2367_ = lean_unsigned_to_nat(12u);
return v___x_2367_;
}
case 13:
{
lean_object* v___x_2368_; 
v___x_2368_ = lean_unsigned_to_nat(13u);
return v___x_2368_;
}
case 14:
{
lean_object* v___x_2369_; 
v___x_2369_ = lean_unsigned_to_nat(14u);
return v___x_2369_;
}
case 15:
{
lean_object* v___x_2370_; 
v___x_2370_ = lean_unsigned_to_nat(15u);
return v___x_2370_;
}
case 16:
{
lean_object* v___x_2371_; 
v___x_2371_ = lean_unsigned_to_nat(16u);
return v___x_2371_;
}
case 17:
{
lean_object* v___x_2372_; 
v___x_2372_ = lean_unsigned_to_nat(17u);
return v___x_2372_;
}
case 18:
{
lean_object* v___x_2373_; 
v___x_2373_ = lean_unsigned_to_nat(18u);
return v___x_2373_;
}
default: 
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_unsigned_to_nat(19u);
return v___x_2374_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorIdx___boxed(lean_object* v_x_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorIdx(v_x_2375_);
lean_dec_ref(v_x_2375_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(lean_object* v_t_2377_, lean_object* v_k_2378_){
_start:
{
switch(lean_obj_tag(v_t_2377_))
{
case 0:
{
lean_object* v_declarationId_2379_; lean_object* v___x_2380_; 
v_declarationId_2379_ = lean_ctor_get(v_t_2377_, 0);
lean_inc(v_declarationId_2379_);
lean_dec_ref_known(v_t_2377_, 1);
v___x_2380_ = lean_apply_1(v_k_2378_, v_declarationId_2379_);
return v___x_2380_;
}
case 1:
{
lean_object* v_name_2381_; lean_object* v___x_2382_; 
v_name_2381_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_name_2381_);
lean_dec_ref_known(v_t_2377_, 1);
v___x_2382_ = lean_apply_1(v_k_2378_, v_name_2381_);
return v___x_2382_;
}
case 2:
{
lean_object* v_type_2383_; lean_object* v___x_2384_; 
v_type_2383_ = lean_ctor_get(v_t_2377_, 0);
lean_inc(v_type_2383_);
lean_dec_ref_known(v_t_2377_, 1);
v___x_2384_ = lean_apply_1(v_k_2378_, v_type_2383_);
return v___x_2384_;
}
case 3:
{
lean_object* v_value_2385_; lean_object* v___x_2386_; 
v_value_2385_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_value_2385_);
lean_dec_ref_known(v_t_2377_, 1);
v___x_2386_ = lean_apply_1(v_k_2378_, v_value_2385_);
return v___x_2386_;
}
case 4:
{
lean_object* v_coercion_2387_; lean_object* v_source_2388_; lean_object* v___x_2389_; 
v_coercion_2387_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_coercion_2387_);
v_source_2388_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_source_2388_);
lean_dec_ref_known(v_t_2377_, 2);
v___x_2389_ = lean_apply_2(v_k_2378_, v_coercion_2387_, v_source_2388_);
return v___x_2389_;
}
case 5:
{
lean_object* v_binderId_2390_; lean_object* v_value_2391_; lean_object* v_body_2392_; lean_object* v___x_2393_; 
v_binderId_2390_ = lean_ctor_get(v_t_2377_, 0);
lean_inc(v_binderId_2390_);
v_value_2391_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_value_2391_);
v_body_2392_ = lean_ctor_get(v_t_2377_, 2);
lean_inc_ref(v_body_2392_);
lean_dec_ref_known(v_t_2377_, 3);
v___x_2393_ = lean_apply_3(v_k_2378_, v_binderId_2390_, v_value_2391_, v_body_2392_);
return v___x_2393_;
}
case 8:
{
lean_object* v_source_2394_; lean_object* v_association_2395_; lean_object* v_role_2396_; lean_object* v_qualifiers_2397_; uint8_t v_reverse_2398_; uint8_t v_associationClass_2399_; uint8_t v_viaAssociationClass_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v_source_2394_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_source_2394_);
v_association_2395_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_association_2395_);
v_role_2396_ = lean_ctor_get(v_t_2377_, 2);
lean_inc_ref(v_role_2396_);
v_qualifiers_2397_ = lean_ctor_get(v_t_2377_, 3);
lean_inc(v_qualifiers_2397_);
v_reverse_2398_ = lean_ctor_get_uint8(v_t_2377_, sizeof(void*)*4);
v_associationClass_2399_ = lean_ctor_get_uint8(v_t_2377_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2400_ = lean_ctor_get_uint8(v_t_2377_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_t_2377_, 4);
v___x_2401_ = lean_box(v_reverse_2398_);
v___x_2402_ = lean_box(v_associationClass_2399_);
v___x_2403_ = lean_box(v_viaAssociationClass_2400_);
v___x_2404_ = lean_apply_7(v_k_2378_, v_source_2394_, v_association_2395_, v_role_2396_, v_qualifiers_2397_, v___x_2401_, v___x_2402_, v___x_2403_);
return v___x_2404_;
}
case 9:
{
lean_object* v_source_2405_; lean_object* v_targetClass_2406_; uint8_t v_exact_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v_source_2405_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_source_2405_);
v_targetClass_2406_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_targetClass_2406_);
v_exact_2407_ = lean_ctor_get_uint8(v_t_2377_, sizeof(void*)*2);
lean_dec_ref_known(v_t_2377_, 2);
v___x_2408_ = lean_box(v_exact_2407_);
v___x_2409_ = lean_apply_3(v_k_2378_, v_source_2405_, v_targetClass_2406_, v___x_2408_);
return v___x_2409_;
}
case 10:
{
lean_object* v_source_2410_; lean_object* v_targetClass_2411_; lean_object* v___x_2412_; 
v_source_2410_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_source_2410_);
v_targetClass_2411_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_targetClass_2411_);
lean_dec_ref_known(v_t_2377_, 2);
v___x_2412_ = lean_apply_2(v_k_2378_, v_source_2410_, v_targetClass_2411_);
return v___x_2412_;
}
case 11:
{
lean_object* v_operator_2413_; lean_object* v_operand_2414_; lean_object* v___x_2415_; 
v_operator_2413_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_operator_2413_);
v_operand_2414_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_operand_2414_);
lean_dec_ref_known(v_t_2377_, 2);
v___x_2415_ = lean_apply_2(v_k_2378_, v_operator_2413_, v_operand_2414_);
return v___x_2415_;
}
case 13:
{
lean_object* v_source_2416_; lean_object* v_iteratorId_2417_; lean_object* v_predicate_2418_; lean_object* v___x_2419_; 
v_source_2416_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_source_2416_);
v_iteratorId_2417_ = lean_ctor_get(v_t_2377_, 1);
lean_inc(v_iteratorId_2417_);
v_predicate_2418_ = lean_ctor_get(v_t_2377_, 2);
lean_inc_ref(v_predicate_2418_);
lean_dec_ref_known(v_t_2377_, 3);
v___x_2419_ = lean_apply_3(v_k_2378_, v_source_2416_, v_iteratorId_2417_, v_predicate_2418_);
return v___x_2419_;
}
case 14:
{
lean_object* v_source_2420_; lean_object* v_iteratorId_2421_; lean_object* v_predicate_2422_; lean_object* v___x_2423_; 
v_source_2420_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_source_2420_);
v_iteratorId_2421_ = lean_ctor_get(v_t_2377_, 1);
lean_inc(v_iteratorId_2421_);
v_predicate_2422_ = lean_ctor_get(v_t_2377_, 2);
lean_inc_ref(v_predicate_2422_);
lean_dec_ref_known(v_t_2377_, 3);
v___x_2423_ = lean_apply_3(v_k_2378_, v_source_2420_, v_iteratorId_2421_, v_predicate_2422_);
return v___x_2423_;
}
case 15:
{
uint8_t v_kind_2424_; lean_object* v_elements_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v_kind_2424_ = lean_ctor_get_uint8(v_t_2377_, sizeof(void*)*1);
v_elements_2425_ = lean_ctor_get(v_t_2377_, 0);
lean_inc(v_elements_2425_);
lean_dec_ref_known(v_t_2377_, 1);
v___x_2426_ = lean_box(v_kind_2424_);
v___x_2427_ = lean_apply_2(v_k_2378_, v___x_2426_, v_elements_2425_);
return v___x_2427_;
}
case 17:
{
lean_object* v_operation_2428_; lean_object* v_source_2429_; lean_object* v_element_2430_; lean_object* v___x_2431_; 
v_operation_2428_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_operation_2428_);
v_source_2429_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_source_2429_);
v_element_2430_ = lean_ctor_get(v_t_2377_, 2);
lean_inc(v_element_2430_);
lean_dec_ref_known(v_t_2377_, 3);
v___x_2431_ = lean_apply_3(v_k_2378_, v_operation_2428_, v_source_2429_, v_element_2430_);
return v___x_2431_;
}
case 19:
{
lean_object* v_plan_2432_; lean_object* v___x_2433_; 
v_plan_2432_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_plan_2432_);
lean_dec_ref_known(v_t_2377_, 1);
v___x_2433_ = lean_apply_1(v_k_2378_, v_plan_2432_);
return v___x_2433_;
}
default: 
{
lean_object* v_condition_2434_; lean_object* v_thenExpr_2435_; lean_object* v_elseExpr_2436_; lean_object* v___x_2437_; 
v_condition_2434_ = lean_ctor_get(v_t_2377_, 0);
lean_inc_ref(v_condition_2434_);
v_thenExpr_2435_ = lean_ctor_get(v_t_2377_, 1);
lean_inc_ref(v_thenExpr_2435_);
v_elseExpr_2436_ = lean_ctor_get(v_t_2377_, 2);
lean_inc_ref(v_elseExpr_2436_);
lean_dec_ref(v_t_2377_);
v___x_2437_ = lean_apply_3(v_k_2378_, v_condition_2434_, v_thenExpr_2435_, v_elseExpr_2436_);
return v___x_2437_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim(lean_object* v_motive__1_2438_, lean_object* v_ctorIdx_2439_, lean_object* v_t_2440_, lean_object* v_h_2441_, lean_object* v_k_2442_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2440_, v_k_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___boxed(lean_object* v_motive__1_2444_, lean_object* v_ctorIdx_2445_, lean_object* v_t_2446_, lean_object* v_h_2447_, lean_object* v_k_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim(v_motive__1_2444_, v_ctorIdx_2445_, v_t_2446_, v_h_2447_, v_k_2448_);
lean_dec(v_ctorIdx_2445_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_variable_elim___redArg(lean_object* v_t_2450_, lean_object* v_variable_2451_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2450_, v_variable_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_variable_elim(lean_object* v_motive__1_2453_, lean_object* v_t_2454_, lean_object* v_h_2455_, lean_object* v_variable_2456_){
_start:
{
lean_object* v___x_2457_; 
v___x_2457_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2454_, v_variable_2456_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_parameter_elim___redArg(lean_object* v_t_2458_, lean_object* v_parameter_2459_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2458_, v_parameter_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_parameter_elim(lean_object* v_motive__1_2461_, lean_object* v_t_2462_, lean_object* v_h_2463_, lean_object* v_parameter_2464_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2462_, v_parameter_2464_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_bottom_elim___redArg(lean_object* v_t_2466_, lean_object* v_bottom_2467_){
_start:
{
lean_object* v___x_2468_; 
v___x_2468_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2466_, v_bottom_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_bottom_elim(lean_object* v_motive__1_2469_, lean_object* v_t_2470_, lean_object* v_h_2471_, lean_object* v_bottom_2472_){
_start:
{
lean_object* v___x_2473_; 
v___x_2473_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2470_, v_bottom_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_constant_elim___redArg(lean_object* v_t_2474_, lean_object* v_constant_2475_){
_start:
{
lean_object* v___x_2476_; 
v___x_2476_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2474_, v_constant_2475_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_constant_elim(lean_object* v_motive__1_2477_, lean_object* v_t_2478_, lean_object* v_h_2479_, lean_object* v_constant_2480_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2478_, v_constant_2480_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_coerce_elim___redArg(lean_object* v_t_2482_, lean_object* v_coerce_2483_){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2482_, v_coerce_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_coerce_elim(lean_object* v_motive__1_2485_, lean_object* v_t_2486_, lean_object* v_h_2487_, lean_object* v_coerce_2488_){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2486_, v_coerce_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_letExpr_elim___redArg(lean_object* v_t_2490_, lean_object* v_letExpr_2491_){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2490_, v_letExpr_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_letExpr_elim(lean_object* v_motive__1_2493_, lean_object* v_t_2494_, lean_object* v_h_2495_, lean_object* v_letExpr_2496_){
_start:
{
lean_object* v___x_2497_; 
v___x_2497_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2494_, v_letExpr_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ifExpr_elim___redArg(lean_object* v_t_2498_, lean_object* v_ifExpr_2499_){
_start:
{
lean_object* v___x_2500_; 
v___x_2500_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2498_, v_ifExpr_2499_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ifExpr_elim(lean_object* v_motive__1_2501_, lean_object* v_t_2502_, lean_object* v_h_2503_, lean_object* v_ifExpr_2504_){
_start:
{
lean_object* v___x_2505_; 
v___x_2505_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2502_, v_ifExpr_2504_);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_readAttribute_elim___redArg(lean_object* v_t_2506_, lean_object* v_readAttribute_2507_){
_start:
{
lean_object* v___x_2508_; 
v___x_2508_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2506_, v_readAttribute_2507_);
return v___x_2508_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_readAttribute_elim(lean_object* v_motive__1_2509_, lean_object* v_t_2510_, lean_object* v_h_2511_, lean_object* v_readAttribute_2512_){
_start:
{
lean_object* v___x_2513_; 
v___x_2513_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2510_, v_readAttribute_2512_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_navigateOne_elim___redArg(lean_object* v_t_2514_, lean_object* v_navigateOne_2515_){
_start:
{
lean_object* v___x_2516_; 
v___x_2516_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2514_, v_navigateOne_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_navigateOne_elim(lean_object* v_motive__1_2517_, lean_object* v_t_2518_, lean_object* v_h_2519_, lean_object* v_navigateOne_2520_){
_start:
{
lean_object* v___x_2521_; 
v___x_2521_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2518_, v_navigateOne_2520_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeTest_elim___redArg(lean_object* v_t_2522_, lean_object* v_typeTest_2523_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2522_, v_typeTest_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeTest_elim(lean_object* v_motive__1_2525_, lean_object* v_t_2526_, lean_object* v_h_2527_, lean_object* v_typeTest_2528_){
_start:
{
lean_object* v___x_2529_; 
v___x_2529_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2526_, v_typeTest_2528_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeCast_elim___redArg(lean_object* v_t_2530_, lean_object* v_typeCast_2531_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2530_, v_typeCast_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_typeCast_elim(lean_object* v_motive__1_2533_, lean_object* v_t_2534_, lean_object* v_h_2535_, lean_object* v_typeCast_2536_){
_start:
{
lean_object* v___x_2537_; 
v___x_2537_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2534_, v_typeCast_2536_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_unary_elim___redArg(lean_object* v_t_2538_, lean_object* v_unary_2539_){
_start:
{
lean_object* v___x_2540_; 
v___x_2540_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2538_, v_unary_2539_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_unary_elim(lean_object* v_motive__1_2541_, lean_object* v_t_2542_, lean_object* v_h_2543_, lean_object* v_unary_2544_){
_start:
{
lean_object* v___x_2545_; 
v___x_2545_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2542_, v_unary_2544_);
return v___x_2545_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_binary_elim___redArg(lean_object* v_t_2546_, lean_object* v_binary_2547_){
_start:
{
lean_object* v___x_2548_; 
v___x_2548_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2546_, v_binary_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_binary_elim(lean_object* v_motive__1_2549_, lean_object* v_t_2550_, lean_object* v_h_2551_, lean_object* v_binary_2552_){
_start:
{
lean_object* v___x_2553_; 
v___x_2553_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2550_, v_binary_2552_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_exists3_elim___redArg(lean_object* v_t_2554_, lean_object* v_exists3_2555_){
_start:
{
lean_object* v___x_2556_; 
v___x_2556_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2554_, v_exists3_2555_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_exists3_elim(lean_object* v_motive__1_2557_, lean_object* v_t_2558_, lean_object* v_h_2559_, lean_object* v_exists3_2560_){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2558_, v_exists3_2560_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_forAll3_elim___redArg(lean_object* v_t_2562_, lean_object* v_forAll3_2563_){
_start:
{
lean_object* v___x_2564_; 
v___x_2564_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2562_, v_forAll3_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_forAll3_elim(lean_object* v_motive__1_2565_, lean_object* v_t_2566_, lean_object* v_h_2567_, lean_object* v_forAll3_2568_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2566_, v_forAll3_2568_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_collectionLiteral_elim___redArg(lean_object* v_t_2570_, lean_object* v_collectionLiteral_2571_){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2570_, v_collectionLiteral_2571_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_collectionLiteral_elim(lean_object* v_motive__1_2573_, lean_object* v_t_2574_, lean_object* v_h_2575_, lean_object* v_collectionLiteral_2576_){
_start:
{
lean_object* v___x_2577_; 
v___x_2577_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2574_, v_collectionLiteral_2576_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_includesFamily_elim___redArg(lean_object* v_t_2578_, lean_object* v_includesFamily_2579_){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2578_, v_includesFamily_2579_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_includesFamily_elim(lean_object* v_motive__1_2581_, lean_object* v_t_2582_, lean_object* v_h_2583_, lean_object* v_includesFamily_2584_){
_start:
{
lean_object* v___x_2585_; 
v___x_2585_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2582_, v_includesFamily_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_countFamily_elim___redArg(lean_object* v_t_2586_, lean_object* v_countFamily_2587_){
_start:
{
lean_object* v___x_2588_; 
v___x_2588_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2586_, v_countFamily_2587_);
return v___x_2588_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_countFamily_elim(lean_object* v_motive__1_2589_, lean_object* v_t_2590_, lean_object* v_h_2591_, lean_object* v_countFamily_2592_){
_start:
{
lean_object* v___x_2593_; 
v___x_2593_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2590_, v_countFamily_2592_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_setAlgebra_elim___redArg(lean_object* v_t_2594_, lean_object* v_setAlgebra_2595_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2594_, v_setAlgebra_2595_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_setAlgebra_elim(lean_object* v_motive__1_2597_, lean_object* v_t_2598_, lean_object* v_h_2599_, lean_object* v_setAlgebra_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2598_, v_setAlgebra_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_materialize_elim___redArg(lean_object* v_t_2602_, lean_object* v_materialize_2603_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2602_, v_materialize_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_materialize_elim(lean_object* v_motive__1_2605_, lean_object* v_t_2606_, lean_object* v_h_2607_, lean_object* v_materialize_2608_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetExpr_ctorElim___redArg(v_t_2606_, v_materialize_2608_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorIdx(lean_object* v_x_2610_){
_start:
{
switch(lean_obj_tag(v_x_2610_))
{
case 0:
{
lean_object* v___x_2611_; 
v___x_2611_ = lean_unsigned_to_nat(0u);
return v___x_2611_;
}
case 1:
{
lean_object* v___x_2612_; 
v___x_2612_ = lean_unsigned_to_nat(1u);
return v___x_2612_;
}
case 2:
{
lean_object* v___x_2613_; 
v___x_2613_ = lean_unsigned_to_nat(2u);
return v___x_2613_;
}
case 3:
{
lean_object* v___x_2614_; 
v___x_2614_ = lean_unsigned_to_nat(3u);
return v___x_2614_;
}
case 4:
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_unsigned_to_nat(4u);
return v___x_2615_;
}
case 5:
{
lean_object* v___x_2616_; 
v___x_2616_ = lean_unsigned_to_nat(5u);
return v___x_2616_;
}
default: 
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_unsigned_to_nat(6u);
return v___x_2617_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorIdx___boxed(lean_object* v_x_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorIdx(v_x_2618_);
lean_dec_ref(v_x_2618_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(lean_object* v_t_2620_, lean_object* v_k_2621_){
_start:
{
switch(lean_obj_tag(v_t_2620_))
{
case 1:
{
lean_object* v_classKey_2622_; lean_object* v_declarationId_2623_; lean_object* v___x_2624_; 
v_classKey_2622_ = lean_ctor_get(v_t_2620_, 0);
lean_inc_ref(v_classKey_2622_);
v_declarationId_2623_ = lean_ctor_get(v_t_2620_, 1);
lean_inc(v_declarationId_2623_);
lean_dec_ref_known(v_t_2620_, 2);
v___x_2624_ = lean_apply_2(v_k_2621_, v_classKey_2622_, v_declarationId_2623_);
return v___x_2624_;
}
case 2:
{
lean_object* v_source_2625_; lean_object* v_association_2626_; lean_object* v_role_2627_; lean_object* v_qualifiers_2628_; uint8_t v_reverse_2629_; uint8_t v_associationClass_2630_; uint8_t v_viaAssociationClass_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v_source_2625_ = lean_ctor_get(v_t_2620_, 0);
lean_inc_ref(v_source_2625_);
v_association_2626_ = lean_ctor_get(v_t_2620_, 1);
lean_inc_ref(v_association_2626_);
v_role_2627_ = lean_ctor_get(v_t_2620_, 2);
lean_inc_ref(v_role_2627_);
v_qualifiers_2628_ = lean_ctor_get(v_t_2620_, 3);
lean_inc(v_qualifiers_2628_);
v_reverse_2629_ = lean_ctor_get_uint8(v_t_2620_, sizeof(void*)*4);
v_associationClass_2630_ = lean_ctor_get_uint8(v_t_2620_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2631_ = lean_ctor_get_uint8(v_t_2620_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_t_2620_, 4);
v___x_2632_ = lean_box(v_reverse_2629_);
v___x_2633_ = lean_box(v_associationClass_2630_);
v___x_2634_ = lean_box(v_viaAssociationClass_2631_);
v___x_2635_ = lean_apply_7(v_k_2621_, v_source_2625_, v_association_2626_, v_role_2627_, v_qualifiers_2628_, v___x_2632_, v___x_2633_, v___x_2634_);
return v___x_2635_;
}
case 3:
{
lean_object* v_source_2636_; lean_object* v_iteratorId_2637_; lean_object* v_predicate_2638_; uint8_t v_isSelect_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v_source_2636_ = lean_ctor_get(v_t_2620_, 0);
lean_inc_ref(v_source_2636_);
v_iteratorId_2637_ = lean_ctor_get(v_t_2620_, 1);
lean_inc(v_iteratorId_2637_);
v_predicate_2638_ = lean_ctor_get(v_t_2620_, 2);
lean_inc_ref(v_predicate_2638_);
v_isSelect_2639_ = lean_ctor_get_uint8(v_t_2620_, sizeof(void*)*3);
lean_dec_ref_known(v_t_2620_, 3);
v___x_2640_ = lean_box(v_isSelect_2639_);
v___x_2641_ = lean_apply_4(v_k_2621_, v_source_2636_, v_iteratorId_2637_, v_predicate_2638_, v___x_2640_);
return v___x_2641_;
}
case 4:
{
lean_object* v_source_2642_; lean_object* v_iteratorId_2643_; lean_object* v_body_2644_; lean_object* v___x_2645_; 
v_source_2642_ = lean_ctor_get(v_t_2620_, 0);
lean_inc_ref(v_source_2642_);
v_iteratorId_2643_ = lean_ctor_get(v_t_2620_, 1);
lean_inc(v_iteratorId_2643_);
v_body_2644_ = lean_ctor_get(v_t_2620_, 2);
lean_inc_ref(v_body_2644_);
lean_dec_ref_known(v_t_2620_, 3);
v___x_2645_ = lean_apply_3(v_k_2621_, v_source_2642_, v_iteratorId_2643_, v_body_2644_);
return v___x_2645_;
}
case 6:
{
lean_object* v_binderId_2646_; lean_object* v_value_2647_; lean_object* v_body_2648_; lean_object* v___x_2649_; 
v_binderId_2646_ = lean_ctor_get(v_t_2620_, 0);
lean_inc(v_binderId_2646_);
v_value_2647_ = lean_ctor_get(v_t_2620_, 1);
lean_inc_ref(v_value_2647_);
v_body_2648_ = lean_ctor_get(v_t_2620_, 2);
lean_inc_ref(v_body_2648_);
lean_dec_ref_known(v_t_2620_, 3);
v___x_2649_ = lean_apply_3(v_k_2621_, v_binderId_2646_, v_value_2647_, v_body_2648_);
return v___x_2649_;
}
default: 
{
lean_object* v_collection_2650_; lean_object* v___x_2651_; 
v_collection_2650_ = lean_ctor_get(v_t_2620_, 0);
lean_inc_ref(v_collection_2650_);
lean_dec_ref(v_t_2620_);
v___x_2651_ = lean_apply_1(v_k_2621_, v_collection_2650_);
return v___x_2651_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim(lean_object* v_motive__2_2652_, lean_object* v_ctorIdx_2653_, lean_object* v_t_2654_, lean_object* v_h_2655_, lean_object* v_k_2656_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2654_, v_k_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___boxed(lean_object* v_motive__2_2658_, lean_object* v_ctorIdx_2659_, lean_object* v_t_2660_, lean_object* v_h_2661_, lean_object* v_k_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim(v_motive__2_2658_, v_ctorIdx_2659_, v_t_2660_, v_h_2661_, v_k_2662_);
lean_dec(v_ctorIdx_2659_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_fromCollection_elim___redArg(lean_object* v_t_2664_, lean_object* v_fromCollection_2665_){
_start:
{
lean_object* v___x_2666_; 
v___x_2666_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2664_, v_fromCollection_2665_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_fromCollection_elim(lean_object* v_motive__2_2667_, lean_object* v_t_2668_, lean_object* v_h_2669_, lean_object* v_fromCollection_2670_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2668_, v_fromCollection_2670_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_scanClass_elim___redArg(lean_object* v_t_2672_, lean_object* v_scanClass_2673_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2672_, v_scanClass_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_scanClass_elim(lean_object* v_motive__2_2675_, lean_object* v_t_2676_, lean_object* v_h_2677_, lean_object* v_scanClass_2678_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2676_, v_scanClass_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_navigateMany_elim___redArg(lean_object* v_t_2680_, lean_object* v_navigateMany_2681_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2680_, v_navigateMany_2681_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_navigateMany_elim(lean_object* v_motive__2_2683_, lean_object* v_t_2684_, lean_object* v_h_2685_, lean_object* v_navigateMany_2686_){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2684_, v_navigateMany_2686_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_filter_elim___redArg(lean_object* v_t_2688_, lean_object* v_filter_2689_){
_start:
{
lean_object* v___x_2690_; 
v___x_2690_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2688_, v_filter_2689_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_filter_elim(lean_object* v_motive__2_2691_, lean_object* v_t_2692_, lean_object* v_h_2693_, lean_object* v_filter_2694_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2692_, v_filter_2694_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_collect_elim___redArg(lean_object* v_t_2696_, lean_object* v_collect_2697_){
_start:
{
lean_object* v___x_2698_; 
v___x_2698_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2696_, v_collect_2697_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_collect_elim(lean_object* v_motive__2_2699_, lean_object* v_t_2700_, lean_object* v_h_2701_, lean_object* v_collect_2702_){
_start:
{
lean_object* v___x_2703_; 
v___x_2703_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2700_, v_collect_2702_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_distinct_elim___redArg(lean_object* v_t_2704_, lean_object* v_distinct_2705_){
_start:
{
lean_object* v___x_2706_; 
v___x_2706_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2704_, v_distinct_2705_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_distinct_elim(lean_object* v_motive__2_2707_, lean_object* v_t_2708_, lean_object* v_h_2709_, lean_object* v_distinct_2710_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2708_, v_distinct_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_planLet_elim___redArg(lean_object* v_t_2712_, lean_object* v_planLet_2713_){
_start:
{
lean_object* v___x_2714_; 
v___x_2714_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2712_, v_planLet_2713_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_planLet_elim(lean_object* v_motive__2_2715_, lean_object* v_t_2716_, lean_object* v_h_2717_, lean_object* v_planLet_2718_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_TargetPlan_ctorElim___redArg(v_t_2716_, v_planLet_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(lean_object* v_x_2720_){
_start:
{
switch(lean_obj_tag(v_x_2720_))
{
case 0:
{
lean_object* v_collection_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2729_; 
v_collection_2721_ = lean_ctor_get(v_x_2720_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v_x_2720_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2723_ = v_x_2720_;
v_isShared_2724_ = v_isSharedCheck_2729_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_collection_2721_);
lean_dec(v_x_2720_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2729_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2725_; lean_object* v___x_2727_; 
v___x_2725_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_collection_2721_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 0, v___x_2725_);
v___x_2727_ = v___x_2723_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v___x_2725_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
case 1:
{
lean_object* v_classKey_2730_; lean_object* v_declarationId_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
v_classKey_2730_ = lean_ctor_get(v_x_2720_, 0);
v_declarationId_2731_ = lean_ctor_get(v_x_2720_, 1);
v_isSharedCheck_2738_ = !lean_is_exclusive(v_x_2720_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v_x_2720_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_declarationId_2731_);
lean_inc(v_classKey_2730_);
lean_dec(v_x_2720_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_classKey_2730_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v_declarationId_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
case 2:
{
lean_object* v_source_2739_; lean_object* v_association_2740_; lean_object* v_role_2741_; lean_object* v_qualifiers_2742_; uint8_t v_reverse_2743_; uint8_t v_associationClass_2744_; uint8_t v_viaAssociationClass_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2755_; 
v_source_2739_ = lean_ctor_get(v_x_2720_, 0);
v_association_2740_ = lean_ctor_get(v_x_2720_, 1);
v_role_2741_ = lean_ctor_get(v_x_2720_, 2);
v_qualifiers_2742_ = lean_ctor_get(v_x_2720_, 3);
v_reverse_2743_ = lean_ctor_get_uint8(v_x_2720_, sizeof(void*)*4);
v_associationClass_2744_ = lean_ctor_get_uint8(v_x_2720_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2745_ = lean_ctor_get_uint8(v_x_2720_, sizeof(void*)*4 + 2);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_x_2720_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2747_ = v_x_2720_;
v_isShared_2748_ = v_isSharedCheck_2755_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_qualifiers_2742_);
lean_inc(v_role_2741_);
lean_inc(v_association_2740_);
lean_inc(v_source_2739_);
lean_dec(v_x_2720_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2755_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2753_; 
v___x_2749_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2739_);
v___x_2750_ = lean_box(0);
v___x_2751_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_realizeExpr_spec__0(v_qualifiers_2742_, v___x_2750_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 3, v___x_2751_);
lean_ctor_set(v___x_2747_, 0, v___x_2749_);
v___x_2753_ = v___x_2747_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(2, 4, 3);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v___x_2749_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v_association_2740_);
lean_ctor_set(v_reuseFailAlloc_2754_, 2, v_role_2741_);
lean_ctor_set(v_reuseFailAlloc_2754_, 3, v___x_2751_);
lean_ctor_set_uint8(v_reuseFailAlloc_2754_, sizeof(void*)*4, v_reverse_2743_);
lean_ctor_set_uint8(v_reuseFailAlloc_2754_, sizeof(void*)*4 + 1, v_associationClass_2744_);
lean_ctor_set_uint8(v_reuseFailAlloc_2754_, sizeof(void*)*4 + 2, v_viaAssociationClass_2745_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
case 3:
{
lean_object* v_source_2756_; lean_object* v_iteratorId_2757_; lean_object* v_predicate_2758_; uint8_t v_isSelect_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2768_; 
v_source_2756_ = lean_ctor_get(v_x_2720_, 0);
v_iteratorId_2757_ = lean_ctor_get(v_x_2720_, 1);
v_predicate_2758_ = lean_ctor_get(v_x_2720_, 2);
v_isSelect_2759_ = lean_ctor_get_uint8(v_x_2720_, sizeof(void*)*3);
v_isSharedCheck_2768_ = !lean_is_exclusive(v_x_2720_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2761_ = v_x_2720_;
v_isShared_2762_ = v_isSharedCheck_2768_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_predicate_2758_);
lean_inc(v_iteratorId_2757_);
lean_inc(v_source_2756_);
lean_dec(v_x_2720_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2768_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2766_; 
v___x_2763_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(v_source_2756_);
v___x_2764_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_predicate_2758_);
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 2, v___x_2764_);
lean_ctor_set(v___x_2761_, 0, v___x_2763_);
v___x_2766_ = v___x_2761_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v___x_2763_);
lean_ctor_set(v_reuseFailAlloc_2767_, 1, v_iteratorId_2757_);
lean_ctor_set(v_reuseFailAlloc_2767_, 2, v___x_2764_);
lean_ctor_set_uint8(v_reuseFailAlloc_2767_, sizeof(void*)*3, v_isSelect_2759_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
case 4:
{
lean_object* v_source_2769_; lean_object* v_iteratorId_2770_; lean_object* v_body_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2780_; 
v_source_2769_ = lean_ctor_get(v_x_2720_, 0);
v_iteratorId_2770_ = lean_ctor_get(v_x_2720_, 1);
v_body_2771_ = lean_ctor_get(v_x_2720_, 2);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_x_2720_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2773_ = v_x_2720_;
v_isShared_2774_ = v_isSharedCheck_2780_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_body_2771_);
lean_inc(v_iteratorId_2770_);
lean_inc(v_source_2769_);
lean_dec(v_x_2720_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2780_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2778_; 
v___x_2775_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(v_source_2769_);
v___x_2776_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_body_2771_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 2, v___x_2776_);
lean_ctor_set(v___x_2773_, 0, v___x_2775_);
v___x_2778_ = v___x_2773_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2775_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_iteratorId_2770_);
lean_ctor_set(v_reuseFailAlloc_2779_, 2, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
case 5:
{
lean_object* v_source_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2789_; 
v_source_2781_ = lean_ctor_get(v_x_2720_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v_x_2720_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2783_ = v_x_2720_;
v_isShared_2784_ = v_isSharedCheck_2789_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_source_2781_);
lean_dec(v_x_2720_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2789_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2785_; lean_object* v___x_2787_; 
v___x_2785_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(v_source_2781_);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 0, v___x_2785_);
v___x_2787_ = v___x_2783_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2785_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
default: 
{
lean_object* v_binderId_2790_; lean_object* v_value_2791_; lean_object* v_body_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2801_; 
v_binderId_2790_ = lean_ctor_get(v_x_2720_, 0);
v_value_2791_ = lean_ctor_get(v_x_2720_, 1);
v_body_2792_ = lean_ctor_get(v_x_2720_, 2);
v_isSharedCheck_2801_ = !lean_is_exclusive(v_x_2720_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2794_ = v_x_2720_;
v_isShared_2795_ = v_isSharedCheck_2801_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_body_2792_);
lean_inc(v_value_2791_);
lean_inc(v_binderId_2790_);
lean_dec(v_x_2720_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2801_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2799_; 
v___x_2796_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_value_2791_);
v___x_2797_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(v_body_2792_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 2, v___x_2797_);
lean_ctor_set(v___x_2794_, 1, v___x_2796_);
v___x_2799_ = v___x_2794_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_binderId_2790_);
lean_ctor_set(v_reuseFailAlloc_2800_, 1, v___x_2796_);
lean_ctor_set(v_reuseFailAlloc_2800_, 2, v___x_2797_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(lean_object* v_x_2802_){
_start:
{
switch(lean_obj_tag(v_x_2802_))
{
case 0:
{
lean_object* v_declarationId_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
v_declarationId_2803_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v_x_2802_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_declarationId_2803_);
lean_dec(v_x_2802_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_declarationId_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
case 1:
{
lean_object* v_name_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
v_name_2811_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v_x_2802_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_name_2811_);
lean_dec(v_x_2802_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_name_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
case 2:
{
lean_object* v_type_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
v_type_2819_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v_x_2802_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_type_2819_);
lean_dec(v_x_2802_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_type_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
case 3:
{
lean_object* v_value_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
v_value_2827_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v_x_2802_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_value_2827_);
lean_dec(v_x_2802_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_value_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
case 4:
{
lean_object* v_coercion_2835_; lean_object* v_source_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2844_; 
v_coercion_2835_ = lean_ctor_get(v_x_2802_, 0);
v_source_2836_ = lean_ctor_get(v_x_2802_, 1);
v_isSharedCheck_2844_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2838_ = v_x_2802_;
v_isShared_2839_ = v_isSharedCheck_2844_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_source_2836_);
lean_inc(v_coercion_2835_);
lean_dec(v_x_2802_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2844_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2840_; lean_object* v___x_2842_; 
v___x_2840_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2836_);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 1, v___x_2840_);
v___x_2842_ = v___x_2838_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_coercion_2835_);
lean_ctor_set(v_reuseFailAlloc_2843_, 1, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
case 5:
{
lean_object* v_binderId_2845_; lean_object* v_value_2846_; lean_object* v_body_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2856_; 
v_binderId_2845_ = lean_ctor_get(v_x_2802_, 0);
v_value_2846_ = lean_ctor_get(v_x_2802_, 1);
v_body_2847_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_2856_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2849_ = v_x_2802_;
v_isShared_2850_ = v_isSharedCheck_2856_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_body_2847_);
lean_inc(v_value_2846_);
lean_inc(v_binderId_2845_);
lean_dec(v_x_2802_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2856_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
v___x_2851_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_value_2846_);
v___x_2852_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_body_2847_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 2, v___x_2852_);
lean_ctor_set(v___x_2849_, 1, v___x_2851_);
v___x_2854_ = v___x_2849_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_binderId_2845_);
lean_ctor_set(v_reuseFailAlloc_2855_, 1, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2855_, 2, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
case 6:
{
lean_object* v_condition_2857_; lean_object* v_thenExpr_2858_; lean_object* v_elseExpr_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2869_; 
v_condition_2857_ = lean_ctor_get(v_x_2802_, 0);
v_thenExpr_2858_ = lean_ctor_get(v_x_2802_, 1);
v_elseExpr_2859_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2861_ = v_x_2802_;
v_isShared_2862_ = v_isSharedCheck_2869_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_elseExpr_2859_);
lean_inc(v_thenExpr_2858_);
lean_inc(v_condition_2857_);
lean_dec(v_x_2802_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2869_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2867_; 
v___x_2863_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_condition_2857_);
v___x_2864_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_thenExpr_2858_);
v___x_2865_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_elseExpr_2859_);
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 2, v___x_2865_);
lean_ctor_set(v___x_2861_, 1, v___x_2864_);
lean_ctor_set(v___x_2861_, 0, v___x_2863_);
v___x_2867_ = v___x_2861_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2863_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v___x_2864_);
lean_ctor_set(v_reuseFailAlloc_2868_, 2, v___x_2865_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
case 7:
{
lean_object* v_source_2870_; lean_object* v_ownerClass_2871_; lean_object* v_attributeName_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2880_; 
v_source_2870_ = lean_ctor_get(v_x_2802_, 0);
v_ownerClass_2871_ = lean_ctor_get(v_x_2802_, 1);
v_attributeName_2872_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_2880_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2874_ = v_x_2802_;
v_isShared_2875_ = v_isSharedCheck_2880_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_attributeName_2872_);
lean_inc(v_ownerClass_2871_);
lean_inc(v_source_2870_);
lean_dec(v_x_2802_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2880_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; lean_object* v___x_2878_; 
v___x_2876_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2870_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v___x_2876_);
v___x_2878_ = v___x_2874_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(7, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v___x_2876_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v_ownerClass_2871_);
lean_ctor_set(v_reuseFailAlloc_2879_, 2, v_attributeName_2872_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
case 8:
{
lean_object* v_source_2881_; lean_object* v_association_2882_; lean_object* v_role_2883_; lean_object* v_qualifiers_2884_; uint8_t v_reverse_2885_; uint8_t v_associationClass_2886_; uint8_t v_viaAssociationClass_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2897_; 
v_source_2881_ = lean_ctor_get(v_x_2802_, 0);
v_association_2882_ = lean_ctor_get(v_x_2802_, 1);
v_role_2883_ = lean_ctor_get(v_x_2802_, 2);
v_qualifiers_2884_ = lean_ctor_get(v_x_2802_, 3);
v_reverse_2885_ = lean_ctor_get_uint8(v_x_2802_, sizeof(void*)*4);
v_associationClass_2886_ = lean_ctor_get_uint8(v_x_2802_, sizeof(void*)*4 + 1);
v_viaAssociationClass_2887_ = lean_ctor_get_uint8(v_x_2802_, sizeof(void*)*4 + 2);
v_isSharedCheck_2897_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2889_ = v_x_2802_;
v_isShared_2890_ = v_isSharedCheck_2897_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_qualifiers_2884_);
lean_inc(v_role_2883_);
lean_inc(v_association_2882_);
lean_inc(v_source_2881_);
lean_dec(v_x_2802_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2897_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2895_; 
v___x_2891_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2881_);
v___x_2892_ = lean_box(0);
v___x_2893_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_realizeExpr_spec__0(v_qualifiers_2884_, v___x_2892_);
if (v_isShared_2890_ == 0)
{
lean_ctor_set(v___x_2889_, 3, v___x_2893_);
lean_ctor_set(v___x_2889_, 0, v___x_2891_);
v___x_2895_ = v___x_2889_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(8, 4, 3);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2891_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_association_2882_);
lean_ctor_set(v_reuseFailAlloc_2896_, 2, v_role_2883_);
lean_ctor_set(v_reuseFailAlloc_2896_, 3, v___x_2893_);
lean_ctor_set_uint8(v_reuseFailAlloc_2896_, sizeof(void*)*4, v_reverse_2885_);
lean_ctor_set_uint8(v_reuseFailAlloc_2896_, sizeof(void*)*4 + 1, v_associationClass_2886_);
lean_ctor_set_uint8(v_reuseFailAlloc_2896_, sizeof(void*)*4 + 2, v_viaAssociationClass_2887_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
case 9:
{
lean_object* v_source_2898_; lean_object* v_targetClass_2899_; uint8_t v_exact_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2908_; 
v_source_2898_ = lean_ctor_get(v_x_2802_, 0);
v_targetClass_2899_ = lean_ctor_get(v_x_2802_, 1);
v_exact_2900_ = lean_ctor_get_uint8(v_x_2802_, sizeof(void*)*2);
v_isSharedCheck_2908_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2902_ = v_x_2802_;
v_isShared_2903_ = v_isSharedCheck_2908_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_targetClass_2899_);
lean_inc(v_source_2898_);
lean_dec(v_x_2802_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2908_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2904_; lean_object* v___x_2906_; 
v___x_2904_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2898_);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 0, v___x_2904_);
v___x_2906_ = v___x_2902_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(9, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v___x_2904_);
lean_ctor_set(v_reuseFailAlloc_2907_, 1, v_targetClass_2899_);
lean_ctor_set_uint8(v_reuseFailAlloc_2907_, sizeof(void*)*2, v_exact_2900_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
case 10:
{
lean_object* v_source_2909_; lean_object* v_targetClass_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2918_; 
v_source_2909_ = lean_ctor_get(v_x_2802_, 0);
v_targetClass_2910_ = lean_ctor_get(v_x_2802_, 1);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2912_ = v_x_2802_;
v_isShared_2913_ = v_isSharedCheck_2918_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_targetClass_2910_);
lean_inc(v_source_2909_);
lean_dec(v_x_2802_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2918_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v___x_2914_; lean_object* v___x_2916_; 
v___x_2914_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2909_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 0, v___x_2914_);
v___x_2916_ = v___x_2912_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v_targetClass_2910_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
case 11:
{
lean_object* v_operator_2919_; lean_object* v_operand_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2928_; 
v_operator_2919_ = lean_ctor_get(v_x_2802_, 0);
v_operand_2920_ = lean_ctor_get(v_x_2802_, 1);
v_isSharedCheck_2928_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2922_ = v_x_2802_;
v_isShared_2923_ = v_isSharedCheck_2928_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_operand_2920_);
lean_inc(v_operator_2919_);
lean_dec(v_x_2802_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2928_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2924_; lean_object* v___x_2926_; 
v___x_2924_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_operand_2920_);
if (v_isShared_2923_ == 0)
{
lean_ctor_set(v___x_2922_, 1, v___x_2924_);
v___x_2926_ = v___x_2922_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_operator_2919_);
lean_ctor_set(v_reuseFailAlloc_2927_, 1, v___x_2924_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
case 12:
{
lean_object* v_operator_2929_; lean_object* v_left_2930_; lean_object* v_right_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2940_; 
v_operator_2929_ = lean_ctor_get(v_x_2802_, 0);
v_left_2930_ = lean_ctor_get(v_x_2802_, 1);
v_right_2931_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_2940_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2933_ = v_x_2802_;
v_isShared_2934_ = v_isSharedCheck_2940_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_right_2931_);
lean_inc(v_left_2930_);
lean_inc(v_operator_2929_);
lean_dec(v_x_2802_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2940_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2938_; 
v___x_2935_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_left_2930_);
v___x_2936_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_right_2931_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 2, v___x_2936_);
lean_ctor_set(v___x_2933_, 1, v___x_2935_);
v___x_2938_ = v___x_2933_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_operator_2929_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v___x_2935_);
lean_ctor_set(v_reuseFailAlloc_2939_, 2, v___x_2936_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
case 13:
{
lean_object* v_source_2941_; lean_object* v_iteratorId_2942_; lean_object* v_predicate_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2952_; 
v_source_2941_ = lean_ctor_get(v_x_2802_, 0);
v_iteratorId_2942_ = lean_ctor_get(v_x_2802_, 1);
v_predicate_2943_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_2952_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2945_ = v_x_2802_;
v_isShared_2946_ = v_isSharedCheck_2952_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_predicate_2943_);
lean_inc(v_iteratorId_2942_);
lean_inc(v_source_2941_);
lean_dec(v_x_2802_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2952_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2950_; 
v___x_2947_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(v_source_2941_);
v___x_2948_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_predicate_2943_);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 2, v___x_2948_);
lean_ctor_set(v___x_2945_, 0, v___x_2947_);
v___x_2950_ = v___x_2945_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(13, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v___x_2947_);
lean_ctor_set(v_reuseFailAlloc_2951_, 1, v_iteratorId_2942_);
lean_ctor_set(v_reuseFailAlloc_2951_, 2, v___x_2948_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
return v___x_2950_;
}
}
}
case 14:
{
lean_object* v_source_2953_; lean_object* v_iteratorId_2954_; lean_object* v_predicate_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2964_; 
v_source_2953_ = lean_ctor_get(v_x_2802_, 0);
v_iteratorId_2954_ = lean_ctor_get(v_x_2802_, 1);
v_predicate_2955_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2957_ = v_x_2802_;
v_isShared_2958_ = v_isSharedCheck_2964_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_predicate_2955_);
lean_inc(v_iteratorId_2954_);
lean_inc(v_source_2953_);
lean_dec(v_x_2802_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2964_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2962_; 
v___x_2959_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(v_source_2953_);
v___x_2960_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_predicate_2955_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 2, v___x_2960_);
lean_ctor_set(v___x_2957_, 0, v___x_2959_);
v___x_2962_ = v___x_2957_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(14, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2959_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v_iteratorId_2954_);
lean_ctor_set(v_reuseFailAlloc_2963_, 2, v___x_2960_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
case 15:
{
uint8_t v_kind_2965_; lean_object* v_elements_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2975_; 
v_kind_2965_ = lean_ctor_get_uint8(v_x_2802_, sizeof(void*)*1);
v_elements_2966_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2968_ = v_x_2802_;
v_isShared_2969_ = v_isSharedCheck_2975_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_elements_2966_);
lean_dec(v_x_2802_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2975_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2973_; 
v___x_2970_ = lean_box(0);
v___x_2971_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_realizeExpr_spec__0(v_elements_2966_, v___x_2970_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2971_);
v___x_2973_ = v___x_2968_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(15, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v___x_2971_);
lean_ctor_set_uint8(v_reuseFailAlloc_2974_, sizeof(void*)*1, v_kind_2965_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
case 16:
{
lean_object* v_operation_2976_; lean_object* v_source_2977_; lean_object* v_element_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2987_; 
v_operation_2976_ = lean_ctor_get(v_x_2802_, 0);
v_source_2977_ = lean_ctor_get(v_x_2802_, 1);
v_element_2978_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_2987_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2980_ = v_x_2802_;
v_isShared_2981_ = v_isSharedCheck_2987_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_element_2978_);
lean_inc(v_source_2977_);
lean_inc(v_operation_2976_);
lean_dec(v_x_2802_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2987_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2985_; 
v___x_2982_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2977_);
v___x_2983_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_element_2978_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 2, v___x_2983_);
lean_ctor_set(v___x_2980_, 1, v___x_2982_);
v___x_2985_ = v___x_2980_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(16, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_operation_2976_);
lean_ctor_set(v_reuseFailAlloc_2986_, 1, v___x_2982_);
lean_ctor_set(v_reuseFailAlloc_2986_, 2, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
}
}
}
case 17:
{
lean_object* v_operation_2988_; lean_object* v_source_2989_; lean_object* v_element_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3011_; 
v_operation_2988_ = lean_ctor_get(v_x_2802_, 0);
v_source_2989_ = lean_ctor_get(v_x_2802_, 1);
v_element_2990_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_3011_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_2992_ = v_x_2802_;
v_isShared_2993_ = v_isSharedCheck_3011_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_element_2990_);
lean_inc(v_source_2989_);
lean_inc(v_operation_2988_);
lean_dec(v_x_2802_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3011_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2994_; 
v___x_2994_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_source_2989_);
if (lean_obj_tag(v_element_2990_) == 0)
{
lean_object* v___x_2995_; lean_object* v___x_2997_; 
v___x_2995_ = lean_box(0);
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 2, v___x_2995_);
lean_ctor_set(v___x_2992_, 1, v___x_2994_);
v___x_2997_ = v___x_2992_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_operation_2988_);
lean_ctor_set(v_reuseFailAlloc_2998_, 1, v___x_2994_);
lean_ctor_set(v_reuseFailAlloc_2998_, 2, v___x_2995_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
else
{
lean_object* v_val_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3010_; 
v_val_2999_ = lean_ctor_get(v_element_2990_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v_element_2990_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3001_ = v_element_2990_;
v_isShared_3002_ = v_isSharedCheck_3010_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_val_2999_);
lean_dec(v_element_2990_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3010_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3003_; lean_object* v___x_3005_; 
v___x_3003_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_val_2999_);
if (v_isShared_3002_ == 0)
{
lean_ctor_set(v___x_3001_, 0, v___x_3003_);
v___x_3005_ = v___x_3001_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v___x_3003_);
v___x_3005_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v___x_3007_; 
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 2, v___x_3005_);
lean_ctor_set(v___x_2992_, 1, v___x_2994_);
v___x_3007_ = v___x_2992_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_operation_2988_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v___x_2994_);
lean_ctor_set(v_reuseFailAlloc_3008_, 2, v___x_3005_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
}
}
}
case 18:
{
lean_object* v_operation_3012_; lean_object* v_left_3013_; lean_object* v_right_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3023_; 
v_operation_3012_ = lean_ctor_get(v_x_2802_, 0);
v_left_3013_ = lean_ctor_get(v_x_2802_, 1);
v_right_3014_ = lean_ctor_get(v_x_2802_, 2);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3016_ = v_x_2802_;
v_isShared_3017_ = v_isSharedCheck_3023_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_right_3014_);
lean_inc(v_left_3013_);
lean_inc(v_operation_3012_);
lean_dec(v_x_2802_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3023_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3021_; 
v___x_3018_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_left_3013_);
v___x_3019_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_right_3014_);
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 2, v___x_3019_);
lean_ctor_set(v___x_3016_, 1, v___x_3018_);
v___x_3021_ = v___x_3016_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(18, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_operation_3012_);
lean_ctor_set(v_reuseFailAlloc_3022_, 1, v___x_3018_);
lean_ctor_set(v_reuseFailAlloc_3022_, 2, v___x_3019_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
default: 
{
lean_object* v_plan_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3032_; 
v_plan_3024_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3026_ = v_x_2802_;
v_isShared_3027_ = v_isSharedCheck_3032_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_plan_3024_);
lean_dec(v_x_2802_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3032_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3028_; lean_object* v___x_3030_; 
v___x_3028_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizePlan(v_plan_3024_);
if (v_isShared_3027_ == 0)
{
lean_ctor_set(v___x_3026_, 0, v___x_3028_);
v___x_3030_ = v___x_3026_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(19, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v___x_3028_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_realizeExpr_spec__0(lean_object* v_a_3033_, lean_object* v_a_3034_){
_start:
{
if (lean_obj_tag(v_a_3033_) == 0)
{
lean_object* v___x_3035_; 
v___x_3035_ = l_List_reverse___redArg(v_a_3034_);
return v___x_3035_;
}
else
{
lean_object* v_head_3036_; lean_object* v_tail_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3046_; 
v_head_3036_ = lean_ctor_get(v_a_3033_, 0);
v_tail_3037_ = lean_ctor_get(v_a_3033_, 1);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_a_3033_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3039_ = v_a_3033_;
v_isShared_3040_ = v_isSharedCheck_3046_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_tail_3037_);
lean_inc(v_head_3036_);
lean_dec(v_a_3033_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3046_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3041_; lean_object* v___x_3043_; 
v___x_3041_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_realizeExpr(v_head_3036_);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 1, v_a_3034_);
lean_ctor_set(v___x_3039_, 0, v___x_3041_);
v___x_3043_ = v___x_3039_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3041_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v_a_3034_);
v___x_3043_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
v_a_3033_ = v_tail_3037_;
v_a_3034_ = v___x_3043_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_realizeExpr_match__1_splitter___redArg(lean_object* v_element_3047_, lean_object* v_h__1_3048_, lean_object* v_h__2_3049_){
_start:
{
if (lean_obj_tag(v_element_3047_) == 0)
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
lean_dec(v_h__2_3049_);
v___x_3050_ = lean_box(0);
v___x_3051_ = lean_apply_1(v_h__1_3048_, v___x_3050_);
return v___x_3051_;
}
else
{
lean_object* v_val_3052_; lean_object* v___x_3053_; 
lean_dec(v_h__1_3048_);
v_val_3052_ = lean_ctor_get(v_element_3047_, 0);
lean_inc(v_val_3052_);
lean_dec_ref_known(v_element_3047_, 1);
v___x_3053_ = lean_apply_1(v_h__2_3049_, v_val_3052_);
return v___x_3053_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_realizeExpr_match__1_splitter(lean_object* v_motive_3054_, lean_object* v_element_3055_, lean_object* v_h__1_3056_, lean_object* v_h__2_3057_){
_start:
{
if (lean_obj_tag(v_element_3055_) == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
lean_dec(v_h__2_3057_);
v___x_3058_ = lean_box(0);
v___x_3059_ = lean_apply_1(v_h__1_3056_, v___x_3058_);
return v___x_3059_;
}
else
{
lean_object* v_val_3060_; lean_object* v___x_3061_; 
lean_dec(v_h__1_3056_);
v_val_3060_ = lean_ctor_get(v_element_3055_, 0);
lean_inc(v_val_3060_);
lean_dec_ref_known(v_element_3055_, 1);
v___x_3061_ = lean_apply_1(v_h__2_3057_, v_val_3060_);
return v___x_3061_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0___redArg(lean_object* v_semantics_3062_, lean_object* v_n_3063_, lean_object* v_x_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_){
_start:
{
if (lean_obj_tag(v_a_3065_) == 0)
{
lean_object* v___x_3067_; 
lean_dec(v_x_3064_);
lean_dec(v_n_3063_);
lean_dec_ref(v_semantics_3062_);
v___x_3067_ = l_List_reverse___redArg(v_a_3066_);
return v___x_3067_;
}
else
{
lean_object* v_head_3068_; lean_object* v_tail_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3078_; 
v_head_3068_ = lean_ctor_get(v_a_3065_, 0);
v_tail_3069_ = lean_ctor_get(v_a_3065_, 1);
v_isSharedCheck_3078_ = !lean_is_exclusive(v_a_3065_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3071_ = v_a_3065_;
v_isShared_3072_ = v_isSharedCheck_3078_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_tail_3069_);
lean_inc(v_head_3068_);
lean_dec(v_a_3065_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3078_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3073_; lean_object* v___x_3075_; 
lean_inc(v_x_3064_);
lean_inc(v_n_3063_);
lean_inc_ref(v_semantics_3062_);
v___x_3073_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3062_, v_n_3063_, v_x_3064_, v_head_3068_);
if (v_isShared_3072_ == 0)
{
lean_ctor_set(v___x_3071_, 1, v_a_3066_);
lean_ctor_set(v___x_3071_, 0, v___x_3073_);
v___x_3075_ = v___x_3071_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v___x_3073_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v_a_3066_);
v___x_3075_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
v_a_3065_ = v_tail_3069_;
v_a_3066_ = v___x_3075_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg___lam__1(lean_object* v_x_3079_, lean_object* v_iteratorId_3080_, lean_object* v_semantics_3081_, lean_object* v_n_3082_, lean_object* v_body_3083_, lean_object* v_value_3084_){
_start:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3085_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_3085_, 0, lean_box(0));
lean_closure_set(v___x_3085_, 1, v_x_3079_);
lean_closure_set(v___x_3085_, 2, v_iteratorId_3080_);
lean_closure_set(v___x_3085_, 3, v_value_3084_);
v___x_3086_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3081_, v_n_3082_, v___x_3085_, v_body_3083_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(lean_object* v_semantics_3087_, lean_object* v_x_3088_, lean_object* v_x_3089_, lean_object* v_x_3090_){
_start:
{
lean_object* v_zero_3091_; uint8_t v_isZero_3092_; 
v_zero_3091_ = lean_unsigned_to_nat(0u);
v_isZero_3092_ = lean_nat_dec_eq(v_x_3088_, v_zero_3091_);
if (v_isZero_3092_ == 1)
{
lean_object* v_outOfFuelCollection_3093_; 
lean_dec_ref(v_x_3090_);
lean_dec(v_x_3089_);
lean_dec(v_x_3088_);
v_outOfFuelCollection_3093_ = lean_ctor_get(v_semantics_3087_, 1);
lean_inc(v_outOfFuelCollection_3093_);
lean_dec_ref(v_semantics_3087_);
return v_outOfFuelCollection_3093_;
}
else
{
lean_object* v_one_3094_; lean_object* v_n_3095_; 
v_one_3094_ = lean_unsigned_to_nat(1u);
v_n_3095_ = lean_nat_sub(v_x_3088_, v_one_3094_);
lean_dec(v_x_3088_);
switch(lean_obj_tag(v_x_3090_))
{
case 0:
{
lean_object* v_collection_3096_; lean_object* v_fromCollection_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v_collection_3096_ = lean_ctor_get(v_x_3090_, 0);
lean_inc_ref(v_collection_3096_);
lean_dec_ref_known(v_x_3090_, 1);
v_fromCollection_3097_ = lean_ctor_get(v_semantics_3087_, 20);
lean_inc(v_fromCollection_3097_);
v___x_3098_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3087_, v_n_3095_, v_x_3089_, v_collection_3096_);
v___x_3099_ = lean_apply_1(v_fromCollection_3097_, v___x_3098_);
return v___x_3099_;
}
case 1:
{
lean_object* v_classKey_3100_; lean_object* v_declarationId_3101_; lean_object* v_scanClass_3102_; lean_object* v___x_3103_; 
lean_dec(v_n_3095_);
lean_dec(v_x_3089_);
v_classKey_3100_ = lean_ctor_get(v_x_3090_, 0);
lean_inc_ref(v_classKey_3100_);
v_declarationId_3101_ = lean_ctor_get(v_x_3090_, 1);
lean_inc(v_declarationId_3101_);
lean_dec_ref_known(v_x_3090_, 2);
v_scanClass_3102_ = lean_ctor_get(v_semantics_3087_, 21);
lean_inc(v_scanClass_3102_);
lean_dec_ref(v_semantics_3087_);
v___x_3103_ = lean_apply_2(v_scanClass_3102_, v_classKey_3100_, v_declarationId_3101_);
return v___x_3103_;
}
case 2:
{
lean_object* v_source_3104_; lean_object* v_association_3105_; lean_object* v_role_3106_; lean_object* v_qualifiers_3107_; uint8_t v_reverse_3108_; uint8_t v_associationClass_3109_; uint8_t v_viaAssociationClass_3110_; lean_object* v_navigateMany_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v_source_3104_ = lean_ctor_get(v_x_3090_, 0);
lean_inc_ref(v_source_3104_);
v_association_3105_ = lean_ctor_get(v_x_3090_, 1);
lean_inc_ref(v_association_3105_);
v_role_3106_ = lean_ctor_get(v_x_3090_, 2);
lean_inc_ref(v_role_3106_);
v_qualifiers_3107_ = lean_ctor_get(v_x_3090_, 3);
lean_inc(v_qualifiers_3107_);
v_reverse_3108_ = lean_ctor_get_uint8(v_x_3090_, sizeof(void*)*4);
v_associationClass_3109_ = lean_ctor_get_uint8(v_x_3090_, sizeof(void*)*4 + 1);
v_viaAssociationClass_3110_ = lean_ctor_get_uint8(v_x_3090_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_3090_, 4);
v_navigateMany_3111_ = lean_ctor_get(v_semantics_3087_, 22);
lean_inc(v_navigateMany_3111_);
lean_inc(v_x_3089_);
lean_inc(v_n_3095_);
lean_inc_ref(v_semantics_3087_);
v___x_3112_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3087_, v_n_3095_, v_x_3089_, v_source_3104_);
v___x_3113_ = lean_box(0);
v___x_3114_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0___redArg(v_semantics_3087_, v_n_3095_, v_x_3089_, v_qualifiers_3107_, v___x_3113_);
v___x_3115_ = lean_box(v_reverse_3108_);
v___x_3116_ = lean_box(v_associationClass_3109_);
v___x_3117_ = lean_box(v_viaAssociationClass_3110_);
v___x_3118_ = lean_apply_7(v_navigateMany_3111_, v___x_3112_, v_association_3105_, v_role_3106_, v___x_3114_, v___x_3115_, v___x_3116_, v___x_3117_);
return v___x_3118_;
}
case 3:
{
lean_object* v_source_3119_; lean_object* v_iteratorId_3120_; lean_object* v_predicate_3121_; uint8_t v_isSelect_3122_; lean_object* v_filter_3123_; lean_object* v___f_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v_source_3119_ = lean_ctor_get(v_x_3090_, 0);
lean_inc_ref(v_source_3119_);
v_iteratorId_3120_ = lean_ctor_get(v_x_3090_, 1);
lean_inc(v_iteratorId_3120_);
v_predicate_3121_ = lean_ctor_get(v_x_3090_, 2);
lean_inc_ref(v_predicate_3121_);
v_isSelect_3122_ = lean_ctor_get_uint8(v_x_3090_, sizeof(void*)*3);
lean_dec_ref_known(v_x_3090_, 3);
v_filter_3123_ = lean_ctor_get(v_semantics_3087_, 23);
lean_inc(v_filter_3123_);
lean_inc(v_n_3095_);
lean_inc_ref(v_semantics_3087_);
lean_inc(v_x_3089_);
v___f_3124_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_3124_, 0, v_x_3089_);
lean_closure_set(v___f_3124_, 1, v_iteratorId_3120_);
lean_closure_set(v___f_3124_, 2, v_semantics_3087_);
lean_closure_set(v___f_3124_, 3, v_n_3095_);
lean_closure_set(v___f_3124_, 4, v_predicate_3121_);
v___x_3125_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(v_semantics_3087_, v_n_3095_, v_x_3089_, v_source_3119_);
v___x_3126_ = lean_box(v_isSelect_3122_);
v___x_3127_ = lean_apply_3(v_filter_3123_, v___x_3125_, v___f_3124_, v___x_3126_);
return v___x_3127_;
}
case 4:
{
lean_object* v_source_3128_; lean_object* v_iteratorId_3129_; lean_object* v_body_3130_; lean_object* v_collect_3131_; lean_object* v___f_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v_source_3128_ = lean_ctor_get(v_x_3090_, 0);
lean_inc_ref(v_source_3128_);
v_iteratorId_3129_ = lean_ctor_get(v_x_3090_, 1);
lean_inc(v_iteratorId_3129_);
v_body_3130_ = lean_ctor_get(v_x_3090_, 2);
lean_inc_ref(v_body_3130_);
lean_dec_ref_known(v_x_3090_, 3);
v_collect_3131_ = lean_ctor_get(v_semantics_3087_, 24);
lean_inc(v_collect_3131_);
lean_inc(v_n_3095_);
lean_inc_ref(v_semantics_3087_);
lean_inc(v_x_3089_);
v___f_3132_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg___lam__1), 6, 5);
lean_closure_set(v___f_3132_, 0, v_x_3089_);
lean_closure_set(v___f_3132_, 1, v_iteratorId_3129_);
lean_closure_set(v___f_3132_, 2, v_semantics_3087_);
lean_closure_set(v___f_3132_, 3, v_n_3095_);
lean_closure_set(v___f_3132_, 4, v_body_3130_);
v___x_3133_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(v_semantics_3087_, v_n_3095_, v_x_3089_, v_source_3128_);
v___x_3134_ = lean_apply_2(v_collect_3131_, v___x_3133_, v___f_3132_);
return v___x_3134_;
}
case 5:
{
lean_object* v_source_3135_; lean_object* v_distinct_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v_source_3135_ = lean_ctor_get(v_x_3090_, 0);
lean_inc_ref(v_source_3135_);
lean_dec_ref_known(v_x_3090_, 1);
v_distinct_3136_ = lean_ctor_get(v_semantics_3087_, 25);
lean_inc(v_distinct_3136_);
v___x_3137_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(v_semantics_3087_, v_n_3095_, v_x_3089_, v_source_3135_);
v___x_3138_ = lean_apply_1(v_distinct_3136_, v___x_3137_);
return v___x_3138_;
}
default: 
{
lean_object* v_binderId_3139_; lean_object* v_value_3140_; lean_object* v_body_3141_; lean_object* v_denotation_3142_; lean_object* v___x_3143_; 
v_binderId_3139_ = lean_ctor_get(v_x_3090_, 0);
lean_inc(v_binderId_3139_);
v_value_3140_ = lean_ctor_get(v_x_3090_, 1);
lean_inc_ref(v_value_3140_);
v_body_3141_ = lean_ctor_get(v_x_3090_, 2);
lean_inc_ref(v_body_3141_);
lean_dec_ref_known(v_x_3090_, 3);
lean_inc(v_x_3089_);
lean_inc(v_n_3095_);
lean_inc_ref(v_semantics_3087_);
v_denotation_3142_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3087_, v_n_3095_, v_x_3089_, v_value_3140_);
v___x_3143_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_3143_, 0, lean_box(0));
lean_closure_set(v___x_3143_, 1, v_x_3089_);
lean_closure_set(v___x_3143_, 2, v_binderId_3139_);
lean_closure_set(v___x_3143_, 3, v_denotation_3142_);
v_x_3088_ = v_n_3095_;
v_x_3089_ = v___x_3143_;
v_x_3090_ = v_body_3141_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(lean_object* v_semantics_3145_, lean_object* v_x_3146_, lean_object* v_x_3147_, lean_object* v_x_3148_){
_start:
{
lean_object* v_zero_3149_; uint8_t v_isZero_3150_; 
v_zero_3149_ = lean_unsigned_to_nat(0u);
v_isZero_3150_ = lean_nat_dec_eq(v_x_3146_, v_zero_3149_);
if (v_isZero_3150_ == 1)
{
lean_object* v_outOfFuelValue_3151_; 
lean_dec_ref(v_x_3148_);
lean_dec(v_x_3147_);
lean_dec(v_x_3146_);
v_outOfFuelValue_3151_ = lean_ctor_get(v_semantics_3145_, 0);
lean_inc(v_outOfFuelValue_3151_);
lean_dec_ref(v_semantics_3145_);
return v_outOfFuelValue_3151_;
}
else
{
lean_object* v_one_3152_; lean_object* v_n_3153_; 
v_one_3152_ = lean_unsigned_to_nat(1u);
v_n_3153_ = lean_nat_sub(v_x_3146_, v_one_3152_);
lean_dec(v_x_3146_);
switch(lean_obj_tag(v_x_3148_))
{
case 0:
{
lean_object* v_declarationId_3154_; lean_object* v___x_3155_; 
lean_dec(v_n_3153_);
lean_dec_ref(v_semantics_3145_);
v_declarationId_3154_ = lean_ctor_get(v_x_3148_, 0);
lean_inc(v_declarationId_3154_);
lean_dec_ref_known(v_x_3148_, 1);
v___x_3155_ = lean_apply_1(v_x_3147_, v_declarationId_3154_);
return v___x_3155_;
}
case 1:
{
lean_object* v_name_3156_; lean_object* v_parameter_3157_; lean_object* v___x_3158_; 
lean_dec(v_n_3153_);
lean_dec(v_x_3147_);
v_name_3156_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_name_3156_);
lean_dec_ref_known(v_x_3148_, 1);
v_parameter_3157_ = lean_ctor_get(v_semantics_3145_, 2);
lean_inc(v_parameter_3157_);
lean_dec_ref(v_semantics_3145_);
v___x_3158_ = lean_apply_1(v_parameter_3157_, v_name_3156_);
return v___x_3158_;
}
case 2:
{
lean_object* v_type_3159_; lean_object* v_bottom_3160_; lean_object* v___x_3161_; 
lean_dec(v_n_3153_);
lean_dec(v_x_3147_);
v_type_3159_ = lean_ctor_get(v_x_3148_, 0);
lean_inc(v_type_3159_);
lean_dec_ref_known(v_x_3148_, 1);
v_bottom_3160_ = lean_ctor_get(v_semantics_3145_, 3);
lean_inc(v_bottom_3160_);
lean_dec_ref(v_semantics_3145_);
v___x_3161_ = lean_apply_1(v_bottom_3160_, v_type_3159_);
return v___x_3161_;
}
case 3:
{
lean_object* v_value_3162_; lean_object* v_constant_3163_; lean_object* v___x_3164_; 
lean_dec(v_n_3153_);
lean_dec(v_x_3147_);
v_value_3162_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_value_3162_);
lean_dec_ref_known(v_x_3148_, 1);
v_constant_3163_ = lean_ctor_get(v_semantics_3145_, 4);
lean_inc(v_constant_3163_);
lean_dec_ref(v_semantics_3145_);
v___x_3164_ = lean_apply_1(v_constant_3163_, v_value_3162_);
return v___x_3164_;
}
case 4:
{
lean_object* v_coercion_3165_; lean_object* v_source_3166_; lean_object* v_coerce_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v_coercion_3165_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_coercion_3165_);
v_source_3166_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_source_3166_);
lean_dec_ref_known(v_x_3148_, 2);
v_coerce_3167_ = lean_ctor_get(v_semantics_3145_, 5);
lean_inc(v_coerce_3167_);
v___x_3168_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3166_);
v___x_3169_ = lean_apply_2(v_coerce_3167_, v_coercion_3165_, v___x_3168_);
return v___x_3169_;
}
case 5:
{
lean_object* v_binderId_3170_; lean_object* v_value_3171_; lean_object* v_body_3172_; lean_object* v_denotation_3173_; lean_object* v___x_3174_; 
v_binderId_3170_ = lean_ctor_get(v_x_3148_, 0);
lean_inc(v_binderId_3170_);
v_value_3171_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_value_3171_);
v_body_3172_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_body_3172_);
lean_dec_ref_known(v_x_3148_, 3);
lean_inc(v_x_3147_);
lean_inc(v_n_3153_);
lean_inc_ref(v_semantics_3145_);
v_denotation_3173_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_value_3171_);
v___x_3174_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_3174_, 0, lean_box(0));
lean_closure_set(v___x_3174_, 1, v_x_3147_);
lean_closure_set(v___x_3174_, 2, v_binderId_3170_);
lean_closure_set(v___x_3174_, 3, v_denotation_3173_);
v_x_3146_ = v_n_3153_;
v_x_3147_ = v___x_3174_;
v_x_3148_ = v_body_3172_;
goto _start;
}
case 6:
{
lean_object* v_condition_3176_; lean_object* v_thenExpr_3177_; lean_object* v_elseExpr_3178_; lean_object* v_ite_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v_condition_3176_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_condition_3176_);
v_thenExpr_3177_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_thenExpr_3177_);
v_elseExpr_3178_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_elseExpr_3178_);
lean_dec_ref_known(v_x_3148_, 3);
v_ite_3179_ = lean_ctor_get(v_semantics_3145_, 6);
lean_inc(v_ite_3179_);
lean_inc_n(v_x_3147_, 2);
lean_inc_n(v_n_3153_, 2);
lean_inc_ref_n(v_semantics_3145_, 2);
v___x_3180_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_condition_3176_);
v___x_3181_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_thenExpr_3177_);
v___x_3182_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_elseExpr_3178_);
v___x_3183_ = lean_apply_3(v_ite_3179_, v___x_3180_, v___x_3181_, v___x_3182_);
return v___x_3183_;
}
case 7:
{
lean_object* v_source_3184_; lean_object* v_ownerClass_3185_; lean_object* v_attributeName_3186_; lean_object* v_readAttribute_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v_source_3184_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_source_3184_);
v_ownerClass_3185_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_ownerClass_3185_);
v_attributeName_3186_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_attributeName_3186_);
lean_dec_ref_known(v_x_3148_, 3);
v_readAttribute_3187_ = lean_ctor_get(v_semantics_3145_, 7);
lean_inc(v_readAttribute_3187_);
v___x_3188_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3184_);
v___x_3189_ = lean_apply_3(v_readAttribute_3187_, v___x_3188_, v_ownerClass_3185_, v_attributeName_3186_);
return v___x_3189_;
}
case 8:
{
lean_object* v_source_3190_; lean_object* v_association_3191_; lean_object* v_role_3192_; lean_object* v_qualifiers_3193_; uint8_t v_reverse_3194_; uint8_t v_associationClass_3195_; uint8_t v_viaAssociationClass_3196_; lean_object* v_navigateOne_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v_source_3190_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_source_3190_);
v_association_3191_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_association_3191_);
v_role_3192_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_role_3192_);
v_qualifiers_3193_ = lean_ctor_get(v_x_3148_, 3);
lean_inc(v_qualifiers_3193_);
v_reverse_3194_ = lean_ctor_get_uint8(v_x_3148_, sizeof(void*)*4);
v_associationClass_3195_ = lean_ctor_get_uint8(v_x_3148_, sizeof(void*)*4 + 1);
v_viaAssociationClass_3196_ = lean_ctor_get_uint8(v_x_3148_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_x_3148_, 4);
v_navigateOne_3197_ = lean_ctor_get(v_semantics_3145_, 8);
lean_inc(v_navigateOne_3197_);
lean_inc(v_x_3147_);
lean_inc(v_n_3153_);
lean_inc_ref(v_semantics_3145_);
v___x_3198_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3190_);
v___x_3199_ = lean_box(0);
v___x_3200_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_qualifiers_3193_, v___x_3199_);
v___x_3201_ = lean_box(v_reverse_3194_);
v___x_3202_ = lean_box(v_associationClass_3195_);
v___x_3203_ = lean_box(v_viaAssociationClass_3196_);
v___x_3204_ = lean_apply_7(v_navigateOne_3197_, v___x_3198_, v_association_3191_, v_role_3192_, v___x_3200_, v___x_3201_, v___x_3202_, v___x_3203_);
return v___x_3204_;
}
case 9:
{
lean_object* v_source_3205_; lean_object* v_targetClass_3206_; uint8_t v_exact_3207_; lean_object* v_typeTest_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v_source_3205_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_source_3205_);
v_targetClass_3206_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_targetClass_3206_);
v_exact_3207_ = lean_ctor_get_uint8(v_x_3148_, sizeof(void*)*2);
lean_dec_ref_known(v_x_3148_, 2);
v_typeTest_3208_ = lean_ctor_get(v_semantics_3145_, 9);
lean_inc(v_typeTest_3208_);
v___x_3209_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3205_);
v___x_3210_ = lean_box(v_exact_3207_);
v___x_3211_ = lean_apply_3(v_typeTest_3208_, v___x_3209_, v_targetClass_3206_, v___x_3210_);
return v___x_3211_;
}
case 10:
{
lean_object* v_source_3212_; lean_object* v_targetClass_3213_; lean_object* v_typeCast_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v_source_3212_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_source_3212_);
v_targetClass_3213_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_targetClass_3213_);
lean_dec_ref_known(v_x_3148_, 2);
v_typeCast_3214_ = lean_ctor_get(v_semantics_3145_, 10);
lean_inc(v_typeCast_3214_);
v___x_3215_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3212_);
v___x_3216_ = lean_apply_2(v_typeCast_3214_, v___x_3215_, v_targetClass_3213_);
return v___x_3216_;
}
case 11:
{
lean_object* v_operator_3217_; lean_object* v_operand_3218_; lean_object* v_unary_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v_operator_3217_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_operator_3217_);
v_operand_3218_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_operand_3218_);
lean_dec_ref_known(v_x_3148_, 2);
v_unary_3219_ = lean_ctor_get(v_semantics_3145_, 11);
lean_inc(v_unary_3219_);
v___x_3220_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_operand_3218_);
v___x_3221_ = lean_apply_2(v_unary_3219_, v_operator_3217_, v___x_3220_);
return v___x_3221_;
}
case 12:
{
lean_object* v_operator_3222_; lean_object* v_left_3223_; lean_object* v_right_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v_operator_3222_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_operator_3222_);
v_left_3223_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_left_3223_);
v_right_3224_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_right_3224_);
lean_dec_ref_known(v_x_3148_, 3);
lean_inc(v_x_3147_);
lean_inc(v_n_3153_);
lean_inc_ref_n(v_semantics_3145_, 2);
v___x_3225_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_left_3223_);
v___x_3226_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_right_3224_);
v___x_3227_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_applyBinary___redArg(v_semantics_3145_, v_operator_3222_, v___x_3225_, v___x_3226_);
return v___x_3227_;
}
case 13:
{
lean_object* v_source_3228_; lean_object* v_iteratorId_3229_; lean_object* v_predicate_3230_; lean_object* v_exists3_3231_; lean_object* v___f_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v_source_3228_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_source_3228_);
v_iteratorId_3229_ = lean_ctor_get(v_x_3148_, 1);
lean_inc(v_iteratorId_3229_);
v_predicate_3230_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_predicate_3230_);
lean_dec_ref_known(v_x_3148_, 3);
v_exists3_3231_ = lean_ctor_get(v_semantics_3145_, 13);
lean_inc(v_exists3_3231_);
lean_inc(v_n_3153_);
lean_inc_ref(v_semantics_3145_);
lean_inc(v_x_3147_);
v___f_3232_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_3232_, 0, v_x_3147_);
lean_closure_set(v___f_3232_, 1, v_iteratorId_3229_);
lean_closure_set(v___f_3232_, 2, v_semantics_3145_);
lean_closure_set(v___f_3232_, 3, v_n_3153_);
lean_closure_set(v___f_3232_, 4, v_predicate_3230_);
v___x_3233_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3228_);
v___x_3234_ = lean_apply_2(v_exists3_3231_, v___x_3233_, v___f_3232_);
return v___x_3234_;
}
case 14:
{
lean_object* v_source_3235_; lean_object* v_iteratorId_3236_; lean_object* v_predicate_3237_; lean_object* v_forAll3_3238_; lean_object* v___f_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v_source_3235_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_source_3235_);
v_iteratorId_3236_ = lean_ctor_get(v_x_3148_, 1);
lean_inc(v_iteratorId_3236_);
v_predicate_3237_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_predicate_3237_);
lean_dec_ref_known(v_x_3148_, 3);
v_forAll3_3238_ = lean_ctor_get(v_semantics_3145_, 14);
lean_inc(v_forAll3_3238_);
lean_inc(v_n_3153_);
lean_inc_ref(v_semantics_3145_);
lean_inc(v_x_3147_);
v___f_3239_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg___lam__0), 6, 5);
lean_closure_set(v___f_3239_, 0, v_x_3147_);
lean_closure_set(v___f_3239_, 1, v_iteratorId_3236_);
lean_closure_set(v___f_3239_, 2, v_semantics_3145_);
lean_closure_set(v___f_3239_, 3, v_n_3153_);
lean_closure_set(v___f_3239_, 4, v_predicate_3237_);
v___x_3240_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3235_);
v___x_3241_ = lean_apply_2(v_forAll3_3238_, v___x_3240_, v___f_3239_);
return v___x_3241_;
}
case 15:
{
uint8_t v_kind_3242_; lean_object* v_elements_3243_; lean_object* v_collectionLiteral_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v_kind_3242_ = lean_ctor_get_uint8(v_x_3148_, sizeof(void*)*1);
v_elements_3243_ = lean_ctor_get(v_x_3148_, 0);
lean_inc(v_elements_3243_);
lean_dec_ref_known(v_x_3148_, 1);
v_collectionLiteral_3244_ = lean_ctor_get(v_semantics_3145_, 15);
lean_inc(v_collectionLiteral_3244_);
v___x_3245_ = lean_box(0);
v___x_3246_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_elements_3243_, v___x_3245_);
v___x_3247_ = lean_box(v_kind_3242_);
v___x_3248_ = lean_apply_2(v_collectionLiteral_3244_, v___x_3247_, v___x_3246_);
return v___x_3248_;
}
case 16:
{
lean_object* v_operation_3249_; lean_object* v_source_3250_; lean_object* v_element_3251_; lean_object* v_includesFamily_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v_operation_3249_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_operation_3249_);
v_source_3250_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_source_3250_);
v_element_3251_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_element_3251_);
lean_dec_ref_known(v_x_3148_, 3);
v_includesFamily_3252_ = lean_ctor_get(v_semantics_3145_, 16);
lean_inc(v_includesFamily_3252_);
lean_inc(v_x_3147_);
lean_inc(v_n_3153_);
lean_inc_ref(v_semantics_3145_);
v___x_3253_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3250_);
v___x_3254_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_element_3251_);
v___x_3255_ = lean_apply_3(v_includesFamily_3252_, v_operation_3249_, v___x_3253_, v___x_3254_);
return v___x_3255_;
}
case 17:
{
lean_object* v_operation_3256_; lean_object* v_source_3257_; lean_object* v_element_3258_; lean_object* v_countFamily_3259_; lean_object* v___x_3260_; 
v_operation_3256_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_operation_3256_);
v_source_3257_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_source_3257_);
v_element_3258_ = lean_ctor_get(v_x_3148_, 2);
lean_inc(v_element_3258_);
lean_dec_ref_known(v_x_3148_, 3);
v_countFamily_3259_ = lean_ctor_get(v_semantics_3145_, 17);
lean_inc(v_countFamily_3259_);
lean_inc(v_x_3147_);
lean_inc(v_n_3153_);
lean_inc_ref(v_semantics_3145_);
v___x_3260_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_source_3257_);
if (lean_obj_tag(v_element_3258_) == 0)
{
lean_object* v___x_3261_; lean_object* v___x_3262_; 
lean_dec(v_n_3153_);
lean_dec(v_x_3147_);
lean_dec_ref(v_semantics_3145_);
v___x_3261_ = lean_box(0);
v___x_3262_ = lean_apply_3(v_countFamily_3259_, v_operation_3256_, v___x_3260_, v___x_3261_);
return v___x_3262_;
}
else
{
lean_object* v_val_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3272_; 
v_val_3263_ = lean_ctor_get(v_element_3258_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v_element_3258_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3265_ = v_element_3258_;
v_isShared_3266_ = v_isSharedCheck_3272_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_val_3263_);
lean_dec(v_element_3258_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3272_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3267_; lean_object* v___x_3269_; 
v___x_3267_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_val_3263_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v___x_3267_);
v___x_3269_ = v___x_3265_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v___x_3267_);
v___x_3269_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; 
v___x_3270_ = lean_apply_3(v_countFamily_3259_, v_operation_3256_, v___x_3260_, v___x_3269_);
return v___x_3270_;
}
}
}
}
case 18:
{
lean_object* v_operation_3273_; lean_object* v_left_3274_; lean_object* v_right_3275_; lean_object* v_setAlgebra_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v_operation_3273_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_operation_3273_);
v_left_3274_ = lean_ctor_get(v_x_3148_, 1);
lean_inc_ref(v_left_3274_);
v_right_3275_ = lean_ctor_get(v_x_3148_, 2);
lean_inc_ref(v_right_3275_);
lean_dec_ref_known(v_x_3148_, 3);
v_setAlgebra_3276_ = lean_ctor_get(v_semantics_3145_, 18);
lean_inc(v_setAlgebra_3276_);
lean_inc(v_x_3147_);
lean_inc(v_n_3153_);
lean_inc_ref(v_semantics_3145_);
v___x_3277_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_left_3274_);
v___x_3278_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_right_3275_);
v___x_3279_ = lean_apply_3(v_setAlgebra_3276_, v_operation_3273_, v___x_3277_, v___x_3278_);
return v___x_3279_;
}
default: 
{
lean_object* v_plan_3280_; lean_object* v_materialize_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v_plan_3280_ = lean_ctor_get(v_x_3148_, 0);
lean_inc_ref(v_plan_3280_);
lean_dec_ref_known(v_x_3148_, 1);
v_materialize_3281_ = lean_ctor_get(v_semantics_3145_, 19);
lean_inc(v_materialize_3281_);
v___x_3282_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(v_semantics_3145_, v_n_3153_, v_x_3147_, v_plan_3280_);
v___x_3283_ = lean_apply_1(v_materialize_3281_, v___x_3282_);
return v___x_3283_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg___lam__0(lean_object* v_x_3284_, lean_object* v_iteratorId_3285_, lean_object* v_semantics_3286_, lean_object* v_n_3287_, lean_object* v_predicate_3288_, lean_object* v_value_3289_){
_start:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3290_ = lean_alloc_closure((void*)(lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_bind___boxed), 5, 4);
lean_closure_set(v___x_3290_, 0, lean_box(0));
lean_closure_set(v___x_3290_, 1, v_x_3284_);
lean_closure_set(v___x_3290_, 2, v_iteratorId_3285_);
lean_closure_set(v___x_3290_, 3, v_value_3289_);
v___x_3291_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3286_, v_n_3287_, v___x_3290_, v_predicate_3288_);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr(lean_object* v_Value_3292_, lean_object* v_Collection_3293_, lean_object* v_semantics_3294_, lean_object* v_x_3295_, lean_object* v_x_3296_, lean_object* v_x_3297_){
_start:
{
lean_object* v___x_3298_; 
v___x_3298_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3294_, v_x_3295_, v_x_3296_, v_x_3297_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan(lean_object* v_Value_3299_, lean_object* v_Collection_3300_, lean_object* v_semantics_3301_, lean_object* v_x_3302_, lean_object* v_x_3303_, lean_object* v_x_3304_){
_start:
{
lean_object* v___x_3305_; 
v___x_3305_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetPlan___redArg(v_semantics_3301_, v_x_3302_, v_x_3303_, v_x_3304_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0(lean_object* v_Value_3306_, lean_object* v_Collection_3307_, lean_object* v_semantics_3308_, lean_object* v_n_3309_, lean_object* v_x_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_){
_start:
{
lean_object* v___x_3313_; 
v___x_3313_ = lp_Ocl2CypherProof_List_mapTR_loop___at___00Ocl2Gratra_FullP3P4_evalTargetExpr_spec__0___redArg(v_semantics_3308_, v_n_3309_, v_x_3310_, v_a_3311_, v_a_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter___redArg(lean_object* v_x_3314_, lean_object* v_x_3315_, lean_object* v_x_3316_, lean_object* v_h__1_3317_, lean_object* v_h__2_3318_){
_start:
{
lean_object* v_zero_3319_; uint8_t v_isZero_3320_; 
v_zero_3319_ = lean_unsigned_to_nat(0u);
v_isZero_3320_ = lean_nat_dec_eq(v_x_3314_, v_zero_3319_);
if (v_isZero_3320_ == 1)
{
lean_object* v___x_3321_; 
lean_dec(v_h__2_3318_);
v___x_3321_ = lean_apply_2(v_h__1_3317_, v_x_3315_, v_x_3316_);
return v___x_3321_;
}
else
{
lean_object* v_one_3322_; lean_object* v_n_3323_; lean_object* v___x_3324_; 
lean_dec(v_h__1_3317_);
v_one_3322_ = lean_unsigned_to_nat(1u);
v_n_3323_ = lean_nat_sub(v_x_3314_, v_one_3322_);
v___x_3324_ = lean_apply_3(v_h__2_3318_, v_n_3323_, v_x_3315_, v_x_3316_);
return v___x_3324_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter___redArg___boxed(lean_object* v_x_3325_, lean_object* v_x_3326_, lean_object* v_x_3327_, lean_object* v_h__1_3328_, lean_object* v_h__2_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter___redArg(v_x_3325_, v_x_3326_, v_x_3327_, v_h__1_3328_, v_h__2_3329_);
lean_dec(v_x_3325_);
return v_res_3330_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter(lean_object* v_Value_3331_, lean_object* v_motive_3332_, lean_object* v_x_3333_, lean_object* v_x_3334_, lean_object* v_x_3335_, lean_object* v_h__1_3336_, lean_object* v_h__2_3337_){
_start:
{
lean_object* v_zero_3338_; uint8_t v_isZero_3339_; 
v_zero_3338_ = lean_unsigned_to_nat(0u);
v_isZero_3339_ = lean_nat_dec_eq(v_x_3333_, v_zero_3338_);
if (v_isZero_3339_ == 1)
{
lean_object* v___x_3340_; 
lean_dec(v_h__2_3337_);
v___x_3340_ = lean_apply_2(v_h__1_3336_, v_x_3334_, v_x_3335_);
return v___x_3340_;
}
else
{
lean_object* v_one_3341_; lean_object* v_n_3342_; lean_object* v___x_3343_; 
lean_dec(v_h__1_3336_);
v_one_3341_ = lean_unsigned_to_nat(1u);
v_n_3342_ = lean_nat_sub(v_x_3333_, v_one_3341_);
v___x_3343_ = lean_apply_3(v_h__2_3337_, v_n_3342_, v_x_3334_, v_x_3335_);
return v___x_3343_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter___boxed(lean_object* v_Value_3344_, lean_object* v_motive_3345_, lean_object* v_x_3346_, lean_object* v_x_3347_, lean_object* v_x_3348_, lean_object* v_h__1_3349_, lean_object* v_h__2_3350_){
_start:
{
lean_object* v_res_3351_; 
v_res_3351_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__3_splitter(v_Value_3344_, v_motive_3345_, v_x_3346_, v_x_3347_, v_x_3348_, v_h__1_3349_, v_h__2_3350_);
lean_dec(v_x_3346_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter___redArg(lean_object* v_expression_3352_, lean_object* v_h__1_3353_, lean_object* v_h__2_3354_, lean_object* v_h__3_3355_, lean_object* v_h__4_3356_, lean_object* v_h__5_3357_, lean_object* v_h__6_3358_, lean_object* v_h__7_3359_, lean_object* v_h__8_3360_, lean_object* v_h__9_3361_, lean_object* v_h__10_3362_, lean_object* v_h__11_3363_, lean_object* v_h__12_3364_, lean_object* v_h__13_3365_, lean_object* v_h__14_3366_, lean_object* v_h__15_3367_, lean_object* v_h__16_3368_, lean_object* v_h__17_3369_, lean_object* v_h__18_3370_, lean_object* v_h__19_3371_, lean_object* v_h__20_3372_){
_start:
{
switch(lean_obj_tag(v_expression_3352_))
{
case 0:
{
lean_object* v_declarationId_3373_; lean_object* v___x_3374_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
v_declarationId_3373_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc(v_declarationId_3373_);
lean_dec_ref_known(v_expression_3352_, 1);
v___x_3374_ = lean_apply_1(v_h__1_3353_, v_declarationId_3373_);
return v___x_3374_;
}
case 1:
{
lean_object* v_name_3375_; lean_object* v___x_3376_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__1_3353_);
v_name_3375_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_name_3375_);
lean_dec_ref_known(v_expression_3352_, 1);
v___x_3376_ = lean_apply_1(v_h__2_3354_, v_name_3375_);
return v___x_3376_;
}
case 2:
{
lean_object* v_type_3377_; lean_object* v___x_3378_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_type_3377_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc(v_type_3377_);
lean_dec_ref_known(v_expression_3352_, 1);
v___x_3378_ = lean_apply_1(v_h__3_3355_, v_type_3377_);
return v___x_3378_;
}
case 3:
{
lean_object* v_value_3379_; lean_object* v___x_3380_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_value_3379_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_value_3379_);
lean_dec_ref_known(v_expression_3352_, 1);
v___x_3380_ = lean_apply_1(v_h__4_3356_, v_value_3379_);
return v___x_3380_;
}
case 4:
{
lean_object* v_coercion_3381_; lean_object* v_source_3382_; lean_object* v___x_3383_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_coercion_3381_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_coercion_3381_);
v_source_3382_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_source_3382_);
lean_dec_ref_known(v_expression_3352_, 2);
v___x_3383_ = lean_apply_2(v_h__5_3357_, v_coercion_3381_, v_source_3382_);
return v___x_3383_;
}
case 5:
{
lean_object* v_binderId_3384_; lean_object* v_value_3385_; lean_object* v_body_3386_; lean_object* v___x_3387_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_binderId_3384_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc(v_binderId_3384_);
v_value_3385_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_value_3385_);
v_body_3386_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_body_3386_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3387_ = lean_apply_3(v_h__6_3358_, v_binderId_3384_, v_value_3385_, v_body_3386_);
return v___x_3387_;
}
case 6:
{
lean_object* v_condition_3388_; lean_object* v_thenExpr_3389_; lean_object* v_elseExpr_3390_; lean_object* v___x_3391_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_condition_3388_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_condition_3388_);
v_thenExpr_3389_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_thenExpr_3389_);
v_elseExpr_3390_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_elseExpr_3390_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3391_ = lean_apply_3(v_h__7_3359_, v_condition_3388_, v_thenExpr_3389_, v_elseExpr_3390_);
return v___x_3391_;
}
case 7:
{
lean_object* v_source_3392_; lean_object* v_ownerClass_3393_; lean_object* v_attributeName_3394_; lean_object* v___x_3395_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_source_3392_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_source_3392_);
v_ownerClass_3393_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_ownerClass_3393_);
v_attributeName_3394_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_attributeName_3394_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3395_ = lean_apply_3(v_h__8_3360_, v_source_3392_, v_ownerClass_3393_, v_attributeName_3394_);
return v___x_3395_;
}
case 8:
{
lean_object* v_source_3396_; lean_object* v_association_3397_; lean_object* v_role_3398_; lean_object* v_qualifiers_3399_; uint8_t v_reverse_3400_; uint8_t v_associationClass_3401_; uint8_t v_viaAssociationClass_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_source_3396_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_source_3396_);
v_association_3397_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_association_3397_);
v_role_3398_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_role_3398_);
v_qualifiers_3399_ = lean_ctor_get(v_expression_3352_, 3);
lean_inc(v_qualifiers_3399_);
v_reverse_3400_ = lean_ctor_get_uint8(v_expression_3352_, sizeof(void*)*4);
v_associationClass_3401_ = lean_ctor_get_uint8(v_expression_3352_, sizeof(void*)*4 + 1);
v_viaAssociationClass_3402_ = lean_ctor_get_uint8(v_expression_3352_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_expression_3352_, 4);
v___x_3403_ = lean_box(v_reverse_3400_);
v___x_3404_ = lean_box(v_associationClass_3401_);
v___x_3405_ = lean_box(v_viaAssociationClass_3402_);
v___x_3406_ = lean_apply_7(v_h__9_3361_, v_source_3396_, v_association_3397_, v_role_3398_, v_qualifiers_3399_, v___x_3403_, v___x_3404_, v___x_3405_);
return v___x_3406_;
}
case 9:
{
lean_object* v_source_3407_; lean_object* v_targetClass_3408_; uint8_t v_exact_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_source_3407_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_source_3407_);
v_targetClass_3408_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_targetClass_3408_);
v_exact_3409_ = lean_ctor_get_uint8(v_expression_3352_, sizeof(void*)*2);
lean_dec_ref_known(v_expression_3352_, 2);
v___x_3410_ = lean_box(v_exact_3409_);
v___x_3411_ = lean_apply_3(v_h__10_3362_, v_source_3407_, v_targetClass_3408_, v___x_3410_);
return v___x_3411_;
}
case 10:
{
lean_object* v_source_3412_; lean_object* v_targetClass_3413_; lean_object* v___x_3414_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_source_3412_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_source_3412_);
v_targetClass_3413_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_targetClass_3413_);
lean_dec_ref_known(v_expression_3352_, 2);
v___x_3414_ = lean_apply_2(v_h__11_3363_, v_source_3412_, v_targetClass_3413_);
return v___x_3414_;
}
case 11:
{
lean_object* v_operator_3415_; lean_object* v_operand_3416_; lean_object* v___x_3417_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_operator_3415_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_operator_3415_);
v_operand_3416_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_operand_3416_);
lean_dec_ref_known(v_expression_3352_, 2);
v___x_3417_ = lean_apply_2(v_h__12_3364_, v_operator_3415_, v_operand_3416_);
return v___x_3417_;
}
case 12:
{
lean_object* v_operator_3418_; lean_object* v_left_3419_; lean_object* v_right_3420_; lean_object* v___x_3421_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_operator_3418_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_operator_3418_);
v_left_3419_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_left_3419_);
v_right_3420_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_right_3420_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3421_ = lean_apply_3(v_h__13_3365_, v_operator_3418_, v_left_3419_, v_right_3420_);
return v___x_3421_;
}
case 13:
{
lean_object* v_source_3422_; lean_object* v_iteratorId_3423_; lean_object* v_predicate_3424_; lean_object* v___x_3425_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_source_3422_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_source_3422_);
v_iteratorId_3423_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc(v_iteratorId_3423_);
v_predicate_3424_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_predicate_3424_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3425_ = lean_apply_3(v_h__14_3366_, v_source_3422_, v_iteratorId_3423_, v_predicate_3424_);
return v___x_3425_;
}
case 14:
{
lean_object* v_source_3426_; lean_object* v_iteratorId_3427_; lean_object* v_predicate_3428_; lean_object* v___x_3429_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_source_3426_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_source_3426_);
v_iteratorId_3427_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc(v_iteratorId_3427_);
v_predicate_3428_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_predicate_3428_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3429_ = lean_apply_3(v_h__15_3367_, v_source_3426_, v_iteratorId_3427_, v_predicate_3428_);
return v___x_3429_;
}
case 15:
{
uint8_t v_kind_3430_; lean_object* v_elements_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_kind_3430_ = lean_ctor_get_uint8(v_expression_3352_, sizeof(void*)*1);
v_elements_3431_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc(v_elements_3431_);
lean_dec_ref_known(v_expression_3352_, 1);
v___x_3432_ = lean_box(v_kind_3430_);
v___x_3433_ = lean_apply_2(v_h__16_3368_, v___x_3432_, v_elements_3431_);
return v___x_3433_;
}
case 16:
{
lean_object* v_operation_3434_; lean_object* v_source_3435_; lean_object* v_element_3436_; lean_object* v___x_3437_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_operation_3434_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_operation_3434_);
v_source_3435_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_source_3435_);
v_element_3436_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_element_3436_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3437_ = lean_apply_3(v_h__17_3369_, v_operation_3434_, v_source_3435_, v_element_3436_);
return v___x_3437_;
}
case 17:
{
lean_object* v_operation_3438_; lean_object* v_source_3439_; lean_object* v_element_3440_; lean_object* v___x_3441_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__19_3371_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_operation_3438_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_operation_3438_);
v_source_3439_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_source_3439_);
v_element_3440_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc(v_element_3440_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3441_ = lean_apply_3(v_h__18_3370_, v_operation_3438_, v_source_3439_, v_element_3440_);
return v___x_3441_;
}
case 18:
{
lean_object* v_operation_3442_; lean_object* v_left_3443_; lean_object* v_right_3444_; lean_object* v___x_3445_; 
lean_dec(v_h__20_3372_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_operation_3442_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_operation_3442_);
v_left_3443_ = lean_ctor_get(v_expression_3352_, 1);
lean_inc_ref(v_left_3443_);
v_right_3444_ = lean_ctor_get(v_expression_3352_, 2);
lean_inc_ref(v_right_3444_);
lean_dec_ref_known(v_expression_3352_, 3);
v___x_3445_ = lean_apply_3(v_h__19_3371_, v_operation_3442_, v_left_3443_, v_right_3444_);
return v___x_3445_;
}
default: 
{
lean_object* v_plan_3446_; lean_object* v___x_3447_; 
lean_dec(v_h__19_3371_);
lean_dec(v_h__18_3370_);
lean_dec(v_h__17_3369_);
lean_dec(v_h__16_3368_);
lean_dec(v_h__15_3367_);
lean_dec(v_h__14_3366_);
lean_dec(v_h__13_3365_);
lean_dec(v_h__12_3364_);
lean_dec(v_h__11_3363_);
lean_dec(v_h__10_3362_);
lean_dec(v_h__9_3361_);
lean_dec(v_h__8_3360_);
lean_dec(v_h__7_3359_);
lean_dec(v_h__6_3358_);
lean_dec(v_h__5_3357_);
lean_dec(v_h__4_3356_);
lean_dec(v_h__3_3355_);
lean_dec(v_h__2_3354_);
lean_dec(v_h__1_3353_);
v_plan_3446_ = lean_ctor_get(v_expression_3352_, 0);
lean_inc_ref(v_plan_3446_);
lean_dec_ref_known(v_expression_3352_, 1);
v___x_3447_ = lean_apply_1(v_h__20_3372_, v_plan_3446_);
return v___x_3447_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter___redArg___boxed(lean_object** _args){
lean_object* v_expression_3448_ = _args[0];
lean_object* v_h__1_3449_ = _args[1];
lean_object* v_h__2_3450_ = _args[2];
lean_object* v_h__3_3451_ = _args[3];
lean_object* v_h__4_3452_ = _args[4];
lean_object* v_h__5_3453_ = _args[5];
lean_object* v_h__6_3454_ = _args[6];
lean_object* v_h__7_3455_ = _args[7];
lean_object* v_h__8_3456_ = _args[8];
lean_object* v_h__9_3457_ = _args[9];
lean_object* v_h__10_3458_ = _args[10];
lean_object* v_h__11_3459_ = _args[11];
lean_object* v_h__12_3460_ = _args[12];
lean_object* v_h__13_3461_ = _args[13];
lean_object* v_h__14_3462_ = _args[14];
lean_object* v_h__15_3463_ = _args[15];
lean_object* v_h__16_3464_ = _args[16];
lean_object* v_h__17_3465_ = _args[17];
lean_object* v_h__18_3466_ = _args[18];
lean_object* v_h__19_3467_ = _args[19];
lean_object* v_h__20_3468_ = _args[20];
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter___redArg(v_expression_3448_, v_h__1_3449_, v_h__2_3450_, v_h__3_3451_, v_h__4_3452_, v_h__5_3453_, v_h__6_3454_, v_h__7_3455_, v_h__8_3456_, v_h__9_3457_, v_h__10_3458_, v_h__11_3459_, v_h__12_3460_, v_h__13_3461_, v_h__14_3462_, v_h__15_3463_, v_h__16_3464_, v_h__17_3465_, v_h__18_3466_, v_h__19_3467_, v_h__20_3468_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter(lean_object* v_motive_3470_, lean_object* v_expression_3471_, lean_object* v_h__1_3472_, lean_object* v_h__2_3473_, lean_object* v_h__3_3474_, lean_object* v_h__4_3475_, lean_object* v_h__5_3476_, lean_object* v_h__6_3477_, lean_object* v_h__7_3478_, lean_object* v_h__8_3479_, lean_object* v_h__9_3480_, lean_object* v_h__10_3481_, lean_object* v_h__11_3482_, lean_object* v_h__12_3483_, lean_object* v_h__13_3484_, lean_object* v_h__14_3485_, lean_object* v_h__15_3486_, lean_object* v_h__16_3487_, lean_object* v_h__17_3488_, lean_object* v_h__18_3489_, lean_object* v_h__19_3490_, lean_object* v_h__20_3491_){
_start:
{
switch(lean_obj_tag(v_expression_3471_))
{
case 0:
{
lean_object* v_declarationId_3492_; lean_object* v___x_3493_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
v_declarationId_3492_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc(v_declarationId_3492_);
lean_dec_ref_known(v_expression_3471_, 1);
v___x_3493_ = lean_apply_1(v_h__1_3472_, v_declarationId_3492_);
return v___x_3493_;
}
case 1:
{
lean_object* v_name_3494_; lean_object* v___x_3495_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__1_3472_);
v_name_3494_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_name_3494_);
lean_dec_ref_known(v_expression_3471_, 1);
v___x_3495_ = lean_apply_1(v_h__2_3473_, v_name_3494_);
return v___x_3495_;
}
case 2:
{
lean_object* v_type_3496_; lean_object* v___x_3497_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_type_3496_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc(v_type_3496_);
lean_dec_ref_known(v_expression_3471_, 1);
v___x_3497_ = lean_apply_1(v_h__3_3474_, v_type_3496_);
return v___x_3497_;
}
case 3:
{
lean_object* v_value_3498_; lean_object* v___x_3499_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_value_3498_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_value_3498_);
lean_dec_ref_known(v_expression_3471_, 1);
v___x_3499_ = lean_apply_1(v_h__4_3475_, v_value_3498_);
return v___x_3499_;
}
case 4:
{
lean_object* v_coercion_3500_; lean_object* v_source_3501_; lean_object* v___x_3502_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_coercion_3500_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_coercion_3500_);
v_source_3501_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_source_3501_);
lean_dec_ref_known(v_expression_3471_, 2);
v___x_3502_ = lean_apply_2(v_h__5_3476_, v_coercion_3500_, v_source_3501_);
return v___x_3502_;
}
case 5:
{
lean_object* v_binderId_3503_; lean_object* v_value_3504_; lean_object* v_body_3505_; lean_object* v___x_3506_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_binderId_3503_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc(v_binderId_3503_);
v_value_3504_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_value_3504_);
v_body_3505_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_body_3505_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3506_ = lean_apply_3(v_h__6_3477_, v_binderId_3503_, v_value_3504_, v_body_3505_);
return v___x_3506_;
}
case 6:
{
lean_object* v_condition_3507_; lean_object* v_thenExpr_3508_; lean_object* v_elseExpr_3509_; lean_object* v___x_3510_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_condition_3507_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_condition_3507_);
v_thenExpr_3508_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_thenExpr_3508_);
v_elseExpr_3509_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_elseExpr_3509_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3510_ = lean_apply_3(v_h__7_3478_, v_condition_3507_, v_thenExpr_3508_, v_elseExpr_3509_);
return v___x_3510_;
}
case 7:
{
lean_object* v_source_3511_; lean_object* v_ownerClass_3512_; lean_object* v_attributeName_3513_; lean_object* v___x_3514_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_source_3511_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_source_3511_);
v_ownerClass_3512_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_ownerClass_3512_);
v_attributeName_3513_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_attributeName_3513_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3514_ = lean_apply_3(v_h__8_3479_, v_source_3511_, v_ownerClass_3512_, v_attributeName_3513_);
return v___x_3514_;
}
case 8:
{
lean_object* v_source_3515_; lean_object* v_association_3516_; lean_object* v_role_3517_; lean_object* v_qualifiers_3518_; uint8_t v_reverse_3519_; uint8_t v_associationClass_3520_; uint8_t v_viaAssociationClass_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_source_3515_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_source_3515_);
v_association_3516_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_association_3516_);
v_role_3517_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_role_3517_);
v_qualifiers_3518_ = lean_ctor_get(v_expression_3471_, 3);
lean_inc(v_qualifiers_3518_);
v_reverse_3519_ = lean_ctor_get_uint8(v_expression_3471_, sizeof(void*)*4);
v_associationClass_3520_ = lean_ctor_get_uint8(v_expression_3471_, sizeof(void*)*4 + 1);
v_viaAssociationClass_3521_ = lean_ctor_get_uint8(v_expression_3471_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_expression_3471_, 4);
v___x_3522_ = lean_box(v_reverse_3519_);
v___x_3523_ = lean_box(v_associationClass_3520_);
v___x_3524_ = lean_box(v_viaAssociationClass_3521_);
v___x_3525_ = lean_apply_7(v_h__9_3480_, v_source_3515_, v_association_3516_, v_role_3517_, v_qualifiers_3518_, v___x_3522_, v___x_3523_, v___x_3524_);
return v___x_3525_;
}
case 9:
{
lean_object* v_source_3526_; lean_object* v_targetClass_3527_; uint8_t v_exact_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_source_3526_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_source_3526_);
v_targetClass_3527_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_targetClass_3527_);
v_exact_3528_ = lean_ctor_get_uint8(v_expression_3471_, sizeof(void*)*2);
lean_dec_ref_known(v_expression_3471_, 2);
v___x_3529_ = lean_box(v_exact_3528_);
v___x_3530_ = lean_apply_3(v_h__10_3481_, v_source_3526_, v_targetClass_3527_, v___x_3529_);
return v___x_3530_;
}
case 10:
{
lean_object* v_source_3531_; lean_object* v_targetClass_3532_; lean_object* v___x_3533_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_source_3531_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_source_3531_);
v_targetClass_3532_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_targetClass_3532_);
lean_dec_ref_known(v_expression_3471_, 2);
v___x_3533_ = lean_apply_2(v_h__11_3482_, v_source_3531_, v_targetClass_3532_);
return v___x_3533_;
}
case 11:
{
lean_object* v_operator_3534_; lean_object* v_operand_3535_; lean_object* v___x_3536_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_operator_3534_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_operator_3534_);
v_operand_3535_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_operand_3535_);
lean_dec_ref_known(v_expression_3471_, 2);
v___x_3536_ = lean_apply_2(v_h__12_3483_, v_operator_3534_, v_operand_3535_);
return v___x_3536_;
}
case 12:
{
lean_object* v_operator_3537_; lean_object* v_left_3538_; lean_object* v_right_3539_; lean_object* v___x_3540_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_operator_3537_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_operator_3537_);
v_left_3538_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_left_3538_);
v_right_3539_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_right_3539_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3540_ = lean_apply_3(v_h__13_3484_, v_operator_3537_, v_left_3538_, v_right_3539_);
return v___x_3540_;
}
case 13:
{
lean_object* v_source_3541_; lean_object* v_iteratorId_3542_; lean_object* v_predicate_3543_; lean_object* v___x_3544_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_source_3541_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_source_3541_);
v_iteratorId_3542_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc(v_iteratorId_3542_);
v_predicate_3543_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_predicate_3543_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3544_ = lean_apply_3(v_h__14_3485_, v_source_3541_, v_iteratorId_3542_, v_predicate_3543_);
return v___x_3544_;
}
case 14:
{
lean_object* v_source_3545_; lean_object* v_iteratorId_3546_; lean_object* v_predicate_3547_; lean_object* v___x_3548_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_source_3545_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_source_3545_);
v_iteratorId_3546_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc(v_iteratorId_3546_);
v_predicate_3547_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_predicate_3547_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3548_ = lean_apply_3(v_h__15_3486_, v_source_3545_, v_iteratorId_3546_, v_predicate_3547_);
return v___x_3548_;
}
case 15:
{
uint8_t v_kind_3549_; lean_object* v_elements_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_kind_3549_ = lean_ctor_get_uint8(v_expression_3471_, sizeof(void*)*1);
v_elements_3550_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc(v_elements_3550_);
lean_dec_ref_known(v_expression_3471_, 1);
v___x_3551_ = lean_box(v_kind_3549_);
v___x_3552_ = lean_apply_2(v_h__16_3487_, v___x_3551_, v_elements_3550_);
return v___x_3552_;
}
case 16:
{
lean_object* v_operation_3553_; lean_object* v_source_3554_; lean_object* v_element_3555_; lean_object* v___x_3556_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_operation_3553_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_operation_3553_);
v_source_3554_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_source_3554_);
v_element_3555_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_element_3555_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3556_ = lean_apply_3(v_h__17_3488_, v_operation_3553_, v_source_3554_, v_element_3555_);
return v___x_3556_;
}
case 17:
{
lean_object* v_operation_3557_; lean_object* v_source_3558_; lean_object* v_element_3559_; lean_object* v___x_3560_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__19_3490_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_operation_3557_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_operation_3557_);
v_source_3558_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_source_3558_);
v_element_3559_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc(v_element_3559_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3560_ = lean_apply_3(v_h__18_3489_, v_operation_3557_, v_source_3558_, v_element_3559_);
return v___x_3560_;
}
case 18:
{
lean_object* v_operation_3561_; lean_object* v_left_3562_; lean_object* v_right_3563_; lean_object* v___x_3564_; 
lean_dec(v_h__20_3491_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_operation_3561_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_operation_3561_);
v_left_3562_ = lean_ctor_get(v_expression_3471_, 1);
lean_inc_ref(v_left_3562_);
v_right_3563_ = lean_ctor_get(v_expression_3471_, 2);
lean_inc_ref(v_right_3563_);
lean_dec_ref_known(v_expression_3471_, 3);
v___x_3564_ = lean_apply_3(v_h__19_3490_, v_operation_3561_, v_left_3562_, v_right_3563_);
return v___x_3564_;
}
default: 
{
lean_object* v_plan_3565_; lean_object* v___x_3566_; 
lean_dec(v_h__19_3490_);
lean_dec(v_h__18_3489_);
lean_dec(v_h__17_3488_);
lean_dec(v_h__16_3487_);
lean_dec(v_h__15_3486_);
lean_dec(v_h__14_3485_);
lean_dec(v_h__13_3484_);
lean_dec(v_h__12_3483_);
lean_dec(v_h__11_3482_);
lean_dec(v_h__10_3481_);
lean_dec(v_h__9_3480_);
lean_dec(v_h__8_3479_);
lean_dec(v_h__7_3478_);
lean_dec(v_h__6_3477_);
lean_dec(v_h__5_3476_);
lean_dec(v_h__4_3475_);
lean_dec(v_h__3_3474_);
lean_dec(v_h__2_3473_);
lean_dec(v_h__1_3472_);
v_plan_3565_ = lean_ctor_get(v_expression_3471_, 0);
lean_inc_ref(v_plan_3565_);
lean_dec_ref_known(v_expression_3471_, 1);
v___x_3566_ = lean_apply_1(v_h__20_3491_, v_plan_3565_);
return v___x_3566_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter___boxed(lean_object** _args){
lean_object* v_motive_3567_ = _args[0];
lean_object* v_expression_3568_ = _args[1];
lean_object* v_h__1_3569_ = _args[2];
lean_object* v_h__2_3570_ = _args[3];
lean_object* v_h__3_3571_ = _args[4];
lean_object* v_h__4_3572_ = _args[5];
lean_object* v_h__5_3573_ = _args[6];
lean_object* v_h__6_3574_ = _args[7];
lean_object* v_h__7_3575_ = _args[8];
lean_object* v_h__8_3576_ = _args[9];
lean_object* v_h__9_3577_ = _args[10];
lean_object* v_h__10_3578_ = _args[11];
lean_object* v_h__11_3579_ = _args[12];
lean_object* v_h__12_3580_ = _args[13];
lean_object* v_h__13_3581_ = _args[14];
lean_object* v_h__14_3582_ = _args[15];
lean_object* v_h__15_3583_ = _args[16];
lean_object* v_h__16_3584_ = _args[17];
lean_object* v_h__17_3585_ = _args[18];
lean_object* v_h__18_3586_ = _args[19];
lean_object* v_h__19_3587_ = _args[20];
lean_object* v_h__20_3588_ = _args[21];
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetExpr_match__1_splitter(v_motive_3567_, v_expression_3568_, v_h__1_3569_, v_h__2_3570_, v_h__3_3571_, v_h__4_3572_, v_h__5_3573_, v_h__6_3574_, v_h__7_3575_, v_h__8_3576_, v_h__9_3577_, v_h__10_3578_, v_h__11_3579_, v_h__12_3580_, v_h__13_3581_, v_h__14_3582_, v_h__15_3583_, v_h__16_3584_, v_h__17_3585_, v_h__18_3586_, v_h__19_3587_, v_h__20_3588_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter___redArg(lean_object* v_x_3590_, lean_object* v_x_3591_, lean_object* v_x_3592_, lean_object* v_h__1_3593_, lean_object* v_h__2_3594_){
_start:
{
lean_object* v_zero_3595_; uint8_t v_isZero_3596_; 
v_zero_3595_ = lean_unsigned_to_nat(0u);
v_isZero_3596_ = lean_nat_dec_eq(v_x_3590_, v_zero_3595_);
if (v_isZero_3596_ == 1)
{
lean_object* v___x_3597_; 
lean_dec(v_h__2_3594_);
v___x_3597_ = lean_apply_2(v_h__1_3593_, v_x_3591_, v_x_3592_);
return v___x_3597_;
}
else
{
lean_object* v_one_3598_; lean_object* v_n_3599_; lean_object* v___x_3600_; 
lean_dec(v_h__1_3593_);
v_one_3598_ = lean_unsigned_to_nat(1u);
v_n_3599_ = lean_nat_sub(v_x_3590_, v_one_3598_);
v___x_3600_ = lean_apply_3(v_h__2_3594_, v_n_3599_, v_x_3591_, v_x_3592_);
return v___x_3600_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter___redArg___boxed(lean_object* v_x_3601_, lean_object* v_x_3602_, lean_object* v_x_3603_, lean_object* v_h__1_3604_, lean_object* v_h__2_3605_){
_start:
{
lean_object* v_res_3606_; 
v_res_3606_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter___redArg(v_x_3601_, v_x_3602_, v_x_3603_, v_h__1_3604_, v_h__2_3605_);
lean_dec(v_x_3601_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter(lean_object* v_Value_3607_, lean_object* v_motive_3608_, lean_object* v_x_3609_, lean_object* v_x_3610_, lean_object* v_x_3611_, lean_object* v_h__1_3612_, lean_object* v_h__2_3613_){
_start:
{
lean_object* v_zero_3614_; uint8_t v_isZero_3615_; 
v_zero_3614_ = lean_unsigned_to_nat(0u);
v_isZero_3615_ = lean_nat_dec_eq(v_x_3609_, v_zero_3614_);
if (v_isZero_3615_ == 1)
{
lean_object* v___x_3616_; 
lean_dec(v_h__2_3613_);
v___x_3616_ = lean_apply_2(v_h__1_3612_, v_x_3610_, v_x_3611_);
return v___x_3616_;
}
else
{
lean_object* v_one_3617_; lean_object* v_n_3618_; lean_object* v___x_3619_; 
lean_dec(v_h__1_3612_);
v_one_3617_ = lean_unsigned_to_nat(1u);
v_n_3618_ = lean_nat_sub(v_x_3609_, v_one_3617_);
v___x_3619_ = lean_apply_3(v_h__2_3613_, v_n_3618_, v_x_3610_, v_x_3611_);
return v___x_3619_;
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter___boxed(lean_object* v_Value_3620_, lean_object* v_motive_3621_, lean_object* v_x_3622_, lean_object* v_x_3623_, lean_object* v_x_3624_, lean_object* v_h__1_3625_, lean_object* v_h__2_3626_){
_start:
{
lean_object* v_res_3627_; 
v_res_3627_ = lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__3_splitter(v_Value_3620_, v_motive_3621_, v_x_3622_, v_x_3623_, v_x_3624_, v_h__1_3625_, v_h__2_3626_);
lean_dec(v_x_3622_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__1_splitter___redArg(lean_object* v_plan_3628_, lean_object* v_h__1_3629_, lean_object* v_h__2_3630_, lean_object* v_h__3_3631_, lean_object* v_h__4_3632_, lean_object* v_h__5_3633_, lean_object* v_h__6_3634_, lean_object* v_h__7_3635_){
_start:
{
switch(lean_obj_tag(v_plan_3628_))
{
case 0:
{
lean_object* v_collection_3636_; lean_object* v___x_3637_; 
lean_dec(v_h__7_3635_);
lean_dec(v_h__6_3634_);
lean_dec(v_h__5_3633_);
lean_dec(v_h__4_3632_);
lean_dec(v_h__3_3631_);
lean_dec(v_h__2_3630_);
v_collection_3636_ = lean_ctor_get(v_plan_3628_, 0);
lean_inc_ref(v_collection_3636_);
lean_dec_ref_known(v_plan_3628_, 1);
v___x_3637_ = lean_apply_1(v_h__1_3629_, v_collection_3636_);
return v___x_3637_;
}
case 1:
{
lean_object* v_classKey_3638_; lean_object* v_declarationId_3639_; lean_object* v___x_3640_; 
lean_dec(v_h__7_3635_);
lean_dec(v_h__6_3634_);
lean_dec(v_h__5_3633_);
lean_dec(v_h__4_3632_);
lean_dec(v_h__3_3631_);
lean_dec(v_h__1_3629_);
v_classKey_3638_ = lean_ctor_get(v_plan_3628_, 0);
lean_inc_ref(v_classKey_3638_);
v_declarationId_3639_ = lean_ctor_get(v_plan_3628_, 1);
lean_inc(v_declarationId_3639_);
lean_dec_ref_known(v_plan_3628_, 2);
v___x_3640_ = lean_apply_2(v_h__2_3630_, v_classKey_3638_, v_declarationId_3639_);
return v___x_3640_;
}
case 2:
{
lean_object* v_source_3641_; lean_object* v_association_3642_; lean_object* v_role_3643_; lean_object* v_qualifiers_3644_; uint8_t v_reverse_3645_; uint8_t v_associationClass_3646_; uint8_t v_viaAssociationClass_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; 
lean_dec(v_h__7_3635_);
lean_dec(v_h__6_3634_);
lean_dec(v_h__5_3633_);
lean_dec(v_h__4_3632_);
lean_dec(v_h__2_3630_);
lean_dec(v_h__1_3629_);
v_source_3641_ = lean_ctor_get(v_plan_3628_, 0);
lean_inc_ref(v_source_3641_);
v_association_3642_ = lean_ctor_get(v_plan_3628_, 1);
lean_inc_ref(v_association_3642_);
v_role_3643_ = lean_ctor_get(v_plan_3628_, 2);
lean_inc_ref(v_role_3643_);
v_qualifiers_3644_ = lean_ctor_get(v_plan_3628_, 3);
lean_inc(v_qualifiers_3644_);
v_reverse_3645_ = lean_ctor_get_uint8(v_plan_3628_, sizeof(void*)*4);
v_associationClass_3646_ = lean_ctor_get_uint8(v_plan_3628_, sizeof(void*)*4 + 1);
v_viaAssociationClass_3647_ = lean_ctor_get_uint8(v_plan_3628_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_plan_3628_, 4);
v___x_3648_ = lean_box(v_reverse_3645_);
v___x_3649_ = lean_box(v_associationClass_3646_);
v___x_3650_ = lean_box(v_viaAssociationClass_3647_);
v___x_3651_ = lean_apply_7(v_h__3_3631_, v_source_3641_, v_association_3642_, v_role_3643_, v_qualifiers_3644_, v___x_3648_, v___x_3649_, v___x_3650_);
return v___x_3651_;
}
case 3:
{
lean_object* v_source_3652_; lean_object* v_iteratorId_3653_; lean_object* v_predicate_3654_; uint8_t v_isSelect_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
lean_dec(v_h__7_3635_);
lean_dec(v_h__6_3634_);
lean_dec(v_h__5_3633_);
lean_dec(v_h__3_3631_);
lean_dec(v_h__2_3630_);
lean_dec(v_h__1_3629_);
v_source_3652_ = lean_ctor_get(v_plan_3628_, 0);
lean_inc_ref(v_source_3652_);
v_iteratorId_3653_ = lean_ctor_get(v_plan_3628_, 1);
lean_inc(v_iteratorId_3653_);
v_predicate_3654_ = lean_ctor_get(v_plan_3628_, 2);
lean_inc_ref(v_predicate_3654_);
v_isSelect_3655_ = lean_ctor_get_uint8(v_plan_3628_, sizeof(void*)*3);
lean_dec_ref_known(v_plan_3628_, 3);
v___x_3656_ = lean_box(v_isSelect_3655_);
v___x_3657_ = lean_apply_4(v_h__4_3632_, v_source_3652_, v_iteratorId_3653_, v_predicate_3654_, v___x_3656_);
return v___x_3657_;
}
case 4:
{
lean_object* v_source_3658_; lean_object* v_iteratorId_3659_; lean_object* v_body_3660_; lean_object* v___x_3661_; 
lean_dec(v_h__7_3635_);
lean_dec(v_h__6_3634_);
lean_dec(v_h__4_3632_);
lean_dec(v_h__3_3631_);
lean_dec(v_h__2_3630_);
lean_dec(v_h__1_3629_);
v_source_3658_ = lean_ctor_get(v_plan_3628_, 0);
lean_inc_ref(v_source_3658_);
v_iteratorId_3659_ = lean_ctor_get(v_plan_3628_, 1);
lean_inc(v_iteratorId_3659_);
v_body_3660_ = lean_ctor_get(v_plan_3628_, 2);
lean_inc_ref(v_body_3660_);
lean_dec_ref_known(v_plan_3628_, 3);
v___x_3661_ = lean_apply_3(v_h__5_3633_, v_source_3658_, v_iteratorId_3659_, v_body_3660_);
return v___x_3661_;
}
case 5:
{
lean_object* v_source_3662_; lean_object* v___x_3663_; 
lean_dec(v_h__7_3635_);
lean_dec(v_h__5_3633_);
lean_dec(v_h__4_3632_);
lean_dec(v_h__3_3631_);
lean_dec(v_h__2_3630_);
lean_dec(v_h__1_3629_);
v_source_3662_ = lean_ctor_get(v_plan_3628_, 0);
lean_inc_ref(v_source_3662_);
lean_dec_ref_known(v_plan_3628_, 1);
v___x_3663_ = lean_apply_1(v_h__6_3634_, v_source_3662_);
return v___x_3663_;
}
default: 
{
lean_object* v_binderId_3664_; lean_object* v_value_3665_; lean_object* v_body_3666_; lean_object* v___x_3667_; 
lean_dec(v_h__6_3634_);
lean_dec(v_h__5_3633_);
lean_dec(v_h__4_3632_);
lean_dec(v_h__3_3631_);
lean_dec(v_h__2_3630_);
lean_dec(v_h__1_3629_);
v_binderId_3664_ = lean_ctor_get(v_plan_3628_, 0);
lean_inc(v_binderId_3664_);
v_value_3665_ = lean_ctor_get(v_plan_3628_, 1);
lean_inc_ref(v_value_3665_);
v_body_3666_ = lean_ctor_get(v_plan_3628_, 2);
lean_inc_ref(v_body_3666_);
lean_dec_ref_known(v_plan_3628_, 3);
v___x_3667_ = lean_apply_3(v_h__7_3635_, v_binderId_3664_, v_value_3665_, v_body_3666_);
return v___x_3667_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof___private_Ocl2Gratra_FullP3P4_0__Ocl2Gratra_FullP3P4_evalTargetPlan_match__1_splitter(lean_object* v_motive_3668_, lean_object* v_plan_3669_, lean_object* v_h__1_3670_, lean_object* v_h__2_3671_, lean_object* v_h__3_3672_, lean_object* v_h__4_3673_, lean_object* v_h__5_3674_, lean_object* v_h__6_3675_, lean_object* v_h__7_3676_){
_start:
{
switch(lean_obj_tag(v_plan_3669_))
{
case 0:
{
lean_object* v_collection_3677_; lean_object* v___x_3678_; 
lean_dec(v_h__7_3676_);
lean_dec(v_h__6_3675_);
lean_dec(v_h__5_3674_);
lean_dec(v_h__4_3673_);
lean_dec(v_h__3_3672_);
lean_dec(v_h__2_3671_);
v_collection_3677_ = lean_ctor_get(v_plan_3669_, 0);
lean_inc_ref(v_collection_3677_);
lean_dec_ref_known(v_plan_3669_, 1);
v___x_3678_ = lean_apply_1(v_h__1_3670_, v_collection_3677_);
return v___x_3678_;
}
case 1:
{
lean_object* v_classKey_3679_; lean_object* v_declarationId_3680_; lean_object* v___x_3681_; 
lean_dec(v_h__7_3676_);
lean_dec(v_h__6_3675_);
lean_dec(v_h__5_3674_);
lean_dec(v_h__4_3673_);
lean_dec(v_h__3_3672_);
lean_dec(v_h__1_3670_);
v_classKey_3679_ = lean_ctor_get(v_plan_3669_, 0);
lean_inc_ref(v_classKey_3679_);
v_declarationId_3680_ = lean_ctor_get(v_plan_3669_, 1);
lean_inc(v_declarationId_3680_);
lean_dec_ref_known(v_plan_3669_, 2);
v___x_3681_ = lean_apply_2(v_h__2_3671_, v_classKey_3679_, v_declarationId_3680_);
return v___x_3681_;
}
case 2:
{
lean_object* v_source_3682_; lean_object* v_association_3683_; lean_object* v_role_3684_; lean_object* v_qualifiers_3685_; uint8_t v_reverse_3686_; uint8_t v_associationClass_3687_; uint8_t v_viaAssociationClass_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
lean_dec(v_h__7_3676_);
lean_dec(v_h__6_3675_);
lean_dec(v_h__5_3674_);
lean_dec(v_h__4_3673_);
lean_dec(v_h__2_3671_);
lean_dec(v_h__1_3670_);
v_source_3682_ = lean_ctor_get(v_plan_3669_, 0);
lean_inc_ref(v_source_3682_);
v_association_3683_ = lean_ctor_get(v_plan_3669_, 1);
lean_inc_ref(v_association_3683_);
v_role_3684_ = lean_ctor_get(v_plan_3669_, 2);
lean_inc_ref(v_role_3684_);
v_qualifiers_3685_ = lean_ctor_get(v_plan_3669_, 3);
lean_inc(v_qualifiers_3685_);
v_reverse_3686_ = lean_ctor_get_uint8(v_plan_3669_, sizeof(void*)*4);
v_associationClass_3687_ = lean_ctor_get_uint8(v_plan_3669_, sizeof(void*)*4 + 1);
v_viaAssociationClass_3688_ = lean_ctor_get_uint8(v_plan_3669_, sizeof(void*)*4 + 2);
lean_dec_ref_known(v_plan_3669_, 4);
v___x_3689_ = lean_box(v_reverse_3686_);
v___x_3690_ = lean_box(v_associationClass_3687_);
v___x_3691_ = lean_box(v_viaAssociationClass_3688_);
v___x_3692_ = lean_apply_7(v_h__3_3672_, v_source_3682_, v_association_3683_, v_role_3684_, v_qualifiers_3685_, v___x_3689_, v___x_3690_, v___x_3691_);
return v___x_3692_;
}
case 3:
{
lean_object* v_source_3693_; lean_object* v_iteratorId_3694_; lean_object* v_predicate_3695_; uint8_t v_isSelect_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
lean_dec(v_h__7_3676_);
lean_dec(v_h__6_3675_);
lean_dec(v_h__5_3674_);
lean_dec(v_h__3_3672_);
lean_dec(v_h__2_3671_);
lean_dec(v_h__1_3670_);
v_source_3693_ = lean_ctor_get(v_plan_3669_, 0);
lean_inc_ref(v_source_3693_);
v_iteratorId_3694_ = lean_ctor_get(v_plan_3669_, 1);
lean_inc(v_iteratorId_3694_);
v_predicate_3695_ = lean_ctor_get(v_plan_3669_, 2);
lean_inc_ref(v_predicate_3695_);
v_isSelect_3696_ = lean_ctor_get_uint8(v_plan_3669_, sizeof(void*)*3);
lean_dec_ref_known(v_plan_3669_, 3);
v___x_3697_ = lean_box(v_isSelect_3696_);
v___x_3698_ = lean_apply_4(v_h__4_3673_, v_source_3693_, v_iteratorId_3694_, v_predicate_3695_, v___x_3697_);
return v___x_3698_;
}
case 4:
{
lean_object* v_source_3699_; lean_object* v_iteratorId_3700_; lean_object* v_body_3701_; lean_object* v___x_3702_; 
lean_dec(v_h__7_3676_);
lean_dec(v_h__6_3675_);
lean_dec(v_h__4_3673_);
lean_dec(v_h__3_3672_);
lean_dec(v_h__2_3671_);
lean_dec(v_h__1_3670_);
v_source_3699_ = lean_ctor_get(v_plan_3669_, 0);
lean_inc_ref(v_source_3699_);
v_iteratorId_3700_ = lean_ctor_get(v_plan_3669_, 1);
lean_inc(v_iteratorId_3700_);
v_body_3701_ = lean_ctor_get(v_plan_3669_, 2);
lean_inc_ref(v_body_3701_);
lean_dec_ref_known(v_plan_3669_, 3);
v___x_3702_ = lean_apply_3(v_h__5_3674_, v_source_3699_, v_iteratorId_3700_, v_body_3701_);
return v___x_3702_;
}
case 5:
{
lean_object* v_source_3703_; lean_object* v___x_3704_; 
lean_dec(v_h__7_3676_);
lean_dec(v_h__5_3674_);
lean_dec(v_h__4_3673_);
lean_dec(v_h__3_3672_);
lean_dec(v_h__2_3671_);
lean_dec(v_h__1_3670_);
v_source_3703_ = lean_ctor_get(v_plan_3669_, 0);
lean_inc_ref(v_source_3703_);
lean_dec_ref_known(v_plan_3669_, 1);
v___x_3704_ = lean_apply_1(v_h__6_3675_, v_source_3703_);
return v___x_3704_;
}
default: 
{
lean_object* v_binderId_3705_; lean_object* v_value_3706_; lean_object* v_body_3707_; lean_object* v___x_3708_; 
lean_dec(v_h__6_3675_);
lean_dec(v_h__5_3674_);
lean_dec(v_h__4_3673_);
lean_dec(v_h__3_3672_);
lean_dec(v_h__2_3671_);
lean_dec(v_h__1_3670_);
v_binderId_3705_ = lean_ctor_get(v_plan_3669_, 0);
lean_inc(v_binderId_3705_);
v_value_3706_ = lean_ctor_get(v_plan_3669_, 1);
lean_inc_ref(v_value_3706_);
v_body_3707_ = lean_ctor_get(v_plan_3669_, 2);
lean_inc_ref(v_body_3707_);
lean_dec_ref_known(v_plan_3669_, 3);
v___x_3708_ = lean_apply_3(v_h__7_3676_, v_binderId_3705_, v_value_3706_, v_body_3707_);
return v___x_3708_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_serialize(lean_object* v_expression_3709_){
_start:
{
lean_inc_ref(v_expression_3709_);
return v_expression_3709_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_serialize___boxed(lean_object* v_expression_3710_){
_start:
{
lean_object* v_res_3711_; 
v_res_3711_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_serialize(v_expression_3710_);
lean_dec_ref(v_expression_3710_);
return v_res_3711_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_parse(lean_object* v_artifact_3712_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3713_, 0, v_artifact_3712_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalArtifact___redArg(lean_object* v_semantics_3714_, lean_object* v_fuel_3715_, lean_object* v_environment_3716_, lean_object* v_artifact_3717_){
_start:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalTargetExpr___redArg(v_semantics_3714_, v_fuel_3715_, v_environment_3716_, v_artifact_3717_);
v___x_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3718_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalArtifact(lean_object* v_Value_3720_, lean_object* v_Collection_3721_, lean_object* v_semantics_3722_, lean_object* v_fuel_3723_, lean_object* v_environment_3724_, lean_object* v_artifact_3725_){
_start:
{
lean_object* v___x_3726_; 
v___x_3726_ = lp_Ocl2CypherProof_Ocl2Gratra_FullP3P4_evalArtifact___redArg(v_semantics_3722_, v_fuel_3723_, v_environment_3724_, v_artifact_3725_);
return v___x_3726_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_ProductionQSyntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Ocl2CypherProof_Ocl2Gratra_FullP3P4(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
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
