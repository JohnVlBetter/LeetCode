/*
 * @lc app=leetcode.cn id=2864 lang=cpp
 *
 * [2864] 最大二进制奇数
 */

// @lc code=start
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        for(auto& c : s){
            if(c == '1') ++count;
        }
        --count;
        for(int i = 0;i< s.size()-1;++i){
            if(count){
                s[i] = '1';
                --count;
            }
            else s[i] = '0';
        }
        s[s.size()-1] = '1';
        return s;
    }
};
// @lc code=end

