/*
 * @lc app=leetcode.cn id=1450 lang=cpp
 *
 * [1450] 在既定时间做作业的学生人数
 */

// @lc code=start
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int res = 0, n = startTime.size();
        for(int i = 0;i<n;++i){
            if(queryTime <= endTime[i] && queryTime >= startTime[i]){
                ++res;
            }
        }
        return res;
    }
};
// @lc code=end

