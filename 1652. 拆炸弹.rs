/*
 * @lc app=leetcode.cn id=1652 lang=rust
 *
 * [1652] 拆炸弹
 */

// @lc code=start
impl Solution {
    pub fn decrypt(code: Vec<i32>, k: i32) -> Vec<i32> {
        let n = code.len();
        let mut res = vec![0; n];
        let mut r = if k > 0 { k as usize + 1 } else { n };
        let k = k.abs() as usize;
        let mut s = code[r - k..r].iter().sum::<i32>(); 
        for i in 0..n {
            res[i] = s;
            s += code[r % n] - code[(r - k) % n];
            r += 1;
        }
        res
    }
}
// @lc code=end