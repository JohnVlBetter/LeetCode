/*
 * @lc app=leetcode.cn id=884 lang=rust
 *
 * [884] 两句话中的不常见单词
 */

// @lc code=start
impl Solution {
    pub fn uncommon_from_sentences(s1: String, s2: String) -> Vec<String> {
        use std::collections::HashMap;
        let mut tab = HashMap::new();
        s1.split_ascii_whitespace()
            .chain(s2.split_ascii_whitespace())
            .for_each(|s| *tab.entry(s).or_insert(0) += 1);
        tab.into_iter()
            .filter(|(_, v)| *v == 1)
            .map(|(k, _)| k.to_string())
            .collect()
    }
}
// @lc code=end
