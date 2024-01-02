/*
 * @lc app=leetcode.cn id=1599 lang=rust
 *
 * [1599] 经营摩天轮的最大利润
 */

// @lc code=start
impl Solution {
    pub fn min_operations_max_profit(customers: Vec<i32>, boarding_cost: i32, running_cost: i32) -> i32 {
        let mut res = -1;
        let mut max = 0;
        let mut temp = 0;
        let mut wait_customers = 0;
        let mut idx = 0;

        while wait_customers > 0 || idx < customers.len() {
            wait_customers += if idx < customers.len() { customers[idx] } else { 0 };
            let up = std::cmp::min(4, wait_customers);
            wait_customers -= up;
            idx += 1;
            temp += up * boarding_cost - running_cost;

            if temp > max {
                max = temp;
                res = idx as i32;
            }
        }

        res
    }
}
// @lc code=end