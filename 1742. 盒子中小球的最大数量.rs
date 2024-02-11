/*
 * @lc app=leetcode.cn id=1742 lang=rust
 *
 * [1742] 盒子中小球的最大数量
 */

// @lc code=start
impl Solution {
    pub fn count_balls(low_limit: i32, high_limit: i32) -> i32 {
        let mut map = vec![0; 55];
        for i in low_limit..=high_limit {
            map[i
                .to_string()
                .chars()
                .into_iter()
                .map(|f| f.to_digit(10).unwrap())
                .reduce(|x, y| x + y)
                .unwrap() as usize] += 1;
        }
        map.into_iter().max().unwrap()
    }
}
// @lc code=end