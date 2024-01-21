/*
 * @lc app=leetcode.cn id=100191 lang=rust
 *
 * [100191] 输入单词需要的最少按键次数 I
 */

// @lc code=start
impl Solution {
    pub fn minimum_pushes(word: String) -> i32 {
        let n = word.len() as i32;
        let k = n / 8;
        4 * k * (k + 1) + n % 8 * (k + 1)
    }
}
// @lc code=end