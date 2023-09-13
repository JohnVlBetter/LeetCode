/*
 * @lc app=leetcode.cn id=784 lang=cpp
 *
 * [784] 字母大小写全排列
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        dfs(res, s, 0, s.size());
        return res;
    }
    void dfs(vector<string>& res, string& s, int idx, int size){
        if(idx == size){
            res.push_back(s);
            return;
        }
        if(s[idx] <= '9' && s[idx] >= '0'){
            dfs(res, s, idx + 1, size);
        }else{
            s[idx] ^= 32;
            dfs(res, s, idx + 1, size);
            s[idx] ^= 32;
            dfs(res, s, idx + 1, size);
        }
    }
};
// @lc code=end

