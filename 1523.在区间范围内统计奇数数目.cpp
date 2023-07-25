/*
 * @lc app=leetcode.cn id=1523 lang=cpp
 *
 * [1523] 在区间范围内统计奇数数目
 */

// @lc code=start
class Solution {
public:
    int countOdds(int low, int high) {
        int n = high - low;
        if(!n) return low&1;
        if(high&1) --n;
        return n / 2 + (low&1) + (high&1);
    }
};
// @lc code=end

