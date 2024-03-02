/*
 * @lc app=leetcode.cn id=LCP 133 lang=cpp
 *
 * [LCP 133] 位 1 的个数
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while(n) {
            n &= (n -1);
            ++res;
        }
        return res;
    }
};
// @lc code=end

