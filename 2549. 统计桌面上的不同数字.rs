/*
 * @lc app=leetcode.cn id=2549 lang=rust
 *
 * [2549] 统计桌面上的不同数字
 */

// @lc code=start
impl Solution {
  pub fn distinct_integers(n: i32) -> i32 {
      if n == 1 {
          1
      }else{
          n-1
      }
  }
}
// @lc code=end