/*
 * @lc app=leetcode.cn id=861 lang=cpp
 *
 * [861] 翻转矩阵后的得分
 */

// @lc code=start
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        for(int i = 0;i<n;++i){
            if(grid[i][0] == 0){
                for(int j = 0;j<m;++j)
                    grid[i][j] = grid[i][j]?0:1;
            }
        }

        for(int i = 0;i<m;++i){
            int oneC = 0;
            for(int j = 0;j<n;++j){
                oneC += grid[j][i];
            }
            if(oneC < (n +1)/ 2){
                for(int j = 0;j<grid.size();++j)
                    grid[j][i] = grid[j][i]?0:1;
            }
        }

        int result = 0;
        for(int i = 0;i<n;++i){
            int tmp = 0;
            for(int j = 0;j<m;++j){
                tmp <<= 1;
                tmp |= grid[i][j];
            }
            result += tmp;
        }
        return result;
    }
};
// @lc code=end

