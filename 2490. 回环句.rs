/*
 * @lc app=leetcode.cn id=2490 lang=rust
 *
 * [2490] 回环句
 */

// @lc code=start
impl Solution {
    pub fn is_circular_sentence(sentence: String) -> bool {
        let sentence_arr = sentence.as_bytes();
        if sentence_arr[0] != sentence_arr[sentence.len() - 1] { return false; }
        for i in 0..sentence.len() {
            if sentence_arr[i] == b' ' && sentence_arr[i - 1] != sentence_arr[i + 1] { return false; }
        }
        true
    }
}
// @lc code=end