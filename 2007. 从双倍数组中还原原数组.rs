/*
 * @lc app=leetcode.cn id=2007 lang=rust
 *
 * [2007] 从双倍数组中还原原数组
 */

// @lc code=start
use std::collections::HashMap;

impl Solution {
    pub fn find_original_array(mut changed: Vec<i32>) -> Vec<i32> {
        changed.sort_unstable();
        let mut map = HashMap::new();
        for num in &changed {
            *map.entry(*num).or_insert(0) += 1;
        }
        let mut res = Vec::new();
        for a in changed {
            if *map.get(&a).unwrap_or(&0) == 0 {
                continue;
            }
            *map.get_mut(&a).unwrap() -= 1;

            if *map.get(&(a * 2)).unwrap_or(&0) == 0 {
                return vec![];
            }
            *map.get_mut(&(a * 2)).unwrap() -= 1;
            res.push(a);
        }
        res
    }
}
// @lc code=end