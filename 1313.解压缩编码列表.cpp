/*
 * @lc app=leetcode.cn id=1313 lang=cpp
 *
 * [1313] 解压缩编码列表
 */

// @lc code=start
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i = 0;i< nums.size(); i += 2){
            for(int j = 0;j < nums[i];++j){
                res.push_back(nums[i+1]);
            }
        }
        return res;
    }
};
// @lc code=end

