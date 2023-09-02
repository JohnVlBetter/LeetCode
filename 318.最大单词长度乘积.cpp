/*
 * @lc app=leetcode.cn id=318 lang=cpp
 *
 * [318] 最大单词长度乘积
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int> mask(n);
        for(int i = 0;i<n;++i){
            string s = words[i];
            for(int j = 0;j<s.size();++j){
                mask[i] |= (1 << (s[j] - 'a'));
            }
        }
        int max = 0;
        for(int i = 0 ;i< n;++i){
            for(int j = i+1;j<n;++j){
                if((mask[i] & mask[j]) == 0){
                    max = std::max(int(words[i].size()*words[j].size()),max);
                }
            }
        }
        return max;
    }
};
// @lc code=end

