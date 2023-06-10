/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 */
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long l = 1,r = n,m =1;
        while(l < r){
            m = (l + r) / 2;
            int result = guess(m);
            if(result == -1) r = m;
            else if (result == 1) l = m + 1;
            else return m; 
        }
        return l;
    }
};
// @lc code=end

