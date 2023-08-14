/*
 * @lc app=leetcode.cn id=2640 lang=cpp
 *
 * [2640] 一个数组所有前缀的分数
 */

// @lc code=start
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> result(n);
        int maxNum = 0;
        long long converSum = 0;
        for(int i = 0;i < n; ++i){
            maxNum = std::max(maxNum, nums[i]);
            converSum += maxNum + nums[i];
            result[i] = converSum;
        }
        return result;
    }
};
// @lc code=end

