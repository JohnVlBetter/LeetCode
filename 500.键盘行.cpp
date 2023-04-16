/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int>temp;
        vector<string>ans;
        string str1 = "qwertyuiopQWERTYUIOP";
        string str2 = "asdfghjklASDFGHJKL";
        string str3 = "zxcvbnmZXCVBNM";

        for (int i = 0; i < str1.size(); ++i) {
            temp[str1[i]]=1;
        }
        for (int i = 0; i < str2.size(); ++i) {
            temp[str2[i]] = 2;
        }
        for (int i = 0; i < str3.size(); ++i) {
            temp[str3[i]] = 3;
        }

        for (int i = 0; i < words.size(); ++i) {
            auto cur = temp[(words[i][0])];
            for (int j = 0; j < words[i].size(); ++j) {
                if (cur!=temp[(words[i][j])]) {
                    break;
                }
                if(j==words[i].size()-1) {
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

