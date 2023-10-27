/*
 * @lc app=leetcode.cn id=2855 lang=cpp
 *
 * [2855] 使数组成为递增数组的最少右移次数
 */

// @lc code=start
class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int count = 0, idx = 0;
        for(int i = 1;i<nums.size();++i){
            if(nums[i] < nums[i-1]){
                ++count;
                idx = i;
            }
        }
        if (count == 0) return 0;
        if(nums[0] < nums[nums.size()-1]) ++count;
        if(count > 1) return -1;
        return nums.size()-idx;
    }
};
// @lc code=end

