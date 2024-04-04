/*
 * @lc app=leetcode.cn id=3046 lang=rust
 *
 * [3046] 分割数组
 */

// @lc code=start
use std::collections::HashMap;

impl Solution {
    pub fn is_possible_to_split(nums: Vec<i32>) -> bool {
        let mut map: HashMap<i32, usize> = HashMap::new();
        nums.into_iter().for_each(|x|{
            *map.entry(x).or_default() += 1;
        });
        map.into_values().all(|x| x <= 2)
    }
}
// @lc code=end