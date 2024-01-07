/*
 * @lc app=leetcode.cn id=100170 lang=cpp
 *
 * [100170] 对角线最长的矩形的面积
 */

// @lc code=start
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxL = 0;
        int max = 0;
        for(auto& dimen : dimensions){
            int tmp = dimen[0] * dimen[0] + dimen[1] *dimen[1];
            if(tmp >= maxL){
                if(maxL == tmp)max = std::max(dimen[0] * dimen[1], max);
                else max = dimen[0] * dimen[1];
                maxL = tmp;
            }
        }
        return max;
    }
};
// @lc code=end

