import Ocl2Gratra.Boolean3Kleene

/-!
# OCL Equality Totality

Formalization of `OclEquality.java` — the total equality equation on
`OclValue`.  The defining invariant is that `equal` NEVER returns bottom.

Zero `sorry` or `admit`.
-/

namespace Ocl2Gratra.OclEqualityTotal

open Ocl2Gratra.Boolean3Kleene

/-- The result kind of OCL equality — structurally has NO bottom. -/
inductive BoolKind where
  | true
  | false
  deriving Repr, DecidableEq, Inhabited

/-- A carrier type tag. -/
inductive TypeTag where
  | boolean
  | integer
  | real
  | string
  | object (classKey : String)
  deriving Repr, DecidableEq, Inhabited

/-- Simplified OCL value universe. -/
inductive OclVal where
  | boolVal (b : Bool3)
  | intVal (n : Int)
  | realVal (num : Int) (den : Int)
  | strVal (s : String)
  | objVal (classKey : String) (id : String)
  | bottom (tag : TypeTag)
  deriving Repr, Inhabited, DecidableEq

/-- Type of a defined value. -/
def typeOf : OclVal → TypeTag
  | .boolVal _      => .boolean
  | .intVal _       => .integer
  | .realVal _ _    => .real
  | .strVal _       => .string
  | .objVal c _     => .object c
  | .bottom tag     => tag

def isBottom : OclVal → Bool
  | .boolVal _ => false
  | .intVal _ => false
  | .realVal _ _ => false
  | .strVal _ => false
  | .objVal _ _ => false
  | .bottom _ => true

def isDefined (v : OclVal) : Bool := !isBottom v

/-- Structural equality — total function into `{true, false}`.
    Uses `if h : ...` with explicit evidence, so proofs can use `if_pos`/`if_neg`. -/
def equal : OclVal → OclVal → BoolKind
  | .bottom t₁, .bottom t₂ => if _h : t₁ = t₂ then .true else .false
  | .bottom _, _           => .false
  | _, .bottom _           => .false
  | .boolVal b₁, .boolVal b₂ => if _h : b₁ = b₂ then .true else .false
  | .intVal n₁, .intVal n₂   => if _h : n₁ = n₂ then .true else .false
  | .realVal n₁ d₁, .realVal n₂ d₂ => if _h : n₁ = n₂ ∧ d₁ = d₂ then .true else .false
  | .strVal s₁, .strVal s₂   => if _h : s₁ = s₂ then .true else .false
  | .objVal c₁ i₁, .objVal c₂ i₂ => if _h : c₁ = c₂ ∧ i₁ = i₂ then .true else .false
  | _, _                     => .false

-- ── Totality ──────────────────────────────────────────────────────────

/-- THE defining invariant: equality never returns bottom. -/
theorem equal_total (a b : OclVal) : equal a b = .true ∨ equal a b = .false := by
  cases h : equal a b with
  | true => exact Or.inl rfl
  | false => exact Or.inr rfl

-- ── Reflexivity ───────────────────────────────────────────────────────

/-- Reflexivity on defined values. -/
theorem equal_refl_defined : ∀ v : OclVal, isDefined v = true → equal v v = .true := by
  intro v; cases v <;> simp [equal, isDefined, isBottom]

-- ── Symmetry ──────────────────────────────────────────────────────────

/-- Symmetry. -/
theorem equal_sym (a b : OclVal) : equal a b = equal b a := by
  cases a <;> cases b <;> simp [equal, eq_comm]

-- ── Typed bottom equality ─────────────────────────────────────────────

/-- A bottom equals itself. -/
theorem equal_bottom_self (t : TypeTag) : equal (.bottom t) (.bottom t) = .true := by
  simp [equal]

/-- Two bottoms of different types are unequal. -/
theorem equal_bottom_diff_type {t₁ t₂ : TypeTag} (h : t₁ ≠ t₂) :
    equal (.bottom t₁) (.bottom t₂) = .false := by
  simp [equal, h]

-- ── Type mismatch ─────────────────────────────────────────────────────

/-- Defined values of different types are unequal. -/
theorem equal_type_mismatch {a b : OclVal}
    (hType : typeOf a ≠ typeOf b) (hA : isDefined a = true) (hB : isDefined b = true) :
    equal a b = .false := by
  cases a <;> cases b <;>
    simp [equal, typeOf, isDefined, isBottom] at hType hA hB ⊢
  intro h
  exact (hType h).elim

-- ── Composite ─────────────────────────────────────────────────────────

/-- Defined values always compare to a definite result. -/
theorem equal_defined_total (a b : OclVal)
    (_hA : isDefined a = true) (_hB : isDefined b = true) :
    equal a b = .true ∨ equal a b = .false :=
  equal_total a b

/-! ## Extensional Set and occurrence-sensitive Bag equality -/

/-- Collection equality is separated from the atomic carrier so Set support
    and Bag occurrence semantics cannot accidentally be conflated. -/
inductive CollectionVal where
  | set (values : List OclVal)
  | bag (values : List OclVal)
  | bottomSet (elementType : TypeTag)
  | bottomBag (elementType : TypeTag)
  deriving Repr, DecidableEq

def ListSubset : List OclVal -> List OclVal -> Prop
  | [], _ => True
  | head :: tail, right => head ∈ right ∧ ListSubset tail right

noncomputable instance listSubsetDecidable (left right : List OclVal) :
    Decidable (ListSubset left right) := Classical.propDecidable _

theorem list_subset_cons_right {left right : List OclVal}
    (h : ListSubset left right) (value : OclVal) :
    ListSubset left (value :: right) := by
  induction left with
  | nil => trivial
  | cons head tail ih =>
      exact And.intro (by simp [h.1]) (ih h.2)

theorem list_subset_refl (values : List OclVal) : ListSubset values values := by
  induction values with
  | nil => trivial
  | cons head tail ih =>
      exact And.intro (by simp) (list_subset_cons_right ih head)

/-- Mathematical equality for the complete flat collection carrier.
    Sets compare extensionally; Bags compare by permutation (multiplicity);
    whole-collection bottoms compare only at the same kind and element type. -/
def CollectionEquivalent : CollectionVal -> CollectionVal -> Prop
  | .set left, .set right =>
      ListSubset left right ∧ ListSubset right left
  | .bag left, .bag right => List.Perm left right
  | .bottomSet left, .bottomSet right => left = right
  | .bottomBag left, .bottomBag right => left = right
  | _, _ => False

noncomputable instance collectionEquivalentDecidable (left right : CollectionVal) :
    Decidable (CollectionEquivalent left right) := Classical.propDecidable _

theorem collection_equivalent_refl (collection : CollectionVal) :
    CollectionEquivalent collection collection := by
  cases collection with
  | set values =>
      exact And.intro (list_subset_refl values) (list_subset_refl values)
  | bag values => exact List.Perm.refl values
  | bottomSet elementType => rfl
  | bottomBag elementType => rfl

theorem collection_equivalent_sym {left right : CollectionVal}
    (h : CollectionEquivalent left right) : CollectionEquivalent right left := by
  cases left <;> cases right <;> simp only [CollectionEquivalent] at h ⊢
  case set.set =>
    exact And.intro h.2 h.1
  case bag.bag => exact h.symm
  case bottomSet.bottomSet => exact h.symm
  case bottomBag.bottomBag => exact h.symm

/-- The proof-level equality result remains two-valued.  It is intentionally
    noncomputable here; Java refinement of the concrete equality algorithm is
    a separate obligation. -/
noncomputable def collectionEqual (left right : CollectionVal) : BoolKind :=
  if CollectionEquivalent left right then .true else .false

theorem collection_equal_total (left right : CollectionVal) :
    collectionEqual left right = .true ∨ collectionEqual left right = .false := by
  simp only [collectionEqual]
  split <;> simp_all

theorem collection_equal_refl (collection : CollectionVal) :
    collectionEqual collection collection = .true := by
  simp [collectionEqual, collection_equivalent_refl]

theorem collection_equal_sym (left right : CollectionVal) :
    collectionEqual left right = collectionEqual right left := by
  by_cases h : CollectionEquivalent left right
  · have reverse := collection_equivalent_sym h
    simp [collectionEqual, h, reverse]
  · have reverse : ¬ CollectionEquivalent right left := by
      intro hReverse
      exact h (collection_equivalent_sym hReverse)
    simp [collectionEqual, h, reverse]

/-- Set duplicates are observationally irrelevant. -/
theorem set_duplicate_irrelevant (value : OclVal) (tail : List OclVal) :
    CollectionEquivalent (.set (value :: value :: tail)) (.set (value :: tail)) := by
  constructor
  · exact And.intro (by simp) (And.intro (by simp)
      (list_subset_cons_right (list_subset_refl tail) value))
  · exact And.intro (by simp) (list_subset_cons_right
      (list_subset_cons_right (list_subset_refl tail) value) value)

/-- Bag equality retains multiplicity: adding one occurrence to each side
    preserves equality. -/
theorem bag_cons_congr (value : OclVal) {left right : List OclVal}
    (h : CollectionEquivalent (.bag left) (.bag right)) :
    CollectionEquivalent (.bag (value :: left)) (.bag (value :: right)) := by
  exact List.Perm.cons value h

#print axioms collection_equal_total
#print axioms collection_equal_refl
#print axioms collection_equal_sym
#print axioms set_duplicate_irrelevant
#print axioms bag_cons_congr

end Ocl2Gratra.OclEqualityTotal
