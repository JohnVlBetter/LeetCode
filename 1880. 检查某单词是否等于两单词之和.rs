/*
 * @lc app=leetcode.cn id=1880 lang=rust
 *
 * [1880] 检查某单词是否等于两单词之和
 */

// @lc code=start
impl Solution {
    pub fn is_sum_equal(first_word: String, second_word: String, target_word: String) -> bool {
        let get_num = |word: String| -> i32 { word.bytes().fold(0, |acc, ch| acc * 10 + (ch as i32 - 97)) };
        get_num(first_word) + get_num(second_word) == get_num(target_word)
    }
}
// @lc code=end