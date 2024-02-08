/*
 * @lc app=leetcode.cn id=LCR 178 lang=cpp
 *
 * [LCR 178] 训练计划 VI
 */

// @lc code=start
class Solution {
public:
    int trainingPlan(vector<int>& actions) {
        int counts[32] = {0};
        for(int action : actions) {
            for(int i = 0; i < 32; i++) {
                counts[i] += action & 1;
                action >>= 1;
            }
        }
        int res = 0, m = 3;
        for(int i = 31; i >= 0; i--) {
            res <<= 1;
            res |= counts[i] % m;
        }
        return res;
    }
};
// @lc code=end

