/*
 * @lc app=leetcode.cn id=2129 lang=rust
 *
 * [2129] 将标题首字母大写
 */

// @lc code=start
impl Solution {
    pub fn capitalize_title(title: String) -> String {
        title
            .split(" ")
            .map(|word| {
                if word.len() > 2 {
                    word[..1].to_uppercase() + &word[1..].to_lowercase()
                } else {
                    word.to_lowercase()
                }
            })
            .collect::<Vec<_>>()
            .join(" ")
    }
}
// @lc code=end