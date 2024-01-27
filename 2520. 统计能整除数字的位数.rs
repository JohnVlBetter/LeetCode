/*
 * @lc app=leetcode.cn id=2520 lang=rust
 *
 * [2520] 统计能整除数字的位数
 */

// @lc code=start
impl Solution {
    pub fn count_digits(num: i32) -> i32 {
        let mut res = 0;
        let mut x = num;
        while x != 0 {
            if num % (x % 10) == 0 {
                res += 1;
            }
            x /= 10;
        }
        res
    }
}
// @lc code=end