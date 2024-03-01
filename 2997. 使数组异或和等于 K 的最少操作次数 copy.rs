/*
 * @lc app=leetcode.cn id=LCR 003 lang=rust
 *
 * [LCR 003] 比特位计数
 */

// @lc code=start
impl Solution {
    pub fn count_bits(n: i32) -> Vec<i32> {
        (0..=n).map(|num| num.count_ones() as i32).collect()
    }
}
// @lc code=end