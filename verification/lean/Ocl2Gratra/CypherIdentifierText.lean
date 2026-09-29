import Ocl2Gratra.CypherCanonicalGrammar

/-!
# Concrete Cypher quoted-identifier text

This module proves one lexical boundary of the canonical Cypher grammar on
actual characters, not on an AST-shaped `Artifact`.  A backtick in the
identifier payload is doubled; the decoder consumes exactly one quoted
identifier and returns the unconsumed suffix.

This is deliberately narrower than a parser for the whole query grammar.
-/

namespace Ocl2Gratra.CypherIdentifierText

/-- Escape the payload of a backtick-quoted Cypher identifier. -/
def escape : List Char → List Char
  | [] => []
  | c :: rest =>
      if c = '`' then '`' :: '`' :: escape rest else c :: escape rest

/-- Read a quoted identifier body, leaving any following text untouched. -/
def decodeBody : List Char → Option (List Char × List Char)
  | [] => none
  | '`' :: '`' :: rest =>
      (decodeBody rest).map fun (payload, suffix) => ('`' :: payload, suffix)
  | '`' :: rest => some ([], rest)
  | c :: rest =>
      (decodeBody rest).map fun (payload, suffix) => (c :: payload, suffix)

/-- Emit the opening and closing delimiters as well as the escaped payload. -/
def quote (payload : List Char) : List Char :=
  '`' :: (escape payload ++ ['`'])

/-- Parse one quoted identifier followed by an arbitrary suffix. -/
def parsePrefix : List Char → Option (List Char × List Char)
  | '`' :: rest => decodeBody rest
  | _ => none

/-- Parse a whole quoted identifier, rejecting trailing characters. -/
def parseExact (input : List Char) : Option (List Char) := do
  let (payload, suffix) ← parsePrefix input
  if suffix.isEmpty then some payload else none

theorem decodeBody_escape (payload : List Char) :
    decodeBody (escape payload ++ ['`']) = some (payload, []) := by
  induction payload with
  | nil => rfl
  | cons c rest ih =>
      by_cases h : c = '`'
      · subst c
        simp [escape, decodeBody, ih]
      · simp [escape, decodeBody, h, ih]

theorem parsePrefix_quote (payload : List Char) :
    parsePrefix (quote payload) = some (payload, []) := by
  simp [parsePrefix, quote, decodeBody_escape]

theorem parseExact_quote (payload : List Char) :
    parseExact (quote payload) = some payload := by
  simp [parseExact, parsePrefix_quote]

theorem quote_injective : Function.Injective quote := by
  intro left right h
  have parsed := congrArg parseExact h
  simpa [parseExact_quote] using parsed

/-- The same codec at Lean's actual UTF-8 `String` boundary. -/
def quoteString (payload : String) : String :=
  String.ofList (quote payload.toList)

def parseString (input : String) : Option String :=
  (parseExact input.toList).map String.ofList

theorem parseString_quoteString (payload : String) :
    parseString (quoteString payload) = some payload := by
  simp [parseString, quoteString, parseExact_quote, String.ofList_toList]

theorem quoteString_injective : Function.Injective quoteString := by
  intro left right h
  have parsed := congrArg parseString h
  simpa [parseString_quoteString] using parsed

/-- Unicode general-category Cc ranges (C0 and C1 controls). -/
def isControl (c : Char) : Bool :=
  c.toNat < 0x20 || (0x7f ≤ c.toNat && c.toNat ≤ 0x9f)

/-- The domain of `QId` in the normative canonical grammar. -/
def admitted (name : String) : Bool :=
  !name.isEmpty && name.toList.all (fun c => !isControl c)

/-- Unlike `parseString`, this enforces the grammar's payload admission. -/
def parseQId (input : String) : Option String := do
  let name ← parseString input
  if admitted name then some name else none

theorem parseQId_quoteString (name : String) (h : admitted name = true) :
    parseQId (quoteString name) = some name := by
  simp [parseQId, parseString_quoteString, h]

theorem parseQId_rejects_empty : parseQId "``" = none := by rfl

/-- A concrete parser for the variable and Boolean/null leaves of the
    canonical `Expr` grammar. Unsupported text fails explicitly. -/
def parseLeaf (input : String) : Option CypherCanonicalGrammar.Expr :=
  match input.toList with
  | '`' :: _ => (parseQId input).map .variable
  | ['n', 'u', 'l', 'l'] => some .nullLit
  | ['t', 'r', 'u', 'e'] => some (.boolLit true)
  | ['f', 'a', 'l', 's', 'e'] => some (.boolLit false)
  | _ => none

theorem parseLeaf_variable (name : String) (hname : admitted name = true) :
    parseLeaf (quoteString name) =
      some (.variable name) := by
  have h : (quoteString name).toList =
      '`' :: (escape name.toList ++ ['`']) := by
    simp [quoteString, quote]
  simp [parseLeaf, h, parseQId_quoteString name hname]

theorem parseLeaf_null : parseLeaf "null" = some .nullLit := by rfl
theorem parseLeaf_true : parseLeaf "true" = some (.boolLit true) := by rfl
theorem parseLeaf_false : parseLeaf "false" = some (.boolLit false) := by rfl

theorem parseLeaf_rejects_unterminated : parseLeaf "`unterminated" = none := by
  rfl

#print axioms decodeBody_escape
#print axioms parsePrefix_quote
#print axioms parseExact_quote
#print axioms quote_injective
#print axioms parseString_quoteString
#print axioms quoteString_injective
#print axioms parseQId_quoteString
#print axioms parseQId_rejects_empty
#print axioms parseLeaf_variable
#print axioms parseLeaf_null
#print axioms parseLeaf_true
#print axioms parseLeaf_false
#print axioms parseLeaf_rejects_unterminated

end Ocl2Gratra.CypherIdentifierText
