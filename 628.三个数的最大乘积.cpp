/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return max(nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3],
         nums[0] * nums[1] * nums[nums.size() - 1]);
    }
};
// @lc code=end

