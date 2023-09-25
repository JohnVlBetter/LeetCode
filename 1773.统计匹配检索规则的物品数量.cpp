/*
 * @lc app=leetcode.cn id=1773 lang=cpp
 *
 * [1773] 统计匹配检索规则的物品数量
 */

// @lc code=start
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx = 0;
        if(ruleKey == "color"){
            idx = 1;
        }else if(ruleKey == "name"){
            idx = 2;
        }
        int res = 0;
        for(const auto& item : items){
            if(item[idx] == ruleValue) ++res;
        }
        return res;
    }
};
// @lc code=end

