/*
 * @lc app=leetcode.cn id=1282 lang=cpp
 *
 * [1282] 用户分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        unordered_map<int,vector<int>> map;
        int n = groupSizes.size();
        for(int i = 0;i< n;++i){
            if(map[groupSizes[i]].size() >= groupSizes[i]){
                res.push_back(map[groupSizes[i]]);
                map[groupSizes[i]].clear();
            }
            map[groupSizes[i]].push_back(i);
        }
        for(auto &[k,v] : map){
            res.push_back(v);
        }
        return res;
    }
};
// @lc code=end

