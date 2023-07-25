/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        int idx = 0;
        while (idx < n) {
            int left = idx;
            ++idx;
            while (idx < n && nums[idx] == nums[idx - 1] + 1) ++idx;

            int right = idx - 1;
            string l = to_string(nums[left]);
            if (left != right) {
                l.append("->");
                l.append(to_string(nums[right]));
            }
            result.emplace_back(l);
        }
        return result;
    }
};
// @lc code=end

