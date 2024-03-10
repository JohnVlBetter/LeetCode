/*
 * @lc app=leetcode.cn id=1700 lang=rust
 *
 * [1700] 无法吃午餐的学生数量
 */

// @lc code=start
impl Solution {
    pub fn count_students(students: Vec<i32>, sandwiches: Vec<i32>) -> i32 {
        let mut cnt = vec![0;2];
        let n = students.len();
        students.iter().for_each(|&student| cnt[student as usize] += 1);
        let mut res = 0;
        while res < n && cnt[sandwiches[res] as usize] > 0 {
            cnt[sandwiches[res] as usize] -= 1;
            res += 1;
        }
        (n - res) as i32
    }
}
// @lc code=end
