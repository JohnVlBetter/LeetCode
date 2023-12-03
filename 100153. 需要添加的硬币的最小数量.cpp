/*
 * @lc app=leetcode.cn id=100153 lang=cpp
 *
 * [100153] 需要添加的硬币的最小数量
 */

// @lc code=start
class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        std::sort(coins.begin(), coins.end());
        int res = 0;
        long long sum = 1;
        for (auto& coin : coins) {
            if (coin <= sum) {
                sum += coin;
            }
            else {
                while (coin > sum && sum <= target) {
                    res++;
                    sum += sum;
                }
                sum += coin;
            }
            if (sum > target) break;
        }

        while (sum <= target) {
            res++;
            sum += sum;
        }

        return res;
    }
};
// @lc code=end

