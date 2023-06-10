/*
 * @lc app=leetcode.cn id=1137 lang=cpp
 *
 * [1137] 第 N 个泰波那契数
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {
        int map[3] = {0,1,1};
        if(n<=2) return map[n];
        for(int i = 3;i<=n;++i){
            int tmp = map[0]+map[1]+map[2];
            map[0] = map[1];
            map[1] = map[2];
            map[2] = tmp;
        }
        return map[2];
    }
};
// @lc code=end

