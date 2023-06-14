/*
 * @lc app=leetcode.cn id=1679 lang=cpp
 *
 * [1679] K 和数对的最大数目
 */

// @lc code=start
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int l = 0, r = nums.size()-1, count = 0;
        while (l<r) {
            /*while(nums[l] >= k && l < r) ++l;
            while(nums[r] >= k && l < r) --r;
            if(l >= r) break;*/
            if (nums[l] + nums[r] == k) {
                ++count;
                ++l, --r;
            }
            else if (nums[l] + nums[r] > k) --r;
            else ++l;
        }
        return count;
    }
};
// @lc code=end

