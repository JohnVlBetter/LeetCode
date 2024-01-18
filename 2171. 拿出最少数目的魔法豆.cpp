/*
 * @lc app=leetcode.cn id=2171 lang=rust
 *
 * [2171] 拿出最少数目的魔法豆
 */

// @lc code=start
impl Solution {
    pub fn minimum_removal(mut beans: Vec<i32>) -> i64 {
        beans.sort_unstable();
        let mut max_area: i64 = 0;
        let mut sum: i64 = 0;
        let n = beans.len();
        for idx in 0..n {
            let val = beans[idx] as i64;
            sum += val;
            max_area = max_area.max((n - idx) as i64 * val);
        }
        sum - max_area
    }
}
// @lc code=end