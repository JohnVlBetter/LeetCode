/*
 * @lc app=leetcode.cn id=2161 lang=rust
 *
 * [2161] 根据给定数字划分数组
 */

// @lc code=start
impl Solution {
    pub fn pivot_array(nums: Vec<i32>, pivot: i32) -> Vec<i32> {
        let size = nums.len();
        let mut res = vec![pivot; size];
        let mut idx = 0;
        for i in 0..size {
            if nums[i] < pivot {
                res[idx] = nums[i];
                idx += 1;
            }
        }
        for i in 0..size {
            if nums[i] == pivot {
                idx += 1;
            }
        }
        for i in 0..size {
            if nums[i] > pivot {
                res[idx] = nums[i];
                idx += 1;
            }
        }
        res
    }
}
// @lc code=end