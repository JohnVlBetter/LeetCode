/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        /*for(int i=1,sum=0;sum<=n;++i){
            if(INT_MAX - i < sum) return i - 1;
            sum += i;
            if(sum == n) return i;
            else if (sum > n) return i-1;
        }
        return 0;*/
        return (int) ((sqrt((long long) 8 * n + 1) - 1) * 0.5f);
    }
};
// @lc code=end

