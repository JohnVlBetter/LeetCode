/*
 * @lc app=leetcode.cn id=2848 lang=cpp
 *
 * [2848] 与车相交的点
 */

// @lc code=start
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int axis[101];
        memset(axis,0,sizeof(axis));
        for(auto& v : nums){
            for(int i = v[0];i<=v[1];++i){
                ++axis[i];
            }
        }
        int res = 0;
        for(auto& c : axis) if(c) ++res;
        return res;
    }
};
// @lc code=end

