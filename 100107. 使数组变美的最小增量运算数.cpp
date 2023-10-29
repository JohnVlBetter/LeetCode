/*
 * @lc app=leetcode.cn id=100107 lang=cpp
 *
 * [100107] 使数组变美的最小增量运算数
 */

// @lc code=start
class Solution {
public:
    long long minIncrementOperations(vector<int>& nums, int k) {
        int n = nums.size();
        long long dp[n];
        for(int i = 0;i<3;++i){
            dp[i] = max(k-nums[i],0);
        }
        for(int i = 3;i<n;++i){
            dp[i] = min(min(dp[i-1],dp[i-2]),dp[i-3]) + max(k-nums[i],0);
        }
        return min(min(dp[n-1],dp[n-2]),dp[n-3]);
    }
};
// @lc code=end

