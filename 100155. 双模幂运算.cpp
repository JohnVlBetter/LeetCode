/*
 * @lc app=leetcode.cn id=100155 lang=cpp
 *
 * [100155] 双模幂运算
 */

// @lc code=start
class Solution {
public:
    int modMultiply(int a, int b, int mod) {
        return ((a % mod) * (b % mod)) % mod;
    }
    int modPow(int base, int exponent, int mod) {
        int result = 1;
        base = base % mod;

        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = modMultiply(result, base, mod);
            }

            exponent /= 2;
            base = modMultiply(base, base, mod);
        }

        return result;
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> res;
        int n = variables.size();
        for(int i = 0;i< n;++i){
            int ai = variables[i][0];
            int bi = variables[i][1];
            int ci = variables[i][2];
            int mi = variables[i][3];
            int val = modPow(ai, bi, 10);
            val = modPow(val, ci, mi);
            if(val == target) res.push_back(i);
        }
        return res;
    }
};
// @lc code=end

