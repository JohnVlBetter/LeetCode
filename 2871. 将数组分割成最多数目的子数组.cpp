/*
 * @lc app=leetcode.cn id=2871 lang=cpp
 *
 * [2871] 将数组分割成最多数目的子数组
 */

// @lc code=start
class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = 0xffffffff;
        int res = 0;
        for(int i = 0;i<nums.size();++i){
            n &= nums[i];
            if(n == 0){
                ++res;
                n = 0xffffffff;
            }
        }
        return max(res,1);
    }
};
// @lc code=end

