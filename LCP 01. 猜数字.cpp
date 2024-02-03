/*
 * @lc app=leetcode.cn id=LCP 01 lang=cpp
 *
 * [LCP 01] 猜数字
 */

// @lc code=start
class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        return ( guess[ 0 ] == answer[ 0 ] ) + ( guess[ 1 ] == answer[ 1 ] ) + ( guess[ 2 ] == answer[ 2 ] );
    }
};
// @lc code=end

