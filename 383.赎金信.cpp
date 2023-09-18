/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int map[26];
        memset(map,0,sizeof(map));
        for(const auto& c : magazine){
            ++map[c-'a'];
        }
        for(const auto& c : ransomNote){
            int idx = c-'a';
            --map[idx];
            if(map[idx]<0) return false;
        }
        return true;
    }
};
// @lc code=end

