/*
 * @lc app=leetcode.cn id=2482 lang=cpp
 *
 * [2482] 行和列中一和零的差值
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> col(m,0);
        vector<int> row(n,0);
        for(int i = 0; i< m;++i){
            for(int j = 0;j< n;++j){
                row[j] += grid[i][j];
                col[i] += grid[i][j];
            }
        }
        for(int i = 0; i< m;++i){
            for(int j = 0;j< n;++j){
                grid[i][j] = 2*col[i]-m + 2*row[j]-n;
            }
        }
        return grid;
    }
};
// @lc code=end

