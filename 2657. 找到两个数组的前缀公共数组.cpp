/*
 * @lc app=leetcode.cn id=2657 lang=cpp
 *
 * [2657] 找到两个数组的前缀公共数组
 */

// @lc code=start
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> res(n,0);
        long long diffA = 0, diffB = 0;
        for(int i = 0;i<n;++i){
          diffA |= 1LL << A[i];
          diffB |= 1LL << B[i];
          res[i] = __builtin_popcountll(diffA & diffB);
        }
        return res;
    }
};
// @lc code=end

