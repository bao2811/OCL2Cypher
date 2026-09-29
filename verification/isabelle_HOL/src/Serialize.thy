theory Serialize
  imports Realize
begin

text \<open>
Canonical postfix token grammar for the admitted TargetSigma Boolean slice.
This is the lexed formal text boundary: rendering tokens as concrete UTF-8
Cypher is a separate refinement obligation.  Serialization and parsing below
are executable and their round-trip is proved.
\<close>

datatype cy_token =
    Tok_Var string
  | Tok_Property string
  | Tok_NavOne string
  | Tok_NavMany string bool
  | Tok_Bool bool
  | Tok_Int int
  | Tok_Bottom
  | Tok_Not
  | Tok_IsNull
  | Tok_And
  | Tok_Or
  | Tok_Xor
  | Tok_Equal
  | Tok_Lt
  | Tok_Le
  | Tok_Gt
  | Tok_Ge
  | Tok_If
  | Tok_Reduce string string

fun serialize_expr :: "cy_expr \<Rightarrow> cy_token list option" where
  "serialize_expr (TargetSigma.CE_VarE v) = Some [Tok_Var (TargetSigma.cv_name v)]"
| "serialize_expr TargetSigma.CE_Null = Some [Tok_Bottom]"
| "serialize_expr (TargetSigma.CE_BoolLit b) = Some [Tok_Bool b]"
| "serialize_expr (TargetSigma.CE_IntLit n) = Some [Tok_Int n]"
| "serialize_expr (TargetSigma.CE_PropAccess receiver property) =
     map_option (\<lambda>tokens. tokens @ [Tok_Property property])
       (serialize_expr receiver)"
| "serialize_expr (TargetSigma.CE_NavOneE receiver observer) =
     map_option (\<lambda>tokens. tokens @ [Tok_NavOne observer])
       (serialize_expr receiver)"
| "serialize_expr (TargetSigma.CE_NavManyE receiver observer shape) =
     (if shape = RS_Set \<or> shape = RS_Bag then
        map_option
          (\<lambda>tokens. tokens @ [Tok_NavMany observer (shape = RS_Set)])
          (serialize_expr receiver)
      else None)"
| "serialize_expr (TargetSigma.CE_Unary CUNot body) =
     map_option (\<lambda>ts. ts @ [Tok_Not]) (serialize_expr body)"
| "serialize_expr (TargetSigma.CE_Unary CUIsNull body) =
     map_option (\<lambda>ts. ts @ [Tok_IsNull]) (serialize_expr body)"
| "serialize_expr (TargetSigma.CE_Binary CBX_And left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_And])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Binary CBX_Or left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_Or])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Binary CBX_Xor left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_Xor])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Binary CBX_Equal left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_Equal])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Binary CBX_Lt left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_Lt])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Binary CBX_Le left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_Le])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Binary CBX_Gt left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_Gt])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Binary CBX_Ge left right) =
     (case (serialize_expr left, serialize_expr right) of
        (Some ls, Some rs) \<Rightarrow> Some (ls @ rs @ [Tok_Ge])
      | _ \<Rightarrow> None)"
| "serialize_expr (TargetSigma.CE_Case [(condition,then_e)] (Some else_e)) =
     (case (serialize_expr condition, serialize_expr then_e, serialize_expr else_e) of
        (Some cs, Some ts, Some es) \<Rightarrow> Some (cs @ ts @ es @ [Tok_If])
      | _ \<Rightarrow> None)"
| "serialize_expr
     (TargetSigma.CE_Reduce accumulator initial variable source step) =
     (case (serialize_expr initial, serialize_expr source,
            serialize_expr step) of
        (Some is, Some ss, Some ts) \<Rightarrow>
          Some (is @ ss @ ts @
            [Tok_Reduce (TargetSigma.cv_name accumulator)
              (TargetSigma.cv_name variable)])
      | _ \<Rightarrow> None)"
| "serialize_expr _ = None"

fun token_step :: "cy_expr list \<Rightarrow> cy_token \<Rightarrow> cy_expr list option" where
  "token_step stack (Tok_Var x) =
     Some (TargetSigma.CE_VarE \<lparr>TargetSigma.cy_var.cv_name = x\<rparr> # stack)"
| "token_step stack (Tok_Bool b) = Some (TargetSigma.CE_BoolLit b # stack)"
| "token_step stack (Tok_Int n) = Some (TargetSigma.CE_IntLit n # stack)"
| "token_step (receiver # rest) (Tok_Property property) =
     Some (TargetSigma.CE_PropAccess receiver property # rest)"
| "token_step (receiver # rest) (Tok_NavOne observer) =
     Some
       (TargetSigma.CE_NavOneE receiver observer # rest)"
| "token_step (receiver # rest) (Tok_NavMany observer as_set) =
     Some
       (TargetSigma.CE_NavManyE receiver observer
         (if as_set then RS_Set else RS_Bag) # rest)"
| "token_step stack Tok_Bottom = Some (TargetSigma.CE_Null # stack)"
| "token_step (body # rest) Tok_Not =
     Some (TargetSigma.CE_Unary CUNot body # rest)"
| "token_step (body # rest) Tok_IsNull =
     Some (TargetSigma.CE_Unary CUIsNull body # rest)"
| "token_step (right # left # rest) Tok_And =
     Some (TargetSigma.CE_Binary CBX_And left right # rest)"
| "token_step (right # left # rest) Tok_Or =
     Some (TargetSigma.CE_Binary CBX_Or left right # rest)"
| "token_step (right # left # rest) Tok_Xor =
     Some (TargetSigma.CE_Binary CBX_Xor left right # rest)"
| "token_step (right # left # rest) Tok_Equal =
     Some (TargetSigma.CE_Binary CBX_Equal left right # rest)"
| "token_step (right # left # rest) Tok_Lt =
     Some (TargetSigma.CE_Binary CBX_Lt left right # rest)"
| "token_step (right # left # rest) Tok_Le =
     Some (TargetSigma.CE_Binary CBX_Le left right # rest)"
| "token_step (right # left # rest) Tok_Gt =
     Some (TargetSigma.CE_Binary CBX_Gt left right # rest)"
| "token_step (right # left # rest) Tok_Ge =
     Some (TargetSigma.CE_Binary CBX_Ge left right # rest)"
| "token_step (else_e # then_e # condition # rest) Tok_If =
     Some (TargetSigma.CE_Case [(condition,then_e)] (Some else_e) # rest)"
| "token_step (step # source # initial # rest)
     (Tok_Reduce accumulator binder) =
     Some
       (TargetSigma.CE_Reduce
         \<lparr>TargetSigma.cy_var.cv_name = accumulator\<rparr>
         initial \<lparr>TargetSigma.cy_var.cv_name = binder\<rparr>
         source step # rest)"
| "token_step _ _ = None"

fun run_tokens :: "cy_token list \<Rightarrow> cy_expr list \<Rightarrow> cy_expr list option" where
  "run_tokens [] stack = Some stack"
| "run_tokens (token # rest) stack =
     (case token_step stack token of
        None \<Rightarrow> None
      | Some next \<Rightarrow> run_tokens rest next)"

lemma run_tokens_append:
  "run_tokens (left @ right) stack =
     (case run_tokens left stack of
        None \<Rightarrow> None
      | Some next \<Rightarrow> run_tokens right next)"
  by (induction left arbitrary: stack) (auto split: option.splits)

lemma run_serialize_expr:
  assumes "serialize_expr e = Some tokens"
  shows "run_tokens tokens stack = Some (e # stack)"
  using assms
  by (induction e arbitrary: tokens stack rule: serialize_expr.induct)
     (auto simp: run_tokens_append
           split: result_shape.splits option.splits prod.splits if_splits)

definition deserialize_expr :: "cy_token list \<Rightarrow> cy_expr option" where
  "deserialize_expr tokens =
     (case run_tokens tokens [] of Some [e] \<Rightarrow> Some e | _ \<Rightarrow> None)"

theorem deserialize_serialize_expr:
  assumes "serialize_expr e = Some tokens"
  shows "deserialize_expr tokens = Some e"
  using run_serialize_expr[OF assms, of "[]"]
  unfolding deserialize_expr_def by simp

theorem M2T_serializer_round_trip:
  assumes "serialize_expr model = Some text"
  shows "deserialize_expr text = Some model"
  using deserialize_serialize_expr assms by blast

definition artifact_return_expr :: "generated_artifact \<Rightarrow> cy_expr option" where
  "artifact_return_expr p =
     (case ga_query p of
        CQ_Query _ [CC_Return _ [CPI_Item e _]] True \<Rightarrow> Some e
      | _ \<Rightarrow> None)"

definition Serialize :: "generated_artifact \<Rightarrow> cy_token list option" where
  "Serialize p =
     (case artifact_return_expr p of
        None \<Rightarrow> None
      | Some e \<Rightarrow> serialize_expr e)"

theorem Serialize_round_trip:
  assumes "Serialize p = Some tokens"
  obtains e where
    "artifact_return_expr p = Some e"
    "deserialize_expr tokens = Some e"
proof -
  from assms obtain e where e:
      "artifact_return_expr p = Some e" "serialize_expr e = Some tokens"
    unfolding Serialize_def by (auto split: option.splits)
  moreover from deserialize_serialize_expr[OF e(2)]
  have "deserialize_expr tokens = Some e" .
  ultimately show thesis using that by blast
qed

theorem serialization_preserves_denotation:
  assumes "serialize_expr e = Some tokens"
  shows "map_option (eval_cy_bool env) (deserialize_expr tokens) =
         Some (eval_cy_bool env e)"
  using deserialize_serialize_expr[OF assms] by simp

theorem serialization_preserves_denotation_at:
  assumes "serialize_expr e = Some tokens"
  shows
    "map_option (eval_cy_bool_at env objects store)
       (deserialize_expr tokens) =
     Some (eval_cy_bool_at env objects store e)"
  using deserialize_serialize_expr[OF assms] by simp

theorem serialization_preserves_object_navigation:
  assumes "serialize_expr e = Some tokens"
  shows
    "map_option (eval_cy_object_nav objects navigation)
       (deserialize_expr tokens) =
     Some (eval_cy_object_nav objects navigation e)"
  using deserialize_serialize_expr[OF assms] by simp

theorem serialization_preserves_object_occurrences:
  assumes "serialize_expr e = Some tokens"
  shows
    "map_option (eval_cy_object_collection objects navigation)
       (deserialize_expr tokens) =
     Some (eval_cy_object_collection objects navigation e)"
  using deserialize_serialize_expr[OF assms] by simp

end
