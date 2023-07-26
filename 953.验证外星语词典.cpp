/*
 * @lc app=leetcode.cn id=953 lang=cpp
 *
 * [953] 验证外星语词典
 */

// @lc code=start
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int map[26];
        memset(map,0,sizeof(26));
        for(int i = 0;i<order.size();++i){
            map[order[i]-'a'] = i;
        }
        for (int i = 1; i < words.size(); i++) {
            bool ret = false;
            for (int j = 0; j < words[i - 1].size() && j < words[i].size(); j++) {
                int l = map[words[i - 1][j] - 'a'];
                int r = map[words[i][j] - 'a'];
                if (l < r) {
                    ret = true;
                    break;
                } else if (l > r) {
                    return false;
                }
            }
            if (!ret) {
                if (words[i - 1].size() > words[i].size()) {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

