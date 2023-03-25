/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        for(int i=s.length()-1;i>=0;--i){
            if(s[i] == ' ') {
                if(len) break;
            }
            else ++len;
        }
        return len;
    }
};
// @lc code=end

