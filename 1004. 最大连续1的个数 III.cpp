/*
 * @lc app=leetcode.cn id=1004 lang=cpp
 *
 * [1004] 最大连续1的个数 III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int kuse = k;
        int n = nums.size();
        int l = 0, r = 0;
        int res = 0;
        for(;r<n;++r){
            if(nums[r] == 0){
                if(kuse == 0){
                    res = std::max(res, r-l);
                    for(; l <= r;++l){
                        if(nums[l] == 0){
                            ++kuse;
                            ++l;
                            break;
                        }
                    }
                }
                --kuse;
            }
        }
        res = std::max(r-l,res);
        return res;
    }
};
// @lc code=end

