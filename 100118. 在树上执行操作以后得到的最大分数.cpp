/*
 * @lc app=leetcode.cn id=100118 lang=cpp
 *
 * [100118] 在树上执行操作以后得到的最大分数
 */

// @lc code=start
class Solution {
public:
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        vector<vector<int>> g(values.size());
        g[0].push_back(-1);
        for (auto &e: edges) {
            int x = e[0], y = e[1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        function<long long(int, int)> dfs = [&](int x, int fa) -> long long {
            if (g[x].size() == 1) {
                return values[x];
            }
            long long loss = 0;
            for (int y: g[x]) {
                if (y != fa) {
                    loss += dfs(y, x); 
                }
            }
            return min((long long) values[x], loss); 
        };
        return accumulate(values.begin(), values.end(), 0LL) - dfs(0, -1);
    }
};
// @lc code=end

