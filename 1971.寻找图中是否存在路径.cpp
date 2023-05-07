/*
 * @lc app=leetcode.cn id=1971 lang=cpp
 *
 * [1971] 寻找图中是否存在路径
 */
#include <vector>
#include <queue>
using namespace std;
// @lc code=start
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for (auto &&edge : edges) {
            int x = edge[0], y = edge[1];
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        vector<bool> visited(n, false);
        queue<int> q;
        q.emplace(source);
        visited[source] = true;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            if(cur == destination) break;
            for (int next: adj[cur]) {
                if (!visited[next]) {
                    q.emplace(next);
                    visited[next] = true;
                }
            }
        }
        return visited[destination];
    }
};
// @lc code=end

