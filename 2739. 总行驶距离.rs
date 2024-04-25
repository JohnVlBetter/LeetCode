/*
 * @lc app=leetcode.cn id=2739 lang=rust
 *
 * [2739] 总行驶距离
 */

// @lc code=start
impl Solution {
    pub fn distance_traveled(main_tank: i32, additional_tank: i32) -> i32 {
        (additional_tank.min((main_tank - 1) / 4) + main_tank) * 10
    }
}
// @lc code=end