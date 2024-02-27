/*
 * @lc app=leetcode.cn id=371 lang=rust
 *
 * [371] 两整数之和
 */

// @lc code=start
impl Solution {
    pub fn get_sum(mut a: i32, mut b: i32) -> i32 {
        while b != 0 {
            let tmp = (a & b) << 1;
            a = a ^ b;
            b = tmp;
        }
        a
    }
}
// @lc code=end