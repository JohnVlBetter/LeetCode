/*
 * @lc app=leetcode.cn id=100139 lang=cpp
 *
 * [100139] 循环移位后的矩阵相似检查
 */

// @lc code=start
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat[0].size();
        k %= m;
        for(int i = 0; i<mat.size();++i){
            if(i % 2 == 0){
                for(int j = m-1;j>=0;--j){
                    int idx = j - k;
                    if(idx < 0) idx = m + idx;
                    if(mat[i][j] != mat[i][idx]) return false;
                }
            }else{
                for(int j = 0;j < m;++j){
                    int idx = (j + k) % m;
                    if(mat[i][j] != mat[i][idx]) return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

