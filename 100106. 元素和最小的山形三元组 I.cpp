/*
 * @lc app=leetcode.cn id=100106 lang=cpp
 *
 * [100106] 元素和最小的山形三元组 I
 */

// @lc code=start
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int num = nums.size();
        int res = INT_MAX;
        bool isChanged = false;
        for(int i = 0; i < num-2; ++i){
            for(int j = i +1 ;j< num-1;++j){
                for(int k = j +1;k< num;++k){
                    if(nums[i]<nums[j] && nums[k] < nums[j]){
                        res = std::min(res,nums[i]+nums[j]+nums[k]);
                        isChanged = true;
                    }
                }
            }
        }
        return isChanged?res:-1;
    }
};
// @lc code=end

