/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> result;
    vector<int> tmp;

    void dfs(int cur, int n, int k, int sum) {
        int tmp_n = tmp.size();
        if (tmp_n > k || (n - cur + 1) + tmp_n < k) return;
        if (tmp_n == k && accumulate(tmp.begin(), tmp.end(), 0) == sum) {
            result.push_back(tmp);
            return;
        }
        tmp.push_back(cur);
        dfs(cur + 1, n, k, sum);
        tmp.pop_back();
        dfs(cur + 1, n, k, sum);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(1, 9, k, n);
        return result;
    }
};
// @lc code=end

