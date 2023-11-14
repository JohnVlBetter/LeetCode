/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除有序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int pre = nums[0];
        int cnt = 1;
        int res = 0;
        for(int i = 1 ; i < n; ++i){
            if(pre != nums[i]){
                cnt = 1;
                pre = nums[i];
            }else{
                ++cnt;
                if(cnt > 2){
                    nums[i] = 10001;
                    ++res;
                }
            }
        }
        int l = 0,r = 0;
        while(l < n && r < n){
            while(l < n && nums[l]!=10001) ++l;
            r = l+1;
            while(r < n && nums[r]==10001) ++r;
            if(l>=n||r >= n) break;
            swap(nums[l],nums[r]);
        }
        return n-res;
    }
};
// @lc code=end

