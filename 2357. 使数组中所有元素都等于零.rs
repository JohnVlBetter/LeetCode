/*
 * @lc app=leetcode.cn id=2357 lang=rust
 *
 * [2357] 使数组中所有元素都等于零
 */

// @lc code=start
use std::iter::FromIterator;
use std::collections::HashSet;
impl Solution {
    pub fn minimum_operations(nums: Vec<i32>) -> i32 {
        let set: HashSet<i32> = HashSet::from_iter(nums);
        set.iter().count() as i32 - if set.contains(&0) { 1 } else { 0 }
    }
}
// @lc code=end