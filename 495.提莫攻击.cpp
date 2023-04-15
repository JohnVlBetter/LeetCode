/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = 0, nextTime = timeSeries[0];
        for(int i = 0;i<timeSeries.size();++i){
            if(timeSeries[i] >= nextTime){
                 sum += duration;
                 nextTime = timeSeries[i] + duration;
            }
            else{
                int sub = duration - nextTime + timeSeries[i];
                sum += sub;
                nextTime = nextTime + sub;
            }
        }
        return sum;
    }
};
// @lc code=end