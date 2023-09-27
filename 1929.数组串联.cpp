/*
 * @lc app=leetcode.cn id=1929 lang=cpp
 *
 * [1929] 数组串联
 */

// @lc code=start
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0;i< size;++i){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
// @lc code=end

