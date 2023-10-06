/*
 * @lc app=leetcode.cn id=1551 lang=cpp
 *
 * [1551] 使数组中所有元素相等的最小操作数
 */

// @lc code=start
class Solution {
public:
    int minOperations(int n) {
        return n * n >> 2;
    }
};
// @lc code=end

