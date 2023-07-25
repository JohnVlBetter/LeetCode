/*
 * @lc app=leetcode.cn id=1572 lang=cpp
 *
 * [1572] 矩阵对角线元素的和
 */

// @lc code=start
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(),result = 0;
        for(int i = 0;i<n;++i) result  = result + mat[i][i] + mat[i][n-i-1];
        return result - mat[n/2][n/2] * (n&1);
    }
};
// @lc code=end

