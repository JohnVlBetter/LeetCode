/*
 * @lc app=leetcode.cn id=1544 lang=cpp
 *
 * [1544] 整理字符串
 */

// @lc code=start
class Solution {
public:
    string makeGood(string s) {
        string result = "";
        for(char c : s){
            if(!result.empty() && result.back() != c && abs(result.back() - c) == 32)
                result.pop_back();
            else result.push_back(c);
        }
        return result;
    }
};

// @lc code=end

