/*
 * @lc app=leetcode.cn id=100149 lang=cpp
 *
 * [100149] 找出缺失和重复的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int map[n * n+1];
        memset(map,0,sizeof(map));
        for(int i = 0;i<n;++i){
            for(int j = 0;j<n;++j){
                ++map[grid[i][j]];
            }
        }
        int a = 0,b=0;
        for(int i = 1;i<=n*n;++i){
            if(map[i] == 2) a=i;
            else if(map[i] == 0) b=i;
        }
        return {a,b};
    }
};
// @lc code=end

