/*
 * @lc app=leetcode.cn id=1207 lang=cpp
 *
 * [1207] 独一无二的出现次数
 */

// @lc code=start
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> countSet;
        unordered_map<int,int> arrMap;
        for(auto n : arr) ++arrMap[n];
        for(auto c : arrMap)countSet.insert(c.second);
        return countSet.size() == arrMap.size();
    }
};
// @lc code=end

