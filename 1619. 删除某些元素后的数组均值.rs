/*
 * @lc app=leetcode.cn id=1619 lang=rust
 *
 * [1619] 删除某些元素后的数组均值
 */

// @lc code=start
impl Solution {
    pub fn trim_mean(arr: Vec<i32>) -> f64 {
        let mut arr = arr;
        arr.sort_unstable();
        let size = arr.len() / 20;
        let res : i32 = arr[size..arr.len()-size].iter().sum();
        res as f64 / (arr.len() - size * 2) as f64
    }
}
// @lc code=end