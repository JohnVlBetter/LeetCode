/*
 * @lc app=leetcode.cn id=1447 lang=cpp
 *
 * [1447] 最简分数
 */

// @lc code=start
class Solution {
public:
     vector<string> simplifiedFractions(int n) {
        vector<string> res;
        for (int b = 2; b <= n; ++b) {
            for (int a = 1; a < b; ++a) {
                if (__gcd(a, b) == 1) {
                    res.emplace_back(to_string(a) + "/" + to_string(b));
                }
            }
        }
        return res;
    }
};
// @lc code=end

