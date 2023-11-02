/*
 * @lc app=leetcode.cn id=2841 lang=cpp
 *
 * [2841] 几乎唯一子数组的最大和
 */

// @lc code=start
class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        unordered_map<int,int> cnt;
        long long res = 0;
        long long sum = 0;
        for(int i = 0; i< k-1;++i){
            sum += nums[i];
            cnt[nums[i]]++;
        }
        for(int i = k-1;i<nums.size();++i){
            cnt[nums[i]]++;
            sum += nums[i];
            if(cnt.size() >= m){
                res = std::max(res,sum);
            }
            if(--cnt[nums[i-k+1]] == 0){
                cnt.erase(nums[i-k+1]);
            }
            sum -= nums[i-k+1];
        }
        return res;
    }
};
// @lc code=end

