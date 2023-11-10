/*
 * @lc app=leetcode.cn id=2788 lang=cpp
 *
 * [2788] 按分隔符拆分字符串
 */

// @lc code=start
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        for(auto& word : words){
            int idx = 0;
            for(int i = 0;i<=word.size();++i){
                if(word[i] == separator || i == word.size()){
                    if(idx != i)res.emplace_back(word.substr(idx, i - idx));
                    idx = i + 1;
                }
            }
        }
        return res;
    }
};
// @lc code=end

