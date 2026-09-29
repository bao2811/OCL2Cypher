import Ocl2Gratra.AdmittedPipeline

/-!
# Canonical serialization kernel for the admitted Boolean slice

The concrete Java serializer emits Cypher text.  This module proves the two
structural obligations that any concrete text refinement must preserve:

* serialization followed by parsing reconstructs exactly the formal Cypher
  expression; and
* therefore serialization cannot change its three-valued denotation.

The wire language is an unambiguous postfix token stream.  It is a formal
serialization model, not a claim that the current Java text renderer has
already been extracted into Lean.

Zero `axiom`, `sorry`, or `admit`.
-/

namespace Ocl2Gratra.AdmittedSerialization

open Ocl2Gratra.Boolean3Kleene
open Ocl2Gratra.AdmittedPipeline

inductive Token where
  | variable (declaration : DeclarationId)
  | constant (value : Bool3)
  | notOp
  | andOp
  | orOp
  | ifOp
  | letOp (binder : DeclarationId)
  deriving Repr, DecidableEq

def serialize : CypherExpr -> List Token
  | .variable declaration => [.variable declaration]
  | .constant value => [.constant value]
  | .not body => serialize body ++ [.notOp]
  | .and left right => serialize left ++ serialize right ++ [.andOp]
  | .or left right => serialize left ++ serialize right ++ [.orOp]
  | .ifExpr condition thenExpr elseExpr =>
      serialize condition ++ serialize thenExpr ++ serialize elseExpr ++ [.ifOp]
  | .letExpr binder value body =>
      serialize value ++ serialize body ++ [.letOp binder]

def step : List CypherExpr -> Token -> Option (List CypherExpr)
  | stack, .variable declaration => some (.variable declaration :: stack)
  | stack, .constant value => some (.constant value :: stack)
  | body :: rest, .notOp => some (.not body :: rest)
  | right :: left :: rest, .andOp => some (.and left right :: rest)
  | right :: left :: rest, .orOp => some (.or left right :: rest)
  | elseExpr :: thenExpr :: condition :: rest, .ifOp =>
      some (.ifExpr condition thenExpr elseExpr :: rest)
  | body :: value :: rest, .letOp binder =>
      some (.letExpr binder value body :: rest)
  | _, _ => none

def run : List Token -> List CypherExpr -> Option (List CypherExpr)
  | [], stack => some stack
  | token :: remaining, stack =>
      match step stack token with
      | none => none
      | some next => run remaining next

theorem run_append (left right : List Token) (stack : List CypherExpr) :
    run (left ++ right) stack =
      match run left stack with
      | none => none
      | some next => run right next := by
  induction left generalizing stack with
  | nil => rfl
  | cons token remaining ih =>
      simp only [List.cons_append, run]
      cases hStep : step stack token with
      | none => rfl
      | some next => exact ih next

/-- Strong stack form makes composition of nested expressions explicit. -/
theorem run_serialize (expression : CypherExpr) :
    forall stack, run (serialize expression) stack = some (expression :: stack) := by
  induction expression with
  | «variable» declaration => intro stack; rfl
  | constant value => intro stack; rfl
  | «not» body ih =>
      intro stack
      simp [serialize, run_append, ih, run, step]
  | «and» left right ihLeft ihRight =>
      intro stack
      simp [serialize, run_append, ihLeft, ihRight, run, step]
  | «or» left right ihLeft ihRight =>
      intro stack
      simp [serialize, run_append, ihLeft, ihRight, run, step]
  | ifExpr condition thenExpr elseExpr ihCondition ihThen ihElse =>
      intro stack
      simp [serialize, run_append, ihCondition, ihThen, ihElse, run, step]
  | letExpr binder value body ihValue ihBody =>
      intro stack
      simp [serialize, run_append, ihValue, ihBody, run, step]

def deserialize (tokens : List Token) : Option CypherExpr :=
  match run tokens [] with
  | some [expression] => some expression
  | _ => none

/-- S-1/S-2 kernel for this slice: serializer output is accepted and its AST
    is reconstructed exactly. -/
theorem deserialize_serialize (expression : CypherExpr) :
    deserialize (serialize expression) = some expression := by
  unfold deserialize
  rw [run_serialize expression []]

/-- A successful serialize/deserialize round trip preserves formal Cypher
    semantics for every resolved environment. -/
theorem serialization_preserves_denotation (expression : CypherExpr)
    (environment : Environment) :
    Option.map (evalCypher environment) (deserialize (serialize expression)) =
      some (evalCypher environment expression) := by
  rw [deserialize_serialize]
  rfl

#print axioms run_append
#print axioms run_serialize
#print axioms deserialize_serialize
#print axioms serialization_preserves_denotation

end Ocl2Gratra.AdmittedSerialization
