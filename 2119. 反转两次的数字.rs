/*
 * @lc app=leetcode.cn id=2119 lang=rust
 *
 * [2119] 反转两次的数字
 */

// @lc code=start
impl Solution {
    pub fn is_same_after_reversals(num: i32) -> bool {
        let res = if num == 0 {
            true
        } else {
            num % 10 != 0
        };
        res
    }
}
// @lc code=end