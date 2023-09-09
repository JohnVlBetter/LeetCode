/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1, set2;
        for(auto& n : nums1) set1.insert(n);
        for(auto& n : nums2) set2.insert(n);
        vector<int> res;
        if(set1.size() > set2.size()){
            for(auto& n : set2){
                if(set1.count(n)){
                    res.push_back(n);
                }
            }
        }else{
            for(auto& n : set1){
                if(set2.count(n)){
                    res.push_back(n);
                }
            }
        }
        return res;
    }
};
// @lc code=end

