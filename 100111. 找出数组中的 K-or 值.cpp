/*
 * @lc app=leetcode.cn id=100111 lang=cpp
 *
 * [100111] . 找出数组中的 K-or 值
 */

// @lc code=start
class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int count[32];
        memset(count,0,sizeof(count));
        for(auto& n : nums){
            for(int i = 0;i<32;++i){
                if(n & (1<<i)) ++count[i];
            }
        }
        int res = 0;
        for(int i = 0;i<32;++i){
            if(count[i] >= k){
                res += (1<<i);
            }
        }
        return res;
    }
};
// @lc code=end

