/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i = 0;i<nums.size();++i){
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                int cur = nums[i] + nums[left]+nums[right];
                if(cur == 0 ){
                    result.push_back({nums[i],nums[left],nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {
					    left++;
				    }
				    while (left < right && nums[right] == nums[right - 1]) {
				    	right--;
				    }
                    right--;
				    left++;
                }
                else if(cur > 0){
                    right --;
                }else left ++;
            }
        }
        return result;
    }
};
// @lc code=end

