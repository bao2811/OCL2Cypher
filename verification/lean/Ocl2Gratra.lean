import Ocl2Gratra.Boolean3Kleene
import Ocl2Gratra.CollectionPipeline
import Ocl2Gratra.ExactRealField
import Ocl2Gratra.IntegerRangeCertificate
import Ocl2Gratra.OclEqualityTotal
import Ocl2Gratra.OclTypeLattice
import Ocl2Gratra.ProductionQSyntax
import Ocl2Gratra.ProductionEndToEnd
import Ocl2Gratra.ScalarCodec
import Ocl2Gratra.DifferentialTheorem
import Ocl2Gratra.AdmittedPipeline
import Ocl2Gratra.AdmittedSerialization
import Ocl2Gratra.FullP3P4
import Ocl2Gratra.CypherCanonicalGrammar
import Ocl2Gratra.CypherIdentifierText
import Ocl2Gratra.CypherStringText
import Ocl2Gratra.CypherParameterText
import Ocl2Gratra.CypherIntegerText

/-!
# Ocl2Gratra machine-checked entry point

This is the root module of the formal development.  `FullP3P4` supplies the
constructor-complete normalization/Core-to-Q/target preservation proof for all
20 expression and seven plan constructors.  The theorem below additionally
closes an executable admitted Boolean pipeline, including canonical token
serialization:

`resolved OCL -> Core -> Q -> formal Cypher AST -> tokens -> parsed AST -> IDs`.

It is intentionally a theorem about the mathematical languages defined in
this Lean project.  It neither assumes nor claims refinement of the Java
implementation or of a concrete Neo4j release.

There are no project axioms, `sorry`, or `admit` in this composition.
-/

namespace Ocl2Gratra.VerifiedPipeline

open Ocl2Gratra.Boolean3Kleene
open Ocl2Gratra.AdmittedPipeline
open Ocl2Gratra.AdmittedSerialization

/-- The complete formal artifact emitted for one admitted surface expression. -/
def compile (expression : SurfaceExpr) : List Token :=
  serialize (realizeCore (normalize expression))

/-- Formal text semantics: parse the canonical token stream and evaluate the
    reconstructed Cypher AST.  Parse failure remains explicit as `none`. -/
def evalCompiled (environment : Environment) (expression : SurfaceExpr) : Option Bool3 :=
  Option.map (evalCypher environment) (deserialize (compile expression))

/-- The serializer/parser boundary reconstructs exactly the AST produced by
    realization. -/
theorem compile_round_trip (expression : SurfaceExpr) :
    deserialize (compile expression) =
      some (realizeCore (normalize expression)) := by
  unfold compile
  exact deserialize_serialize (realizeCore (normalize expression))

/-- Full value preservation from resolved surface OCL through serialization
    and parsing. -/
theorem compiled_value_preservation (expression : SurfaceExpr)
    (environment : Environment) :
    evalCompiled environment expression =
      some (evalSurface environment expression) := by
  unfold evalCompiled
  rw [compile_round_trip]
  simp only [Option.map_some]
  rw [end_to_end_value_preservation]

/-- All semantic stages agree on the same three-valued result.  Keeping the
    equalities together makes the commuting pipeline explicit at this entry
    point instead of hiding it behind a single final equality. -/
theorem all_semantic_stages_agree (expression : SurfaceExpr)
    (environment : Environment) :
    evalCore environment (normalize expression) =
        evalSurface environment expression /\
    evalQ environment (translateCore (normalize expression)) =
        evalSurface environment expression /\
    evalCypher environment (realizeCore (normalize expression)) =
        evalSurface environment expression /\
    evalCompiled environment expression =
        some (evalSurface environment expression) := by
  constructor
  · exact normalization_preserves_denotation expression environment
  constructor
  · calc
      evalQ environment (translateCore (normalize expression)) =
          evalCore environment (normalize expression) :=
        core_to_q_preserves_denotation (normalize expression) environment
      _ = evalSurface environment expression :=
        normalization_preserves_denotation expression environment
  constructor
  · exact end_to_end_value_preservation expression environment
  · exact compiled_value_preservation expression environment

/-- Evaluate the compiled artifact once for every object and apply the OCL
    violation rule: both `false` and Boolean bottom are violations.  The outer
    option distinguishes parse failure from an empty violation list. -/
def compiledViolationIds (expression : SurfaceExpr)
    (objects : List ObjectState) : Option (List String) :=
  match deserialize (compile expression) with
  | none => none
  | some cypher =>
      some (objects.filterMap fun object =>
        if evalCypher object.environment cypher = .true then none
        else some object.stableId)

/-- Serialization, parsing, evaluation, and violation projection preserve
    exactly the source violation identifiers. -/
theorem compiled_exact_violation_ids (expression : SurfaceExpr)
    (objects : List ObjectState) :
    compiledViolationIds expression objects =
      some (sourceViolationIds expression objects) := by
  unfold compiledViolationIds
  rw [compile_round_trip]
  change some (cypherViolationIds expression objects) =
    some (sourceViolationIds expression objects)
  rw [exact_violation_ids]

/-- One theorem collecting the syntactic round trip, denotational
    preservation, and exact violation-ID result of the formal pipeline. -/
theorem formal_pipeline_correct (expression : SurfaceExpr)
    (environment : Environment) (objects : List ObjectState) :
    deserialize (compile expression) =
        some (realizeCore (normalize expression)) /\
    evalCompiled environment expression =
        some (evalSurface environment expression) /\
    compiledViolationIds expression objects =
        some (sourceViolationIds expression objects) := by
  exact ⟨compile_round_trip expression,
    compiled_value_preservation expression environment,
    compiled_exact_violation_ids expression objects⟩

#print axioms compile_round_trip
#print axioms compiled_value_preservation
#print axioms all_semantic_stages_agree
#print axioms compiled_exact_violation_ids
#print axioms formal_pipeline_correct

end Ocl2Gratra.VerifiedPipeline
