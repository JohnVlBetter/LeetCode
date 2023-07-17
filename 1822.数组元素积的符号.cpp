/*
 * @lc app=leetcode.cn id=1822 lang=cpp
 *
 * [1822] 数组元素积的符号
 */

// @lc code=start
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 1;
        for(int n : nums){
            if(n == 0) return 0;
            if(n < 0) neg = -neg;
        }
        return neg;
    }
};
// @lc code=end

