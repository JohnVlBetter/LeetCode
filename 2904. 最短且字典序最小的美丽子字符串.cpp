/*
 * @lc app=leetcode.cn id=2904 lang=cpp
 *
 * [2904] 最短且字典序最小的美丽子字符串
 */

// @lc code=start
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        if (count(s.begin(), s.end(), '1') < k) {
            return "";
        }
        string res = s;
        int l = 0, oneC = 0;
        for(int r = 0;r<s.size();++r){
            oneC += s[r]-'0';
            while(s[l]=='0' || oneC>k){
                oneC -= s[l++]-'0';
            }
            if(oneC == k){
                string tmp = s.substr(l, r - l + 1);
                if(tmp.length() < res.length() || tmp.length() == res.length() && tmp < res){
                    res = std::move(tmp);
                }
            }
        }
        return res;
    }
};
// @lc code=end

