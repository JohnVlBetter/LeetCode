/*
 * @lc app=leetcode.cn id=2529 lang=rust
 *
 * [2529] 正整数和负整数的最大计数
 */

// @lc code=start
impl Solution {
    pub fn maximum_count(nums: Vec<i32>) -> i32 {
        let neg = bfind(&nums, 0);
        let pos = bfind(&nums, 1);
        fn bfind(nums: &Vec<i32>, val: i32) -> usize {
            let (mut l, mut r) = (0, nums.len());
            while l < r {
                let mid = (l + r) / 2;
                if nums[mid] >= val {
                    r = mid;
                } else {
                    l = mid + 1;
                }
            }
            l
        }
        neg.max(nums.len() - pos) as i32
    }
}
// @lc code=end