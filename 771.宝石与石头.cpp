/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool jewel[123];
        memset(jewel, false, sizeof(jewel));
        for(auto& j : jewels){
            jewel[j] = true;
        }
        int res = 0;
        for(auto& s : stones){
            if(jewel[s]) ++res;
        }
        return res;
    }
};
// @lc code=end

