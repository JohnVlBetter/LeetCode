/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = !nums.empty();
        for (int n : nums)
            if (n > nums[i-1])
                nums[i++] = n;
        return i;
    }
};
// @lc code=end

