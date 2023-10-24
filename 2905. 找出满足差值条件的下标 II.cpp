/*
 * @lc app=leetcode.cn id=2905 lang=cpp
 *
 * [2905] 找出满足差值条件的下标 II
 */

// @lc code=start
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int max = 0,min = 0;
        for(int j = indexDifference;j< nums.size();++j){
            int i = j - indexDifference;
            if(nums[i] > nums[max]) max = i;
            else if (nums[i] < nums[min]) min = i;
            if(nums[j] - nums[min] >= valueDifference){
                return {min,j};
            }else if(nums[max] - nums[j] >= valueDifference){
                return {max,j};
            }
        }
        return {-1,-1};
    }
};
// @lc code=end

