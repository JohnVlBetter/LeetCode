/*
 * @lc app=leetcode.cn id=2873 lang=cpp
 *
 * [2873] 有序三元组中的最大值 I
 */

// @lc code=start
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int preMax = nums[0];
        int diffMax = 0;
        long long res = 0;
        for(auto& n : nums){
            res = std::max(res, diffMax * (long long)n);
            diffMax = std::max(diffMax, preMax - n);
            preMax = std::max(preMax, n);
        }
        return res;
    }
};
// @lc code=end

