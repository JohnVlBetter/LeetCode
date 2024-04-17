/*
 * @lc app=leetcode.cn id=LCP 17 lang=rust
 *
 * [LCP 17] 速算机器人
 */

// @lc code=start
impl Solution {
    pub fn calculate(s: String) -> i32 {
        let mut x = 1;
        let mut y = 0;
        for ch in s.chars(){
            if ch == 'A' {
                x = x * 2 + y;
            }else{
                y = 2 * y + x;
            }
        }
        x + y
    }
}
// @lc code=end