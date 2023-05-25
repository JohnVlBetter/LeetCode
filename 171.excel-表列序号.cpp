/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel 表列序号
 */
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0,d = 1;
        for(int idx = columnTitle.length()-1;idx>=0;--idx){
            int n = columnTitle[idx]-'A'+1;
            sum += n*d;
            if(idx != 0)d*=26;
        }
        return sum;
    }
};
// @lc code=end

