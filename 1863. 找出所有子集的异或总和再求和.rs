/*
 * @lc app=leetcode.cn id=1863 lang=rust
 *
 * [1863] 找出所有子集的异或总和再求和
 */

// @lc code=start
impl Solution {
    pub fn subset_xor_sum(nums: Vec<i32>) -> i32 {
        nums.iter().fold(0, |acc, &num| acc | num) << (nums.len() - 1)
    }
}
// @lc code=end