/*
 * @lc app=leetcode.cn id=3010 lang=rust
 *
 * [3010] 将数组分成最小总代价的子数组 I
 */

// @lc code=start
impl Solution {
    pub fn minimum_cost(mut nums: Vec<i32>) -> i32 {
        let n = nums.len();
        nums[1..n].sort();
        nums[0] + nums[1] + nums[2]
    }
}
// @lc code=end