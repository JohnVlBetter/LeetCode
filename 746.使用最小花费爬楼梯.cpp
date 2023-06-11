/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a = 0,b=0;
        for(int i = 2;i<=cost.size();++i){
            int tmp = min(cost[i-1] + a,cost[i-2] + b);
            b = a;
            a = tmp;
        }
        return a;
    }
};
// @lc code=end

