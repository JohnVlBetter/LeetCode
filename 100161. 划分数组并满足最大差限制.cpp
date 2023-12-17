/*
 * @lc app=leetcode.cn id=100161 lang=cpp
 *
 * [100161] 划分数组并满足最大差限制
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i+=3){
            if(std::abs(nums[i]-nums[i+2]) > k){
                return {};
            }else{
                vector<int> tmp;
                tmp.push_back(nums[i]);
                tmp.push_back(nums[i+1]);
                tmp.push_back(nums[i+2]);
                res.push_back(tmp);
            }
        }
        return res;
    }
};
// @lc code=end

