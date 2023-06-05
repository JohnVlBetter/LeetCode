/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0;i<k;++i) sum += nums[i];
        int max = sum;
        for(int i = k,l = 0;i<nums.size();++i,++l){
            sum = sum - nums[l] + nums[i];
            if(max < sum) max = sum;
        }
        return (double)max / k;
    }
};
// @lc code=end

