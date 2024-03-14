/*
 * @lc app=leetcode.cn id=3065 lang=rust
 *
 * [3065] 超过阈值的最少操作数 I

 */

// @lc code=start
impl Solution {
    pub fn min_operations(nums: Vec<i32>, k: i32) -> i32 {
        nums.iter().fold(0, |acc, num| { if(*num < k) {acc+1} else {acc}})
    }
}
// @lc code=end