/*
 * @lc app=leetcode.cn id=2149 lang=rust
 *
 * [2149] 按符号重排数组
 */

// @lc code=start
impl Solution {
    pub fn rearrange_array(nums: Vec<i32>) -> Vec<i32> {
        let(pos,neg):(Vec<i32>,Vec<i32>) = nums.into_iter().partition(|&x| x >= 0);
        let mut res = vec![];
        for idx in 0..pos.len(){
            res.push(pos[idx]);
            res.push(neg[idx]);
        }
        res
    }
}
// @lc code=end