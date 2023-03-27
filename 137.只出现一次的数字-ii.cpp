/*
 * @lc app=leetcode.cn id=137 lang=cpp
 *
 * [137] 只出现一次的数字 II
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int i=0;i<32;++i){
            int sum = 0;
            for(auto n:nums){
                sum += n>>i&1;
            }
            if(sum % 3){
                num |= 1<<i;
            }
        }
        return num;
    }
};
// @lc code=end

