/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        int n = 1;
        while(n < num){
            n <<= 1;
            ++n;
        }
        return n ^ num;
    }
};
// @lc code=end

