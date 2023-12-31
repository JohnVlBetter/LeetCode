/*
 * @lc app=leetcode.cn id=100166 lang=rust
 *
 * [100166] 检查按位或是否存在尾随零
 */

// @lc code=start
impl Solution {
    pub fn has_trailing_zeros(nums: Vec<i32>) -> bool {
        let mut count = 0;
        for num in nums{
            if num & 1 == 0 {
                count += 1
            }
            if count >= 2{
                return true
            }
        }
        count >= 2
    }
}
// @lc code=end