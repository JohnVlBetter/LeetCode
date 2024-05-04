/*
 * @lc app=leetcode.cn id=1235 lang=rust
 *
 * [1235] 规划兼职工作
 */

// @lc code=start
impl Solution {
    pub fn job_scheduling(start_time: Vec<i32>, end_time: Vec<i32>, profit: Vec<i32>) -> i32 {
        let mut jobs = start_time.iter().zip(end_time.iter()).zip(profit.iter()).map(|((&s, &e), &p)| (s, e, p)).collect::<Vec<_>>();
        jobs.sort_unstable_by(|a, b| a.1.cmp(&b.1)); 
        let n = jobs.len();
        let mut f = vec![0; n + 1];
        for (i, &(st, _, p)) in jobs.iter().enumerate() {
            let j = jobs[..i].partition_point(|job| job.1 <= st);
            f[i + 1] = f[i].max(f[j] + p);
        }
        f[n]
    }
}
// @lc code=end