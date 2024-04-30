/*
 * @lc app=leetcode.cn id=1588 lang=rust
 *
 * [1588] 所有奇数长度子数组的和
 */

// @lc code=start
impl Solution {
    pub fn sum_odd_length_subarrays(arr: Vec<i32>) -> i32 {
        let mut res = 0;
        for i in 0..arr.len() {
            let (lc, rc) = (i as i32, (arr.len() - i) as i32 - 1);
            res += arr[i] * (((lc + 1) / 2) * ((rc + 1) / 2) + (lc / 2 + 1) * (rc / 2 + 1));
        }
        res
    }
}
// @lc code=end