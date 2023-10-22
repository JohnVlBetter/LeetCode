/*
 * @lc app=leetcode.cn id=100114 lang=cpp
 *
 * [100114] 元素和最小的山形三元组 II
 */

// @lc code=start
class Solution {
public:
    int minimumSum(vector<int>& nums) {
      int n = nums.size();
			int l[n + 2], r[n + 2];
			l[0] = INT_MAX;
			for (int i = 1; i <= n; i++) l[i] = min(l[i - 1], nums[i - 1]);
			r[n + 1] = INT_MAX;
			for (int i = n; i > 0; i--) r[i] = min(r[i + 1], nums[i - 1]);
	
			int ans = INT_MAX;
			for (int i = 2; i < n; i++) if (nums[i - 1] > l[i - 1] && nums[i - 1] > r[i + 1])
				ans = min(ans, nums[i - 1] + l[i - 1] + r[i + 1]);
			return ans == INT_MAX ? -1 : ans;
    }
};
// @lc code=end

