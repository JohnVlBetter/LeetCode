/*
 * @lc app=leetcode.cn id=447 lang=rust
 *
 * [447] 回旋镖的数量
 */

// @lc code=start
use std::collections::HashMap;
impl Solution {
    pub fn number_of_boomerangs(points: Vec<Vec<i32>>) -> i32 {
        let mut res = 0;
        let mut set : HashMap<i32,i32> = HashMap::new();
        for p1 in &points{
            set.clear();
            for p2 in &points{
                let d2 = (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]);
                let mut v = set.entry(d2).or_insert(0);
                res += *v * 2;
                *v += 1;
            }
        }
        res
    }
}
// @lc code=end