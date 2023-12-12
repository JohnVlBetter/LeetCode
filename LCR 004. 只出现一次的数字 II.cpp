/*
 * @lc app=leetcode.cn id=LCR 004 lang=cpp
 *
 * [LCR 004] 只出现一次的数字 II
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < 32; ++i) {
            int sum = 0;
            for (int num: nums) {
                sum += ((num >> i) & 1);
            }
            if (sum % 3) {
                res |= (1 << i);
            }
        }
        return res;
    }
};
// @lc code=end

