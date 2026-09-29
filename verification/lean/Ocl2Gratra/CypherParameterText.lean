import Ocl2Gratra.CypherStringText

/-!
# Canonical Cypher parameter-name text

The project serializer admits ASCII names `[A-Za-z_][A-Za-z0-9_]*` and
emits `$name`. This module checks that exact lexical policy and its inverse.
-/

namespace Ocl2Gratra.CypherParameterText

def asciiLetter (c : Char) : Bool :=
  (65 ≤ c.toNat && c.toNat ≤ 90) ||
    (97 ≤ c.toNat && c.toNat ≤ 122)

def initialChar (c : Char) : Bool :=
  asciiLetter c || c = '_'

def subsequentChar (c : Char) : Bool :=
  initialChar c || (48 ≤ c.toNat && c.toNat ≤ 57)

def admitted (name : String) : Bool :=
  match name.toList with
  | [] => false
  | first :: rest => initialChar first && rest.all subsequentChar

def print (name : String) : String :=
  String.ofList ('$' :: name.toList)

def parse (input : String) : Option String :=
  match input.toList with
  | '$' :: chars =>
      let name := String.ofList chars
      if admitted name then some name else none
  | _ => none

theorem parse_print (name : String) (h : admitted name = true) :
    parse (print name) = some name := by
  simp [parse, print, String.ofList_toList, h]

theorem print_injective : Function.Injective print := by
  intro left right h
  have stripped := congrArg String.toList h
  simp [print] at stripped
  exact String.toList_inj.mp stripped

theorem parse_rejects_empty : parse "$" = none := by rfl
theorem parse_rejects_digit_initial : parse "$1abc" = none := by rfl
theorem parse_rejects_quoted_name : parse "$`abc`" = none := by rfl

/-- Concrete text parser for the currently checked CypherAS leaf fragment. -/
def parseLeaf (input : String) : Option CypherCanonicalGrammar.Expr :=
  match input.toList with
  | '$' :: _ => (parse input).map .parameter
  | _ => CypherStringText.parseLeaf input

theorem parseLeaf_parameter (name : String) (h : admitted name = true) :
    parseLeaf (print name) = some (.parameter name) := by
  have hhead : (print name).toList = '$' :: name.toList := by
    simp [print]
  simp [parseLeaf, hhead, parse_print name h]

theorem parseLeaf_string (payload : String)
    (h : CypherStringText.admitted payload = true) :
    parseLeaf (CypherStringText.quoteString payload) =
      some (.stringLit payload) := by
  have hhead : (CypherStringText.quoteString payload).toList =
      '\'' :: (CypherStringText.escape payload.toList ++ ['\'']) := by
    simp [CypherStringText.quoteString, CypherStringText.quote]
  simp [parseLeaf, hhead, CypherStringText.parseLeaf_string payload h]

theorem parseLeaf_variable (name : String)
    (h : CypherIdentifierText.admitted name = true) :
    parseLeaf (CypherIdentifierText.quoteString name) =
      some (.variable name) := by
  have hhead : (CypherIdentifierText.quoteString name).toList =
      '`' :: (CypherIdentifierText.escape name.toList ++ ['`']) := by
    simp [CypherIdentifierText.quoteString, CypherIdentifierText.quote]
  simp [parseLeaf, hhead, CypherStringText.parseLeaf_variable name h]

theorem parseLeaf_null : parseLeaf "null" = some .nullLit := by rfl
theorem parseLeaf_true : parseLeaf "true" = some (.boolLit true) := by rfl
theorem parseLeaf_false : parseLeaf "false" = some (.boolLit false) := by rfl

/-- The exact leaf fragment for which concrete Cypher text has a
    machine-checked parser/printer left inverse. -/
inductive AdmittedLeaf where
  | variable (name : String)
      (valid : CypherIdentifierText.admitted name = true)
  | parameter (name : String) (valid : admitted name = true)
  | stringLit (payload : String)
      (valid : CypherStringText.admitted payload = true)
  | nullLit
  | trueLit
  | falseLit

def AdmittedLeaf.toExpr : AdmittedLeaf → CypherCanonicalGrammar.Expr
  | .variable name _ => .variable name
  | .parameter name _ => .parameter name
  | .stringLit payload _ => .stringLit payload
  | .nullLit => .nullLit
  | .trueLit => .boolLit true
  | .falseLit => .boolLit false

def AdmittedLeaf.printText : AdmittedLeaf → String
  | .variable name _ => CypherIdentifierText.quoteString name
  | .parameter name _ => print name
  | .stringLit payload _ => CypherStringText.quoteString payload
  | .nullLit => "null"
  | .trueLit => "true"
  | .falseLit => "false"

theorem parseLeaf_printText (leaf : AdmittedLeaf) :
    parseLeaf leaf.printText = some leaf.toExpr := by
  cases leaf with
  | «variable» name valid => exact parseLeaf_variable name valid
  | parameter name valid => exact parseLeaf_parameter name valid
  | stringLit payload valid => exact parseLeaf_string payload valid
  | nullLit => exact parseLeaf_null
  | trueLit => exact parseLeaf_true
  | falseLit => exact parseLeaf_false

#print axioms parse_print
#print axioms print_injective
#print axioms parseLeaf_parameter
#print axioms parseLeaf_string
#print axioms parseLeaf_variable
#print axioms parseLeaf_printText

end Ocl2Gratra.CypherParameterText
