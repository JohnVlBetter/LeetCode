/*
 * @lc app=leetcode.cn id=2574 lang=rust
 *
 * [2574] 左右元素和的差值
 */

// @lc code=start
impl Solution {
    pub fn left_right_difference(mut nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len() as i32;
        let mut vec : Vec<i32> = vec![n;0];
        let mut left_sum = 0;
        let mut right_sum : i32 = nums.iter().sum();
        for i in 0..n{
            let tmp = nums[i as usize];
            right_sum -= tmp;
            nums[i as usize] = (left_sum - right_sum).abs();
            left_sum += tmp;
        }
        nums
    }
}
// @lc code=end