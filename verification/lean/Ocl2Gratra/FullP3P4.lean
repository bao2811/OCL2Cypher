import Ocl2Gratra.ProductionQSyntax

/-!
# Constructor-complete P3/P4 proof

This module proves the two transformation-local preservation obligations over
the complete formal constructor inventory: 20 expression constructors and
seven plan constructors.  It is deliberately independent of Java and of a
database executor.

`Semantics` is the mathematical semantic algebra fixed by P1/P2/P5.  In
particular, graph observers and certified primitive operations are data of the
model, not preservation hypotheses.  Core, Q, and formal target evaluation
are defined independently over that same algebra.  P3 and P4 are then proved
by mutual induction on evaluation fuel and exhaustive constructor cases.

No field of `Semantics` states that two stages agree.  The agreement equations
are conclusions of the theorems below.  There is no `axiom`, `sorry`, or
`admit`.
-/

namespace Ocl2Gratra.FullP3P4

open Ocl2Gratra.OclEqualityTotal
open Ocl2Gratra.OclTypeLattice
open Ocl2Gratra.ProductionQSyntax

universe u

abbrev Environment (Value : Type u) := Nat -> Value

def bind (environment : Environment Value) (declaration : Nat)
    (value : Value) : Environment Value :=
  fun candidate => if candidate = declaration then value else environment candidate

/-- One mathematical interpretation of every admitted local operator.

The structure contains operations, not cross-stage equalities.  A graph model
instantiates the observer fields; the Boolean/equality/collection/numeric
kernels instantiate the primitive fields. -/
structure Semantics (Value Collection : Type u) where
  outOfFuelValue : Value
  outOfFuelCollection : Collection
  parameter : String -> Value
  bottom : TypeKind -> Value
  constant : OclVal -> Value
  coerce : String -> Value -> Value
  ite : Value -> Value -> Value -> Value
  readAttribute : Value -> String -> String -> Value
  navigateOne : Value -> String -> String -> List Value -> Bool -> Bool -> Bool -> Value
  typeTest : Value -> String -> Bool -> Value
  typeCast : Value -> String -> Value
  unary : String -> Value -> Value
  binary : String -> Value -> Value -> Value
  exists3 : Collection -> (Value -> Value) -> Value
  forAll3 : Collection -> (Value -> Value) -> Value
  collectionLiteral : CollectionKind -> List Value -> Value
  includesFamily : String -> Value -> Value -> Value
  countFamily : String -> Value -> Option Value -> Value
  setAlgebra : String -> Value -> Value -> Value
  materialize : Collection -> Value
  fromCollection : Value -> Collection
  scanClass : String -> Nat -> Collection
  navigateMany : Value -> String -> String -> List Value -> Bool -> Bool -> Bool -> Collection
  filter : Collection -> (Value -> Value) -> Bool -> Collection
  collect : Collection -> (Value -> Value) -> Collection
  distinct : Collection -> Collection

/- Every `association : String` field below denotes the stable UML
   `associationKey`.  A display name is not part of the formal observer
   identity.  The fixed physical relationship type and keyed graph-observer
   refinement remain premises of the representation/Java refinement boundary,
   rather than being inferred from this structural P3/P4 theorem. -/

/-! ## Resolved Core calculus: complete 20/7 constructor inventory -/

mutual
  inductive CoreExpr where
    | variable (declarationId : Nat)
    | parameter (name : String)
    | bottom (type : TypeKind)
    | constant (value : OclVal)
    | coerce (coercion : String) (source : CoreExpr)
    | letExpr (binderId : Nat) (value body : CoreExpr)
    | ifExpr (condition thenExpr elseExpr : CoreExpr)
    | readAttribute (source : CoreExpr) (ownerClass attributeName : String)
    | navigateOne (source : CoreExpr) (association role : String)
        (qualifiers : List CoreExpr) (reverse associationClass viaAssociationClass : Bool)
    | typeTest (source : CoreExpr) (targetClass : String) (exact : Bool)
    | typeCast (source : CoreExpr) (targetClass : String)
    | unary (operator : String) (operand : CoreExpr)
    | binary (operator : String) (left right : CoreExpr)
    | exists3 (source : CorePlan) (iteratorId : Nat) (predicate : CoreExpr)
    | forAll3 (source : CorePlan) (iteratorId : Nat) (predicate : CoreExpr)
    | collectionLiteral (kind : CollectionKind) (elements : List CoreExpr)
    | includesFamily (operation : String) (source element : CoreExpr)
    | countFamily (operation : String) (source : CoreExpr) (element : Option CoreExpr)
    | setAlgebra (operation : String) (left right : CoreExpr)
    | materialize (plan : CorePlan)

  inductive CorePlan where
    | fromCollection (collection : CoreExpr)
    | scanClass (classKey : String) (declarationId : Nat)
    | navigateMany (source : CoreExpr) (association role : String)
        (qualifiers : List CoreExpr) (reverse associationClass viaAssociationClass : Bool)
    | filter (source : CorePlan) (iteratorId : Nat) (predicate : CoreExpr)
        (isSelect : Bool)
    | collect (source : CorePlan) (iteratorId : Nat) (body : CoreExpr)
    | distinct (source : CorePlan)
    | planLet (binderId : Nat) (value : CoreExpr) (body : CorePlan)
end

/-! ## Full-tree normalization -/

/-- `implies` and its normalized macro have one definition in the mathematical
semantics.  Consequently the normalization equation is proved by reduction;
it is not a field or hypothesis supplied by the caller. -/
def applyBinary (semantics : Semantics Value Collection) (operator : String)
    (left right : Value) : Value :=
  if operator = "implies" ∨ operator = "implies.normalized" then
    semantics.binary "or" (semantics.unary "not" left) right
  else semantics.binary operator left right

mutual
  def normalizeExpr : CoreExpr -> CoreExpr
    | .variable declaration => .variable declaration
    | .parameter name => .parameter name
    | .bottom type => .bottom type
    | .constant value => .constant value
    | .coerce coercion source => .coerce coercion (normalizeExpr source)
    | .letExpr binder value body =>
        .letExpr binder (normalizeExpr value) (normalizeExpr body)
    | .ifExpr condition thenExpr elseExpr =>
        .ifExpr (normalizeExpr condition) (normalizeExpr thenExpr) (normalizeExpr elseExpr)
    | .readAttribute source owner attr =>
        .readAttribute (normalizeExpr source) owner attr
    | .navigateOne source association role qualifiers reverse associationClass viaClass =>
        .navigateOne (normalizeExpr source) association role
          (qualifiers.map (fun qualifier => normalizeExpr qualifier))
          reverse associationClass viaClass
    | .typeTest source target exact => .typeTest (normalizeExpr source) target exact
    | .typeCast source target => .typeCast (normalizeExpr source) target
    | .unary operator operand => .unary operator (normalizeExpr operand)
    | .binary operator left right =>
        let normalizedLeft := normalizeExpr left
        let normalizedRight := normalizeExpr right
        if operator = "implies" then
          .binary "implies.normalized" normalizedLeft normalizedRight
        else .binary operator normalizedLeft normalizedRight
    | .exists3 source iterator predicate =>
        .exists3 (normalizePlan source) iterator (normalizeExpr predicate)
    | .forAll3 source iterator predicate =>
        .forAll3 (normalizePlan source) iterator (normalizeExpr predicate)
    | .collectionLiteral kind elements =>
        .collectionLiteral kind (elements.map (fun element => normalizeExpr element))
    | .includesFamily operation source element =>
        .includesFamily operation (normalizeExpr source) (normalizeExpr element)
    | .countFamily operation source element =>
        .countFamily operation (normalizeExpr source)
          (match element with
          | none => none
          | some item => some (normalizeExpr item))
    | .setAlgebra operation left right =>
        .setAlgebra operation (normalizeExpr left) (normalizeExpr right)
    | .materialize plan => .materialize (normalizePlan plan)
  termination_by expression => sizeOf expression
  decreasing_by
    all_goals simp_wf
    all_goals first
      | omega
      | exact Nat.lt_trans (List.sizeOf_lt_of_mem (by assumption)) (by omega)

  def normalizePlan : CorePlan -> CorePlan
    | .fromCollection collection => .fromCollection (normalizeExpr collection)
    | .scanClass classKey declaration => .scanClass classKey declaration
    | .navigateMany source association role qualifiers reverse associationClass viaClass =>
        .navigateMany (normalizeExpr source) association role
          (qualifiers.map (fun qualifier => normalizeExpr qualifier))
          reverse associationClass viaClass
    | .filter source iterator predicate select =>
        .filter (normalizePlan source) iterator (normalizeExpr predicate) select
    | .collect source iterator body =>
        .collect (normalizePlan source) iterator (normalizeExpr body)
    | .distinct source => .distinct (normalizePlan source)
    | .planLet binder value body =>
        .planLet binder (normalizeExpr value) (normalizePlan body)
  termination_by plan => sizeOf plan
  decreasing_by
    all_goals simp_wf
    all_goals first
      | omega
      | exact Nat.lt_trans (List.sizeOf_lt_of_mem (by assumption)) (by omega)
end

mutual
  def lowerExpr : CoreExpr -> QExpr
    | .variable declaration => .variable declaration
    | .parameter name => .parameter name
    | .bottom type => .bottom type
    | .constant value => .constant value
    | .coerce coercion source => .coerce coercion (lowerExpr source)
    | .letExpr binder value body => .letExpr binder (lowerExpr value) (lowerExpr body)
    | .ifExpr condition thenExpr elseExpr =>
        .ifExpr (lowerExpr condition) (lowerExpr thenExpr) (lowerExpr elseExpr)
    | .readAttribute source owner attr =>
        .readAttribute (lowerExpr source) owner attr
    | .navigateOne source association role qualifiers reverse associationClass viaClass =>
        .navigateOne (lowerExpr source) association role
          (qualifiers.map (fun qualifier => lowerExpr qualifier))
          reverse associationClass viaClass
    | .typeTest source target exact => .typeTest (lowerExpr source) target exact
    | .typeCast source target => .typeCast (lowerExpr source) target
    | .unary operator operand => .unary operator (lowerExpr operand)
    | .binary operator left right => .binary operator (lowerExpr left) (lowerExpr right)
    | .exists3 source iterator predicate =>
        .exists3 (lowerPlan source) iterator (lowerExpr predicate)
    | .forAll3 source iterator predicate =>
        .forAll3 (lowerPlan source) iterator (lowerExpr predicate)
    | .collectionLiteral kind elements =>
        .collectionLiteral kind (elements.map (fun element => lowerExpr element))
    | .includesFamily operation source element =>
        .includesFamily operation (lowerExpr source) (lowerExpr element)
    | .countFamily operation source element =>
        .countFamily operation (lowerExpr source)
          (match element with
          | none => none
          | some item => some (lowerExpr item))
    | .setAlgebra operation left right =>
        .setAlgebra operation (lowerExpr left) (lowerExpr right)
    | .materialize plan => .materialize (lowerPlan plan)
  termination_by expression => sizeOf expression
  decreasing_by
    all_goals simp_wf
    all_goals first
      | omega
      | exact Nat.lt_trans (List.sizeOf_lt_of_mem (by assumption)) (by omega)

  def lowerPlan : CorePlan -> QPlan
    | .fromCollection collection => .fromCollection (lowerExpr collection)
    | .scanClass classKey declaration => .scanClass classKey declaration
    | .navigateMany source association role qualifiers reverse associationClass viaClass =>
        .navigateMany (lowerExpr source) association role
          (qualifiers.map (fun qualifier => lowerExpr qualifier))
          reverse associationClass viaClass
    | .filter source iterator predicate select =>
        .filter (lowerPlan source) iterator (lowerExpr predicate) select
    | .collect source iterator body =>
        .collect (lowerPlan source) iterator (lowerExpr body)
    | .distinct source => .distinct (lowerPlan source)
    | .planLet binder value body =>
        .planLet binder (lowerExpr value) (lowerPlan body)
  termination_by plan => sizeOf plan
  decreasing_by
    all_goals simp_wf
    all_goals first
      | omega
      | exact Nat.lt_trans (List.sizeOf_lt_of_mem (by assumption)) (by omega)
end

/-! Fuel makes mutual expression/plan evaluation manifestly total.  Every
recursive premise receives strictly smaller fuel, including same-node
expression/plan adapters and iterator bodies. -/

mutual
  def evalCoreExpr (semantics : Semantics Value Collection) :
      Nat -> Environment Value -> CoreExpr -> Value
    | 0, _, _ => semantics.outOfFuelValue
    | fuel + 1, environment, expression =>
      match expression with
      | .variable declaration => environment declaration
      | .parameter name => semantics.parameter name
      | .bottom type => semantics.bottom type
      | .constant value => semantics.constant value
      | .coerce coercion source =>
          semantics.coerce coercion (evalCoreExpr semantics fuel environment source)
      | .letExpr binder value body =>
          let denotation := evalCoreExpr semantics fuel environment value
          evalCoreExpr semantics fuel (bind environment binder denotation) body
      | .ifExpr condition thenExpr elseExpr =>
          semantics.ite (evalCoreExpr semantics fuel environment condition)
            (evalCoreExpr semantics fuel environment thenExpr)
            (evalCoreExpr semantics fuel environment elseExpr)
      | .readAttribute source owner attr =>
          semantics.readAttribute (evalCoreExpr semantics fuel environment source) owner attr
      | .navigateOne source association role qualifiers reverse associationClass viaClass =>
          semantics.navigateOne (evalCoreExpr semantics fuel environment source) association role
            (qualifiers.map (evalCoreExpr semantics fuel environment))
            reverse associationClass viaClass
      | .typeTest source target exact =>
          semantics.typeTest (evalCoreExpr semantics fuel environment source) target exact
      | .typeCast source target =>
          semantics.typeCast (evalCoreExpr semantics fuel environment source) target
      | .unary operator operand =>
          semantics.unary operator (evalCoreExpr semantics fuel environment operand)
      | .binary operator left right =>
          applyBinary semantics operator (evalCoreExpr semantics fuel environment left)
            (evalCoreExpr semantics fuel environment right)
      | .exists3 source iterator predicate =>
          semantics.exists3 (evalCorePlan semantics fuel environment source)
            (fun value => evalCoreExpr semantics fuel (bind environment iterator value) predicate)
      | .forAll3 source iterator predicate =>
          semantics.forAll3 (evalCorePlan semantics fuel environment source)
            (fun value => evalCoreExpr semantics fuel (bind environment iterator value) predicate)
      | .collectionLiteral kind elements =>
          semantics.collectionLiteral kind
            (elements.map (evalCoreExpr semantics fuel environment))
      | .includesFamily operation source element =>
          semantics.includesFamily operation (evalCoreExpr semantics fuel environment source)
            (evalCoreExpr semantics fuel environment element)
      | .countFamily operation source element =>
          semantics.countFamily operation (evalCoreExpr semantics fuel environment source)
            (element.map (evalCoreExpr semantics fuel environment))
      | .setAlgebra operation left right =>
          semantics.setAlgebra operation (evalCoreExpr semantics fuel environment left)
            (evalCoreExpr semantics fuel environment right)
      | .materialize plan => semantics.materialize (evalCorePlan semantics fuel environment plan)

  def evalCorePlan (semantics : Semantics Value Collection) :
      Nat -> Environment Value -> CorePlan -> Collection
    | 0, _, _ => semantics.outOfFuelCollection
    | fuel + 1, environment, plan =>
      match plan with
      | .fromCollection collection =>
          semantics.fromCollection (evalCoreExpr semantics fuel environment collection)
      | .scanClass classKey declaration => semantics.scanClass classKey declaration
      | .navigateMany source association role qualifiers reverse associationClass viaClass =>
          semantics.navigateMany (evalCoreExpr semantics fuel environment source) association role
            (qualifiers.map (evalCoreExpr semantics fuel environment))
            reverse associationClass viaClass
      | .filter source iterator predicate select =>
          semantics.filter (evalCorePlan semantics fuel environment source)
            (fun value => evalCoreExpr semantics fuel (bind environment iterator value) predicate)
            select
      | .collect source iterator body =>
          semantics.collect (evalCorePlan semantics fuel environment source)
            (fun value => evalCoreExpr semantics fuel (bind environment iterator value) body)
      | .distinct source => semantics.distinct (evalCorePlan semantics fuel environment source)
      | .planLet binder value body =>
          let denotation := evalCoreExpr semantics fuel environment value
          evalCorePlan semantics fuel (bind environment binder denotation) body
end

/-! P3 normalization is a separate theorem from Core-to-Q lowering. -/

theorem p3_normalization_mutual (semantics : Semantics Value Collection) :
    (forall fuel environment expression,
      evalCoreExpr semantics fuel environment (normalizeExpr expression) =
        evalCoreExpr semantics fuel environment expression) /\
    (forall fuel environment plan,
      evalCorePlan semantics fuel environment (normalizePlan plan) =
        evalCorePlan semantics fuel environment plan) := by
  have proofByFuel : forall fuel,
      (forall environment expression,
        evalCoreExpr semantics fuel environment (normalizeExpr expression) =
          evalCoreExpr semantics fuel environment expression) /\
      (forall environment plan,
        evalCorePlan semantics fuel environment (normalizePlan plan) =
          evalCorePlan semantics fuel environment plan) := by
    intro fuel
    induction fuel with
    | zero =>
        constructor <;> intro environment term <;> rfl
    | succ fuel ih =>
        rcases ih with ⟨exprIH, planIH⟩
        have listExprIH : forall (environment : Environment Value)
            (expressions : List CoreExpr),
            List.map (evalCoreExpr semantics fuel environment)
                (List.map (fun expression => normalizeExpr expression) expressions) =
              List.map (evalCoreExpr semantics fuel environment) expressions := by
          intro environment expressions
          rw [List.map_map]
          apply List.map_congr_left
          intro expression _
          exact exprIH environment expression
        constructor
        · intro environment expression
          cases expression <;>
            simp [normalizeExpr, evalCoreExpr, exprIH, planIH, listExprIH]
          case binary operator left right =>
            by_cases isImplies : operator = "implies"
            · subst operator
              simp [applyBinary, exprIH]
            · simp [applyBinary, isImplies, exprIH]
          case countFamily operation source element =>
            cases element <;> simp [normalizeExpr, exprIH]
        · intro environment plan
          cases plan <;>
            simp [normalizePlan, evalCorePlan, exprIH, planIH, listExprIH]
  constructor
  · intro fuel
    exact (proofByFuel fuel).1
  · intro fuel
    exact (proofByFuel fuel).2

theorem p3_normalization (semantics : Semantics Value Collection) (fuel : Nat)
    (environment : Environment Value) (expression : CoreExpr) :
    evalCoreExpr semantics fuel environment (normalizeExpr expression) =
      evalCoreExpr semantics fuel environment expression :=
  (p3_normalization_mutual semantics).1 fuel environment expression

mutual
  def evalQExpr (semantics : Semantics Value Collection) :
      Nat -> Environment Value -> QExpr -> Value
    | 0, _, _ => semantics.outOfFuelValue
    | fuel + 1, environment, expression =>
      match expression with
      | .variable declaration => environment declaration
      | .parameter name => semantics.parameter name
      | .bottom type => semantics.bottom type
      | .constant value => semantics.constant value
      | .coerce coercion source =>
          semantics.coerce coercion (evalQExpr semantics fuel environment source)
      | .letExpr binder value body =>
          let denotation := evalQExpr semantics fuel environment value
          evalQExpr semantics fuel (bind environment binder denotation) body
      | .ifExpr condition thenExpr elseExpr =>
          semantics.ite (evalQExpr semantics fuel environment condition)
            (evalQExpr semantics fuel environment thenExpr)
            (evalQExpr semantics fuel environment elseExpr)
      | .readAttribute source owner attr =>
          semantics.readAttribute (evalQExpr semantics fuel environment source) owner attr
      | .navigateOne source association role qualifiers reverse associationClass viaClass =>
          semantics.navigateOne (evalQExpr semantics fuel environment source) association role
            (qualifiers.map (evalQExpr semantics fuel environment))
            reverse associationClass viaClass
      | .typeTest source target exact =>
          semantics.typeTest (evalQExpr semantics fuel environment source) target exact
      | .typeCast source target =>
          semantics.typeCast (evalQExpr semantics fuel environment source) target
      | .unary operator operand =>
          semantics.unary operator (evalQExpr semantics fuel environment operand)
      | .binary operator left right =>
          applyBinary semantics operator (evalQExpr semantics fuel environment left)
            (evalQExpr semantics fuel environment right)
      | .exists3 source iterator predicate =>
          semantics.exists3 (evalQPlan semantics fuel environment source)
            (fun value => evalQExpr semantics fuel (bind environment iterator value) predicate)
      | .forAll3 source iterator predicate =>
          semantics.forAll3 (evalQPlan semantics fuel environment source)
            (fun value => evalQExpr semantics fuel (bind environment iterator value) predicate)
      | .collectionLiteral kind elements =>
          semantics.collectionLiteral kind (elements.map (evalQExpr semantics fuel environment))
      | .includesFamily operation source element =>
          semantics.includesFamily operation (evalQExpr semantics fuel environment source)
            (evalQExpr semantics fuel environment element)
      | .countFamily operation source element =>
          semantics.countFamily operation (evalQExpr semantics fuel environment source)
            (element.map (evalQExpr semantics fuel environment))
      | .setAlgebra operation left right =>
          semantics.setAlgebra operation (evalQExpr semantics fuel environment left)
            (evalQExpr semantics fuel environment right)
      | .materialize plan => semantics.materialize (evalQPlan semantics fuel environment plan)

  def evalQPlan (semantics : Semantics Value Collection) :
      Nat -> Environment Value -> QPlan -> Collection
    | 0, _, _ => semantics.outOfFuelCollection
    | fuel + 1, environment, plan =>
      match plan with
      | .fromCollection collection =>
          semantics.fromCollection (evalQExpr semantics fuel environment collection)
      | .scanClass classKey declaration => semantics.scanClass classKey declaration
      | .navigateMany source association role qualifiers reverse associationClass viaClass =>
          semantics.navigateMany (evalQExpr semantics fuel environment source) association role
            (qualifiers.map (evalQExpr semantics fuel environment))
            reverse associationClass viaClass
      | .filter source iterator predicate select =>
          semantics.filter (evalQPlan semantics fuel environment source)
            (fun value => evalQExpr semantics fuel (bind environment iterator value) predicate)
            select
      | .collect source iterator body =>
          semantics.collect (evalQPlan semantics fuel environment source)
            (fun value => evalQExpr semantics fuel (bind environment iterator value) body)
      | .distinct source => semantics.distinct (evalQPlan semantics fuel environment source)
      | .planLet binder value body =>
          let denotation := evalQExpr semantics fuel environment value
          evalQPlan semantics fuel (bind environment binder denotation) body
end

/-- P3, expression and plan forms together.  The proof has one case for every
Core constructor and carries binder environments under `let` and iterators. -/
theorem p3_core_to_q_mutual (semantics : Semantics Value Collection) :
    (forall fuel environment expression,
      evalQExpr semantics fuel environment (lowerExpr expression) =
        evalCoreExpr semantics fuel environment expression) /\
    (forall fuel environment plan,
      evalQPlan semantics fuel environment (lowerPlan plan) =
        evalCorePlan semantics fuel environment plan) := by
  have proofByFuel : forall fuel,
      (forall environment expression,
        evalQExpr semantics fuel environment (lowerExpr expression) =
          evalCoreExpr semantics fuel environment expression) /\
      (forall environment plan,
        evalQPlan semantics fuel environment (lowerPlan plan) =
          evalCorePlan semantics fuel environment plan) := by
    intro fuel
    induction fuel with
    | zero =>
        constructor <;> intro environment term <;> rfl
    | succ fuel ih =>
        rcases ih with ⟨exprIH, planIH⟩
        have listExprIH : forall (environment : Environment Value)
            (expressions : List CoreExpr),
            List.map (evalQExpr semantics fuel environment)
                (List.map (fun expression => lowerExpr expression) expressions) =
              List.map (evalCoreExpr semantics fuel environment) expressions := by
          intro environment expressions
          rw [List.map_map]
          apply List.map_congr_left
          intro expression _
          exact exprIH environment expression
        constructor
        · intro environment expression
          cases expression <;>
            simp [lowerExpr, evalCoreExpr, evalQExpr, exprIH, planIH,
              listExprIH]
          case countFamily operation source element =>
            cases element <;>
              simp [lowerExpr, exprIH]
        · intro environment plan
          cases plan <;>
            simp [lowerPlan, evalCorePlan, evalQPlan, exprIH, planIH,
              listExprIH]
  constructor
  · intro fuel
    exact (proofByFuel fuel).1
  · intro fuel
    exact (proofByFuel fuel).2

theorem p3_core_to_q (semantics : Semantics Value Collection)
    (fuel : Nat) (environment : Environment Value) (expression : CoreExpr) :
    evalQExpr semantics fuel environment (lowerExpr expression) =
      evalCoreExpr semantics fuel environment expression :=
  (p3_core_to_q_mutual semantics).1 fuel environment expression

/-- Complete P3 composition: normalize the entire resolved tree and then
lower the normalized Core expression to Q. -/
theorem p3_normalize_to_q (semantics : Semantics Value Collection)
    (fuel : Nat) (environment : Environment Value) (expression : CoreExpr) :
    evalQExpr semantics fuel environment (lowerExpr (normalizeExpr expression)) =
      evalCoreExpr semantics fuel environment expression := by
  calc
    evalQExpr semantics fuel environment (lowerExpr (normalizeExpr expression)) =
        evalCoreExpr semantics fuel environment (normalizeExpr expression) :=
      p3_core_to_q semantics fuel environment (normalizeExpr expression)
    _ = evalCoreExpr semantics fuel environment expression :=
      p3_normalization semantics fuel environment expression

/-! ## Formal target calculus: independent 20/7 syntax -/

mutual
  inductive TargetExpr where
    | variable (declarationId : Nat)
    | parameter (name : String)
    | bottom (type : TypeKind)
    | constant (value : OclVal)
    | coerce (coercion : String) (source : TargetExpr)
    | letExpr (binderId : Nat) (value body : TargetExpr)
    | ifExpr (condition thenExpr elseExpr : TargetExpr)
    | readAttribute (source : TargetExpr) (ownerClass attributeName : String)
    | navigateOne (source : TargetExpr) (association role : String)
        (qualifiers : List TargetExpr) (reverse associationClass viaAssociationClass : Bool)
    | typeTest (source : TargetExpr) (targetClass : String) (exact : Bool)
    | typeCast (source : TargetExpr) (targetClass : String)
    | unary (operator : String) (operand : TargetExpr)
    | binary (operator : String) (left right : TargetExpr)
    | exists3 (source : TargetPlan) (iteratorId : Nat) (predicate : TargetExpr)
    | forAll3 (source : TargetPlan) (iteratorId : Nat) (predicate : TargetExpr)
    | collectionLiteral (kind : CollectionKind) (elements : List TargetExpr)
    | includesFamily (operation : String) (source element : TargetExpr)
    | countFamily (operation : String) (source : TargetExpr) (element : Option TargetExpr)
    | setAlgebra (operation : String) (left right : TargetExpr)
    | materialize (plan : TargetPlan)

  inductive TargetPlan where
    | fromCollection (collection : TargetExpr)
    | scanClass (classKey : String) (declarationId : Nat)
    | navigateMany (source : TargetExpr) (association role : String)
        (qualifiers : List TargetExpr) (reverse associationClass viaAssociationClass : Bool)
    | filter (source : TargetPlan) (iteratorId : Nat) (predicate : TargetExpr)
        (isSelect : Bool)
    | collect (source : TargetPlan) (iteratorId : Nat) (body : TargetExpr)
    | distinct (source : TargetPlan)
    | planLet (binderId : Nat) (value : TargetExpr) (body : TargetPlan)
end

mutual
  def realizeExpr : QExpr -> TargetExpr
    | .variable declaration => .variable declaration
    | .parameter name => .parameter name
    | .bottom type => .bottom type
    | .constant value => .constant value
    | .coerce coercion source => .coerce coercion (realizeExpr source)
    | .letExpr binder value body => .letExpr binder (realizeExpr value) (realizeExpr body)
    | .ifExpr condition thenExpr elseExpr =>
        .ifExpr (realizeExpr condition) (realizeExpr thenExpr) (realizeExpr elseExpr)
    | .readAttribute source owner attr =>
        .readAttribute (realizeExpr source) owner attr
    | .navigateOne source association role qualifiers reverse associationClass viaClass =>
        .navigateOne (realizeExpr source) association role
          (qualifiers.map (fun qualifier => realizeExpr qualifier))
          reverse associationClass viaClass
    | .typeTest source target exact => .typeTest (realizeExpr source) target exact
    | .typeCast source target => .typeCast (realizeExpr source) target
    | .unary operator operand => .unary operator (realizeExpr operand)
    | .binary operator left right =>
        .binary operator (realizeExpr left) (realizeExpr right)
    | .exists3 source iterator predicate =>
        .exists3 (realizePlan source) iterator (realizeExpr predicate)
    | .forAll3 source iterator predicate =>
        .forAll3 (realizePlan source) iterator (realizeExpr predicate)
    | .collectionLiteral kind elements =>
        .collectionLiteral kind (elements.map (fun element => realizeExpr element))
    | .includesFamily operation source element =>
        .includesFamily operation (realizeExpr source) (realizeExpr element)
    | .countFamily operation source element =>
        .countFamily operation (realizeExpr source)
          (match element with
          | none => none
          | some item => some (realizeExpr item))
    | .setAlgebra operation left right =>
        .setAlgebra operation (realizeExpr left) (realizeExpr right)
    | .materialize plan => .materialize (realizePlan plan)
  termination_by expression => sizeOf expression
  decreasing_by
    all_goals simp_wf
    all_goals first
      | omega
      | exact Nat.lt_trans (List.sizeOf_lt_of_mem (by assumption)) (by omega)

  def realizePlan : QPlan -> TargetPlan
    | .fromCollection collection => .fromCollection (realizeExpr collection)
    | .scanClass classKey declaration => .scanClass classKey declaration
    | .navigateMany source association role qualifiers reverse associationClass viaClass =>
        .navigateMany (realizeExpr source) association role
          (qualifiers.map (fun qualifier => realizeExpr qualifier))
          reverse associationClass viaClass
    | .filter source iterator predicate select =>
        .filter (realizePlan source) iterator (realizeExpr predicate) select
    | .collect source iterator body =>
        .collect (realizePlan source) iterator (realizeExpr body)
    | .distinct source => .distinct (realizePlan source)
    | .planLet binder value body =>
        .planLet binder (realizeExpr value) (realizePlan body)
  termination_by plan => sizeOf plan
  decreasing_by
    all_goals simp_wf
    all_goals first
      | omega
      | exact Nat.lt_trans (List.sizeOf_lt_of_mem (by assumption)) (by omega)
end

mutual
  def evalTargetExpr (semantics : Semantics Value Collection) :
      Nat -> Environment Value -> TargetExpr -> Value
    | 0, _, _ => semantics.outOfFuelValue
    | fuel + 1, environment, expression =>
      match expression with
      | .variable declaration => environment declaration
      | .parameter name => semantics.parameter name
      | .bottom type => semantics.bottom type
      | .constant value => semantics.constant value
      | .coerce coercion source =>
          semantics.coerce coercion (evalTargetExpr semantics fuel environment source)
      | .letExpr binder value body =>
          let denotation := evalTargetExpr semantics fuel environment value
          evalTargetExpr semantics fuel (bind environment binder denotation) body
      | .ifExpr condition thenExpr elseExpr =>
          semantics.ite (evalTargetExpr semantics fuel environment condition)
            (evalTargetExpr semantics fuel environment thenExpr)
            (evalTargetExpr semantics fuel environment elseExpr)
      | .readAttribute source owner attr =>
          semantics.readAttribute (evalTargetExpr semantics fuel environment source) owner attr
      | .navigateOne source association role qualifiers reverse associationClass viaClass =>
          semantics.navigateOne (evalTargetExpr semantics fuel environment source) association role
            (qualifiers.map (evalTargetExpr semantics fuel environment))
            reverse associationClass viaClass
      | .typeTest source target exact =>
          semantics.typeTest (evalTargetExpr semantics fuel environment source) target exact
      | .typeCast source target =>
          semantics.typeCast (evalTargetExpr semantics fuel environment source) target
      | .unary operator operand =>
          semantics.unary operator (evalTargetExpr semantics fuel environment operand)
      | .binary operator left right =>
          applyBinary semantics operator (evalTargetExpr semantics fuel environment left)
            (evalTargetExpr semantics fuel environment right)
      | .exists3 source iterator predicate =>
          semantics.exists3 (evalTargetPlan semantics fuel environment source)
            (fun value => evalTargetExpr semantics fuel (bind environment iterator value) predicate)
      | .forAll3 source iterator predicate =>
          semantics.forAll3 (evalTargetPlan semantics fuel environment source)
            (fun value => evalTargetExpr semantics fuel (bind environment iterator value) predicate)
      | .collectionLiteral kind elements =>
          semantics.collectionLiteral kind
            (elements.map (evalTargetExpr semantics fuel environment))
      | .includesFamily operation source element =>
          semantics.includesFamily operation (evalTargetExpr semantics fuel environment source)
            (evalTargetExpr semantics fuel environment element)
      | .countFamily operation source element =>
          semantics.countFamily operation (evalTargetExpr semantics fuel environment source)
            (element.map (evalTargetExpr semantics fuel environment))
      | .setAlgebra operation left right =>
          semantics.setAlgebra operation (evalTargetExpr semantics fuel environment left)
            (evalTargetExpr semantics fuel environment right)
      | .materialize plan => semantics.materialize (evalTargetPlan semantics fuel environment plan)

  def evalTargetPlan (semantics : Semantics Value Collection) :
      Nat -> Environment Value -> TargetPlan -> Collection
    | 0, _, _ => semantics.outOfFuelCollection
    | fuel + 1, environment, plan =>
      match plan with
      | .fromCollection collection =>
          semantics.fromCollection (evalTargetExpr semantics fuel environment collection)
      | .scanClass classKey declaration => semantics.scanClass classKey declaration
      | .navigateMany source association role qualifiers reverse associationClass viaClass =>
          semantics.navigateMany (evalTargetExpr semantics fuel environment source) association role
            (qualifiers.map (evalTargetExpr semantics fuel environment))
            reverse associationClass viaClass
      | .filter source iterator predicate select =>
          semantics.filter (evalTargetPlan semantics fuel environment source)
            (fun value => evalTargetExpr semantics fuel (bind environment iterator value) predicate)
            select
      | .collect source iterator body =>
          semantics.collect (evalTargetPlan semantics fuel environment source)
            (fun value => evalTargetExpr semantics fuel (bind environment iterator value) body)
      | .distinct source => semantics.distinct (evalTargetPlan semantics fuel environment source)
      | .planLet binder value body =>
          let denotation := evalTargetExpr semantics fuel environment value
          evalTargetPlan semantics fuel (bind environment binder denotation) body
end

/-- P4, expression and plan forms together.  This is exhaustive over the
closed production-shaped Q inventory, not a theorem restricted to Boolean
constructors. -/
theorem p4_q_to_target_mutual (semantics : Semantics Value Collection) :
    (forall fuel environment expression,
      evalTargetExpr semantics fuel environment (realizeExpr expression) =
        evalQExpr semantics fuel environment expression) /\
    (forall fuel environment plan,
      evalTargetPlan semantics fuel environment (realizePlan plan) =
        evalQPlan semantics fuel environment plan) := by
  have proofByFuel : forall fuel,
      (forall environment expression,
        evalTargetExpr semantics fuel environment (realizeExpr expression) =
          evalQExpr semantics fuel environment expression) /\
      (forall environment plan,
        evalTargetPlan semantics fuel environment (realizePlan plan) =
          evalQPlan semantics fuel environment plan) := by
    intro fuel
    induction fuel with
    | zero =>
        constructor <;> intro environment term <;> rfl
    | succ fuel ih =>
        rcases ih with ⟨exprIH, planIH⟩
        have listExprIH : forall (environment : Environment Value)
            (expressions : List QExpr),
            List.map (evalTargetExpr semantics fuel environment)
                (List.map (fun expression => realizeExpr expression) expressions) =
              List.map (evalQExpr semantics fuel environment) expressions := by
          intro environment expressions
          rw [List.map_map]
          apply List.map_congr_left
          intro expression _
          exact exprIH environment expression
        constructor
        · intro environment expression
          cases expression <;>
            simp [realizeExpr, evalQExpr, evalTargetExpr, exprIH, planIH,
              listExprIH]
          case countFamily operation source element =>
            cases element <;>
              simp [realizeExpr, exprIH]
        · intro environment plan
          cases plan <;>
            simp [realizePlan, evalQPlan, evalTargetPlan, exprIH, planIH,
              listExprIH]
  constructor
  · intro fuel
    exact (proofByFuel fuel).1
  · intro fuel
    exact (proofByFuel fuel).2

theorem p4_q_to_target (semantics : Semantics Value Collection)
    (fuel : Nat) (environment : Environment Value) (expression : QExpr) :
    evalTargetExpr semantics fuel environment (realizeExpr expression) =
      evalQExpr semantics fuel environment expression :=
  (p4_q_to_target_mutual semantics).1 fuel environment expression

/-! ## Formal serialization boundary -/

/-- A canonical mathematical artifact.  Concrete textual Cypher and its parser
are a later representation refinement; they are not smuggled into P4. -/
structure Artifact where
  root : TargetExpr

def serialize (expression : TargetExpr) : Artifact := ⟨expression⟩

def parse (artifact : Artifact) : Option TargetExpr := some artifact.root

theorem parse_serialize (expression : TargetExpr) :
    parse (serialize expression) = some expression := rfl

def evalArtifact (semantics : Semantics Value Collection) (fuel : Nat)
    (environment : Environment Value) (artifact : Artifact) : Option Value :=
  Option.map (evalTargetExpr semantics fuel environment) (parse artifact)

/-- P4 including the formal artifact boundary. -/
theorem p4_q_to_serialized (semantics : Semantics Value Collection)
    (fuel : Nat) (environment : Environment Value) (expression : QExpr) :
    evalArtifact semantics fuel environment (serialize (realizeExpr expression)) =
      some (evalQExpr semantics fuel environment expression) := by
  simp [evalArtifact, parse_serialize, p4_q_to_target]

/-- Direct P3+P4 composition for every Core expression in the full 20/7
inventory. -/
theorem p3_p4_composition (semantics : Semantics Value Collection)
    (fuel : Nat) (environment : Environment Value) (expression : CoreExpr) :
    evalArtifact semantics fuel environment
        (serialize (realizeExpr (lowerExpr (normalizeExpr expression)))) =
      some (evalCoreExpr semantics fuel environment expression) := by
  rw [p4_q_to_serialized, p3_normalize_to_q]

#print axioms p3_normalization_mutual
#print axioms p3_normalization
#print axioms p3_core_to_q_mutual
#print axioms p3_core_to_q
#print axioms p3_normalize_to_q
#print axioms p4_q_to_target_mutual
#print axioms p4_q_to_target
#print axioms parse_serialize
#print axioms p4_q_to_serialized
#print axioms p3_p4_composition

end Ocl2Gratra.FullP3P4
