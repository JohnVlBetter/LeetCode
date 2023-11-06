/*
 * @lc app=leetcode.cn id=2824 lang=cpp
 *
 * [2824] 统计和小于目标的下标对数目
 */

// @lc code=start
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l = 0,r = nums.size()-1,res= 0;
        while(l<r){
            if(nums[l] + nums[r] < target){
                res += r-l;
                ++l;
            }else{
                --r;
            }
        }
        return res;
    }
};
// @lc code=end

