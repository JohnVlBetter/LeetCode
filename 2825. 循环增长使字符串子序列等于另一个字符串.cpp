/*
 * @lc app=leetcode.cn id=2825 lang=cpp
 *
 * [2825] 循环增长使字符串子序列等于另一个字符串
 */

// @lc code=start
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m = str1.length(), n = str2.length();
        if (m < n) return false;
        auto rotate = [](char c) { return (c + 1 - 'a') % 26 + 'a'; };
        int i = 0, j = 0;
        while(i<m&&j<n){
            if (str1[i] == str2[j] || rotate(str1[i]) == str2[j]) 
                j ++;
            ++i;
        }
        return j == n;
    }
};
// @lc code=end

