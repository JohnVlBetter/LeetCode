/*
 * @lc app=leetcode.cn id=1884 lang=cpp
 *
 * [1884] 鸡蛋掉落-两枚鸡蛋
 */

// @lc code=start
class Solution {
public:
    int twoEggDrop(int n) {
        //a*(a+1)*0.5>=n
        return ceil((-1.0 + sqrt(n * 8 + 1)) / 2);
    }
};
// @lc code=end

