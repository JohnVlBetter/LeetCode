/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

#include <string>
using namespace std;

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for(int i=0;i<s.length();++i){
            switch (s[i])
            {
            case 'I':
                if(i!=s.length()-1){
                    if(s[i+1] == 'V'){num+=4;++i;}
                    else if(s[i+1] =='X'){num+=9;++i;}
                    else ++num;
                }else ++num;
                break;
            
            case 'V':
                num+=5;
                break;

            case 'X':
                if(i!=s.length()-1){
                    if(s[i+1] == 'L'){num+=40;++i;}
                    else if(s[i+1] =='C'){num+=90;++i;}
                    else num+=10;
                }else num+=10;
                break;

            case 'L':
                num+=50;
                break;

            case 'C':
                if(i!=s.length()-1){
                    if(s[i+1] == 'D'){num+=400;++i;}
                    else if(s[i+1] =='M'){num+=900;++i;}
                    else num+=100;
                }else num+=100;
                break;

            case 'D':
                num+=500;
                break;

            case 'M':
                num+=1000;
                break;
            
            default:
                break;
            }
        }
        return num;
    }
};
// @lc code=end

