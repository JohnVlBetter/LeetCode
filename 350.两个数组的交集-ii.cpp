/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr[1001] = {0};
        vector<int>result;
        for(auto num : nums1) ++arr[num];
        for(auto num : nums2){
            if(arr[num] > 0){
                result.push_back(num);
                --arr[num];
            }
        }
        return result;
    }
};
// @lc code=end

