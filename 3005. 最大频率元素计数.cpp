/*
 * @lc app=leetcode.cn id=3005 lang=rust
 *
 * [3005] 最大频率元素计数
 */

// @lc code=start
impl Solution {
    pub fn max_frequency_elements(nums: Vec<i32>) -> i32 {
        let mut count : Vec<i32> = vec![0;101];
        nums.into_iter().for_each(|num| count[num as usize] += 1);
        count.sort_unstable_by(|a, b| b.partial_cmp(a).unwrap());
        let mut res = count[0];
        let v = count[0];
        for i in 1..count.len() {
            if v != count[i] {
                break;
            }
            res += count[i];
        }
        res
    }
}
// @lc code=end