/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0,r = height.size()-1,result = 0;
        while(l < r){
            int area = (r-l)*std::min(height[l],height[r]);
            if(area > result) result = area;
            height[l]>height[r]?r--:l++;
        }
        return result;
    }
};
// @lc code=end

