# Verification and Evidence Map

This directory separates formal proofs, manual/refinement obligations, finite
test evidence, and live database evidence. It does not claim that passing one
class of evidence automatically discharges another.

## Directory roles

| Directory | Role |
|---|---|
| [`lean/`](lean/) | Lean definitions and machine-checked theorems |
| [`contract/`](contract/) | Machine-readable proof/refinement registries |
| [`coverage/`](coverage/) | Mappings between formal constructors, Java components, and test coverage |
| [`runtime/`](runtime/) | Neo4j runtime matrices and runtime-boundary documentation |
| [`evidence/`](evidence/) | Captured reports and dated empirical evidence |
| [`instances/`](instances/) | Certified representation/metamodel instances used by checks |
| [`scripts/`](scripts/) | Reproduction and consistency checks |
| [`report/`](report/) | Generated proof reports |

## Main-paper theorem map

| Paper obligation | Lean declaration or evidence | Assurance boundary |
|---|---|---|
| Normalization | `p3_normalization` in [`FullP3P4.lean`](lean/Ocl2Gratra/FullP3P4.lean) | Formal slice, LEAN-CHECKED |
| Core-to-Q preservation | `p3_core_to_q` in [`FullP3P4.lean`](lean/Ocl2Gratra/FullP3P4.lean) | Formal slice, LEAN-CHECKED |
| Q-to-formal-target preservation | `p4_q_to_target` in [`FullP3P4.lean`](lean/Ocl2Gratra/FullP3P4.lean) | Formal slice, LEAN-CHECKED |
| Formal artifact round trip | `parse_serialize` in [`FullP3P4.lean`](lean/Ocl2Gratra/FullP3P4.lean) | Formal artifact only; not the production Cypher parser |
| P3/P4 composition | `p3_p4_composition` in [`FullP3P4.lean`](lean/Ocl2Gratra/FullP3P4.lean) | Formal slice, LEAN-CHECKED |
| Production frontend/compiler refinement | implementation matrices and regression tests | PARTIAL |
| Graph-construction adequacy | abstract invariant proof plus adequacy checks | PROVED-MANUAL / TEST-SUPPORTED |
| Production Cypher serialization | parser acceptance and structural tests | PARTIAL |
| Neo4j execution and decoding | [`runtime/`](runtime/) and captured live comparisons | LIVE-TESTED |

The exact declaration inventory and trusted-base notes are recorded in
[`lean/MACHINE-PROOF-LEDGER.md`](lean/MACHINE-PROOF-LEDGER.md). The formal
artifact theorem `parse_serialize` must not be described as a proof of the
production Cypher text round trip.

## Dependency chain

The end-to-end result uses the following dependency structure:

```text
source admissibility and frontend preservation
              |
observational representation adequacy
              |
Core-to-Q preservation
              |
violation projection
              |
Q-to-formal-target refinement (R1)
              |
formal target ID projection (R2)
              |
execution and decoding refinement (R3)
              v
exact equality of source and target violation-ID sets
```

Observational representation adequacy is a side condition, not a compilation
stage. R1, R2, and R3 are separate obligations and must not be replaced by the
conclusion they are intended to establish.

## Reproduction

From `verification/lean`:

```powershell
lake build Ocl2Gratra
```

From the repository root:

```powershell
./verification/scripts/check-mechanized-proof.ps1
./verification/scripts/check-verification-contract.ps1
./verification/scripts/check-implementation-conformance.ps1
```

Scripts that regenerate reports or runtime evidence may write new dated files.
Review those files before treating them as the evidence snapshot associated
with a paper version.
