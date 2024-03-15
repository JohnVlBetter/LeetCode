/*
 * @lc app=leetcode.cn id=3028 lang=rust
 *
 * [3028] 边界上的蚂蚁
 */

// @lc code=start
impl Solution {
    pub fn return_to_boundary_count(nums: Vec<i32>) -> i32 {
        nums.iter().scan(0, |acc, &num| {
            *acc += num;
            if *acc == 0 {
                Some(1)
            }else{
                Some(0)
            }
        }).sum::<i32>()
    }
}
// @lc code=end