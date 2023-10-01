/*
 * @lc app=leetcode.cn id=1436 lang=cpp
 *
 * [1436] 旅行终点站
 */

// @lc code=start
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> city;
        for (auto &path : paths) {
            city.insert(path[0]);
        }
        for (auto &path : paths) {
            if (!city.count(path[1])) {
                return path[1];
            }
        }
        return "";
    }
};
// @lc code=end

