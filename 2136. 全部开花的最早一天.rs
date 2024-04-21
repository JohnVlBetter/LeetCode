/*
 * @lc app=leetcode.cn id=2136 lang=rust
 *
 * [2136] 全部开花的最早一天
 */

// @lc code=start
impl Solution {
    pub fn earliest_full_bloom(plant_time: Vec<i32>, grow_time: Vec<i32>) -> i32 {
        let mut idx: Vec<usize> = (0..grow_time.len()).collect();
        idx.sort_unstable_by(|&x, &y| grow_time[y].cmp(&grow_time[x]));
        let mut res = 0;
        let mut days = 0;
        for &i in &idx {
            days += plant_time[i];
            res = res.max(days + grow_time[i]);
        }
        res
    }
}
// @lc code=end