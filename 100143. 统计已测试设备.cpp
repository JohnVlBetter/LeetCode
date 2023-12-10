/*
 * @lc app=leetcode.cn id=100143 lang=cpp
 *
 * [100143] 统计已测试设备

 */

// @lc code=start
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size();
        int res = 0;
        for(int i = 0;i<n;++i){
            if(batteryPercentages[i] <= 0) continue;
            ++res;
            for(int j = i + 1;j<n;++j){
                batteryPercentages[j] = max(0, batteryPercentages[j] - 1);
            }
        }
        return res;
    }
};
// @lc code=end

