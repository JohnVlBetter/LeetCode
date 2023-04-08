/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        return binarySearch(num);
    }

    int binarySearch(int target) {
        long left = 0; 
        long right = 65536;
        long t = target;
        while(left <= right) {
            long mid = (right + left) / 2;
            long cur = mid * mid;
            if(cur == t){
                return mid; 
            }
            else if (cur < t)
                left = mid + 1;
            else if (cur > t)
                right = mid - 1;
        }
        return false;
    }
};
// @lc code=end

