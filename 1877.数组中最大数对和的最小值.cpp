/*
 * @lc app=leetcode.cn id=1877 lang=cpp
 *
 * [1877] 数组中最大数对和的最小值
 */

// @lc code=start
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0,right = nums.size()-1;
        int result = 0;
        while(left<right){
            result = std::max(nums[left++]+nums[right--],result);
        }
        return result;
    }
};
// @lc code=end

