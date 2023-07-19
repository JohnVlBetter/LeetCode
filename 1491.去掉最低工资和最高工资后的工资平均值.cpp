/*
 * @lc app=leetcode.cn id=1491 lang=cpp
 *
 * [1491] 去掉最低工资和最高工资后的工资平均值
 */

// @lc code=start
class Solution {
public:
    double average(vector<int>& salary) {
        int max = INT_MIN,min = INT_MAX,sum=0;
        for(const auto& s : salary){
            max = std::max(max, s);
            min = std::min(min, s);
            sum += s;
        }
        return (double)(sum-max-min)/(salary.size()-2);
    }
};
// @lc code=end

