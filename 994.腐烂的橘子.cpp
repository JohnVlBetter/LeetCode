/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] 腐烂的橘子
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int freshC = 0;
        int dir_x[4] = {-1,0,1,0};
        int dir_y[4] = {0,1,0,-1};
        int m = grid.size();
        int n = grid[0].size();
        int min[10][10];
        memset(min, -1 , sizeof(min));
        queue<tuple<int,int>> q;
        for(int i = 0; i< grid.size();++i){
            for(int j = 0;j<grid[0].size();++j){
                if(grid[i][j] == 1) ++freshC;
                else if(grid[i][j] == 2){
                    q.emplace(i,j);
                    min[i][j] = 0;
                }
            }
        }
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(int i = 0; i < 4; ++i){
                int nx = x + dir_x[i];
                int ny = y + dir_y[i];
                if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 1){
                    min[nx][ny] = min[x][y] + 1;
                    grid[nx][ny] = 2;
                    q.emplace(nx,ny);
                    --freshC;
                    if(!freshC) return min[nx][ny];
                }
            }
        }
        return freshC ? -1 : 0;
    }
};
// @lc code=end

