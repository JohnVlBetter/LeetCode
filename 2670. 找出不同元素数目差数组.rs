/*
 * @lc app=leetcode.cn id=2670 lang=rust
 *
 * [2670] 找出不同元素数目差数组
 */

// @lc code=start
use std::collections::HashSet;

impl Solution {
    pub fn distinct_difference_array(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut suffix = vec![0; n + 1];
        let mut set = HashSet::new();
        let mut res = Vec::new();
        for i in (0..n).rev() {
            set.insert(nums[i]);
            suffix[i] = set.len();
        }
        set.clear();
        for i in 0..n {
            set.insert(nums[i]);
            res.push((set.len() - suffix[i + 1]) as i32);
        }
        res
    }
}
// @lc code=end