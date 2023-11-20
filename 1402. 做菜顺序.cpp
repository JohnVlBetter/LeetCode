/*
 * @lc app=leetcode.cn id=1402 lang=cpp
 *
 * [1402] 做菜顺序
 */

// @lc code=start
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1));
        sort(satisfaction.begin(), satisfaction.end());
        int res = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                dp[i][j] = dp[i - 1][j - 1] + satisfaction[i - 1] * j;
                if (j < i) {
                    dp[i][j] = std::max(dp[i - 1][j], dp[i][j]);
                }
                res = std::max(res, dp[i][j]);
            }
        }
        return res;
    }
};
// @lc code=end

