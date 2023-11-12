/*
 * @lc app=leetcode.cn id=100120 lang=cpp
 *
 * [100120] 找出强数对的最大异或值 I
 */

// @lc code=start
class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size();
        int res = 0;
        for(int i = 0;i<n;++i){
            for(int j = 0;j<n;++j){
                if(abs(nums[i]-nums[j]) <= std::min(nums[i],nums[j])){
                    res = std::max(res, nums[i] ^ nums[j]);
                }
            }
        }
        return res;
    }
};
// @lc code=end

