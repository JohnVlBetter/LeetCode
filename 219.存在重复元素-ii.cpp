/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> map;
        for(int i = 0;i<n;++i){
            if(i > k) map.erase(nums[i-k-1]);
            if(map.count(nums[i])) return true;
            map.emplace(nums[i]);
        }
        return false;
    }
};
// @lc code=end

