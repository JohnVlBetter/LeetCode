/*
 * @lc app=leetcode.cn id=2428 lang=cpp
 *
 * [2428] 沙漏的最大总和
 */

// @lc code=start
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int res=0;
        int n = grid.size();
        int m = grid[0].size();
        int x[7]={-1,-1,-1,0,1,1,1};
        int y[7]={-1,0,1,0,-1,0,1};
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                int sum=0;
                for(int k=0;k<7;k++) sum+=grid[i+x[k]][j+y[k]];
                res=max(res,sum);
            }
        }
        return res;
    }
};
// @lc code=end

