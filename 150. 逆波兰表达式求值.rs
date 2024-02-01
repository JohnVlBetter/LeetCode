/*
 * @lc app=leetcode.cn id=150 lang=rust
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
impl Solution {
    pub fn eval_rpn(mut tokens: Vec<String>) -> i32 {
        let mut stack = Vec::with_capacity(10);
        tokens.drain(..).for_each(|s| match s.as_str() {
            "+" => {
                let val = stack.pop().unwrap();
                *stack.last_mut().unwrap() += val
            }
            "-" => {
                let val = stack.pop().unwrap();
                *stack.last_mut().unwrap() -= val
            }
            "*" => {
                let val = stack.pop().unwrap();
                *stack.last_mut().unwrap() *= val
            }
            "/" => {
                let val = stack.pop().unwrap();
                *stack.last_mut().unwrap() /= val
            }
            num => stack.push(num.parse().unwrap()),
        });
        stack.last().copied().unwrap()
    }
}
// @lc code=end