/*
 * @lc app=leetcode.cn id=2834 lang=cpp
 *
 * [2834] 找出美丽数组的最小和
 */

// @lc code=start
class Solution {
public:
    int minimumPossibleSum(int n, int target) {
        long long m = min(target / 2, n);
        return (m * (m + 1) + (-m + target * 2 + n - 1) * (n - m)) / 2 % (1000000007);
    }
};
// @lc code=end

