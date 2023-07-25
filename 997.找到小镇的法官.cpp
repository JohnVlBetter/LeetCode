/*
 * @lc app=leetcode.cn id=997 lang=cpp
 *
 * [997] 找到小镇的法官
 */

// @lc code=start
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int in[n+1];
        memset(in,0,sizeof(in));
        for(const auto& v : trust){
            ++in[v[1]],--in[v[0]];
        }
        for(int i = 1; i <= n;++i){
            if(in[i] == n - 1) return i;
        }
        return -1;
    }
};
// @lc code=end

