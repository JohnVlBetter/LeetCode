/*
 * @lc app=leetcode.cn id=1920 lang=rust
 *
 * [1920] 基于排列构建数组
 */

// @lc code=start
impl Solution {
    pub fn build_array(nums: Vec<i32>) -> Vec<i32> {
        let mut res: Vec<i32> = Vec::with_capacity(nums.len());
        for i in 0..nums.len(){
            res.push(nums[nums[i] as usize])
        }
        res
    }
}
// @lc code=end

