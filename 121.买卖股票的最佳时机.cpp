/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int lastMin = 1e9;
        for(int i=0;i<prices.size();++i){
            if(prices[i] < lastMin){
                lastMin = prices[i];
            }else{
                if(prices[i]-lastMin > max){
                    max = prices[i]-lastMin;
                }
            }
        }
        return max;
    }
};
// @lc code=end

