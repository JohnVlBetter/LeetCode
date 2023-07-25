/*
 * @lc app=leetcode.cn id=1805 lang=cpp
 *
 * [1805] 字符串中不同整数的数目
 */

// @lc code=start
class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> map;
        int i = -1,n = word.size();
        while(++i<n){
            if(word[i] > '9' || word[i] < '0') continue;
            string num = "";
            while(i<n && (word[i] <= '9' && word[i] >= '0')){
                if(num.empty() &&  word[i] == '0'){
                     ++i;
                     continue;
                }
                num += word[i];
                ++i;
            }
            if(num.empty()) num = "0";
            map.insert(num);
        }
        return map.size();
    }
};
// @lc code=end

