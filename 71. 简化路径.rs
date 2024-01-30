/*
 * @lc app=leetcode.cn id=71 lang=rust
 *
 * [71] 简化路径
 */

// @lc code=start
impl Solution {
    pub fn simplify_path(path: String) -> String {
        let mut stack = Vec::new();
        path.split("/").for_each(|x| {
            match x {
                "." | "" => (),
                ".." => {stack.pop();},
                _ => {stack.push(x);}
            }
        });
        "/".to_string() + &stack.join("/")
    }
}
// @lc code=end