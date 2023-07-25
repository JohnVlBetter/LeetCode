/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int result = 0;
        for(char c : s) result ^= c;
        for(char c : t) result ^= c;
        return result;
    }
};
// @lc code=end

