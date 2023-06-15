/*
 * @lc app=leetcode.cn id=2390 lang=cpp
 *
 * [2390] 从字符串中移除星号
 */

// @lc code=start
class Solution {
public:
    string removeStars(string s) {
        /*stack<char> stack;
        for (auto& c : s) {
            if (c != '*') stack.push(c);
            else stack.pop();
        }
        s.resize(stack.size());
        for (int i = stack.size() - 1; i >= 0; --i) {
            s[i] = stack.top();
            stack.pop();
        }
        return s;*/
        string result = "";
        for (auto& c : s) {
            if (c != '*') result += c;
            else result.pop_back();
        }
        return result;
    }
};
// @lc code=end

