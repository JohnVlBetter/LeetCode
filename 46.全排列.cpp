/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> tmp;
        bool used[nums.size()];
        memset(used,false,sizeof(used));
        dfs(tmp,nums,used,0);
        return result;
    }

    void dfs(vector<int>&list,vector<int>&nums, bool used[], int count){
        int len = nums.size();
        if(count == len){
            result.push_back(list);
            return; 
        }
        for(int i = 0;i<len;++i){
            if(!used[i]){
                used[i] = true;
                list.push_back(nums[i]);
                dfs(list,nums,used,count+1);
                list.pop_back();
                used[i] = false;
            }
        }
    }
};
// @lc code=end

