/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag = true;
        for(int i=digits.size()-1;i>=0;--i){
            if(flag){
                ++digits[i];
                if(digits[i] >= 10){
                    flag = true;
                    digits[i] -= 10;
                }else flag = false;
            }
        }
        if(flag){
            digits[0] = 1;
            for(int i=1;i<digits.size();++i){
                digits[i] = 0;
            }
            digits.push_back(0);
        }
        return digits;
    }
};
// @lc code=end

