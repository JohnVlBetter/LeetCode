/*
 * @lc app=leetcode.cn id=1854 lang=cpp
 *
 * [1854] 人口最多的年份
 */

// @lc code=start
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int delta[101];
        memset(delta,0,sizeof(delta));
        for(const auto& log : logs){
            ++delta[log[0]-1950];
            --delta[log[1]-1950];
        }
        int curC = 0;
        int maxC = -1;
        int year = -1;
        for(int i = 0;i<101;++i){
            curC += delta[i];
            if(curC > maxC){
                maxC = curC;
                year = 1950 + i;
            }
        }
        return year;
    }
};
// @lc code=end

