/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            slow = getNext(slow);
            fast = getNext(fast);
            fast = getNext(fast);
            if(fast == 1) return true;
        }while(slow != fast);
        
        return slow == 1;
    }
    int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            n = n / 10;
            sum += d * d;
        }
        return sum;
    }
};
// @lc code=end

