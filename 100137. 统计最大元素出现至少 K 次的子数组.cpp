/*
 * @lc app=leetcode.cn id=100137 lang=cpp
 *
 * [100137] 统计最大元素出现至少 K 次的子数组
 */

// @lc code=start
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long res = 0;
        int left = 0;
        int count = 0;
        int maxVal = *max_element(nums.begin(), nums.end());
        bool hasC = true;
        for (int right = 0; right < n && left < n;) {
            if (hasC && nums[right] == maxVal) ++count;
            hasC = false;

            if (count >= k) {
                res += n - right;
                if (nums[left] == maxVal) --count;
                ++left;
            }
            else {
                ++right;
                hasC = true;
            }
        }

        return res;
    }
};
// @lc code=end

