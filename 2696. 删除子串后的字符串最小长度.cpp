/*
 * @lc app=leetcode.cn id=2696 lang=cpp
 *
 * [2696] 删除子串后的字符串最小长度
 */

// @lc code=start
class Solution {
public:
    int minLength(string s) {
        string result = "";
        for(int i = 0;i<s.size();++i){
            if(!result.empty() && ((result.back() == 'A' && s[i] == 'B') || (result.back() == 'C' && s[i] == 'D'))){
                    result.pop_back();
            }
            else result.push_back(s[i]);
        }
        return result.size();
    }
};
// @lc code=end

