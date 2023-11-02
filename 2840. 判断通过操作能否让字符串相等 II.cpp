/*
 * @lc app=leetcode.cn id=2840 lang=cpp
 *
 * [2840] 判断通过操作能否让字符串相等 II
 */

// @lc code=start
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int cnt1[2][26],cnt2[2][26];
        memset(cnt1,0,sizeof(cnt1));
        memset(cnt2,0,sizeof(cnt2));
        int n = s1.size();
        for(int i = 0;i<n;++i){
            cnt1[i%2][s1[i]-'a']++;
            cnt2[i%2][s2[i]-'a']++;
        }
        return memcmp(cnt1,cnt2,sizeof(cnt1))==0;
    }
};
// @lc code=end

