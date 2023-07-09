/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> s2t,t2s;
        for(int i = 0;i<s.length();++i){
            if((s2t.count(s[i]) && s2t[s[i]] != t[i]) || (t2s.count(t[i]) && t2s[t[i]] != s[i])){
                return false;
            }else{
                s2t[s[i]] = t[i];
                t2s[t[i]] = s[i];
            }
        }
        return true;
    }
};
// @lc code=end

