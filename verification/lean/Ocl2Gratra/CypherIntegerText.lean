import Ocl2Gratra.CypherParameterText
import Std.Data.String.ToInt

/-!
# Canonical Cypher integer text

The image is `Int.repr`, with no redundant zeroes or negative zero. The
decoder checks that an otherwise valid decimal spelling is canonical.
The executable INT64 restriction belongs to the later A5 numeric certificate.
-/

namespace Ocl2Gratra.CypherIntegerText

def print (value : Int) : String := Int.repr value

def parse (input : String) : Option Int := do
  let value ← input.toInt?
  if value.repr = input then some value else none

theorem parse_print (value : Int) : parse (print value) = some value := by
  simp [parse, print]

theorem print_injective : Function.Injective print := by
  intro left right h
  exact Int.repr_injective h

theorem parse_rejects_noncanonical (input : String)
    (h : ∀ value : Int, value.repr ≠ input) : parse input = none := by
  unfold parse
  cases hparse : input.toInt? with
  | none => simp
  | some value => simp [h value]

#print axioms parse_print
#print axioms print_injective
#print axioms parse_rejects_noncanonical

end Ocl2Gratra.CypherIntegerText
