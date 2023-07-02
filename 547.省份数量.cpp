/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 省份数量
 */

// @lc code=start
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n);
        int sum = 0;
        for(int i = 0;i<n;++i){
            if(!vis[i]){
                dfs(i,n,vis,isConnected);
                ++sum;
            }
        }
        return sum;
    }

    void dfs(int node, int n, vector<int>& vis, vector<vector<int>>& isConnected){
        vis[node] = 1;
        for(int i = 0; i< n;++i){
            if(!vis[i] && isConnected[node][i] == 1){
                dfs(i,n,vis,isConnected);
            }
        }
        return;
    }
};
// @lc code=end

