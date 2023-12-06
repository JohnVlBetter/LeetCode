/*
 * @lc app=leetcode.cn id=2125 lang=cpp
 *
 * [2125] 银行中的激光束数量
 */

// @lc code=start
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res = 0, pre = 0;
        for(auto& col : bank){
            int count = 0;
            for(auto& c : col) if(c == '1') ++count;
            if(pre != 0){
                res += count * pre;
            }
            if(count != 0) pre = count;
        }
        return res;
    }
};
// @lc code=end

