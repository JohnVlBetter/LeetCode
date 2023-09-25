/*
 * @lc app=leetcode.cn id=1688 lang=cpp
 *
 * [1688] 比赛中的配对次数
 */

// @lc code=start
class Solution {
public:
    int numberOfMatches(int n) {
        //return n-1;
        int res = 0;
        while(n != 1){
            if(n % 2 == 0){
                n >>= 1;
                res += n;
            }else{
                int num = (n-1)>>1;
                n = num + 1;
                res += num;
            }
        }
        return res;
    }
};
// @lc code=end

