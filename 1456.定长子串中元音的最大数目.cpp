/*
 * @lc app=leetcode.cn id=1456 lang=cpp
 *
 * [1456] 定长子串中元音的最大数目
 */

// @lc code=start
class Solution {
public:
    int maxVowels(string s, int k) {
        int len = s.length();
        if (k > len) return 0;
        int count = 0, maxCount = 0;
        for (int i = 0; i <= k - 1; ++i) if (isVowel(s[i])) ++count;
        maxCount = count;
        for (int i = k; i < len; ++i) {
            if (isVowel(s[i-k])) --count;
            if (isVowel(s[i])) ++count;
            if (count > maxCount) maxCount = count;
        }
        return maxCount;
    }

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o';
    }
};
// @lc code=end

