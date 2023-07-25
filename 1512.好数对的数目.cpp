/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
 */

// @lc code=start
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int map[101];
        memset(map,0,sizeof(map));
        int result = 0;
        for(auto& n : nums){
            result += map[n]++;
        }
        return result;
    }
};
// @lc code=end

