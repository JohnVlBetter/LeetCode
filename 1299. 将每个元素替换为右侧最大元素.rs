/*
 * @lc app=leetcode.cn id=1299 lang=rust
 *
 * [1299] 将每个元素替换为右侧最大元素
 */

// @lc code=start
impl Solution {
  pub fn replace_elements(arr: Vec<i32>) -> Vec<i32> {
      let mut arr = arr;
      let size = arr.len();
      let mut max = arr[size - 1];
      arr[size - 1] = -1;
      for idx in (0..size-1).rev() {
          let num = arr[idx];
          arr[idx] = max;
          max = max.max(num);
      }
      arr
  }
}
// @lc code=end