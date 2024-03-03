/*
 * @lc app=leetcode.cn id=2706 lang=rust
 *
 * [2706] 购买两块巧克力
 */

// @lc code=start
impl Solution {
    pub fn buy_choco(prices: Vec<i32>, money: i32) -> i32 {
        let mut a = 101;
        let mut b = 101;
        for &price in prices.iter() {
            if price < a {
                b = a;
                a = price;
            } else if price < b {
                b = price;
            }
        }
        if money < a + b {
            money
        } else {
            money - a - b
        }
    }
}
// @lc code=end
