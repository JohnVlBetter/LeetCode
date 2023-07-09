/*
 * @lc app=leetcode.cn id=1869 lang=cpp
 *
 * [1869] 哪种连续子字符串更长
 */

// @lc code=start
class Solution {
public:
    bool checkZeroOnes(string s) {
        int max1=0,max0=0,cur1=0,cur0=0;
        for(auto c : s){
            if(c == '1'){
                if(cur0 > 0){
                    max0 = std::max(max0,cur0);
                    cur0 = 0;
                }
                ++cur1;
            }else{
                if(cur1 > 0){
                    max1 = std::max(max1,cur1);
                    cur1 = 0;
                }
                ++cur0;
            }
        }
        max0 = std::max(max0,cur0);
        max1 = std::max(max1,cur1);
        return max1 > max0;
    }
};
// @lc code=end

