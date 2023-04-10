/*
 * @lc app=leetcode.cn id=1018 lang=cpp
 *
 * [1018] 可被 5 整除的二进制前缀
 */

// @lc code=start
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int num = 0;
        vector<bool> answer;
        for(int i = 0;i<nums.size();++i){
            num = (nums[i] + num<<1)%5;
            answer.push_back(num==0);
        }
        return answer;
    }
};
// @lc code=end

