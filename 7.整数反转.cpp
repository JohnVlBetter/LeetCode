/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int num = 0;
        while(x!=0){
            if(num < INT_MIN/10 || num > INT_MAX/10) return 0;
            int n = x % 10;
            x /= 10;
            num = num * 10 + n;
        }
        return num;
    }
};
// @lc code=end

