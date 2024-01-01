/*
 * @lc app=leetcode.cn id=2351 lang=rust
 *
 * [2351] 第一个出现两次的字母
 */

// @lc code=start
impl Solution {
    pub fn repeated_character(s: String) -> char {
        let mut offset = 0;
        for c in s.as_bytes(){
            if offset >> (c - b'a') as usize & 1 == 1{
                return char::from(*c);
            }
            else{
                offset |= 1 << (c - b'a');
            }
        }
        ' '
    }
}
// @lc code=end