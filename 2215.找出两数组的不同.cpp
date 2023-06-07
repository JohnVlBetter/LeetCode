/*
 * @lc app=leetcode.cn id=2215 lang=cpp
 *
 * [2215] 找出两数组的不同
 */

// @lc code=start
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());
        vector<int> result1,result2;
        for(auto n : set1) if(set2.count(n) == 0) result1.push_back(n);
        for(auto n : set2) if(set1.count(n) == 0) result2.push_back(n);
        vector<vector<int>> result{result1,result2};
        return result;
    }
};
// @lc code=end

