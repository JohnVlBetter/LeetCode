/*
 * @lc app=leetcode.cn id=2325 lang=cpp
 *
 * [2325] 解密消息
 */

// @lc code=start
class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> map;
        map[' '] = ' ';
        char idx = 'a';
        for(auto& c : key){
            if(!map.count(c)){
                map[c] = idx++;
            }
        }
        for(auto& c : message){
            c = map[c];
        }
        return message;
    }
};
// @lc code=end