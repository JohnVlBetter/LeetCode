/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> strs(27);
        unordered_map<string, char> map;
        int idx = 0;
        int n = s.size();
        for(int i = 0;i< pattern.size(); ++i){
            int tmp = idx;
            if(tmp >= n)return false;
            while(tmp <n && s[tmp] != ' ') ++tmp;
            string sub = s.substr(idx, tmp -idx);
            idx = tmp + 1;
            if(strs[pattern[i]-'a'] != ""){
                if(strs[pattern[i]-'a'] != sub) return false;
            }else{
                if(map.count(sub)) return false;
                map[sub] = pattern[i];
                strs[pattern[i]-'a'] = sub;
            }
        }
        if(idx < n-1)return false;
        return true;
    }
};
// @lc code=end

