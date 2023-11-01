/*
 * @lc app=leetcode.cn id=2844 lang=cpp
 *
 * [2844] 生成特殊数字的最少操作
 */

// @lc code=start
class Solution {
public:
    int getNum(string& num, char a, char b){
        int i = num.rfind(b);
        if (i == string::npos || i == 0) return num.size();
        i = num.rfind(a, i - 1);
        if (i == string::npos) return num.size();
        return num.size() - i - 2;
    }
    int minimumOperations(string num) {
        int r0 = num.size() - (num.find('0') != string::npos);
        int r00 = getNum(num,'0','0');
        int r25 = getNum(num,'2','5');
        int r50 = getNum(num,'5','0');
        int r75 = getNum(num,'7','5');
        return min({r0,r00,r25,r50,r75});
    }
};
// @lc code=end

