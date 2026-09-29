theory IteratorSerialize
  imports IteratorReduce Serialize
begin

text \<open>
Canonical model-to-token boundary for the concrete TargetSigma
ReduceExpression produced from the checked three-valued quantifier macro.
Tok_Reduce records the accumulator and iterator binder after the serialized
initial value, source, and step.  This is an unambiguous formal token encoding
of the concrete Target AST; rendering the tokens as UTF-8 Cypher 5 text is a
separate printer refinement.
\<close>

theorem Quantifier_M2T_round_trip:
  assumes realized: "Realize_Quantifier q = Some target"
      and expanded: "Expand_ReduceBool3 target = Some concrete"
      and serialized: "serialize_expr concrete = Some tokens"
  shows "deserialize_expr tokens = Some concrete"
  using M2T_serializer_round_trip[OF serialized] .

theorem Quantifier_serialization_preserves:
  assumes expanded: "Expand_ReduceBool3 target = Some concrete"
      and serialized: "serialize_expr concrete = Some tokens"
  shows
    "map_option
       (eval_concrete_reduce_at navigation booleans objects store)
       (deserialize_expr tokens) =
     Some (eval_target_quantifier_at navigation booleans objects store target)"
  using M2T_serializer_round_trip[OF serialized]
        Expand_ReduceBool3_preserves[OF expanded]
  by simp

theorem Front_to_tokens_Quantifier_preserves:
  assumes front: "Front_Quantifier source = Some core"
      and translated: "Translate_Quantifier_Q core = Some q"
      and realized: "Realize_Quantifier q = Some target"
      and expanded: "Expand_ReduceBool3 target = Some concrete"
      and serialized: "serialize_expr concrete = Some tokens"
  shows
    "map_option
       (eval_concrete_reduce_at navigation booleans objects store)
       (deserialize_expr tokens) =
     Some (eval_source_quantifier_at navigation booleans objects store source)"
  using Quantifier_serialization_preserves[OF expanded serialized]
        Front_Core_Q_Target_Quantifier_preserves
          [OF front translated realized]
  by simp

end
