/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int h=0,v=0;
        for(const auto& c: moves){
            if(c == 'R'){
                ++h;
            }else if(c == 'L'){
                --h;
            }else if(c == 'U'){
                ++v;
            }else if(c == 'D'){
                --v;
            }
        }
        return h==0&&v==0;
    }
};
// @lc code=end

