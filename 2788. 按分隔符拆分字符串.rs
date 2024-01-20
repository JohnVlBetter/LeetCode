/*
 * @lc app=leetcode.cn id=2788 lang=rust
 *
 * [2788] 按分隔符拆分字符串
 */

// @lc code=start
impl Solution {
    pub fn split_words_by_separator(words: Vec<String>, separator: char) -> Vec<String> {
        words.iter().flat_map(|s| s.split(separator)).map(|s| s.to_string()).filter(|s| !s.is_empty()).collect::<Vec<_>>()
    }
}
// @lc code=end