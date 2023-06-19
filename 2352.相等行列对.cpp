/*
 * @lc app=leetcode.cn id=2352 lang=cpp
 *
 * [2352] 相等行列对
 */

// @lc code=start
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> cowMap;
        int result = 0;
        for (auto& v : grid) cowMap[v]++;
        vector<int> tmp;
        for (int j = 0; j < grid.size(); ++j) {
            tmp.clear();
            for (int i = 0; i < grid.size(); ++i) tmp.emplace_back(grid[i][j]);
            result += cowMap[tmp];
        }
        return result;
    }
};
// @lc code=end

