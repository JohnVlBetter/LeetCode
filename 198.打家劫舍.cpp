/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        int k_1 = std::max(nums[0], nums[1]), k_2 = nums[0];
        for(int i = 2;i<nums.size();++i){
            int k = std::max(k_1, k_2 + nums[i]);
            k_2 = k_1;
            k_1 = k;
        }
        return k_1;
    }
};
// @lc code=end

