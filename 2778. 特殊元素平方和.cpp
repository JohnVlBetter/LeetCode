/*
 * @lc app=leetcode.cn id=2778 lang=cpp
 *
 * [2778] 特殊元素平方和
 */

// @lc code=start
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i< n;++i){
            if(n % (i+1) == 0){
                sum += nums[i] * nums[i];
            }
        }
        return sum;
    }
};
// @lc code=end

