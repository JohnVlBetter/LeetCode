/*
 * @lc app=leetcode.cn id=2710 lang=rust
 *
 * [2710] 移除字符串中的尾随零
 */

// @lc code=start
impl Solution {
    pub fn remove_trailing_zeros(num: String) -> String {
        num.trim_end_matches(|x| x == '0').to_owned()
    }
}
// @lc code=end