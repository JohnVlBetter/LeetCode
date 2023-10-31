/*
 * @lc app=leetcode.cn id=2857 lang=cpp
 *
 * [2857] 统计距离为 k 的点对
 */

// @lc code=start
class Solution {
public:
    int countPairs(vector<vector<int>>& coordinates, int k) {
        int res = 0;
        unordered_map<long long,int> count;
        for(auto& c : coordinates){
            int x = c[0],y = c[1];
            for(int i = 0;i <= k;++i){
                res += count[(x ^ i)*1000000LL+(y ^ (k-i))];
            }
            count[x*1000000LL+y]+=1;
        }
        return res;
    }
};
// @lc code=end