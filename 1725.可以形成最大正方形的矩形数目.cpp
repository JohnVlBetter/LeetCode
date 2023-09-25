/*
 * @lc app=leetcode.cn id=1725 lang=cpp
 *
 * [1725] 可以形成最大正方形的矩形数目
 */

// @lc code=start
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max = 0, count = 0;
        for(const auto& rectangle : rectangles){
            int curMax = std::min(rectangle[0],rectangle[1]);
            if(curMax > max){
                max = curMax;
                count = 1;
            }
            else if(curMax == max) ++count;
        }
        return count;
    }
};
// @lc code=end

