/*
 * @lc app=leetcode.cn id=2974 lang=rust
 *
 * [2974] 最小数字游戏
 */

// @lc code=start
use std::mem;
impl Solution {
    pub fn number_game(mut nums: Vec<i32>) -> Vec<i32> {
        nums.sort();
        for i in 0..nums.len()/2 {
            let tmp = nums[i*2];
            nums[i*2] = nums[i*2+1];
            nums[i*2+1] = tmp;
        }
        nums
    }
}
// @lc code=end

