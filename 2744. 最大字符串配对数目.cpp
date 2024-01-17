/*
 * @lc app=leetcode.cn id=2744 lang=rust
 *
 * [2744] 最大字符串配对数目
 */

// @lc code=start
use std::collections::HashSet;
impl Solution {
    pub fn maximum_number_of_string_pairs(words: Vec<String>) -> i32 {
        let mut set : HashSet<u16> = HashSet::new();
        let mut res = 0;
        for word in words {
            let key = word.chars().nth(1).unwrap() as u16 * 100 + word.chars().nth(0).unwrap() as u16;
            if set.contains(&key) {
                res += 1;
            }
            set.insert(word.chars().nth(0).unwrap() as u16 * 100 + word.chars().nth(1).unwrap() as u16);
        }
        res
    }
}
// @lc code=end