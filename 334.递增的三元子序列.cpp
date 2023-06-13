/*
 * @lc app=leetcode.cn id=334 lang=cpp
 *
 * [334] 递增的三元子序列
 */

// @lc code=start
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3) return false;
        int a = nums[0],b = INT_MAX;
        for(int i = 1;i<nums.size();++i){
            if(nums[i] > b) return true;
            else if(nums[i] > a) b = nums[i];
            else a = nums[i];
        }
        return false;
    }
};
// @lc code=end

