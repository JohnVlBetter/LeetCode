/*
 * @lc app=leetcode.cn id=942 lang=cpp
 *
 * [942] 查找包含给定字符的单词
 */

// @lc code=start
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        int idx = 0;
        for(auto& s : words){
            for(auto& c : s){
                if(x == c){
                    res.push_back(idx);
                    break;
                }
            }
            ++idx;
        }
        return res;
    }
};
// @lc code=end