/*
 * @lc app=leetcode.cn id=858 lang=rust
 *
 * [858] 镜面反射
 */

// @lc code=start
impl Solution {
    pub fn mirror_reflection(p: i32, q: i32) -> i32 {
        let mut p = p;
        let mut q = q;
        while (p&1)==0 && (q&1) == 0{
            q >>= 1;
            p >>= 1;
        }
        if (p&1)==1 && (q&1)==1 {
            1
        }
        else if (p&1)==1 {
            0
        }
        else {
            2
        }
    }
}
// @lc code=end