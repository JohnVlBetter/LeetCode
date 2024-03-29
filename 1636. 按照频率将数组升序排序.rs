/*
 * @lc app=leetcode.cn id=1636 lang=rust
 *
 * [1636] 按照频率将数组升序排序
 */

// @lc code=start
impl Solution {
    pub fn frequency_sort(nums: Vec<i32>) -> Vec<i32> {
        let mut nums = nums;
        let mut cnt = [0; 201];
        for &num in nums.iter() {
            cnt[num as usize + 100] += 1;
        }

        nums.sort_unstable_by(|a, b| {
            if cnt[(*a + 100) as usize] != cnt[(*b + 100) as usize] {
                return cnt[(*a + 100) as usize].cmp(&cnt[(*b + 100) as usize]);
            }
            b.cmp(a)
        });

        nums
    }
}
// @lc code=end