/*
 * @lc app=leetcode.cn id=2839 lang=cpp
 *
 * [2839] 判断通过操作能否让字符串相等 I
 */

// @lc code=start
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i = 0;i<4;++i){
            if(s1[i] != s2[i]){
                if(i > 1){
                    if(s1[i-2] != s2[i] || s1[i] != s2[i-2])
                        return false;
                }
                else{
                    if(s1[i+2] != s2[i] || s1[i] != s2[i+2])
                        return false;
                } 
            }
        }
        return true;
    }
};
// @lc code=end

