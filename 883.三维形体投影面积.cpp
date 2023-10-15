/*
 * @lc app=leetcode.cn id=883 lang=cpp
 *
 * [883] 三维形体投影面积
 */

// @lc code=start
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int xz = 0, yz = 0, xy = 0;
        for(int i = 0;i< grid.size();++i){
            int xzmax = 0;
            int yzmax = 0;
            for(int j = 0;j< grid[i].size();++j){
                grid[i][j] > 0 ? ++xy : 0;
                xzmax = std::max(grid[i][j], xzmax);
                yzmax = std::max(grid[j][i], yzmax);
            }
            xz += xzmax;
            yz += yzmax;
        }
        return xy + xz + yz;
    }
};
// @lc code=end

