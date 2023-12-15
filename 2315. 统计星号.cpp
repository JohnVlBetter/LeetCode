/*
 * @lc app=leetcode.cn id=2315 lang=cpp
 *
 * [2315] 统计星号
 */

// @lc code=start
class Solution {
public:
    int countAsterisks(string s) {
        int res = 0, count = 0;
        for(auto& c : s){
            if(c == '|') ++count;
            else if(c == '*' && count % 2 == 0) ++res;
        }
        return res;
    }
};
// @lc code=end

