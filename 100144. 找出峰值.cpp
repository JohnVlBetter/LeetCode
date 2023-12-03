/*
 * @lc app=leetcode.cn id=100144 lang=cpp
 *
 * [100144] 找出峰值
 */

// @lc code=start
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n = mountain.size();
        if(n <= 2) return {};
        vector<int> res;
        for(int i = 1;i< n-1;++i){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]) res.push_back(i);
        }
        return res;
    }
};
// @lc code=end

