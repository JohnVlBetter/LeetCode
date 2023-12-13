/*
 * @lc app=leetcode.cn id=1441 lang=cpp
 *
 * [1441] 用栈操作构建数组
 */

// @lc code=start
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int size = target.size();
        int idx = 1;
        for(int i = 0;i < size;++i){
            if(idx != target[i]){
                while(idx < target[i]){
                    res.emplace_back("Push");
                    res.emplace_back("Pop");
                    ++idx;
                }
            }
            res.emplace_back("Push");
            ++idx;
        }
        return res;
    }
};
// @lc code=end