/*
 * @lc app=leetcode.cn id=2441 lang=rust
 *
 * [2441] 与对应负数同时存在的最大正整数
 */

// @lc code=start
impl Solution {
  pub fn find_max_k(nums: Vec<i32>) -> i32 {
      let (mut ret, mut map) = (-1, vec![false; 2001]);
      for num in nums {
          if map[-num as usize + 1000] { ret = ret.max(f64::abs(num as f64) as i32); }
          map[num as usize + 1000] = true;
      }
      ret
  }
}
// @lc code=end