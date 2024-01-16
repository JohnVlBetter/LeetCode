/*
 * @lc app=leetcode.cn id=2639 lang=rust
 *
 * [2639] 查询网格图中每一列的宽度
 */

// @lc code=start
impl Solution {
    pub fn find_column_width(grid: Vec<Vec<i32>>) -> Vec<i32> {
        (0..grid[0].len())
            .map(|y| {
                (0..grid.len())
                    .map(|x| grid[x][y].to_string().len())
                    .max()
                    .unwrap() as i32
            })
            .collect()
    }
}
// @lc code=end