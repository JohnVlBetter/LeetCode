/*
 * @lc app=leetcode.cn id=807 lang=cpp
 *
 * [807] 保持城市天际线
 */

// @lc code=start
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> col(n,0);
        vector<int> row(n,0);
        for(int i = 0;i<n;++i){
            for(int j = 0;j<n;++j){
                col[j] = std::max(col[j], grid[i][j]);
                row[i] = std::max(row[i], grid[i][j]);
            }
        }
        int res = 0;
        for(int i = 0;i<n;++i){
            for(int j = 0;j<n;++j){
                res += std::min(col[j],row[i]) - grid[i][j];
            }
        }
        return res;
    }
};
// @lc code=end

