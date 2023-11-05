/*
 * @lc app=leetcode.cn id=100115 lang=cpp
 *
 * [100115] 找到冠军 I
 */

// @lc code=start
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        //int map[n];
        //memset(map,0,)
        for(int i = 0;i<n;++i){
            bool flag = true;
            for(int j = 0;j<n;++j){
                if(i==j)continue;
                if(!grid[i][j]){
                    flag = false;
                    break;
                }
            }
            if(flag) return i;
        }
        return 0;
    }
};
// @lc code=end

