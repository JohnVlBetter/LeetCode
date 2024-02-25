/*
 * @lc app=leetcode.cn id=2283 lang=rust
 *
 * [2283] 判断一个数的数字计数是否等于数位的值
 */

// @lc code=start
impl Solution {
    pub fn digit_count(num: String) -> bool {
        let (mut cnt, mut chars) = (vec![0;11], num.as_bytes());
        for &c in chars {
            cnt[(c - b'0') as usize] += 1;
        }
        for idx in 0..chars.len() {
            if (chars[idx] - b'0') as i32 != cnt[idx] {
                return false;
            }
        }
        true
    }
}
// @lc code=end