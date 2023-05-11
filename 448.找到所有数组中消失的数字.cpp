/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for(auto num : nums){
            nums[(num-1)%nums.size()] += nums.size();
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= nums.size()) {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};
// @lc code=end