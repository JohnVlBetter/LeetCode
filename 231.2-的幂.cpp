/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*if(n==1) return true;
        if(n<1) return false;
        long num = 1;
        for(int i=1;i<=31;++i){
            num *= 2;
            if(n == num) return true;
            if(n < num) return false;
        }
        return false;*/
        return n > 0 && (1<<30) % n == 0;
    }
};
// @lc code=end

