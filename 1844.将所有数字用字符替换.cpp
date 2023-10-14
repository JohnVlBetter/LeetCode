/*
 * @lc app=leetcode.cn id=1844 lang=cpp
 *
 * [1844] 将所有数字用字符替换
 */

// @lc code=start
class Solution {
public:
    string replaceDigits(string s) {
        int num = s.size();
        for (int i = 1; i < num; i += 2){
            s[i] = s[i-1] + s[i] - '0';
        }
        return s;
    }
};
// @lc code=end

