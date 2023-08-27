/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        int n = candidates.size();
        if(n == 0) return result;
        vector<int> path;
        dfs(candidates,0,n,target,path,result);
        return result;
    }
    void dfs(vector<int>& candidates, int begin,int size, int target, vector<int>& path, vector<vector<int>>& result){
        if(target < 0)return;
        if(target == 0){
            result.push_back(path);
            return;
        }
        for(int i = begin;i<size;++i){
            path.push_back(candidates[i]);
            dfs(candidates,i,size,target-candidates[i],path,result);
            path.pop_back();
        }
    }
};
// @lc code=end

