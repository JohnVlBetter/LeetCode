/*
 * @lc app=leetcode.cn id=100119 lang=cpp
 *
 * [100119] 最大异或乘积
 */

// @lc code=start
class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        const int MOD = 1e9 + 7;
        long long p = (a >> n) << n, q = (b >> n) << n;
        for (int i = n - 1; i >= 0; i--) {
            int x = a >> i & 1;
            int y = b >> i & 1;
            if (x == y) p |= 1LL << i, q |= 1LL << i;
            else if (p < q) p |= 1LL << i;
            else q |= 1LL << i;
        }
        p %= MOD;
        q %= MOD;
        return p * q % MOD;
    }
};
// @lc code=end

