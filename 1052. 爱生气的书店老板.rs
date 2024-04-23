/*
 * @lc app=leetcode.cn id=1052 lang=rust
 *
 * [1052] 爱生气的书店老板
 */

// @lc code=start
impl Solution {
    pub fn max_satisfied(customers: Vec<i32>, grumpy: Vec<i32>, minutes: i32) -> i32 {
        let k = minutes as usize;
        let mut s = [0, 0];
        let mut res = 0;
        for (i, (&c, &g)) in customers.iter().zip(grumpy.iter()).enumerate() {
            s[g as usize] += c;
            if i < k - 1 {
                continue;
            }
            res = res.max(s[1]);
            if grumpy[i - k + 1] == 1 {
                s[1] -= customers[i - k + 1];
            }
        }
        s[0] + res
    }
}
// @lc code=end