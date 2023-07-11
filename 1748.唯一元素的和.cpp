/*
 * @lc app=leetcode.cn id=1748 lang=cpp
 *
 * [1748] 唯一元素的和
 */

// @lc code=start
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int num[101];
        memset(num,0,sizeof(num));
        for(const auto& n :nums){
            ++num[n];
        }
        int result = 0;
        for(int i = 1;i<101;++i){
            if(num[i] == 1) result += i;
        }
        return result;
    }
};
// @lc code=end

