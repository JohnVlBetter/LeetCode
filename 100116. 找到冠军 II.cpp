/*
 * @lc app=leetcode.cn id=100116 lang=cpp
 *
 * [100116] 找到冠军 II
 */

// @lc code=start
class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        int map[n];
        memset(map,0,sizeof(map));
        int m = edges.size();
        for(int i = 0;i<m;++i){
            int u = edges[i][0], v = edges[i][1];
            map[v]++;
        }
        int res = -1;
        bool flag = false;
        for(int i = 0;i<n;++i){
            if(map[i] == 0){
                if(flag) return -1;
                res = i;
                flag = true;
            }
        }
        return res;
    }
};
// @lc code=end

