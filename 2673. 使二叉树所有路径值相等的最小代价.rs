/*
 * @lc app=leetcode.cn id=2673 lang=rust
 *
 * [2673] 使二叉树所有路径值相等的最小代价
 */

// @lc code=start
use std::cmp::max;
impl Solution {
    pub fn min_increments(n: i32, cost: Vec<i32>) -> i32 {
        let mut res = 0;
        let mut cost = cost;
        for i in (1..=n as usize / 2).rev() {
            res += (cost[i*2] - cost[i*2-1]).abs();
            cost[i-1] += max(cost[i*2], cost[i*2-1]);
        }
        res
    }
}
// @lc code=end