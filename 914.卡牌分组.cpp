/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
    int cnt[10000];
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        for (auto x: deck) cnt[x]++;
        int g = 0;
        for (int i = 0; i < 10000; ++i) {
            if (cnt[i]) {
                g = gcd(g, cnt[i]);
                if(g == 1) return false;
            }
        }
        return g >= 2;
    }
};
// @lc code=end

