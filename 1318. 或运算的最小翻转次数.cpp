/*
 * @lc app=leetcode.cn id=1318 lang=cpp
 *
 * [1318] 或运算的最小翻转次数
 */

// @lc code=start
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res = 0;
        for(int i = 0;i <32;++i){
            int valC = (c >> i) & 1;
            int valA = (a >> i) & 1;
            int valB = (b >> i) & 1;
            if(valC == 0){
                if(valA == 1) ++res;
                if(valB == 1) ++res;
            }else{
                if(valB == 0 && valA == 0) ++res;
            }
        }
        return res;
    }
};
// @lc code=end

