/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1,majorityNum = nums[0];
        for(int i = 1;i<nums.size();++i){
            if(majorityNum == nums[i]) ++count;
            else if (--count < 0){
                count = 1;
                majorityNum = nums[i];
            }
        }
        return majorityNum;
    }
};
// @lc code=end

