/*
 * @lc app=leetcode.cn id=1935 lang=rust
 *
 * [1935] 可以输入的最大单词数
 */

// @lc code=start
impl Solution {
    pub fn can_be_typed_words(text: String, broken_letters: String) -> i32 {
        let set = broken_letters.chars().collect::<std::collections::HashSet<_>>();
        let words = text.split_whitespace().collect::<Vec<_>>();
        let mut res = words.len() as i32;
        for word in words{
            for c in word.chars(){
               if set.contains(&c){
                  res-=1;
                  break;
               }         
            }
        }
        res
    }
}
// @lc code=end