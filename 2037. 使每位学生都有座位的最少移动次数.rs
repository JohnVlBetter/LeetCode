/*
 * @lc app=leetcode.cn id=2037 lang=rust
 *
 * [2037] 使每位学生都有座位的最少移动次数
 */

// @lc code=start
impl Solution {
    pub fn min_moves_to_seat(mut seats: Vec<i32>, mut students: Vec<i32>) -> i32 {
        seats.sort();
        students.sort();
        seats.iter().zip(students.iter()).fold(0, |cnt, (i, j)| cnt + (i - j).abs())
    }
}
// @lc code=end