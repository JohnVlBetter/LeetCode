/*
 * @lc app=leetcode.cn id=1389 lang=rust
 *
 * [1389] 按既定顺序创建目标数组

 */

// @lc code=start
impl Solution {
    pub fn create_target_array(nums: Vec<i32>, index: Vec<i32>) -> Vec<i32> {
        index.into_iter().zip(nums.into_iter()).fold(vec![], |mut acc, (i, v)| {
            acc.insert(i as usize, v);
            acc
        })
    }
}
// @lc code=end