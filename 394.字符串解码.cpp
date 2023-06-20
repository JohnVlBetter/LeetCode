/*
 * @lc app=leetcode.cn id=394 lang=cpp
 *
 * [394] 字符串解码
 */

// @lc code=start
class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        vector<string> strVec;
        int ptr = 0;
        while(ptr < s.size()) {
            char c = s[ptr];
            if (std::isdigit(c)) {
                int num = GetNum(ptr, s);
                numStack.push(num);
            }
            else if (c <= 'z' && c >= 'a') {
                string str = GetString(ptr, s);
                strVec.push_back(str);
            }
            else if (c == '[') {
                strVec.push_back("[");
            }
            else {
                string tmp = "", str = "";
                while (strVec.back() != "[") {
                    str = strVec.back();
                    strVec.pop_back();
                    tmp = str + tmp;
                }
                strVec.pop_back();
                int top = numStack.top();
                numStack.pop();
                str = tmp;
                for (int i = 1; i < top; ++i) {
                    str += tmp;
                }
                strVec.push_back(str);
            }
            ++ptr;
        }
        string str = "";
        for (int i = 0; i < strVec.size(); ++i) str += strVec[i];
        return str;
    }

    int GetNum(int& ptr, string& s) {
        int result = 0;
        while (ptr < s.size()) {
            if (std::isdigit(s[ptr]))
                result = result * 10 + s[ptr++] - '0';
            else 
                break;
        }
        --ptr;
        return result;
    }

    string GetString(int& ptr, string& s) {
        string result;
        while (ptr < s.size()) {
            if (s[ptr] <= 'z' && s[ptr] >= 'a') 
                result += s[ptr++];
            else 
                break;
        }
        --ptr;
        return result;
    }
};
// @lc code=end

