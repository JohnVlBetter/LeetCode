/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] 寻找重复数
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int result = 0;
        for(int i=0;i<nums.size();++i){
            int idx = std::abs(nums[i]);
            if(nums[idx]<0){
                result = idx;
                break;
            }else{
                nums[idx] *= -1;
            }
        }
        for(int i=0;i<nums.size();++i) 
            if(nums[i] < 0)
                nums[i] *= -1;
        return result;
    }
};
// @lc code=end

