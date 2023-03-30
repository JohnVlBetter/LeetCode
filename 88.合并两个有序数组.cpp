/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0) return;
        int ptr3 = n + m - 1;
        n--,m--;
        while (m >= 0 && n >= 0) {
            nums2[n] >= nums1[m] ? nums1[ptr3--] = nums2[n--] : nums1[ptr3--] = nums1[m--];
        }

        if (m < 0) {
            while (n >= 0) nums1[ptr3--] = nums2[n--];
        }
    }
};
// @lc code=end

