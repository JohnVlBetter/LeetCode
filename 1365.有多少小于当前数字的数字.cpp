/*
 * @lc app=leetcode.cn id=1365 lang=cpp
 *
 * [1365] 有多少小于当前数字的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int arr[101];
        memset(arr,0,sizeof(arr));
        for(auto& n : nums){
            ++arr[n];
        }
        for(int i = 1;i<101;++i){
            arr[i] += arr[i-1];
        }
        vector<int> res;
        for(auto& n : nums){
            if(n == 0) res.push_back(0);
            else res.push_back(arr[n-1]);
        }
        return res;
    }
};
// @lc code=end

