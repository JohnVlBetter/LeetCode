/*
 * @lc app=leetcode.cn id=921 lang=cpp
 *
 * [921] 使括号有效的最少添加
 */

// @lc code=start
class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0,right = 0;
        for(const auto& c : s){
            if(c == '(') ++left;
            else if (c == ')'){
                if(left) --left;
                else ++right;
            }
        }
        return left + right;
    }
};
// @lc code=end

