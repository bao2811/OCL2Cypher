/-!
# Canonical Cypher 5 token grammar

This module is the Lean transcription of
`research/TargetModel/TargetSigma-Canonical-Text-Grammar.md`.

It formalizes the *finite image of the project serializer*, not the whole
Cypher language.  Lexical payloads are represented by disjoint token
constructors (`qid`, `parameter`, `stringLit`, `integerLit`, `floatLit`).
Consequently ambiguity between escaped textual spellings is deliberately a
separate lexer theorem.  This module establishes the typed grammar and its
structural canonical printer.

The grammar in the normative Markdown file contains MATCH, WITH, UNWIND and
RETURN clauses.  It does not contain the wider metamodel's CALL-subquery
clause, so neither does this transcription.
-/

namespace Ocl2Gratra.CypherCanonicalGrammar

abbrev Identifier := String
abbrev ParameterName := String

inductive FunctionName where
  | size | head | last | toInteger | toFloat | abs | floor | round
  | type | count | collect
  deriving Repr, DecidableEq

inductive Quantifier where
  | any | all
  deriving Repr, DecidableEq

inductive BinOp where
  | or | xor | and | eq | ne | lt | le | gt | ge | inList | startsWith
  | add | sub | mul | div | mod | concat
  deriving Repr, DecidableEq

inductive Direction where
  | outgoing | incoming | undirected
  deriving Repr, DecidableEq

/-! The mutually recursive abstract syntax is the typed grammar.  `Path`
stores a first node and then relationship/node pairs, so the path-arity side
condition is true by construction. -/

mutual
  inductive Expr where
    | variable (name : Identifier)
    | parameter (name : ParameterName)
    | nullLit
    | boolLit (value : Bool)
    | integerLit (value : Int)
    /-- Canonical finite non-exponent decimal payload.  Its lexical validity
        is tracked by `LexicallyWellFormed`, below. -/
    | floatLit (canonical : String)
    | stringLit (value : String)
    | list (elements : List Expr)
    | map (entries : List (Identifier × Expr))
    | property (receiver : Expr) (key : Identifier)
    | not (operand : Expr)
    | negate (operand : Expr)
    | isNull (operand : Expr)
    | isNotNull (operand : Expr)
    | binary (operator : BinOp) (left right : Expr)
    | function (name : FunctionName) (distinct : Bool) (arguments : List Expr)
    | caseExpr (branches : List (Expr × Expr)) (elseBranch : Option Expr)
    | comprehension (binder : Identifier) (source : Expr)
        (predicate projection : Option Expr)
    | quantified (quantifier : Quantifier) (binder : Identifier)
        (source predicate : Expr)
    | reduce (accumulator : Identifier) (initial : Expr) (binder : Identifier)
        (source step : Expr)
    | existsSubquery (query : Query)
    | collectSubquery (query : Query)

  inductive Node where
    | mk (varName : Option Identifier) (labels : List Identifier)
        (properties : List (Identifier × Expr))

  inductive Rel where
    | mk (direction : Direction) (varName relType : Option Identifier)
        (bounds : Option (Nat × Nat))
        (properties : List (Identifier × Expr))

  inductive Path where
    | mk (first : Node) (tail : List (Rel × Node))

  inductive Pattern where
    | mk (paths : List Path)

  inductive Item where
    | mk (expression : Expr) (alias : Option Identifier)

  inductive Clause where
    | matchClause (pattern : Pattern) (whereExpr : Option Expr)
    | withClause (distinct : Bool) (items : List Item)
        (whereExpr : Option Expr)
    | unwindClause (expression : Expr) (alias : Identifier)
    | returnClause (distinct : Bool) (items : List Item)

  inductive Query where
    | mk (clauses : List Clause)
end

/-! ## Disjoint lexical/token domain -/

inductive Keyword where
  | cypher | match | where | with | unwind | as | return | distinct
  | null | true | false | not | is | case | when | then | else | end
  | inKw | reduce | exists | collect
  deriving Repr, DecidableEq

inductive Symbol where
  | lParen | rParen | lBracket | rBracket | lBrace | rBrace
  | comma | colon | dot | bar | assign
  | dash | leftArrowHead | rightArrowHead | star | range
  | op (operator : BinOp)
  deriving Repr, DecidableEq

inductive Token where
  | keyword (value : Keyword)
  | symbol (value : Symbol)
  | qid (decoded : Identifier)
  | parameter (decoded : ParameterName)
  | stringLit (decoded : String)
  | integerLit (decoded : Int)
  | floatLit (canonical : String)
  | functionName (value : FunctionName)
  | quantifier (value : Quantifier)
  | natural (value : Nat)
  | lf
  deriving Repr, DecidableEq

def commaSep (chunks : List (List Token)) : List Token :=
  List.intersperse [.symbol .comma] chunks |>.flatten

def colonEntries (entries : List (Identifier × List Token)) : List Token :=
  commaSep (entries.map fun entry =>
    [.qid entry.1, .symbol .colon] ++ entry.2)

def functionToken : FunctionName → Token := .functionName

/-! ## Structural canonical printer

At token level whitespace is not data.  The concrete renderer inserts the
spaces and LF spelling prescribed by the Markdown grammar. -/

mutual
  partial def printExpr : Expr → List Token
    | .variable name => [.qid name]
    | .parameter name => [.parameter name]
    | .nullLit => [.keyword .null]
    | .boolLit true => [.keyword .true]
    | .boolLit false => [.keyword .false]
    | .integerLit value => [.integerLit value]
    | .floatLit canonical => [.floatLit canonical]
    | .stringLit value => [.stringLit value]
    | .list elements =>
        [.symbol .lBracket] ++ commaSep (elements.map printExpr) ++
          [.symbol .rBracket]
    | .map entries =>
        [.symbol .lBrace] ++
          colonEntries (entries.map fun entry => (entry.1, printExpr entry.2)) ++
          [.symbol .rBrace]
    | .property receiver key =>
        printReceiver receiver ++ [.symbol .dot, .qid key]
    | .not operand =>
        [.keyword .not, .symbol .lParen] ++ printExpr operand ++ [.symbol .rParen]
    | .negate operand =>
        [.symbol .dash, .symbol .lParen] ++ printExpr operand ++ [.symbol .rParen]
    | .isNull operand =>
        [.symbol .lParen] ++ printExpr operand ++
          [.symbol .rParen, .keyword .is, .keyword .null]
    | .isNotNull operand =>
        [.symbol .lParen] ++ printExpr operand ++
          [.symbol .rParen, .keyword .is, .keyword .not, .keyword .null]
    | .binary operator left right =>
        [.symbol .lParen] ++ printExpr left ++ [.symbol (.op operator)] ++
          printExpr right ++ [.symbol .rParen]
    | .function name distinct arguments =>
        [functionToken name, .symbol .lParen] ++
          (if distinct then [.keyword .distinct] else []) ++
          commaSep (arguments.map printExpr) ++ [.symbol .rParen]
    | .caseExpr branches elseBranch =>
        [.keyword .case] ++
          (branches.flatMap fun branch =>
            [.keyword .when] ++ printExpr branch.1 ++ [.keyword .then] ++
              printExpr branch.2) ++
          (match elseBranch with
          | none => []
          | some expression => [.keyword .else] ++ printExpr expression) ++
          [.keyword .end]
    | .comprehension binder source predicate projection =>
        [.symbol .lBracket, .qid binder, .keyword .inKw] ++ printExpr source ++
          (match predicate with
          | none => []
          | some expression => [.keyword .where] ++ printExpr expression) ++
          (match projection with
          | none => []
          | some expression => [.symbol .bar] ++ printExpr expression) ++
          [.symbol .rBracket]
    | .quantified quantifier binder source predicate =>
        [.quantifier quantifier, .symbol .lParen, .qid binder, .keyword .inKw] ++
          printExpr source ++ [.keyword .where] ++ printExpr predicate ++
          [.symbol .rParen]
    | .reduce accumulator initial binder source step =>
        [.keyword .reduce, .symbol .lParen, .qid accumulator, .symbol .assign] ++
          printExpr initial ++ [.symbol .comma, .qid binder, .keyword .inKw] ++
          printExpr source ++ [.symbol .bar] ++ printExpr step ++ [.symbol .rParen]
    | .existsSubquery query =>
        [.keyword .exists, .symbol .lBrace] ++ printQuery query ++ [.symbol .rBrace]
    | .collectSubquery query =>
        [.keyword .collect, .symbol .lBrace] ++ printQuery query ++ [.symbol .rBrace]

  partial def printReceiver : Expr → List Token
    | expression@(.variable _) => printExpr expression
    | expression@(.parameter _) => printExpr expression
    | expression@(.property _ _) => printExpr expression
    | expression@(.function _ _ _) => printExpr expression
    | expression => [.symbol .lParen] ++ printExpr expression ++ [.symbol .rParen]

  partial def printNode : Node → List Token
    | .mk varName labels properties =>
        [.symbol .lParen] ++
          (match varName with | none => [] | some name => [.qid name]) ++
          (labels.flatMap fun label => [.symbol .colon, .qid label]) ++
          (if properties.isEmpty then [] else
            [.symbol .lBrace] ++
              colonEntries (properties.map fun entry =>
                (entry.1, printExpr entry.2)) ++
              [.symbol .rBrace]) ++
          [.symbol .rParen]

  partial def printRel : Rel → List Token
    | .mk direction varName relType bounds properties =>
        let initialTokens := match direction with
          | .incoming => [.symbol .leftArrowHead, .symbol .dash, .symbol .lBracket]
          | .outgoing | .undirected => [.symbol .dash, .symbol .lBracket]
        let suffix := match direction with
          | .outgoing => [.symbol .rBracket, .symbol .dash, .symbol .rightArrowHead]
          | .incoming | .undirected => [.symbol .rBracket, .symbol .dash]
        initialTokens ++
          (match varName with | none => [] | some name => [.qid name]) ++
          (match relType with
          | none => []
          | some name => [.symbol .colon, .qid name]) ++
          (match bounds with
          | none => []
          | some pair =>
              [.symbol .star, .natural pair.1, .symbol .range, .natural pair.2]) ++
          (if properties.isEmpty then [] else
            [.symbol .lBrace] ++
              colonEntries (properties.map fun entry =>
                (entry.1, printExpr entry.2)) ++
              [.symbol .rBrace]) ++ suffix

  partial def printPath : Path → List Token
    | .mk first tail =>
        printNode first ++
          (tail.flatMap fun segment => printRel segment.1 ++ printNode segment.2)

  partial def printPattern : Pattern → List Token
    | .mk paths => commaSep (paths.map printPath)

  partial def printItem : Item → List Token
    | .mk expression alias =>
        printExpr expression ++
          (match alias with | none => [] | some name => [.keyword .as, .qid name])

  partial def printClause : Clause → List Token
    | .matchClause pattern whereExpr =>
        [.keyword .match] ++ printPattern pattern ++
          (match whereExpr with
          | none => []
          | some expression => [.keyword .where] ++ printExpr expression) ++ [.lf]
    | .withClause distinct items whereExpr =>
        [.keyword .with] ++ (if distinct then [.keyword .distinct] else []) ++
          commaSep (items.map printItem) ++
          (match whereExpr with
          | none => []
          | some expression => [.keyword .where] ++ printExpr expression) ++ [.lf]
    | .unwindClause expression alias =>
        [.keyword .unwind] ++ printExpr expression ++ [.keyword .as, .qid alias, .lf]
    | .returnClause distinct items =>
        [.keyword .return] ++ (if distinct then [.keyword .distinct] else []) ++
          commaSep (items.map printItem) ++ [.lf]

  partial def printQuery : Query → List Token
    | .mk clauses => clauses.flatMap printClause
end

def printArtifact (query : Query) : List Token :=
  [.keyword .cypher, .integerLit 5, .lf] ++ printQuery query

/-! ## Structural well-formedness side conditions exposed by the EBNF -/

def UniqueKeys (entries : List (Identifier × α)) : Prop :=
  (entries.map Prod.fst).Nodup

mutual
  partial def Expr.localWF : Expr → Prop
    | .floatLit spelling => !spelling.isEmpty
    | .list elements => ∀ e ∈ elements, e.localWF
    | .map entries => UniqueKeys entries ∧ ∀ entry ∈ entries, entry.2.localWF
    | .property receiver _ => receiver.localWF
    | .not operand | .negate operand | .isNull operand | .isNotNull operand =>
        operand.localWF
    | .binary _ left right => left.localWF ∧ right.localWF
    | .function _ _ arguments => ∀ e ∈ arguments, e.localWF
    | .caseExpr branches elseBranch =>
        (∀ branch ∈ branches, branch.1.localWF ∧ branch.2.localWF) ∧
        (∀ e ∈ elseBranch, e.localWF)
    | .comprehension _ source predicate projection =>
        source.localWF ∧ (∀ e ∈ predicate, e.localWF) ∧
          (∀ e ∈ projection, e.localWF)
    | .quantified _ _ source predicate => source.localWF ∧ predicate.localWF
    | .reduce _ initial _ source step =>
        initial.localWF ∧ source.localWF ∧ step.localWF
    | .existsSubquery query | .collectSubquery query => query.localWF
    | _ => True

  partial def Node.localWF : Node → Prop
    | .mk _ _ properties =>
        UniqueKeys properties ∧ ∀ entry ∈ properties, entry.2.localWF

  partial def Rel.localWF : Rel → Prop
    | .mk _ _ _ bounds properties =>
        (∀ pair ∈ bounds, pair.1 ≤ pair.2) ∧ UniqueKeys properties ∧
          ∀ entry ∈ properties, entry.2.localWF

  partial def Path.localWF : Path → Prop
    | .mk first tail => first.localWF ∧
        ∀ segment ∈ tail, segment.1.localWF ∧ segment.2.localWF

  partial def Pattern.localWF : Pattern → Prop
    | .mk paths => !paths.isEmpty ∧ ∀ path ∈ paths, path.localWF

  partial def Item.localWF : Item → Prop
    | .mk expression _ => expression.localWF

  partial def Clause.localWF : Clause → Prop
    | .matchClause pattern whereExpr =>
        pattern.localWF ∧ ∀ e ∈ whereExpr, e.localWF
    | .withClause _ items whereExpr =>
        !items.isEmpty ∧ (∀ item ∈ items, item.localWF) ∧
          (∀ e ∈ whereExpr, e.localWF)
    | .unwindClause expression _ => expression.localWF
    | .returnClause _ items =>
        !items.isEmpty ∧ ∀ item ∈ items, item.localWF

  partial def Query.localWF : Query → Prop
    | .mk clauses => !clauses.isEmpty ∧ ∀ clause ∈ clauses, clause.localWF
end

def Query.endsInReturn : Query → Prop
  | .mk clauses => ∃ preceding distinct items,
      clauses = preceding ++ [.returnClause distinct items]

structure Artifact where
  query : Query
  requiresFinalReturn : Bool := true

def Artifact.localWF (artifact : Artifact) : Prop :=
  artifact.query.localWF ∧
    (artifact.requiresFinalReturn = true → artifact.query.endsInReturn)

end Ocl2Gratra.CypherCanonicalGrammar
