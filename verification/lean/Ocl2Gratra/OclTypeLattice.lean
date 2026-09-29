/-!
# OCL Type Lattice

Formalization of `OclType.java` — the type universe with the grammar
constraint that collections cannot be nested, plus the lattice `join`
operation and collection covariance.

Mirrors `OclTypeInterningTest` (6 tests) and `TypeConformance`.

Zero `sorry` or `admit`.
-/

namespace Ocl2Gratra.OclTypeLattice

/-- The full type universe.  Collections may NOT be nested (grammar
    constraint enforced by `OclType.requireAtomic`). -/
inductive TypeKind where
  | bool
  | int
  | real
  | str
  | class (name : String)
  | set (elem : TypeKind)
  | bag (elem : TypeKind)
  deriving Repr, DecidableEq, Inhabited

/-- Atomic types: the element types allowed inside collections. -/
inductive AtomicType where
  | bool
  | int
  | real
  | str
  | class (name : String)
  deriving Repr, DecidableEq, Inhabited

/-- Embedding of atomic types into the full universe. -/
def AtomicType.toType : AtomicType → TypeKind
  | .bool      => .bool
  | .int       => .int
  | .real      => .real
  | .str       => .str
  | .class n   => .class n

/-- Whether a type is atomic (not a collection). -/
def isAtomic : TypeKind → Bool
  | .bool | .int | .real | .str | .class _ => true
  | .set _ | .bag _ => false

/-- Whether a type is a collection. -/
def isCollection (t : TypeKind) : Bool := !isAtomic t

/-- The set constructor, restricted to atomic elements. -/
def set (a : AtomicType) : TypeKind := .set a.toType

/-- The bag constructor, restricted to atomic elements. -/
def bag (a : AtomicType) : TypeKind := .bag a.toType

-- ── Grammar constraint ────────────────────────────────────────────────

/-- No nested collections: a collection element is always atomic. -/
theorem no_nested_collections (a : AtomicType) :
    isAtomic (set a) = false ∧ isAtomic (bag a) = false := by
  cases a <;> constructor <;> rfl

/-- A set element is never itself a collection. -/
theorem set_element_atomic (a : AtomicType) : isAtomic a.toType = true := by
  cases a <;> rfl

/-- A bag element is never itself a collection. -/
theorem bag_element_atomic (a : AtomicType) : isAtomic a.toType = true := by
  cases a <;> rfl

-- ── Injectivity ───────────────────────────────────────────────────────

/-- The set constructor is injective. -/
theorem set_injective {a b : AtomicType} (h : set a = set b) : a = b := by
  cases a <;> cases b <;> cases h <;> rfl

/-- The bag constructor is injective. -/
theorem bag_injective {a b : AtomicType} (h : bag a = bag b) : a = b := by
  cases a <;> cases b <;> cases h <;> rfl

/-- The class constructor is injective. -/
theorem class_injective {a b : String} (h : TypeKind.class a = TypeKind.class b) : a = b := by
  cases h
  rfl

-- ── Conformance ───────────────────────────────────────────────────────

/-- Conformance relation: `a` conforms to `b`.  Numeric promotion
    (Integer → Real) and class subtyping are the interesting cases. -/
def conforms : TypeKind → TypeKind → Prop
  | .int, .real => True
  | .int, .int => True
  | .real, .real => True
  | .bool, .bool => True
  | .str, .str => True
  | .class a, .class b => a = b
  | .set a, .set b => conforms a b
  | .bag a, .bag b => conforms a b
  | _, _ => False

/-- Conformance is reflexive. -/
theorem conforms_refl (t : TypeKind) : conforms t t := by
  induction t with
  | bool | int | real | str => trivial
  | «class» name => rfl
  | set elem ih | bag elem ih => exact ih

/-- Integer conforms to Real (numeric promotion). -/
theorem int_conforms_real : conforms .int .real := by
  simp [conforms]

/-- Set conformance is covariant in the element type. -/
theorem set_covariant {a b : AtomicType} (h : conforms a.toType b.toType) :
    conforms (set a) (set b) := by
  simp [set, conforms, h]

/-- Bag conformance is covariant in the element type. -/
theorem bag_covariant {a b : AtomicType} (h : conforms a.toType b.toType) :
    conforms (bag a) (bag b) := by
  simp [bag, conforms, h]

-- ── Join (least common type) ──────────────────────────────────────────

/-- The join of two types: the least common supertype, or none if no
    common type exists (no bottom type in the lattice). -/
def join : TypeKind → TypeKind → Option TypeKind
  | .int, .int => some .int
  | .int, .real => some .real
  | .real, .int => some .real
  | .real, .real => some .real
  | .bool, .bool => some .bool
  | .str, .str => some .str
  | .class a, .class b => if a = b then some (.class a) else none
  | .set a, .set b => Option.map (fun j => .set j) (join a b)
  | .bag a, .bag b => Option.map (fun j => .bag j) (join a b)
  | _, _ => none

/-- Join is idempotent. -/
theorem join_idem (t : TypeKind) : join t t = some t := by
  induction t with
  | bool | int | real | str => rfl
  | «class» name => simp [join]
  | set elem ih => simp [join, ih]
  | bag elem ih => simp [join, ih]

/-- Join of Integer and Real is Real (numeric promotion). -/
theorem join_int_real : join .int .real = some .real := by
  simp [join]

/-- Join of Real and Integer is Real (commutativity on numerics). -/
theorem join_real_int : join .real .int = some .real := by
  simp [join]

/-- Join of two equal classes is that class. -/
theorem join_class_same (n : String) : join (.class n) (.class n) = some (.class n) := by
  simp [join]

/-- Join of two different classes is none (no common type). -/
theorem join_class_diff {a b : String} (h : a ≠ b) : join (.class a) (.class b) = none := by
  simp [join, h]

/-- Join of a class and a non-class is none (no mixing). -/
theorem join_class_nonclass (n : String) : join (.class n) .int = none := by
  simp [join]

/-- Join of a set and a bag is none (kind mismatch). -/
theorem join_set_bag (a b : AtomicType) : join (set a) (bag b) = none := by
  cases a <;> cases b <;> simp [join, set, bag]

/-! ## UML inheritance-aware conformance -/

/-- Reflexive-transitive closure of the metamodel's direct-superclass edge. -/
inductive ClassConforms (directSuper : String -> String -> Prop) :
    String -> String -> Prop where
  | refl (classKey : String) : ClassConforms directSuper classKey classKey
  | step {child parent ancestor : String} :
      directSuper child parent ->
      ClassConforms directSuper parent ancestor ->
      ClassConforms directSuper child ancestor

theorem class_conforms_trans (directSuper : String -> String -> Prop)
    {left middle right : String}
    (leftMiddle : ClassConforms directSuper left middle)
    (middleRight : ClassConforms directSuper middle right) :
    ClassConforms directSuper left right := by
  induction leftMiddle with
  | refl => exact middleRight
  | step edge tail ih => exact .step edge (ih middleRight)

/-- Inheritance-aware version of the flat production conformance relation. -/
def conformsWith (directSuper : String -> String -> Prop) :
    TypeKind -> TypeKind -> Prop
  | .int, .real => True
  | .int, .int => True
  | .real, .real => True
  | .bool, .bool => True
  | .str, .str => True
  | .class actual, .class declared => ClassConforms directSuper actual declared
  | .set actual, .set declared => conformsWith directSuper actual declared
  | .bag actual, .bag declared => conformsWith directSuper actual declared
  | _, _ => False

theorem conforms_with_refl (directSuper : String -> String -> Prop)
    (type : TypeKind) : conformsWith directSuper type type := by
  induction type with
  | bool | int | real | str => trivial
  | «class» classKey => exact .refl classKey
  | set element ih | bag element ih => exact ih

theorem conforms_with_trans (directSuper : String -> String -> Prop) :
    forall {left middle right : TypeKind},
      conformsWith directSuper left middle ->
      conformsWith directSuper middle right ->
      conformsWith directSuper left right := by
  intro left
  induction left with
  | bool =>
      intro middle right leftMiddle middleRight
      cases middle <;> cases right <;> simp_all [conformsWith]
  | int =>
      intro middle right leftMiddle middleRight
      cases middle <;> cases right <;> simp_all [conformsWith]
  | real =>
      intro middle right leftMiddle middleRight
      cases middle <;> cases right <;> simp_all [conformsWith]
  | str =>
      intro middle right leftMiddle middleRight
      cases middle <;> cases right <;> simp_all [conformsWith]
  | «class» classKey =>
      intro middle right leftMiddle middleRight
      cases middle <;> cases right <;> simp_all [conformsWith]
      exact class_conforms_trans directSuper leftMiddle middleRight
  | set element ih =>
      intro middle right leftMiddle middleRight
      cases middle <;> cases right <;> simp_all [conformsWith]
      exact ih leftMiddle middleRight
  | bag element ih =>
      intro middle right leftMiddle middleRight
      cases middle <;> cases right <;> simp_all [conformsWith]
      exact ih leftMiddle middleRight

theorem exact_type_implies_kind_of (directSuper : String -> String -> Prop)
    (classKey : String) : ClassConforms directSuper classKey classKey := by
  exact .refl classKey

theorem set_inheritance_covariant (directSuper : String -> String -> Prop)
    {actual declared : TypeKind}
    (h : conformsWith directSuper actual declared) :
    conformsWith directSuper (.set actual) (.set declared) := h

theorem bag_inheritance_covariant (directSuper : String -> String -> Prop)
    {actual declared : TypeKind}
    (h : conformsWith directSuper actual declared) :
    conformsWith directSuper (.bag actual) (.bag declared) := h

#print axioms class_conforms_trans
#print axioms conforms_with_refl
#print axioms conforms_with_trans
#print axioms exact_type_implies_kind_of
#print axioms set_inheritance_covariant
#print axioms bag_inheritance_covariant

end Ocl2Gratra.OclTypeLattice
