/*
 * @lc app=leetcode.cn id=810 lang=rust
 *
 * [810] 黑板异或游戏
 */

// @lc code=start
impl Solution {
    pub fn xor_game(nums: Vec<i32>) -> bool {
        if nums.len() % 2 == 0 {
            return true;
        }
        let mut res = 0;
        for num in nums {
            res ^= num;
        }
        res == 0
    }
}
// @lc code=end