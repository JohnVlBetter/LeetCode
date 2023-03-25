/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
//using namespace std;
// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        //return binarySearch(nums,target);
    }

    int binarySearch(vector<int>& nums, int target) {
        int left = 0; 
        int right = nums.size() - 1;

        while(left <= right) {
            int mid = (right + left) / 2;
            if(nums[mid] == target)
                return mid; 
            else if (nums[mid] < target)
                left = mid + 1;
            else if (nums[mid] > target)
                right = mid - 1;
        }
        if (right == -1) return 0;
        if(target<= nums[right]) return right;
        else return right+1;
    }
};
// @lc code=end

