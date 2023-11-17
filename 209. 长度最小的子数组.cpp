/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0] >= target;
        if(nums[0] >= target)return 1;
        int l = 0,r = 1;
        int sum = nums[0] + nums[1];
        int res = n+1;
        while(true){
            if(r == n-1 && sum < target) break;
            if(sum < target){
                ++r;
                sum += nums[r];
            }
            if(sum >= target){
                res = std::min(res, r-l+1);
                sum -= nums[l];
                ++l;
            }
        }
        return res == n+1?0:res;
    }
};
// @lc code=end

