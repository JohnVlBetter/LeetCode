/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int sum = 1;
        for(int i = 0;i<nums.size();++i){
            result[i] = sum;
            sum *= nums[i];
        }
        sum = 1;
        for(int i = nums.size()-1;i>=0;--i){
            result[i] = result[i] * sum;
            sum *= nums[i];
        }
        return result;
    }
};
// @lc code=end

