/*
 * @lc app=leetcode.cn id=2928 lang=rust
 *
 * [2928] 给小朋友们分糖果 I
 */

// @lc code=start
class Solution {
    int c(int n) {
        return n > 1 ? n * (n - 1) / 2 : 0;
    }
public:
    int distributeCandies(int n, int limit) {
        return c(n + 2)  + 3 * c(n - 2 * limit) - 3 * c(n - limit + 1)- c(n - 3 * limit - 1);
    }
};
// @lc code=end

