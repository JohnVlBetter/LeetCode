/*
 * @lc app=leetcode.cn id=2849 lang=cpp
 *
 * [2849] 判断能否在给定时间到达单元格
 */

// @lc code=start
class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int xdiff = abs(fx-sx);
        int ydiff = abs(fy-sy);
        int minVal = max(xdiff,ydiff);
        if(t<minVal || (minVal==0&&t==1))return false;
        return true;
    }
};
// @lc code=end

