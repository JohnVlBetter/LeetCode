/*
 * @lc app=leetcode.cn id=896 lang=cpp
 *
 * [896] 单调数列
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return true;
        int status = 0;
        for(int i = 1;i<n;++i){
            if(nums[i] > nums[i-1]){
                if(status == -1) return false;
                else{
                    status = 1;
                }
            }
            else if(nums[i] < nums[i-1]){
                if(status == 1) return false;
                else{
                    status = -1;
                }
            }
        }
        return true;
    }
};
// @lc code=end

