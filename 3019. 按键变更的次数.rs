/*
 * @lc app=leetcode.cn id=3019 lang=rust
 *
 * [3019] 按键变更的次数
 */

// @lc code=start
impl Solution {
    pub fn count_key_changes(s: String) -> i32 {
        let mut res = 0;
        let n = s.len();
        let chars = s.as_bytes();
        for idx in 1..n {
            if (chars[idx] & 31) != (chars[idx - 1] & 31) {
                res += 1;
            }
        }
        res
    }
}
// @lc code=end