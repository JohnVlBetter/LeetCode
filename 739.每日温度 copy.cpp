/*
 * @lc app=leetcode.cn id=260 lang=cpp
 *
 * [260] 只出现一次的数字 III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int val = 0;
        for(auto& num : nums) val ^= num;
        int l = val == INT_MIN ? val : (val & (-val));
        int num1 = 0,num2 = 0;
        for(auto& num : nums){
            if(num & l) num1 ^= num;
            else num2 ^= num;
        }
        return {num1,num2};
    }
};
// @lc code=end

