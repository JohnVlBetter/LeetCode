/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        bool neg = false;
        long long nr = n;
        double result = 1;
        if(nr<0){
            nr=abs(nr);
            neg = true;
        }
        while(nr){
            if(nr&1){
                result *= x;
            }
            x *= x;
            nr>>=1;
        }
        return neg?1/result:result;
    }
};
// @lc code=end

