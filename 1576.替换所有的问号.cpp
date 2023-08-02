/*
 * @lc app=leetcode.cn id=1576 lang=cpp
 *
 * [1576] 替换所有的问号
 */

// @lc code=start
class Solution {
public:
    string modifyString(string s) {
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i] == '?') {
                for (char c = 'a'; c <= 'c'; ++c) {
                    if ((i > 0 && s[i - 1] == c) || (i < n - 1 && s[i + 1] == c)) continue;
                    s[i] = c;
                    break;
                }
            }
        }
        return s;
    }
};
// @lc code=end

