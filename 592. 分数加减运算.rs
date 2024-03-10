/*
 * @lc app=leetcode.cn id=592 lang=rust
 *
 * [592] 分数加减运算
 */

// @lc code=start
impl Solution {
    pub fn fraction_addition(expression: String) -> String {
        let mut i = 0;
        let mut nums = Vec::new();
        while i < expression.len() {
            let mut j = i + 1;
            while j < expression.len() && expression.as_bytes()[j] != b'+' && expression.as_bytes()[j] != b'-' { j += 1; }
            let curr = &expression[i..j].split('/').collect::<Vec<_>>();
            nums.push(curr[0].to_string().parse::<i32>().unwrap());
            nums.push(curr[1].to_string().parse::<i32>().unwrap());
            i = j;
        }

        let (mut numerator, mut denominator) = (0, 1);
        for i in (0..nums.len()).filter(|i| (i & 1) == 1) { denominator *= nums[i]; }
        for i in (0..nums.len()).filter(|i| (i & 1) == 0) { numerator += nums[i] * denominator / nums[i + 1]; }

        fn gcd(denominator: i32, numerator: i32) -> i32 {
            return if numerator == 0 { denominator } else { gcd(numerator, denominator % numerator) };
        }
        let common = gcd(denominator, numerator).abs();
        format!("{}/{}", numerator / common, denominator / common)
    }
}
// @lc code=end