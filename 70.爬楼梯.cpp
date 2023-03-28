/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 2;
        int a = 1,b=2;
        for(int i = 3;i<=n;++i){
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};
// @lc code=end

