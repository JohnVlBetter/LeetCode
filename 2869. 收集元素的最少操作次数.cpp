/*
 * @lc app=leetcode.cn id=2869 lang=cpp
 *
 * [2869] 收集元素的最少操作次数
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int map[k];
        memset(map,0,sizeof(map));
        int count = k;
        int res = 0;
        for(int i = nums.size()-1; i >= 0; --i){
            ++res;
            if(nums[i] <= k && map[nums[i]-1] == 0){
                map[nums[i]-1] = 1;
                --count;
            }
            if(count <= 0){
                break;
            }
        }
        return res;
    }
};
// @lc code=end

