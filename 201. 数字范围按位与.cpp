/*
 * @lc app=leetcode.cn id=201 lang=cpp
 *
 * [201] 数字范围按位与
 */

// @lc code=start
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == right) return left;
        int res = left ^ right;
        int count = 0;
        for(int i = 31;i>=0;--i){
            if(res >> i == 1) break;
            ++count;
        }
        count = 31-count;
        return (left >> count)<<count;
    }
};
// @lc code=end

