/*
 * @lc app=leetcode.cn id=2815 lang=cpp
 *
 * [2815] 数组中的最大数对和
 */

// @lc code=start
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        int maxNum[n];
        for(int i = 0;i<n;++i){
            int max = -1;
            int tmp = nums[i];
            while(tmp){
                int dight = tmp % 10;
                max = std::max(max, dight);
                tmp/=10;
            }
            maxNum[i] = max;
        }
        int res = -1;
        for(int i = 0;i<n;++i){
            for(int j = i+1;j<n;++j){
                if(maxNum[i]==maxNum[j]){
                    res = std::max(res, nums[i] + nums[j]);
                }
            }
        }
        return res;
    }
};
// @lc code=end

