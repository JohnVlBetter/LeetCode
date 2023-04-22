/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits == "") return result;
        unordered_map<char, string> phoneMap{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string combination;
        dfs(result, phoneMap, digits, 0, combination);
        return result;
    }

    void dfs(vector<string>& combinations, const unordered_map<char, string>& phoneMap, const string& digits, int index, string& combination) {
        if(index == digits.size()) combinations.emplace_back(combination);
        else{
            string cur = phoneMap.at(digits[index]);
            for(int i = 0;i<cur.length();++i){
                combination.push_back(cur[i]);
                dfs(combinations,phoneMap,digits,index+1,combination);
                combination.pop_back();
            }
        }
    }
};
// @lc code=end

