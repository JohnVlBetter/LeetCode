/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back({});
        int n=nums.size();
        if(n==0) return {};
        for(int i=0;i<n;i++){
            int k=result.size();
            for(int j=0;j<k;j++){
                vector<int> tmp(result[j]);
                tmp.push_back(nums[i]);
                result.push_back(tmp);
            }
        }
        return result;
    }
};
// @lc code=end

