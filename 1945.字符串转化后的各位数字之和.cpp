/*
 * @lc app=leetcode.cn id=1945 lang=cpp
 *
 * [1945] 字符串转化后的各位数字之和
 */

// @lc code=start
class Solution {
public:
    int getLucky(string s, int k) {
        int result = 0;
        int tmp = 0;
        for(const auto& c : s){
            int cur = c-96;
            result += cur%10;
            cur /= 10;
            if(cur>0) result += cur;
        }
        for(int i = 1;i<k;++i){
            tmp = result;
            result = 0;
            while(tmp){
                result += tmp % 10;
                tmp /= 10;
            }
        }
        return result;
    }
};
// @lc code=end

