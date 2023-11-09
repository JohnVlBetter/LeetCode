/*
 * @lc app=leetcode.cn id=2799 lang=cpp
 *
 * [2799] 统计完全子数组的数目
 */

// @lc code=start
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int size = unordered_set<int>(nums.begin(),nums.end()).size();
        int n = nums.size();
        int l = 0,res = 0;
        unordered_map<int,int> map;
        for(int r = 0;r<n;++r){
            map[nums[r]]++;
            while(map.size() == size){
                res += n-r;
                map[nums[l]]--;
                if(map[nums[l]] == 0){
                    map.erase(nums[l]);
                }
                ++l;
            }
        }
        return res;
    }
};
// @lc code=end

