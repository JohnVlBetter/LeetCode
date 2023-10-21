/*
 * @lc app=leetcode.cn id=2894 lang=cpp
 *
 * [2894] 分类求和并作差
 */

// @lc code=start
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int tmp = n / m;
        return n*(n+1)/2- tmp*(tmp+1)*m;
    }
};
// @lc code=end

