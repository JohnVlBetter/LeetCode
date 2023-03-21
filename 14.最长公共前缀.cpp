/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*if(strs.size() == 0)return "";
        if(strs.size() == 1)return strs[0];
        int minL = strs[0].length();
        for(int i=1;i<strs.size();++i){
            if(strs[i].length() < minL) minL = strs[i].length();
        }
        int minSame = minL;
        for(int i=1;i<strs.size();++i){
            string curS = strs[i];
            for(int j=0;j<minL;++j){
                if(curS[j] != strs[0][j]){
                    if(j<minSame) minSame = j;
                }
            }
        }
        return strs[0].substr(0,minSame);*/
        if(strs.empty()) return string();
        sort(strs.begin(), strs.end());
        string st = strs.front(), en = strs.back();
        int i, num = min(st.size(), en.size());
        for(i = 0; i < num && st[i] == en[i]; i ++);
        return string(st, 0, i);
    }
};
// @lc code=end

