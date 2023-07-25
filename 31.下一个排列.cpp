/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int small = nums.size() - 2;
        while(small >=0 && nums[small] >= nums[small + 1]) --small;
        if(small >= 0){
            int big = nums.size()- 1;
            while(big >=0 && nums[small] >= nums[big]) --big;
            std::swap(nums[big], nums[small]);
        }
        reverse(nums.begin()+small+1,nums.end());
    }
};