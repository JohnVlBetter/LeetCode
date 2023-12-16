/*
 * @lc app=leetcode.cn id=LCP 06 lang=rust
 *
 * [LCP 06] 拿硬币
 */

// @lc code=start
impl Solution {
    pub fn min_count(coins: Vec<i32>) -> i32 {
        let mut res : i32 = 0;
        for num in coins{
            res += num / 2 + num % 2;
        }
        res
    }
}
// @lc code=end