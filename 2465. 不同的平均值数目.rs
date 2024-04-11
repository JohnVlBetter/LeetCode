/*
 * @lc app=leetcode.cn id=2465 lang=rust
 *
 * [2465] 不同的平均值数目
 */

// @lc code=start
use ::std::collections::HashSet;
impl Solution {
    pub fn distinct_averages(mut nums: Vec<i32>) -> i32 {
        nums.sort();
        (0..nums.len()/2).map(|i| nums[i] + nums[nums.len() - i - 1]).collect::<HashSet<_>>().len() as i32
    }
}
// @lc code=end