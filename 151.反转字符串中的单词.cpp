/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 反转字符串中的单词
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        int l = 0, r= s.length()-1;
        while(s[l] == ' ')++l;
        while(s[r] == ' ')--r;
        stack<string> stack;
        string tmp = "";
        for(int i = l;i<=r;++i){
            if(s[i] != ' ') tmp += s[i];
            if(tmp.size() && (s[i] == ' ' || i == r)){
                stack.push(move(tmp));
                tmp = "";
            }
        }
        while(!stack.empty()){
            tmp += stack.top();
            stack.pop();
            if(!stack.empty()) tmp += ' ';
        }
        return tmp;
    }
};
// @lc code=end

