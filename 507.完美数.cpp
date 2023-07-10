/*
 * @lc app=leetcode.cn id=507 lang=cpp
 *
 * [507] 完美数
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
        int sum = 1;
        for(int i = 2; i * i <= num; ++i){
            if(num % i == 0){
                sum += i;
                if (i * i < num) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }

   /* bool checkPerfectNumber(int num) {
        return num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336;
    }*/
};
// @lc code=end

