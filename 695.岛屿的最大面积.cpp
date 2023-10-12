/*
 * @lc app=leetcode.cn id=695 lang=cpp
 *
 * [695] 岛屿的最大面积
 */

// @lc code=start
class Solution {
public: 
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0, imax = grid.size(), jmax = grid[0].size();
        for(int i = 0;i< imax;++i){
            for(int j = 0;j< jmax;++j){
                res = std::max(res, dfs(grid, i, j,imax,jmax));
            }
        }
        return res;
    }

    int dfs(vector<vector<int>>& grid, int i, int j, int imax, int jmax){
        if(i <0 || i >= imax || j <0|| j>= jmax ||grid[i][j] == 0 ) return 0;
        int res = 1;
        grid[i][j] = 0;
        for(int idx = 0;idx<4;++idx){
            res += dfs(grid, i+dx[idx],j+dy[idx],imax,jmax);
        }
        return res;
    }
};
// @lc code=end

