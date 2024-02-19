/*
 * @lc app=leetcode.cn id=427 lang=cpp
 *
 * [427] 建立四叉树
 */
// @lc code=start
class Solution {
public:
    Node *construct(vector<vector<int>> &grid) {
        int n = grid.size();
        vector<vector<int>> pre_sum(n + 1, vector<int>(n + 1));
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                pre_sum[i][j] = pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1] + grid[i - 1][j - 1];
            }
        }

        auto sum = [&](int r0, int c0, int r1, int c1) {
            return pre_sum[r1][c1] - pre_sum[r1][c0] - pre_sum[r0][c1] + pre_sum[r0][c0];
        };

        function<Node *(int, int, int, int)> dfs = [&](int r0, int c0, int r1, int c1) {
            int total = sum(r0, c0, r1, c1);
            if (total == 0) {
                return new Node(false, true);
            }
            if (total == (r1 - r0) * (c1 - c0)) {
                return new Node(true, true);
            }
            return new Node(
                    true,
                    false,
                    dfs(r0, c0, (r0 + r1) / 2, (c0 + c1) / 2),
                    dfs(r0, (c0 + c1) / 2, (r0 + r1) / 2, c1),
                    dfs((r0 + r1) / 2, c0, r1, (c0 + c1) / 2),
                    dfs((r0 + r1) / 2, (c0 + c1) / 2, r1, c1)
            );
        };

        return dfs(0, 0, n, n);
    }
};
// @lc code=end

