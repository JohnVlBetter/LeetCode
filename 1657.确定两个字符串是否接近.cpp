/*
 * @lc app=leetcode.cn id=1657 lang=cpp
 *
 * [1657] 确定两个字符串是否接近
 */

// @lc code=start
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) return false;
        int arr1[26] = {0}, arr2[26] = { 0 };
        for (auto& c : word1) ++arr1[c - 'a'];
        for (auto& c : word2) ++arr2[c - 'a'];
        for (int i = 0; i < 26; ++i) {
            if (arr1[i] && !arr2[i] || !arr1[i] && arr2[i]) return false;
        }
        for (int i = 0; i < 26; ++i) {
            if (arr1[i] == 0) continue;
            bool found = false;
            for (int j = 0; j < 26; ++j) {
                if (arr2[j] == arr1[i]) {
                    found = true;
                    arr2[j] = 0;
                    break;
                }
            }
            if (!found) return false;
        }
        return true;
    }
};
// @lc code=end

