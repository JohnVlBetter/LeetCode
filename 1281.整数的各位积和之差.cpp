/*
 * @lc app=leetcode.cn id=1281 lang=cpp
 *
 * [1281] 整数的各位积和之差
 */

// @lc code=start
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum1 = 1, sum2 = 0;
        while(n){
            int num = n % 10;
            n /= 10;
            sum1 *= num;
            sum2 += num;
        }
        return sum1 - sum2;
    }
};
// @lc code=end

