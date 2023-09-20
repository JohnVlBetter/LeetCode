/*
 * @lc app=leetcode.cn id=1021 lang=cpp
 *
 * [1021] 删除最外层的括号
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int left = 0;
        for(auto& c : s){
            if(c == ')'){
                --left;
            }
            if(left){
                res.push_back(c);
            }
            if(c == '('){
                ++left;
            }
        }
        return res;
    }
};
// @lc code=end

