import Ocl2Gratra.CypherIdentifierText

/-!
# Canonical Cypher single-quoted string fragment

This module handles apostrophes, backslashes, and the five named control
escapes. The normative grammar additionally requires `\uHHHH` for other
control scalars; those remain outside `admitted` here.
-/

namespace Ocl2Gratra.CypherStringText

def escapeCode (c : Char) : Option Char :=
  if c = '\\' then some '\\'
  else if c = '\'' then some '\''
  else if c = '\n' then some 'n'
  else if c = '\r' then some 'r'
  else if c = '\t' then some 't'
  else if c = Char.ofNat 8 then some 'b'
  else if c = Char.ofNat 12 then some 'f'
  else none

def decodeCode : Char → Option Char
  | '\\' => some '\\'
  | '\'' => some '\''
  | 'n' => some '\n'
  | 'r' => some '\r'
  | 't' => some '\t'
  | 'b' => some (Char.ofNat 8)
  | 'f' => some (Char.ofNat 12)
  | _ => none

def escape : List Char → List Char
  | [] => []
  | c :: rest =>
      match escapeCode c with
      | some code => '\\' :: code :: escape rest
      | none => c :: escape rest

def decodeBody : List Char → Option (List Char × List Char)
  | [] => none
  | '\'' :: rest => some ([], rest)
  | '\\' :: code :: rest => do
      let c ← decodeCode code
      let (payload, suffix) ← decodeBody rest
      pure (c :: payload, suffix)
  | '\\' :: [] => none
  | c :: rest =>
      (decodeBody rest).map fun (payload, suffix) => (c :: payload, suffix)

def quote (payload : List Char) : List Char :=
  '\'' :: (escape payload ++ ['\''])

def parseExact : List Char → Option (List Char)
  | '\'' :: rest => do
      let (payload, suffix) ← decodeBody rest
      if suffix.isEmpty then some payload else none
  | _ => none

theorem decodeCode_escapeCode (c code : Char)
    (h : escapeCode c = some code) : decodeCode code = some c := by
  by_cases h₁ : c = '\\'
  · subst c; simp [escapeCode] at h; subst code; rfl
  by_cases h₂ : c = '\''
  · subst c; simp [escapeCode] at h; subst code; rfl
  by_cases h₃ : c = '\n'
  · subst c; simp [escapeCode] at h; subst code; rfl
  by_cases h₄ : c = '\r'
  · subst c; simp [escapeCode] at h; subst code; rfl
  by_cases h₅ : c = '\t'
  · subst c; simp [escapeCode] at h; subst code; rfl
  by_cases h₆ : c = Char.ofNat 8
  · subst c; simp [escapeCode] at h; subst code; rfl
  by_cases h₇ : c = Char.ofNat 12
  · subst c; simp [escapeCode] at h; subst code; rfl
  simp [escapeCode, h₁, h₂, h₃, h₄, h₅, h₆, h₇] at h

theorem escapeCode_none_ne_slash (c : Char)
    (h : escapeCode c = none) : c ≠ '\\' := by
  intro hc
  subst c
  simp [escapeCode] at h

theorem escapeCode_none_ne_quote (c : Char)
    (h : escapeCode c = none) : c ≠ '\'' := by
  intro hc
  subst c
  simp [escapeCode] at h

theorem decodeBody_escape (payload : List Char) :
    decodeBody (escape payload ++ ['\'']) = some (payload, []) := by
  induction payload with
  | nil => rfl
  | cons c rest ih =>
      cases h : escapeCode c with
      | some code =>
          have hcode := decodeCode_escapeCode c code h
          simp [escape, h, decodeBody, hcode, ih]
      | none =>
          have hs := escapeCode_none_ne_slash c h
          have hq := escapeCode_none_ne_quote c h
          simp [escape, h, decodeBody, hs, ih]

theorem parseExact_quote (payload : List Char) :
    parseExact (quote payload) = some payload := by
  simp [parseExact, quote, decodeBody_escape]

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

/-- The currently mechanized canonical domain. Other Cc scalars need the
    four-hex-digit Unicode escape specified by the paper. -/
def admitted (payload : String) : Bool :=
  payload.toList.all fun c =>
    !CypherIdentifierText.isControl c || (escapeCode c).isSome

/-- Checks the decoded payload domain. It does not yet reject every
    non-canonical textual spelling (notably raw named-control characters). -/
def parseAdmittedString (input : String) : Option String := do
  let payload ← parseString input
  if admitted payload then some payload else none

theorem parseAdmittedString_quoteString (payload : String)
    (h : admitted payload = true) :
    parseAdmittedString (quoteString payload) = some payload := by
  simp [parseAdmittedString, parseString_quoteString, h]

/-- Extend the character-level leaf parser with Cypher string literals. -/
def parseLeaf (input : String) : Option CypherCanonicalGrammar.Expr :=
  match input.toList with
  | '\'' :: _ => (parseAdmittedString input).map .stringLit
  | _ => CypherIdentifierText.parseLeaf input

theorem parseLeaf_string (payload : String) (h : admitted payload = true) :
    parseLeaf (quoteString payload) = some (.stringLit payload) := by
  have hhead : (quoteString payload).toList =
      '\'' :: (escape payload.toList ++ ['\'']) := by
    simp [quoteString, quote]
  simp [parseLeaf, hhead, parseAdmittedString_quoteString payload h]

theorem parseLeaf_variable (name : String)
    (hname : CypherIdentifierText.admitted name = true) :
    parseLeaf (CypherIdentifierText.quoteString name) =
      some (.variable name) := by
  have hhead : (CypherIdentifierText.quoteString name).toList =
      '`' :: (CypherIdentifierText.escape name.toList ++ ['`']) := by
    simp [CypherIdentifierText.quoteString, CypherIdentifierText.quote]
  simp [parseLeaf, hhead, CypherIdentifierText.parseLeaf_variable name hname]

theorem parseLeaf_null : parseLeaf "null" = some .nullLit := by rfl
theorem parseLeaf_true : parseLeaf "true" = some (.boolLit true) := by rfl
theorem parseLeaf_false : parseLeaf "false" = some (.boolLit false) := by rfl

#print axioms decodeBody_escape
#print axioms parseExact_quote
#print axioms parseString_quoteString
#print axioms quoteString_injective
#print axioms parseAdmittedString_quoteString
#print axioms parseLeaf_string
#print axioms parseLeaf_variable

end Ocl2Gratra.CypherStringText
