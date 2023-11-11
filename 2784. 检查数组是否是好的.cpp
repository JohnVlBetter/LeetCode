/*
 * @lc app=leetcode.cn id=2784 lang=cpp
 *
 * [2784] 检查数组是否是好的
 */

// @lc code=start
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int map[201];
        memset(map,0,sizeof(map));
        int n = nums.size()-1;
        for(auto& num : nums) {
            map[num]++;
        }
        for(int i = 1;i< n;++i) {
            if(map[i] != 1) return false;
        }
        return map[n] == 2;
    }
};
// @lc code=end

