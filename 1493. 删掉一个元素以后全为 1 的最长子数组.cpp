/*
 * @lc app=leetcode.cn id=1493 lang=cpp
 *
 * [1493] 删掉一个元素以后全为 1 的最长子数组
 */

// @lc code=start
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res = 0;
        int num1 = 0, num2 = 0;
        bool hasZero = false;
        for(auto& num : nums){
            if(num == 0){
                res = std::max(res, num1 + num2);
                num1 = num2;
                num2 = 0;
                hasZero = true;
            }
            else{
                ++num2;
            }
        }
        res = std::max(res, num1+num2);
        if(!hasZero) --res;
        return res;
    }
};
// @lc code=end

