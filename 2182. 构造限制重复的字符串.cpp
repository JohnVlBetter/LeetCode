/*
 * @lc app=leetcode.cn id=2182 lang=cpp
 *
 * [2182] 构造限制重复的字符串
 */

// @lc code=start
class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int> count(26, 0);
        for (char c : s) count[c - 'a']++;
        string res;
        int limit = 0;
        int i = 25, j = 24;
        while(i >= 0 && j >= 0) {
            if (count[i] == 0) {
                limit = 0;
                i--;
            } 
            else if (limit < repeatLimit) {
                count[i]--;
                res.push_back('a' + i);
                limit++;
            } 
            else if (j >= i || count[j] == 0) {
                j--;
            } 
            else {
                count[j]--;
                res.push_back('a' + j);
                limit = 0;
            }
        }
        return res;
    }
};
// @lc code=end

