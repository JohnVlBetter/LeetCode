/*
 * @lc app=leetcode.cn id=2971 lang=rust
 *
 * [2971] 找到最大周长的多边形
 */

// @lc code=start
impl Solution {
    pub fn largest_perimeter(nums: Vec<i32>) -> i64 {
        let mut nums = nums;
        nums.sort();
        let mut sum:i64 = 0;
        let mut res:i64 = -1;
        let size = nums.len();
        for idx in 0..size{
            if idx>1 && sum > nums[idx] as i64 {
                res = sum + nums[idx] as i64;
            }
            sum += nums[idx] as i64;
        }
        res
    }
}
// @lc code=end