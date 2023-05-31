/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int map[26]={0};
        for(auto c : s) ++map[c-'a'];
        for(auto c : t) --map[c-'a'];
        for(int i=0;i<26;++i) if(map[i] != 0) return false;
        return true;
    }
};
// @lc code=end