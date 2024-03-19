/*
 * @lc app=leetcode.cn id=3074 lang=rust
 *
 * [3074] 重新分装苹果
 */

// @lc code=start
impl Solution {
    pub fn minimum_boxes(apple: Vec<i32>, capacity: Vec<i32>) -> i32 {
    let mut count = apple.iter().sum::<i32>();
    let mut capacity = capacity;
    capacity.sort_unstable();
    let n = capacity.len();
    let mut res = 0;
    for idx in (0..n).rev() {
        res += 1;
        if capacity[idx] >= count {
            break;
        } else {
            count -= capacity[idx];
        }
    }
    res
}
}
// @lc code=end