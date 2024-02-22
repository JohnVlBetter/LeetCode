/*
 * @lc app=leetcode.cn id=343 lang=rust
 *
 * [343] 整数拆分
 */

// @lc code=start
impl Solution {
    pub fn integer_break(n: i32) -> i32 {
        if n == 2 {
            return 1;
        }
        else if n == 3 {
            return 2;
        }
        else if n == 4 {
            return 4;
        }
        else{
            let mut num = n / 3;
            let mut d = n - (num*3);
            if d == 1{
                num -= 1;
                d += 3;
            }
            let mut res = 1;
            for idx in 0..num {
                res *= 3;
            }
            if d != 0 {
                res *= d;
            }
            return res;
        }
    }
}
// @lc code=end