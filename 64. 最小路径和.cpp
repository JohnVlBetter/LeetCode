/*
 * @lc app=leetcode.cn id=537 lang=rust
 *
 * [64] 最小路径和
 */

// @lc code=start
impl Solution {
    pub fn min_path_sum(grid: Vec<Vec<i32>>) -> i32 {
        let mut dp = vec![0; grid[0].len() + 1];
        for i in 1..dp.len() {
            dp[i] = dp[i - 1] + grid[0][i - 1];
        }
        dp[0] = i32::MAX;
        for i in 2..=grid.len() {
            for j in 1..=grid[0].len() {
                dp[j] = dp[j].min(dp[j - 1]) + grid[i - 1][j - 1];
            }
        }
        dp[grid[0].len()]
    }
}
// @lc code=end