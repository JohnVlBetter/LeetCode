/*
 * @lc app=leetcode.cn id=714 lang=cpp
 *
 * [714] 买卖股票的最佳时机含手续费
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size(), dp0 = 0, dp1 = -prices[0];
        for(int i = 1;i<n;++i){
            int tmp_dp0 = std::max(dp0,dp1 + prices[i] - fee);
            dp1 = std::max(dp0 - prices[i], dp1);
            dp0 = tmp_dp0;
        }
        return dp0;
    }
};
// @lc code=end

