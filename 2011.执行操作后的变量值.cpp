/*
 * @lc app=leetcode.cn id=2011 lang=cpp
 *
 * [2011] 执行操作后的变量值
 */

// @lc code=start
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for(auto& operation : operations){
            if(operation[1] == '-') --res;
            else ++res;
        }
        return res;
    }
};
// @lc code=end

