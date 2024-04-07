/*
 * @lc app=leetcode.cn id=2032 lang=cpp
 *
 * [2032] 至少在两个数组中出现的值
 */

// @lc code=start
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> map;
        for (auto& i : nums1) map[i] = 1;
        for (auto& i : nums2) map[i] |= 2;
        for (auto& i : nums3) map[i] |= 4;
        vector<int> res;
        for (auto& [k, v] : map) if (v & (v - 1)) res.push_back(k);
        return res;
    }
};
// @lc code=end