/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0,r = 0;
        while(r<nums.size()){
            if(nums[r]){
                int tmp = nums[l];
                nums[l] = nums[r];
                nums[r] = tmp;
                ++l;
            }
            ++r;
        }
    }
};
// @lc code=end

