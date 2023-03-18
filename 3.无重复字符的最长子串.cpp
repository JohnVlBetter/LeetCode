/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

#include <string>
#include <unordered_set>
using namespace std;

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /*if (s.length() == 0) return 0;
        if (s.length() == 1) return 1;
        std::unordered_map<char, int> umap;
        umap.emplace(pair<char, int>(s[0], 0));
        int maxL = 1, idxPtr = 0;
        for (int i = 1; i < s.length(); ++i) {
            auto iter = umap.find(s[i]);
            if (iter != umap.end()) {
                int idx = iter->second;
                if (maxL < umap.size()) maxL = umap.size();
                for (int j = idxPtr; j <= idx; ++j) {
                    umap.erase(s[j]);
                }
                idxPtr = ++idx;
            }
            umap.emplace(pair<char, int>(s[i], i));
        }
        if (maxL < umap.size()) return umap.size();
        else return maxL;*/
        /*unordered_set<char> occ;
        int n = s.size();
        int rk = -1, ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i != 0) {
                occ.erase(s[i - 1]);
            }
            while (rk + 1 < n && !occ.count(s[rk + 1])) {
                occ.insert(s[rk + 1]);
                ++rk;
            }
            ans = max(ans, rk - i + 1);
        }
        return ans;*/
    }
};
// @lc code=end

