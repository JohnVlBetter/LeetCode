/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int sell = 0, buy= -prices[0];
        for(int i = 1;i< n;++i){
            int dpBuy = max(buy, sell-prices[i]);
            int dpSell = max(sell, buy+prices[i]);
            sell = dpSell;
            buy = dpBuy;
        }
        return max(sell,buy);
    }
};
// @lc code=end

