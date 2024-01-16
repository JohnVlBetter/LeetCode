/*
 * @lc app=leetcode.cn id=1480 lang=rust
 *
 * [1480] 一维数组的动态和
 */

// @lc code=start
impl Solution {
    pub fn running_sum(mut nums:Vec<i32>) -> Vec<i32> {
        for i in 1..nums.len() {
            nums[i] += nums[i-1];
        }
        nums
    }
}
// @lc code=end