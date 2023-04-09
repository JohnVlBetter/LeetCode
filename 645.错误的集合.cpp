/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */
#include <unordered_set>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = nums.size()*(nums.size() + 1) / 2;
        std::unordered_set<int> uset;
        int n = -1;
        for(int i=0;i<nums.size();++i){
            if(uset.count(nums[i])!=0) n = nums[i];
            uset.insert(nums[i]);
            sum -= nums[i];
        }
        vector<int> v(2);
        v[0] = n;
        v[1] = n + sum;
        return v;
    }
};
// @lc code=end

