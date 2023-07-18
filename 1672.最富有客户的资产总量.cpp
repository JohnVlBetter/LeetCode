/*
 * @lc app=leetcode.cn id=1672 lang=cpp
 *
 * [1672] 最富有客户的资产总量
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1;
        for(const auto& vec:accounts) max = std::max(max, accumulate(vec.begin() , vec.end() , 0));
        return max;
    }
};
// @lc code=end

