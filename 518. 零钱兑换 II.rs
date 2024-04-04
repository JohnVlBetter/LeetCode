/*
 * @lc app=leetcode.cn id=518 lang=rust
 *
 * [518] 零钱兑换 II
 */

// @lc code=start
impl Solution {
    pub fn change(amount: i32, coins: Vec<i32>) -> i32 {
        let mut dp = vec![0; amount as usize + 1];
        dp[0] = 1;
        coins.iter().for_each(|&c| {
            for idx in c..=amount {
                dp[idx as usize] += dp[(idx - c) as usize];
            }
        });
        dp[amount as usize]
    }
}
// @lc code=end
