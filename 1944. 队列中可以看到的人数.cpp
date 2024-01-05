/*
 * @lc app=leetcode.cn id=1944 lang=cpp
 *
 * [1944] 队列中可以看到的人数
 */

// @lc code=start
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int> stk;
        vector<int> res(heights.size(),0);
        for(int i = heights.size()-1;i>=0;--i){
            int c = 0;
            while(!stk.empty() && stk.top() < heights[i]){
                stk.pop();
                ++c;
            }
            if(!stk.empty()) ++c;
            res[i] = c;
            stk.push(heights[i]);
        }
        return res;
    }
};
// @lc code=end

