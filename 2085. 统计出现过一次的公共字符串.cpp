/*
 * @lc app=leetcode.cn id=2085 lang=rust
 *
 * [2085] 统计出现过一次的公共字符串
 */

// @lc code=start
use std::collections::HashMap;
impl Solution {
    pub fn count_words(words1: Vec<String>, words2: Vec<String>) -> i32 {
        let mut map1 : HashMap<String, i32> = HashMap::new();
        let mut map2 : HashMap<String, i32> = HashMap::new();
        words1.into_iter().for_each(|word| *map1.entry(word).or_insert(0) += 1);
        words2.into_iter().for_each(|word| *map2.entry(word).or_insert(0) += 1);
        let mut res = 0;
        for (k, v) in map1 {
            if let Some(cnt) = map2.get(&k){
                if *cnt == 1 && v == 1 {
                    res += 1;
                }
            }
        }
        res
    }
}
// @lc code=end