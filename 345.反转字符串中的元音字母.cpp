/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */
#include <string>
#include <stack>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c== 'i' || c=='u' || c=='e' || c=='o' || c == 'A' || c== 'I' || c=='U' || c=='E' || c=='O';
    }

    string reverseVowels(string s) {
        int l = 0,r = s.length()-1;
        while(l<r){
            while(l<s.length()&&!isVowel(s[l])) ++l;
            while(r>=0&&!isVowel(s[r])) --r;
            if(l<r){
                std::swap(s[l],s[r]);
                ++l,--r;
            }
        }
        return s;
    }
};
// @lc code=end

