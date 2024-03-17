/*
 * @lc app=leetcode.cn id=2293 lang=rust
 *
 * [2293] 极大极小游戏
 */

// @lc code=start
impl Solution {
    pub fn min_max_game(mut nums: Vec<i32>) -> i32 {
        let mut n = nums.len();
        while n > 1 {
            for i in 0..n / 2 { nums[i] = if (i & 1) == 1 { nums[2 * i].max(nums[2 * i + 1]) } else { nums[2 * i].min(nums[2 * i + 1]) }; }
            n -= n / 2;
        }
        nums[0]
    }
}
// @lc code=end