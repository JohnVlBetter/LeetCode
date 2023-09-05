/*
 * @lc app=leetcode.cn id=398 lang=cpp
 *
 * [398] 随机数索引
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,vector<int>> map;
    Solution(vector<int> &nums){
        for (int i = 0; i < nums.size(); ++i){
            map[nums[i]].push_back(i);
        }
    }

    int pick(int target) {
        auto& idxVec = map[target]; 
        return idxVec[rand() % idxVec.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
// @lc code=end

