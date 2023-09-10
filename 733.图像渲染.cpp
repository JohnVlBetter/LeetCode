/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] 图像渲染
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        const int dx[4] = {1, 0, 0, -1};
        const int dy[4] = {0, 1, -1, 0};
        int oriC = image[sr][sc];
        if(color == oriC) return image;
        int y = image[0].size(), x = image.size();
        queue<pair<int,int>> q;
        q.emplace(sr,sc);
        image[sr][sc] = color;
        while(!q.empty()){
            int cx = q.front().first, cy = q.front().second;
            q.pop();
            for(int i = 0;i< 4;++i){
                int cdx = cx+dx[i],cdy = cy+dy[i];
                if(cdx >=0&& cdx<x && cdy>=0&&cdy<y&&image[cdx][cdy]==oriC){
                    q.emplace(cdx,cdy);
                    image[cdx][cdy]=color;
                }
            }
        }
        return image;
    }
};
// @lc code=end

