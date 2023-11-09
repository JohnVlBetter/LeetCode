/*
 * @lc app=leetcode.cn id=2806 lang=cpp
 *
 * [2806] 取整购买后的账户余额
 */

// @lc code=start
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        auto val = purchaseAmount % 10;
        purchaseAmount -= val;
        if(val >= 5) return 100 - purchaseAmount - 10;
        else return 100- purchaseAmount;
    }
};
// @lc code=end

