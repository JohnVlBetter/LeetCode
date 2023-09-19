/*
 * @lc app=leetcode.cn id=1002 lang=cpp
 *
 * [1002] 查找共用字符
 */

// @lc code=start
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int resArray[26];
        memset(resArray, 0, sizeof(resArray));
        for(const auto& c : words[0]){
            ++resArray[c-'a'];
        }
        int tmp[26];
        for(int i = 1; i<words.size(); ++i){
            memset(tmp, 0, sizeof(tmp));
            for(const auto& c : words[i]){
                ++tmp[c-'a'];
            }
            for(int j = 0; j<26;++j){
                resArray[j] = std::min(resArray[j], tmp[j]);
            }
        }
        vector<string> res;
        for(int i=0;i<26;++i){
            for(int j = 0;j<resArray[i];++j){
                res.emplace_back(1,i+'a');
            }
        }
        return res;
    }
};
// @lc code=end

