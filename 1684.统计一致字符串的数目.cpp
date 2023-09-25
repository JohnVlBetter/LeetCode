/*
 * @lc app=leetcode.cn id=1684 lang=cpp
 *
 * [1684] 统计一致字符串的数目
 */

// @lc code=start
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int mask = 0;
        for(auto& c : allowed) mask |= 1 << (c-'a');
        int res = 0;
        for(const auto& word : words){
            int curMask = 0;
            for(const  auto& c :  word) curMask |= 1 << (c-'a');
            if((curMask |  mask) == mask) ++res;
        }
        return res;
    }
};
// @lc code=end

