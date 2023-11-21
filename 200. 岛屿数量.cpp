/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        for(int i = 0;i< m;++i){
            for(int j = 0;j< n;++j){
                if(grid[i][j] == '1'){
                    dfs(i,j,m,n,grid);
                    ++res;
                }
            }
        }
        return res;
    }

    int xDir[4] = {0,1,0,-1};
    int yDir[4] = {1,0,-1,0};
    void dfs(int x, int y, int m, int n, vector<vector<char>>& grid){
        if(x >= m || x < 0 || y >= n || y < 0 || grid[x][y] == '0') return;
        grid[x][y] = '0';
        for(int i = 0;i< 4;++i){
            dfs(x+xDir[i],y+yDir[i],m,n,grid);
        }
    }
};
// @lc code=end

