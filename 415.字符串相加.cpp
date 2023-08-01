/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i1 = num1.size()-1,i2 = num2.size()-1;
        string result = i1>i2?num1:num2;
        int i3 = std::max(i1,i2);
        int flag = 0;
        while(i1 >= 0 && i2 >= 0){
            int cur = num1[i1] - '0' + num2[i2] - '0' + flag;
            flag = cur>=10?1:0;
            cur = cur>=10?cur-10:cur;
            result[i3] = cur + '0';
            --i1,--i2,--i3;
        }
        if(i1 != i2){
            while(i3 >= 0){
                int cur = result[i3] - '0' + flag;
                flag = cur>=10?1:0;
                cur = cur>=10?cur-10:cur;
                result[i3] = cur + '0';
                --i3;
            }
        }
        if(flag == 1) result = "1" + result;
        return result;
    }
};
// @lc code=end

