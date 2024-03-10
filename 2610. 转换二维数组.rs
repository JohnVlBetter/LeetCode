/*
 * @lc app=leetcode.cn id=2610 lang=rust
 *
 * [2610] 转换二维数组
 */

// @lc code=start
use std::collections::{HashMap, HashSet};
impl Solution {
    pub fn find_matrix(nums: Vec<i32>) -> Vec<Vec<i32>> {
        let mut map = HashMap::new();
        let mut max = 0;
        nums.iter().for_each(|num| {
            let count = map.entry(num).or_insert(0);
            *count += 1;
            max = max.max(*count);
        });

        let mut res: Vec<Vec<i32>> = vec![vec![];max];

        nums.iter().for_each(|num| {
            let count = map[num] - 1;
            res[count].push(*num);
            let count = map.entry(num).or_insert(0);
            *count -= 1;
        });

        res
    }
}
}
// @lc code=end