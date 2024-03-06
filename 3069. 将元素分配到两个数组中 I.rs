/*
 * @lc app=leetcode.cn id=3069 lang=rust
 *
 * [3069] 将元素分配到两个数组中 I
 */

// @lc code=start
impl Solution {
    pub fn result_array(nums: Vec<i32>) -> Vec<i32> {
        let mut arr1: Vec<i32> = Vec::new();
        arr1.push(nums[0]);
        let mut arr2: Vec<i32> = Vec::new();
        arr2.push(nums[1]);
        let size = nums.len();
        for idx in 2..size {
            if arr1.last().unwrap() > arr2.last().unwrap() {
                arr1.push(nums[idx]);
            }
            else{
                arr2.push(nums[idx]);
            }
        }
        arr1.append(&mut arr2);
        arr1
    }
}
// @lc code=end