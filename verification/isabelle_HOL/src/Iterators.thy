theory Iterators
  imports Semantics
begin

text \<open>
Canonical occurrence semantics for the admitted iterator family.  These
operators are deliberately independent of a concrete compiler stage: each
stage supplies the same occurrence list and a pointwise interpretation of the
iterator body.  The congruence lemmas below are therefore the induction step
used by Source-to-Core, Core-to-Q, and Q-to-Target preservation proofs.

An outer option layer denotes whole-collection bottom.  In the collect
operator below, an inner option layer denotes element bottom, so
collect neither drops an occurrence nor confuses element bottom with whole
bottom.  Filters follow the executable USE rule: a bottom predicate defaults
to false for that occurrence, so select drops it and reject keeps it.
\<close>

datatype occurrence_filter = OF_Select | OF_Reject

fun exists3_fold :: "bool3 list \<Rightarrow> bool3" where
  "exists3_fold [] = B3_False"
| "exists3_fold (value # rest) = b3_or value (exists3_fold rest)"

fun forall3_fold :: "bool3 list \<Rightarrow> bool3" where
  "forall3_fold [] = B3_True"
| "forall3_fold (value # rest) = b3_and value (forall3_fold rest)"

fun keep_occurrence :: "occurrence_filter \<Rightarrow> bool3 \<Rightarrow> bool" where
  "keep_occurrence OF_Select B3_True = True"
| "keep_occurrence OF_Select _ = False"
| "keep_occurrence OF_Reject B3_True = False"
| "keep_occurrence OF_Reject _ = True"

fun filter_occurrences3 ::
  "occurrence_filter \<Rightarrow> ('a \<Rightarrow> bool3) \<Rightarrow>
   'a list \<Rightarrow> 'a list option" where
  "filter_occurrences3 _ _ [] = Some []"
| "filter_occurrences3 mode predicate (value # rest) =
     (case filter_occurrences3 mode predicate rest of
        None \<Rightarrow> None
      | Some kept \<Rightarrow>
          Some (if keep_occurrence mode (predicate value)
                then value # kept else kept))"

definition collect_occurrences3 ::
  "('a \<Rightarrow> 'b option) \<Rightarrow> 'a list option \<Rightarrow>
   'b option list option" where
  "collect_occurrences3 body source = map_option (map body) source"

definition eval_quantifier3 ::
  "iter_kind \<Rightarrow> ('a \<Rightarrow> bool3) \<Rightarrow>
   'a list option \<Rightarrow> bool3" where
  "eval_quantifier3 kind body source =
     (case source of
        None \<Rightarrow> B3_Bottom
      | Some occurrences \<Rightarrow>
          if kind = IK_Exists then exists3_fold (map body occurrences)
          else if kind = IK_ForAll then forall3_fold (map body occurrences)
          else B3_Bottom)"

lemma exists3_empty [simp]: "exists3_fold [] = B3_False"
  by simp

lemma forall3_empty [simp]: "forall3_fold [] = B3_True"
  by simp

lemma exists3_map_cong:
  assumes "\<And>x. x \<in> set occurrences \<Longrightarrow> left x = right x"
  shows
    "exists3_fold (map left occurrences) =
     exists3_fold (map right occurrences)"
  using assms by (induction occurrences) auto

lemma forall3_map_cong:
  assumes "\<And>x. x \<in> set occurrences \<Longrightarrow> left x = right x"
  shows
    "forall3_fold (map left occurrences) =
     forall3_fold (map right occurrences)"
  using assms by (induction occurrences) auto

lemma eval_quantifier3_cong:
  assumes source: "left_source = right_source"
      and body:
        "\<And>occurrences x. left_source = Some occurrences \<Longrightarrow>
          x \<in> set occurrences \<Longrightarrow> left_body x = right_body x"
  shows
    "eval_quantifier3 kind left_body left_source =
     eval_quantifier3 kind right_body right_source"
proof (cases left_source)
  case None
  then show ?thesis using source
    unfolding eval_quantifier3_def by simp
next
  case (Some occurrences)
  have right_source: "right_source = Some occurrences"
    using source Some by simp
  have pointwise:
    "\<And>x. x \<in> set occurrences \<Longrightarrow> left_body x = right_body x"
    using body Some by blast
  have exists:
    "exists3_fold (map left_body occurrences) =
     exists3_fold (map right_body occurrences)"
    using exists3_map_cong[OF pointwise] .
  have forall:
    "forall3_fold (map left_body occurrences) =
     forall3_fold (map right_body occurrences)"
    using forall3_map_cong[OF pointwise] .
  show ?thesis
    using Some right_source exists forall
    unfolding eval_quantifier3_def by (cases kind) auto
qed

lemma filter_occurrences3_cong:
  assumes "\<And>x. x \<in> set occurrences \<Longrightarrow> left x = right x"
  shows
    "filter_occurrences3 mode left occurrences =
     filter_occurrences3 mode right occurrences"
  using assms
proof (induction occurrences)
  case Nil
  then show ?case by simp
next
  case (Cons item rest)
  have head: "left item = right item"
    using Cons.prems by simp
  have tail:
    "filter_occurrences3 mode left rest =
     filter_occurrences3 mode right rest"
    using Cons.IH Cons.prems by auto
  show ?case
    using head tail
    by (cases "left item"; cases "filter_occurrences3 mode left rest";
        cases mode) simp_all
qed

lemma select_all_true [simp]:
  "filter_occurrences3 OF_Select (\<lambda>_. B3_True) occurrences =
   Some occurrences"
  by (induction occurrences) simp_all

lemma reject_all_false [simp]:
  "filter_occurrences3 OF_Reject (\<lambda>_. B3_False) occurrences =
   Some occurrences"
  by (induction occurrences) simp_all

lemma select_all_bottom [simp]:
  "filter_occurrences3 OF_Select (\<lambda>_. B3_Bottom) occurrences = Some []"
  by (induction occurrences) simp_all

lemma reject_all_bottom [simp]:
  "filter_occurrences3 OF_Reject (\<lambda>_. B3_Bottom) occurrences =
   Some occurrences"
  by (induction occurrences) simp_all

lemma select_preserves_duplicate_occurrences:
  "filter_occurrences3 OF_Select (\<lambda>_. B3_True) [x, x] = Some [x, x]"
  by simp

lemma collect_whole_bottom [simp]:
  "collect_occurrences3 body None = None"
  unfolding collect_occurrences3_def by simp

lemma collect_preserves_occurrence_count:
  assumes "collect_occurrences3 body (Some occurrences) = Some results"
  shows "length results = length occurrences"
proof -
  have "results = map body occurrences"
    using assms unfolding collect_occurrences3_def by simp
  then show ?thesis by simp
qed

lemma collect_preserves_element_bottom:
  "collect_occurrences3 body (Some [x]) = Some [body x]"
  unfolding collect_occurrences3_def by simp

lemma bag_keeps_occurrences [simp]:
  "normalize_source_occurrences CK_Bag occurrences = occurrences"
  unfolding normalize_source_occurrences_def by simp

lemma set_keeps_support [simp]:
  "normalize_source_occurrences CK_Set occurrences = remdups occurrences"
  unfolding normalize_source_occurrences_def by simp

text \<open>
The following theorem packages the four reusable proof obligations.  Equality
of the source occurrence stream and pointwise equality of the translated body
are sufficient; no iterator proof may silently replace a Bag by its support.
\<close>

theorem iterator_semantics_congruence:
  assumes body: "\<And>x. x \<in> set occurrences \<Longrightarrow> left x = right x"
      and collect:
        "\<And>x. x \<in> set occurrences \<Longrightarrow>
           left_collect x = right_collect x"
  shows
    "exists3_fold (map left occurrences) =
       exists3_fold (map right occurrences)"
    "forall3_fold (map left occurrences) =
       forall3_fold (map right occurrences)"
    "filter_occurrences3 mode left occurrences =
       filter_occurrences3 mode right occurrences"
    "collect_occurrences3 left_collect (Some occurrences) =
       collect_occurrences3 right_collect (Some occurrences)"
proof -
  show
    "exists3_fold (map left occurrences) =
       exists3_fold (map right occurrences)"
    using exists3_map_cong body by blast
  show
    "forall3_fold (map left occurrences) =
       forall3_fold (map right occurrences)"
    using forall3_map_cong body by blast
  show
    "filter_occurrences3 mode left occurrences =
       filter_occurrences3 mode right occurrences"
    using filter_occurrences3_cong body by blast
  have "map left_collect occurrences = map right_collect occurrences"
    using collect by (intro map_cong) auto
  then show
    "collect_occurrences3 left_collect (Some occurrences) =
       collect_occurrences3 right_collect (Some occurrences)"
    unfolding collect_occurrences3_def by simp
qed

end
