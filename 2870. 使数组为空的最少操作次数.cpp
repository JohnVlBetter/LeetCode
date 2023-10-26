/*
 * @lc app=leetcode.cn id=2870 lang=cpp
 *
 * [2870] 使数组为空的最少操作次数
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int n : nums) {
            map[n]++;
        }
        int res = 0;
        for (auto&[k,v] : map){
            if(v == 1) return -1;
            else{
                res += (v+2)/3;
            }
        }
        return res;
    }
};
// @lc code=end

