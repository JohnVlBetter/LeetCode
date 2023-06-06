/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心下标
 */
// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, curSum = 0;
        for(auto n : nums) sum += n;
        for(int idx=0;idx<nums.size();++idx){
            if(sum - nums[idx] == curSum * 2) return idx;
            curSum += nums[idx];
        }
        return -1;
    }
};
// @lc code=end

