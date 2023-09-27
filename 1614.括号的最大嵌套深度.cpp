/*
 * @lc app=leetcode.cn id=1614 lang=cpp
 *
 * [1614] 括号的最大嵌套深度
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        int left = 0;
        for(const auto& c : s){
            if(c == '(') ++left;
            else if(c == ')'){
                max = std::max(left,max);
                --left;
            }
        }
        return max;
    }
};
// @lc code=end

