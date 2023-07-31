/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        if(num ==0)return"0";
        string result = "";
        bool neg = num < 0;
        num = abs(num);
        while(num){
            result += num % 7 + '0';
            num /= 7;
        }
        if(neg) result.push_back('-');
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

