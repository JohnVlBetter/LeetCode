/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string rom[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i = 0;i<13;++i){
            while(num >= values[i]){
                num -= values[i];
                result += rom[i];
            }
        }
        return result;
    }
};
// @lc code=end

