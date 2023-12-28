/*
 * @lc app=leetcode.cn id=2317 lang=rust
 *
 * [2317] 操作后的最大异或和
 */

// @lc code=start
impl Solution {
    pub fn maximum_xor(nums: Vec<i32>) -> i32 {
        let mut res = 0;
        for num in nums{
            res |= num
        }
        res
    }
}
// @lc code=end