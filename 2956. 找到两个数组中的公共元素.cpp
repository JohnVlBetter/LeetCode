/*
 * @lc app=leetcode.cn id=2956 lang=cpp
 *
 * [2956] 找到两个数组中的公共元素
 */

// @lc code=start
use std::collections::HashSet;
impl Solution {
    pub fn find_intersection_values(nums1: Vec<i32>, nums2: Vec<i32>) -> Vec<i32> {
        let mut set1: HashSet<i32> = nums1.iter().cloned().collect();
        let mut set2: HashSet<i32> = nums2.iter().cloned().collect();
        let mut n1 = 0;
        let mut n2 = 0;
        for num in nums1{
            if set2.contains(&num){
                n1 += 1;
            }
        }
        for num in nums2{
            if set1.contains(&num){
                n2 += 1;
            }
        }
        vec![n1, n2]
    }
}
// @lc code=end

