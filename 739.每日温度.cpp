/*
 * @lc app=leetcode.cn id=739 lang=cpp
 *
 * [739] 每日温度
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n);
        stack<int> s;
        for(int i = 0;i<n;++i){
            while(!s.empty() && temperatures[s.top()] < temperatures[i]){
            int top = s.top();
                result[top] = i - top;
                s.pop();
            }
            s.push(i);
        }
        return result;
    }
};
// @lc code=end

