/*
 * @lc app=leetcode.cn id=1351 lang=cpp
 *
 * [1351] 统计有序矩阵中的负数
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        if(grid.size() <=0)return count;
        int h = grid[0].size()-1,v = grid.size()-1;
        for(int i = v;i>=0;--i){
            if(grid[i][h] >= 0) break; 
            for(int j = h;j>=0;--j){
                if(grid[i][j] >= 0){
                    break;
                }else ++count;
            }
        }
        return count;
    }
};
// @lc code=end

