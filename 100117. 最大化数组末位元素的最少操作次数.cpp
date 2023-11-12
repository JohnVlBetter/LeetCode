/*
 * @lc app=leetcode.cn id=100117 lang=cpp
 *
 * [100117] 最大化数组末位元素的最少操作次数
 */

// @lc code=start
class Solution {
public:
    int f(vector<int>& nums1, vector<int>& nums2, int last1, int last2){
        int res = 0;
        for (int i = 0; i + 1 < nums1.size(); i++) {
            int x = nums1[i], y = nums2[i];
            if (x > last1 || y > last2) {
                if (y > last1 || x > last2) {
                    return nums1.size() + 1;
                }
                res++;
            }
        }
        return res;
    }
    
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int res = min(f(nums1, nums2, nums1.back(), nums2.back()), 1 + f(nums1, nums2, nums2.back(), nums1.back()));
        return res > nums1.size() ? -1 : res;
    }
};
// @lc code=end

