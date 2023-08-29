/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int result = 0;
        int n = height.size()-1;
        int left = 0,right = n,leftMax = 0,rightMax = 0;
        while(left < right){
            leftMax = std::max(height[left],leftMax);
            rightMax = std::max(height[right],rightMax);
            if(height[left]<height[right]){
                result += min(leftMax,rightMax)-height[left];
                ++left;
            }else{
                result += min(leftMax,rightMax)-height[right];
                --right;
            }
        }
        return result;
    }
};
// @lc code=end

