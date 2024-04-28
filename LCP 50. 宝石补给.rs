/*
 * @lc app=leetcode.cn id=LCP 50 lang=rust
 *
 * [LCP 50] 宝石补给
 */

// @lc code=start
impl Solution {
    pub fn give_gem(mut gem: Vec<i32>, operations: Vec<Vec<i32>>) -> i32 {
        for operation in operations {
            let num = gem[operation[0] as usize] / 2;
            gem[operation[0] as usize] -= num;
            gem[operation[1] as usize] += num;
        }
        *gem.iter().max().unwrap() - *gem.iter().min().unwrap()
    }
}
// @lc code=end