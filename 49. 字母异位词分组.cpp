/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) return {};
        vector<vector<string>> res;
        unordered_map<string,int> idxMap;
        int idx = 0;
        for(auto& str : strs){
            string s = str;
            sort(s.begin(),s.end());
            if(idxMap.count(s)){
                res[idxMap[s]].push_back(str);
            }else{
                res.push_back({str});
                idxMap[s] = idx;
                idx++;
            }
        }
        return res;
    }
};
// @lc code=end

