/*
 * @lc app=leetcode.cn id=2562 lang=rust
 *
 * [2562] 找出数组的串联值
 */

// @lc code=start
impl Solution {
  pub fn find_the_array_conc_val(nums: Vec<i32>) -> i64 {
      let cnt = nums.len();
      let (mut l, mut r) = (0, cnt - 1);
      let mut res = 0;
      while l < r {
          res += format!("{}{}", nums[l], nums[r]).parse::<i64>().unwrap();
          l += 1;
          r -= 1;
      }
      if cnt % 2 == 1 {
          res += nums[cnt / 2] as i64;
      }
      res
  }
}
// @lc code=end