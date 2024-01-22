/*
 * @lc app=leetcode.cn id=670 lang=rust
 *
 * [670] 最大交换
 */

// @lc code=start
impl Solution {
    pub fn maximum_swap(num: i32) -> i32 {
        let mut list = num.to_string().chars().collect::<Vec<char>>();
        let n = list.len();
        let mut i = 0;
        let mut j = n;
        let mut max_idx = n - 1;
        for idx in (0..n-1).rev(){
            if list[max_idx] < list[idx] {
                max_idx = idx;
            }
            else if list[idx] < list[max_idx] {
                i = idx;
                j = max_idx;
            }
        }
        if j == n {
            return num;
        }
        list.swap(i, j);
        list.iter().collect::<String>().parse::<i32>().unwrap()
    }
}
// @lc code=end