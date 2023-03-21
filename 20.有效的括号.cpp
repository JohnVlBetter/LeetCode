/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <string>
#include <stack>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 == 1) return false;
        stack<char> stack;
        for(int i = 0; i < s.length(); ++i){
            if(stack.size() == 0) stack.push(s[i]);
            else{
                switch (stack.top())
                {
                case '(':
                    if(s[i] == ')')stack.pop();
                    else stack.push(s[i]);
                    break;
                case '[':
                    if(s[i] == ']')stack.pop();
                    else stack.push(s[i]);
                    break;
                case '{':
                    if(s[i] == '}')stack.pop();
                    else stack.push(s[i]);
                    break;
                }
            }
        }
        return stack.size() == 0;
    }
};
// @lc code=end

