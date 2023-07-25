/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length();
        for(int i = 0;i<n;++i){
            if(s[i] >= 65 && s[i] <= 90)
                s[i] |= 32;
        }
        return s;
    }
};
// @lc code=end

