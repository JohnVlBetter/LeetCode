/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i+=2){
            if(i+1 == nums.size() || nums[i+1] != nums[i]) return nums[i];
        }
        return 0;*/
        int ret = 0;
        for(auto n:nums) ret ^= n;
        return ret;
    }
};
// @lc code=end

