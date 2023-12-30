/*
 * @lc app=leetcode.cn id=2114 lang=rust
 *
 * [2114] 句子中的最多单词数
 */

// @lc code=start
impl Solution {
    pub fn most_words_found(sentences: Vec<String>) -> i32 {
        sentences.iter().map(|sentence| sentence.split(' ').count() as i32).max().unwrap()
    }
}
// @lc code=end