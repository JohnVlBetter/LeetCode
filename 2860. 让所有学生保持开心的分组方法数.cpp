/*
 * @lc app=leetcode.cn id=2860 lang=cpp
 *
 * [2860] 让所有学生保持开心的分组方法数
 */

// @lc code=start
class Solution {
public:
    int countWays(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int res = nums[0] > 0 ? 1 : 0;
        for(int i = 1;i< nums.size();++i){
            if(nums[i] > i && nums[i-1]<i){
                ++res;
            }
        }
        return res + 1;
    }
};
// @lc code=end

