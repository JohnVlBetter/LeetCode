/*
 * @lc app=leetcode.cn id=2057 lang=rust
 *
 * [2057] 值相等的最小索引
 */

// @lc code=start
impl Solution {
    pub fn smallest_equal(nums: Vec<i32>) -> i32 {
        let n = nums.len();

        for i in 0..n {
            if i as i32 % 10 == nums[i] {
                return i as i32;
            }
        }

        -1
    }
}
// @lc code=end
