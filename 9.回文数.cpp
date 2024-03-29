/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
#include <vector>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        else if(x == 0) return true;
        else{
            string s = to_string(x);
            int l = 0,r = s.length()-1;
            if(s.length() % 2 == 1){
                while(r - l >= 2){
                    if(s[l] != s[r]) return false;
                    else{
                        ++l;--r;
                    }
                }
            }else{
                while(r - l >= 1){
                    if(s[l] != s[r]) return false;
                    else{
                        ++l;--r;
                    }
                }
            }
            return true;
        }
        /*if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // 当数字长度为奇数时，我们可以通过 revertedNumber/10 去除处于中位的数字。
        // 例如，当输入为 12321 时，在 while 循环的末尾我们可以得到 x = 12，revertedNumber = 123，
        // 由于处于中位的数字不影响回文（它总是与自己相等），所以我们可以简单地将其去除。
        return x == revertedNumber || x == revertedNumber / 10;*/
    }
};
// @lc code=end

