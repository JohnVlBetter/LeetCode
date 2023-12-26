/*
 * @lc app=leetcode.cn id=2697 lang=rust
 *
 * [2697] 字典序最小回文串
 */

// @lc code=start
impl Solution {
    pub fn make_smallest_palindrome(s: String) -> String {
        let mut vec : Vec<char> = s.chars().collect();
        let mut r: usize = vec.len()-1;
        let mut l: usize = 0;
        while l < r{
            if vec[l] != vec[r]{
                vec[l] = std::cmp::min(vec[l],vec[r]);
                vec[r] = vec[l]
            }
            l += 1;
            r -= 1;
        }
        vec.into_iter().collect()
    }
}
// @lc code=end

