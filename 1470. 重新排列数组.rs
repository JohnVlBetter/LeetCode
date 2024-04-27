/*
 * @lc app=leetcode.cn id=1470 lang=rust
 *
 * [1470] 重新排列数组
 */

// @lc code=start
impl Solution {
    pub fn shuffle(nums: Vec<i32>, n: i32) -> Vec<i32> {
        (0..n as usize).flat_map(|i| [nums[i], nums[i+n as usize]]).collect()
    }
}
// @lc code=end