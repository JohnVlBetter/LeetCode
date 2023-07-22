/*
 * @lc app=leetcode.cn id=2413 lang=cpp
 *
 * [2413] 最小偶倍数
 */

// @lc code=start
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n << (n & 1); 
    }
};
// @lc code=end

