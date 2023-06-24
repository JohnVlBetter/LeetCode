/*
 * @lc app=leetcode.cn id=841 lang=cpp
 *
 * [841] 钥匙和房间
 */

// @lc code=start
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int> q;
        vector<bool> vis(n, false);
        vector<int> tmp = rooms[0];
        int num=1;
        for(auto k : tmp)
            q.push(k);
        vis[0]=true;
        while(!q.empty()){
            int t = q.front();
            
            if(!vis[t]){
                tmp.clear();
                tmp = rooms[t];
                for(auto k:tmp){
                    q.push(k);
                }
                vis[t]=true;
                ++num;
            }
            q.pop();
        }
        return num==n;
    }
};
// @lc code=end

