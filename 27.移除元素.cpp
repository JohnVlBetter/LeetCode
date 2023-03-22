/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (; i < nums.size(); ++i) {
            if (nums[i] == val && i != nums.size() - 1) {
                int j = i + 1;
                for (; j < nums.size(); ++j) {
                    if (nums[j] != val) {
                        nums[i] = nums[j];
                        nums[j] = val;
                        break;
                    }
                }
                if (j == nums.size()) {
                    break;
                }
            }
            else if (nums[i] == val && i == nums.size() - 1) {
                break;
            }
        }
        return i;
    }
};
// @lc code=end

