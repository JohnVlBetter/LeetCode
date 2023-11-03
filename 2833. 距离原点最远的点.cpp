/*
 * @lc app=leetcode.cn id=2833 lang=cpp
 *
 * [2833] 距离原点最远的点
 */

// @lc code=start
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int spaceCount = 0, lCount = 0;
        for(auto& m : moves){
            if(m=='L') ++lCount;
            else if(m=='R') --lCount;
            else ++spaceCount;
        }
        return abs(lCount)+spaceCount;
    }
};
// @lc code=end

