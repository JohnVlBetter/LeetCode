/*
 * @lc app=leetcode.cn id=100150 lang=cpp
 *
 * [100150] 移除后集合的最多元素数
 */

// @lc code=start
class Solution {
public:
    int maximumSetSize(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        int common = 0;
        for (int x : set1) {
            common += set2.count(x);
        }

        int n1 = set1.size();
        int n2 = set2.size();
        int ans = n1 + n2 - common;

        int m = nums1.size() / 2;
        if (n1 > m) {
            int mn = min(n1 - m, common);
            ans -= n1 - mn - m;
            common -= mn;
        }

        if (n2 > m) {
            n2 -= min(n2 - m, common);
            ans -= n2 - m;
        }

        return ans;
    }
};
// @lc code=end

