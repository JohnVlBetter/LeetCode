/*
 * @lc app=leetcode.cn id=2789 lang=cpp
 *
 * [2789] 合并后数组中的最大元素
 */

// @lc code=start
class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long res= 0;
        for(int i = nums.size()-1;i>=0;--i){
            res = nums[i] <= res ? nums[i]+res:nums[i];
        }
        return res;
    }
};
// @lc code=end

