/*
 * @lc app=leetcode.cn id=442 lang=cpp
 *
 * [442] 数组中重复的数据
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i = 0;i<nums.size();++i){
            int idx = abs(nums[i]);
            if(nums[idx-1] > 0){
                nums[idx-1] *= -1;
            }
            else{
                res.push_back(idx);
            }
        }
        return res;
    }
};
// @lc code=end

