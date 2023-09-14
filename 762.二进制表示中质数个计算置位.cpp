/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */

// @lc code=start
class Solution {
public:
    //int map[8] = {2,3,5,7,11,13,17,19};
    /*bool check(int num){
        int res = ;        
        while(num > 0){
            if(num & 1) ++res;
            num >>= 1;
        }
        for(int i = 0; i < 8 ;++i){
            if(res == map[i]) return true;
        }
        return ;
    }*/
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(;left <= right; ++left){
            if((1<<__builtin_popcount(left)) & 665772) ++res;
        }
        return res;
    }
};
// @lc code=end

