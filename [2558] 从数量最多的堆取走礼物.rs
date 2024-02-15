/*
 * @lc app=leetcode.cn id=2558 lang=rust
 *
 * [2558] 从数量最多的堆取走礼物
 */

// @lc code=start
use std::collections::BinaryHeap;

impl Solution {
    pub fn pick_gifts(gifts: Vec<i32>, k: i32) -> i64 {
        let mut h = BinaryHeap::from(gifts);
        for _ in 0..k {
            let top = h.pop().unwrap();
            h.push((top as f64).sqrt() as i32);
            if *h.peek().unwrap() == 1 {
                break;
            }
        }
        h.iter().map(|&x| x as i64).sum()
    }
}
// @lc code=end
