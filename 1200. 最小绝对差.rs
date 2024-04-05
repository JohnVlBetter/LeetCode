/*
 * @lc app=leetcode.cn id=1200 lang=rust
 *
 * [1200] 最小绝对差
 */

// @lc code=start
impl Solution {
    pub fn minimum_abs_difference(mut arr: Vec<i32>) -> Vec<Vec<i32>> {
        arr.sort();
        let min = arr.windows(2).map(|slice| slice[1] - slice[0]).min().unwrap();
        arr.windows(2).filter_map(|slice| { if slice[1] - slice[0] == min { Some(slice.to_vec()) } else { None } }).collect::<Vec<_>>()
    }
}
// @lc code=end