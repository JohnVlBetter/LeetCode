/*
 * @lc app=leetcode.cn id=1974 lang=rust
 *
 * [1974] 使用特殊打字机键入单词的最少时间
 */

// @lc code=start
impl Solution {
    pub fn min_time_to_type(input:String) -> i32 {
        let word = input.as_bytes();
        let len = word.len();
        let mut res: usize = len + std::cmp::min(word[0] - 'a' as u8, 'a' as u8 + 26 - word[0]) as usize;
        for i in 1..len{
            let a = std::cmp::min(word[i], word[i-1]);
            let b = std::cmp::max(word[i], word[i-1]);
            res += std::cmp::min(b - a, a + 26 - b) as usize;
        }
        res as i32
    }
}
// @lc code=end