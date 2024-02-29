/*
 * @lc app=leetcode.cn id=2997 lang=rust
 *
 * [2997] 使数组异或和等于 K 的最少操作次数
 */

// @lc code=start
impl Solution {
    pub fn min_operations(nums: Vec<i32>, k: i32) -> i32 {
        nums.into_iter().fold(k, |acc, num| acc ^ num).count_ones() as i32
    }
}
// @lc code=end