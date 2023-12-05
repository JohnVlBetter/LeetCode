/*
 * @lc app=leetcode.cn id=2433 lang=cpp
 *
 * [2433] 找出前缀异或的原始数组
 */

// @lc code=start
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> res(n,0);
        res[0] = pref[0];
        for(int i = 1;i<n;++i) res[i] = pref[i-1] ^ pref[i];
        return res;
    }
};
// @lc code=end

