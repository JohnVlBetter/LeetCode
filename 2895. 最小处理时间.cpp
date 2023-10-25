/*
 * @lc app=leetcode.cn id=2895 lang=cpp
 *
 * [2895] 最小处理时间
 */

// @lc code=start
class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        std::sort(processorTime.begin(),processorTime.end());
        std::sort(tasks.begin(),tasks.end(), greater<int>());
        int res = 0;
        for(int i = 0;i< processorTime.size(); ++i){
            res = std::max(res, processorTime[i] + tasks[i*4]);
        }
        return res;
    }
};
// @lc code=end

