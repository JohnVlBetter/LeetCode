/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool> col(m,false);
        vector<bool> row(n,false);
        for(int i=0;i<m;++i){
            for(int j = 0;j<n;++j){
                if(matrix[i][j] == 0){
                    col[i] = true;
                    row[j] = true;
                }
            }
        }

        for(int i=0;i<m;++i){
            for(int j = 0;j<n;++j){
                if(col[i] || row[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// @lc code=end

