/*
 * @lc app=leetcode.cn id=1071 lang=cpp
 *
 * [1071] 字符串的最大公因子
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
        string gcdOfStrings(string str1, string str2) {
            if(str1 + str2 != str2 + str1) return "";
            return str1.substr(0,__gcd(str1.length(), str2.length()));
    }
};
// @lc code=end

