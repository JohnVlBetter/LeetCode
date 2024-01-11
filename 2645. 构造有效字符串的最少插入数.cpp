/*
 * @lc app=leetcode.cn id=2645 lang=rust
 *
 * [2645] 构造有效字符串的最少插入数
 */

// @lc code=start
impl Solution {
    pub fn add_minimum(word: String) -> i32 {
        let arr = word.as_bytes();
        let mut count = 1;
        for i in 1..arr.len(){
            if arr[i-1] >= arr[i] {
                count += 1;
            }
        }
        return count * 3 - arr.len() as i32;
    }
}
// @lc code=end