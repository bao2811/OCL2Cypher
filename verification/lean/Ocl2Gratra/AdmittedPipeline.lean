import Ocl2Gratra.Boolean3Kleene
import Ocl2Gratra.ProductionQSyntax

/-!
# Admitted Boolean pipeline

This module closes a machine-checked vertical slice of the production proof
chain:

`resolved surface OCL -> Core -> production-shaped Q -> formal Cypher -> IDs`.

Variables use resolved declaration identifiers, so name lookup and capture
avoidance are upstream obligations.  The fragment contains literals,
variables, `not`, `and`, `or`, `implies`, `if`, and `let`.  The Q terms are
actual constructors from `ProductionQSyntax`; the evaluator deliberately
returns `bottom` for constructors outside this admitted Boolean slice.

The target below is a formal Cypher expression language, not Neo4j or the Java
serializer.  Consequently the final theorem discharges the mathematical
normalization, Core-to-Q, Q-to-formal-Cypher, and violation-projection steps for
this slice without claiming Java/runtime refinement.

Zero `axiom`, `sorry`, or `admit`.
-/

namespace Ocl2Gratra.AdmittedPipeline

open Ocl2Gratra.Boolean3Kleene
open Ocl2Gratra.OclEqualityTotal
open Ocl2Gratra.ProductionQSyntax

abbrev DeclarationId := Nat
abbrev Environment := DeclarationId -> Bool3

def bind (environment : Environment) (declaration : DeclarationId)
    (value : Bool3) : Environment :=
  fun candidate => if candidate = declaration then value else environment candidate

def ite3 : Bool3 -> Bool3 -> Bool3 -> Bool3
  | .true, thenValue, _ => thenValue
  | .false, _, elseValue => elseValue
  | .bottom, _, _ => .bottom

/-! ## Resolved surface syntax and Core normalization -/

inductive SurfaceExpr where
  | literal (value : Bool3)
  | variable (declaration : DeclarationId)
  | not (body : SurfaceExpr)
  | and (left right : SurfaceExpr)
  | or (left right : SurfaceExpr)
  | implies (left right : SurfaceExpr)
  | ifExpr (condition thenExpr elseExpr : SurfaceExpr)
  | letExpr (binder : DeclarationId) (value body : SurfaceExpr)
  deriving Repr

inductive CoreExpr where
  | literal (value : Bool3)
  | variable (declaration : DeclarationId)
  | not (body : CoreExpr)
  | and (left right : CoreExpr)
  | or (left right : CoreExpr)
  | ifExpr (condition thenExpr elseExpr : CoreExpr)
  | letExpr (binder : DeclarationId) (value body : CoreExpr)
  deriving Repr

def evalSurface (environment : Environment) : SurfaceExpr -> Bool3
  | .literal value => value
  | .variable declaration => environment declaration
  | .not body => Boolean3Kleene.not (evalSurface environment body)
  | .and left right =>
      Boolean3Kleene.and (evalSurface environment left) (evalSurface environment right)
  | .or left right =>
      Boolean3Kleene.or (evalSurface environment left) (evalSurface environment right)
  | .implies left right =>
      Boolean3Kleene.implies (evalSurface environment left) (evalSurface environment right)
  | .ifExpr condition thenExpr elseExpr =>
      ite3 (evalSurface environment condition)
        (evalSurface environment thenExpr) (evalSurface environment elseExpr)
  | .letExpr binder value body =>
      evalSurface (bind environment binder (evalSurface environment value)) body

def evalCore (environment : Environment) : CoreExpr -> Bool3
  | .literal value => value
  | .variable declaration => environment declaration
  | .not body => Boolean3Kleene.not (evalCore environment body)
  | .and left right =>
      Boolean3Kleene.and (evalCore environment left) (evalCore environment right)
  | .or left right =>
      Boolean3Kleene.or (evalCore environment left) (evalCore environment right)
  | .ifExpr condition thenExpr elseExpr =>
      ite3 (evalCore environment condition)
        (evalCore environment thenExpr) (evalCore environment elseExpr)
  | .letExpr binder value body =>
      evalCore (bind environment binder (evalCore environment value)) body

/-- Normalization removes surface implication and preserves resolved binders. -/
def normalize : SurfaceExpr -> CoreExpr
  | .literal value => .literal value
  | .variable declaration => .variable declaration
  | .not body => .not (normalize body)
  | .and left right => .and (normalize left) (normalize right)
  | .or left right => .or (normalize left) (normalize right)
  | .implies left right => .or (.not (normalize left)) (normalize right)
  | .ifExpr condition thenExpr elseExpr =>
      .ifExpr (normalize condition) (normalize thenExpr) (normalize elseExpr)
  | .letExpr binder value body => .letExpr binder (normalize value) (normalize body)

/-- O-02 for the admitted Boolean slice. -/
theorem normalization_preserves_denotation (expression : SurfaceExpr) :
    forall environment,
      evalCore environment (normalize expression) = evalSurface environment expression := by
  induction expression with
  | literal value => intro environment; rfl
  | «variable» declaration => intro environment; rfl
  | «not» body ih =>
      intro environment
      simp only [normalize, evalCore, evalSurface]
      rw [ih environment]
  | «and» left right ihLeft ihRight =>
      intro environment
      simp only [normalize, evalCore, evalSurface]
      rw [ihLeft environment, ihRight environment]
  | «or» left right ihLeft ihRight =>
      intro environment
      simp only [normalize, evalCore, evalSurface]
      rw [ihLeft environment, ihRight environment]
  | «implies» left right ihLeft ihRight =>
      intro environment
      simp only [normalize, evalCore, evalSurface, Boolean3Kleene.implies]
      rw [ihLeft environment, ihRight environment]
  | ifExpr condition thenExpr elseExpr ihCondition ihThen ihElse =>
      intro environment
      simp only [normalize, evalCore, evalSurface]
      rw [ihCondition environment, ihThen environment, ihElse environment]
  | letExpr binder value body ihValue ihBody =>
      intro environment
      simp only [normalize, evalCore, evalSurface]
      rw [ihValue environment]
      exact ihBody (bind environment binder (evalSurface environment value))

/-! ## Core to production-shaped Q -/

def translateCore : CoreExpr -> QExpr
  | .literal value => .constant (.boolVal value)
  | .variable declaration => .variable declaration
  | .not body => .unary "not" (translateCore body)
  | .and left right => .binary "and" (translateCore left) (translateCore right)
  | .or left right => .binary "or" (translateCore left) (translateCore right)
  | .ifExpr condition thenExpr elseExpr =>
      .ifExpr (translateCore condition) (translateCore thenExpr) (translateCore elseExpr)
  | .letExpr binder value body =>
      .letExpr binder (translateCore value) (translateCore body)

/-- Boolean semantics for the admitted part of the closed production Q syntax.
    Non-admitted constructors fail closed to typed Boolean bottom. -/
def evalQ (environment : Environment) : QExpr -> Bool3
  | .variable declaration => environment declaration
  | .constant (.boolVal value) => value
  | .unary operator operand =>
      if operator = "not" then Boolean3Kleene.not (evalQ environment operand)
      else .bottom
  | .binary operator left right =>
      if operator = "and" then
        Boolean3Kleene.and (evalQ environment left) (evalQ environment right)
      else if operator = "or" then
        Boolean3Kleene.or (evalQ environment left) (evalQ environment right)
      else .bottom
  | .ifExpr condition thenExpr elseExpr =>
      ite3 (evalQ environment condition)
        (evalQ environment thenExpr) (evalQ environment elseExpr)
  | .letExpr binder value body =>
      evalQ (bind environment binder (evalQ environment value)) body
  | _ => .bottom

/-- O-07 for every constructor emitted by this admitted Core translation. -/
theorem core_to_q_preserves_denotation (expression : CoreExpr) :
    forall environment,
      evalQ environment (translateCore expression) = evalCore environment expression := by
  induction expression with
  | literal value => intro environment; rfl
  | «variable» declaration => intro environment; rfl
  | «not» body ih =>
      intro environment
      simp only [translateCore, evalQ, evalCore, if_pos]
      rw [ih environment]
  | «and» left right ihLeft ihRight =>
      intro environment
      simp only [translateCore, evalQ, evalCore, if_pos]
      rw [ihLeft environment, ihRight environment]
  | «or» left right ihLeft ihRight =>
      intro environment
      simp [translateCore, evalQ, evalCore, ihLeft environment, ihRight environment]
  | ifExpr condition thenExpr elseExpr ihCondition ihThen ihElse =>
      intro environment
      simp only [translateCore, evalQ, evalCore]
      rw [ihCondition environment, ihThen environment, ihElse environment]
  | letExpr binder value body ihValue ihBody =>
      intro environment
      simp only [translateCore, evalQ, evalCore]
      rw [ihValue environment]
      exact ihBody (bind environment binder (evalCore environment value))

/-! ## Formal Cypher realization -/

inductive CypherExpr where
  | variable (declaration : DeclarationId)
  | constant (value : Bool3)
  | not (body : CypherExpr)
  | and (left right : CypherExpr)
  | or (left right : CypherExpr)
  | ifExpr (condition thenExpr elseExpr : CypherExpr)
  | letExpr (binder : DeclarationId) (value body : CypherExpr)
  deriving Repr

def evalCypher (environment : Environment) : CypherExpr -> Bool3
  | .variable declaration => environment declaration
  | .constant value => value
  | .not body => Boolean3Kleene.not (evalCypher environment body)
  | .and left right =>
      Boolean3Kleene.and (evalCypher environment left) (evalCypher environment right)
  | .or left right =>
      Boolean3Kleene.or (evalCypher environment left) (evalCypher environment right)
  | .ifExpr condition thenExpr elseExpr =>
      ite3 (evalCypher environment condition)
        (evalCypher environment thenExpr) (evalCypher environment elseExpr)
  | .letExpr binder value body =>
      evalCypher (bind environment binder (evalCypher environment value)) body

/-- Fail-closed realization of the admitted Q constructors. -/
def realizeQ : QExpr -> Option CypherExpr
  | .variable declaration => some (.variable declaration)
  | .constant (.boolVal value) => some (.constant value)
  | .unary operator operand =>
      if operator = "not" then Option.map CypherExpr.not (realizeQ operand)
      else none
  | .binary operator left right =>
      if operator = "and" then
        match realizeQ left, realizeQ right with
        | some leftCypher, some rightCypher => some (.and leftCypher rightCypher)
        | _, _ => none
      else if operator = "or" then
        match realizeQ left, realizeQ right with
        | some leftCypher, some rightCypher => some (.or leftCypher rightCypher)
        | _, _ => none
      else none
  | .ifExpr condition thenExpr elseExpr =>
      match realizeQ condition, realizeQ thenExpr, realizeQ elseExpr with
      | some conditionCypher, some thenCypher, some elseCypher =>
          some (.ifExpr conditionCypher thenCypher elseCypher)
      | _, _, _ => none
  | .letExpr binder value body =>
      match realizeQ value, realizeQ body with
      | some valueCypher, some bodyCypher => some (.letExpr binder valueCypher bodyCypher)
      | _, _ => none
  | _ => none

def realizeCore : CoreExpr -> CypherExpr
  | .literal value => .constant value
  | .variable declaration => .variable declaration
  | .not body => .not (realizeCore body)
  | .and left right => .and (realizeCore left) (realizeCore right)
  | .or left right => .or (realizeCore left) (realizeCore right)
  | .ifExpr condition thenExpr elseExpr =>
      .ifExpr (realizeCore condition) (realizeCore thenExpr) (realizeCore elseExpr)
  | .letExpr binder value body => .letExpr binder (realizeCore value) (realizeCore body)

theorem realization_succeeds_on_translated_core (expression : CoreExpr) :
    realizeQ (translateCore expression) = some (realizeCore expression) := by
  induction expression with
  | literal value => rfl
  | «variable» declaration => rfl
  | «not» body ih => simp [translateCore, realizeQ, realizeCore, ih]
  | «and» left right ihLeft ihRight =>
      simp [translateCore, realizeQ, realizeCore, ihLeft, ihRight]
  | «or» left right ihLeft ihRight =>
      simp [translateCore, realizeQ, realizeCore, ihLeft, ihRight]
  | ifExpr condition thenExpr elseExpr ihCondition ihThen ihElse =>
      simp [translateCore, realizeQ, realizeCore, ihCondition, ihThen, ihElse]
  | letExpr binder value body ihValue ihBody =>
      simp [translateCore, realizeQ, realizeCore, ihValue, ihBody]

theorem core_to_formal_cypher_preserves_denotation (expression : CoreExpr) :
    forall environment,
      evalCypher environment (realizeCore expression) = evalCore environment expression := by
  induction expression with
  | literal value => intro environment; rfl
  | «variable» declaration => intro environment; rfl
  | «not» body ih =>
      intro environment
      simp only [realizeCore, evalCypher, evalCore]
      rw [ih environment]
  | «and» left right ihLeft ihRight =>
      intro environment
      simp only [realizeCore, evalCypher, evalCore]
      rw [ihLeft environment, ihRight environment]
  | «or» left right ihLeft ihRight =>
      intro environment
      simp only [realizeCore, evalCypher, evalCore]
      rw [ihLeft environment, ihRight environment]
  | ifExpr condition thenExpr elseExpr ihCondition ihThen ihElse =>
      intro environment
      simp only [realizeCore, evalCypher, evalCore]
      rw [ihCondition environment, ihThen environment, ihElse environment]
  | letExpr binder value body ihValue ihBody =>
      intro environment
      simp only [realizeCore, evalCypher, evalCore]
      rw [ihValue environment]
      exact ihBody (bind environment binder (evalCore environment value))

/-- O-08 on the image of the admitted Core-to-Q translation. -/
theorem q_to_formal_cypher_preserves_denotation (expression : CoreExpr)
    (environment : Environment) :
    evalCypher environment (realizeCore expression) =
      evalQ environment (translateCore expression) := by
  rw [core_to_formal_cypher_preserves_denotation,
    core_to_q_preserves_denotation]

/-! ## End-to-end violation identifier projection -/

structure ObjectState where
  stableId : String
  environment : Environment

def sourceViolationId (expression : SurfaceExpr) (object : ObjectState) : Option String :=
  if evalSurface object.environment expression = .true then none else some object.stableId

def cypherViolationId (expression : SurfaceExpr) (object : ObjectState) : Option String :=
  if evalCypher object.environment (realizeCore (normalize expression)) = .true then none
  else some object.stableId

theorem end_to_end_value_preservation (expression : SurfaceExpr)
    (environment : Environment) :
    evalCypher environment (realizeCore (normalize expression)) =
      evalSurface environment expression := by
  calc
    evalCypher environment (realizeCore (normalize expression)) =
        evalCore environment (normalize expression) :=
      core_to_formal_cypher_preserves_denotation (normalize expression) environment
    _ = evalSurface environment expression :=
      normalization_preserves_denotation expression environment

/-- O-10 pointwise: the false-or-bottom wrapper preserves each stable ID. -/
theorem violation_id_preserved (expression : SurfaceExpr) (object : ObjectState) :
    cypherViolationId expression object = sourceViolationId expression object := by
  unfold cypherViolationId sourceViolationId
  rw [end_to_end_value_preservation]

def sourceViolationIds (expression : SurfaceExpr) (objects : List ObjectState) : List String :=
  objects.filterMap (sourceViolationId expression)

def cypherViolationIds (expression : SurfaceExpr) (objects : List ObjectState) : List String :=
  objects.filterMap (cypherViolationId expression)

/-- Machine-checked vertical-slice composition of O-02/O-07/O-08/O-10. -/
theorem exact_violation_ids (expression : SurfaceExpr) (objects : List ObjectState) :
    cypherViolationIds expression objects = sourceViolationIds expression objects := by
  induction objects with
  | nil => rfl
  | cons head tail ih =>
      unfold cypherViolationIds sourceViolationIds at ih ⊢
      simp only [List.filterMap_cons]
      rw [violation_id_preserved, ih]

#print axioms normalization_preserves_denotation
#print axioms core_to_q_preserves_denotation
#print axioms realization_succeeds_on_translated_core
#print axioms q_to_formal_cypher_preserves_denotation
#print axioms violation_id_preserved
#print axioms exact_violation_ids

end Ocl2Gratra.AdmittedPipeline
