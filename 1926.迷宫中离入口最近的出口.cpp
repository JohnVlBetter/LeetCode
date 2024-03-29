/*
 * @lc app=leetcode.cn id=1926 lang=cpp
 *
 * [1926] 迷宫中离入口最近的出口
 */

// @lc code=start
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int dir_x[4] = {-1,0,1,0};
        int dir_y[4] = {0,1,0,-1};
        int m = maze.size();
        int n = maze[0].size();
        queue<tuple<int,int,int>> q;
        q.emplace(entrance[0],entrance[1],0);
        maze[entrance[0]][entrance[1]] = '+';
        while(!q.empty()){
            auto [x, y, step] = q.front();
            q.pop();
            for(int i = 0; i < 4; ++i){
                int nx = x + dir_x[i];
                int ny = y + dir_y[i];
                if(nx >= 0 && nx < m && ny >= 0 && ny < n && maze[nx][ny] == '.' ){
                    if(nx == 0 || ny == 0 || nx == m -1 || ny == n - 1){
                        return step+1;
                    }
                    else{
                        maze[nx][ny] = '+';
                        q.emplace(nx, ny, step+1);
                    }
                }
            }
        }
        return -1;
    }
};
// @lc code=end

