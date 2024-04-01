/*
 * @lc app=leetcode.cn id=2740 lang=rust
 *
 * [2740] 找出分区值
 */

// @lc code=start
impl Solution {
    pub fn find_value_of_partition(nums: Vec<i32>) -> i32 {
        let mut nums = nums;
        nums.sort();
        let size = nums.len();
        let mut res = nums[size-1] - nums[0];
        for idx in 1..size {
            res = res.min(nums[idx]- nums[idx-1]);
        }
        res
    }
}
// @lc code=end