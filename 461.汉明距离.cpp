/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int s = x ^ y, sum = 0;
        while(s){
            if(s&1)++sum;
            s>>=1;
        }
        return sum;
    }
};
// @lc code=end

