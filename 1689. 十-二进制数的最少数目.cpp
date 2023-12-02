/*
 * @lc app=leetcode.cn id=1689 lang=cpp
 *
 * [1689] 十-二进制数的最少数目
 */

// @lc code=start
class Solution {
public:
    int minPartitions(string n) {
        /*int res = 0;
        for(const auto& c : n) res = std::max(c-'0',res);
        return res;*/
        return *max_element(n.begin(), n.end()) - '0';
    }
};
// @lc code=end

