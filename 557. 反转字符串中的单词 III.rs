/*
 * @lc app=leetcode.cn id=557 lang=rust
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
impl Solution {
    pub fn reverse_words(s: String) -> String {
        s.split(' ')
            .map(|word| word.chars().rev().collect::<String>())
            .collect::<Vec<_>>()
            .join(" ")
    }
}
// @lc code=end
