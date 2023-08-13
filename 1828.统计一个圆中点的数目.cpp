/*
 * @lc app=leetcode.cn id=1828 lang=cpp
 *
 * [1828] 统计一个圆中点的数目
 */

// @lc code=start
class Solution {
public:
    bool isInCircle(int x1x2,int y1y2,int r2){
        return x1x2*x1x2 + y1y2*y1y2 <= r2;
    }

    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result(queries.size());
        int idx = 0;
        for(auto& c : queries){
            int r2 = c[2]*c[2];
            int count = 0;
            for(auto&p : points){
                if(isInCircle(p[0]-c[0],p[1]-c[1],r2)) ++count;
            }
            result[idx++] = count;
        }
        return result;
    }
};
// @lc code=end

