# SOICT 2026 invariant-level fragment audit

[`soict2026-fragment-classification.csv`](soict2026-fragment-classification.csv)
classifies every invariant in the eight-model corpus used by the paper's
violation-set table. There is one snapshot per model. The classification uses
the **published** construct table in `research/SOICT_conf/draft/cur.tex` and
the relevant type rules in `Isabelle-HolIsL/isabelle_stage1/OCL.thy`; it is
not the Java plugin's broader admission test. Each `OUT` reason names one
sufficient reason for exclusion, even if the expression has others.

| Subject | Objects | Links | Definitions | IN (tested) | OUT | Live USE--Neo4j agreement for IN |
|---|---:|---:|---:|---:|---:|---:|
| shop | 2 | 1 | 2 | 2 | 0 | 2/2 |
| advanced | 3 | 3 | 3 | 0 | 3 | 0/0 |
| company | 7 | 6 | 26 | 10 | 16 | 10/10 |
| comprehensive | 13 | 11 | 30 | 14 | 16 | 14/14 |
| medical | 17 | 19 | 36 | 16 | 20 | 16/16 |
| carrental | 37 | 54 | 25 | 12 | 13 | 12/12 |
| families | 10 | 9 | 10 | 7 | 3 | 7/7 |
| persons | 14 | 10 | 10 | 2 | 8 | 2/2 |
| **Total** | **103** | **113** | **142** | **63** | **79** | **63/63** |

`Objects` and `Links` count elements in the source snapshot, not physical
Neo4j nodes and relationships. These two columns come from the matching
run's `subjects.csv`.

`IN` means that the source expression uses only the declared paper fragment:
Boolean, Integer, and String expressions; unqualified binary navigation;
flat Set/Bag results without collection literals; and the listed one-binder
iterators and collection operations. A nested occurrence of two individually
one-binder iterators is **not** excluded merely for being nested: both the
published wording and the recursive Isabelle syntax admit it. For example,
`Department::HasMinimumWitness` and `Car::AtMostOneServiceDepot` are `IN`.
The audit also applies the Isabelle typing distinction between single-valued
navigation and collections: `isEmpty`/`notEmpty` on a 0..1 or 1 association
end relies on an implicit collection conversion in the executable pipeline,
so these expressions are `OUT` here.

Reason codes for `OUT` rows:

| Code | Exclusion from the paper fragment |
|---|---|
| `qualified_navigation` | Association-end lookup with a qualifier. |
| `association_class_navigation` | Association-class navigation. |
| `collection_operator` | An unlisted operation such as `includes`, `includesAll`, `union`, `intersection`, `reject`, or `excludesAll`. |
| `collection_literal` | Explicit `Set{...}` or `Bag{...}` expression. |
| `single_end_as_collection` | Collection operation on a single-valued association end without an explicit collection expression; the Isabelle type rule does not admit the implicit conversion. |
| `real` | Real literal or Real-valued attribute. |
| `division` | `/` rather than the listed Integer `+`, `-`, `*`. |
| `xor` | Unlisted Boolean `xor`. |
| `type_test_or_cast` | `oclIsKindOf`, `oclIsTypeOf`, or `oclAsType`. |
| `isUnique` | Unlisted iterator `isUnique`. |
| `other_scalar_operator` | Unlisted `abs`, `div`, `mod`, `min`, `max`, or `sum`. |

The canonical invariant sources are `example/shop-use-soil/shop.use`,
`example/advanced-adapters/advanced.use`,
`example/ocl2cypher-correctness-case-study/invariants.ocl`,
`example/uml-ocl-comprehensive-case-study/invariants.ocl`,
`example/medical/invariants.ocl`,
`example/carrental/umlmm/invariants-extended.ocl`,
`example/families-to-persons-correctness-case-study/families/families.use`,
and `example/families-to-persons-correctness-case-study/persons/invariants.ocl`,
respectively. Snapshot paths are specified by `ExampleCorpusExperimentIT`.
The SHA-256 hashes of all eight listed invariant-source files match the
matching run's `inputs-before.json`; the classification was therefore checked
against the same source texts that the run recorded.

The `neo4j` column is transcribed from
`ocl2cypher/target/experiments/20261022-213647-bc1f5d9a61db48cd9d9983f00a89db88/invariants.csv`.
Joining that record on `(subject, invariant)` gives exactly 142 matching
rows. All 63 `IN` rows have `liveStatus=PASS` and identical `useIds` and
`neo4jIds`; among the 79 `OUT` rows, 72 also passed the broader plugin
experiment and seven were not executed. The matching run's `summary.json`
reports 135 live USE--Neo4j comparisons and zero failures. Its `manifest.json`
records revision `5de178566e36d072a9b3c5fdccd2779405b6db9c` and a dirty
working tree. The `target/` evidence is generated build output, not a
version-controlled publication artifact; rerun the experiment or archive
its per-invariant output before relying on the numeric result externally.

This CSV is an invariant-level **scope classification**, not a machine-checked
certificate that each USE/SOIL input satisfies Isabelle's
`build_admissible` premise or that the Java compiler is a refinement of the
abstract compiler. The Isabelle theorem and these finite Neo4j comparisons
remain separate forms of evidence.

To reproduce the numerical audit, join the two CSV files on
`(subject, invariant)`, check that there are 142 unique keys on each side,
and require `liveStatus=PASS` and `useIds=neo4jIds` for every `IN` row.
Grouping the joined rows by `subject` and `paper_fragment` yields the table
above. Do not infer theorem admissibility from a successful plugin run.
