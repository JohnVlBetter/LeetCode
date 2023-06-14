/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */
#include <vector>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl = s.length(), tl = t.length();
        vector<vector<int> > map(tl + 1, vector<int>(26, 0));
        for (int i = 0; i < 26; ++i) map[tl][i] = -1;

        for (int i = tl - 1; i >= 0; --i) {
            for (int j = 0; j < 26; ++j) {
                if (t[i] == j + 'a') map[i][j] = i + 1;
                else map[i][j] = map[i + 1][j];
            }
        }

        int idx = 0;
        for (int i = 0; i < sl; ++i) {
            int pos = map[idx][s[i]-'a'];
            if (pos == -1) return false;
            else idx = pos;
        }
        return true;
    }
};
// @lc code=end

