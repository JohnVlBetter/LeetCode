/*
 * @lc app=leetcode.cn id=804 lang=cpp
 *
 * [804] 唯一摩尔斯密码词
 */

// @lc code=start
const static string password[] = {".-","-...","-.-.","-..",".","..-.","--.","....",
"..",".---","-.-",".-..","--","-.","---",
".--.","--.-",".-.","...","-","..-","...-",
".--","-..-","-.--","--.."};
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> set;
        for(const auto& word : words){
            string str;
            for(const auto& c : word){
                str.append(password[c-'a']);
            }
            set.emplace(str);
        }
        return set.size();
    }
};
// @lc code=end

