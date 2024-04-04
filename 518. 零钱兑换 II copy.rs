/*
 * @lc app=leetcode.cn id=1342 lang=rust
 *
 * [1342] 将数字变成 0 的操作次数
 */

// @lc code=start
impl Solution {
    pub fn number_of_steps(num: i32) -> i32 {
        match num {0=>0, _=>(32 - num.leading_zeros() + num.count_ones() - 1) as i32}
    }
}
// @lc code=end
