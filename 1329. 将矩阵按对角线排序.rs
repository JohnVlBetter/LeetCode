/*
 * @lc app=leetcode.cn id=1329 lang=rust
 *
 * [1329] 将矩阵按对角线排序
 */

// @lc code=start
impl Solution {
    pub fn diagonal_sort(mut mat: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let n = mat.len();
        let m = mat[0].len();
        let mut diag = vec![vec![]; m + n];
        for i in 0..n {
            for j in 0..m {
                diag[i - j + m].push(mat[i][j]);
            }
        }
        for d in diag.iter_mut() {
            d.sort_by(|a, b| b.cmp(a));
        }
        for i in 0..n {
            for j in 0..m {
                mat[i][j] = diag[i - j + m].pop().unwrap();
            }
        }
        mat
    }
}
// @lc code=end