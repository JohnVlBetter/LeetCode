/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        if(n<k) return {};
        vector<vector<int>> res;
        vector<int> vec;
        cal(0,n,k,vec,res);
        return res;
    }

    void cal(int i, int n, int k, vector<int>& vec, vector<vector<int>>& res){
        int size = vec.size();
        if(size == k){
            res.push_back(vec);
            return;
        }
        if(i >= n || i+k-size>n) return;
        for(int j = i+1;j<=n;++j){
            vec.push_back(j);
            cal(j,n,k,vec,res);
            vec.pop_back();
        }
    }
};
// @lc code=end

