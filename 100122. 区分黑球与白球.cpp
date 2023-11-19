/*
 * @lc app=leetcode.cn id=100122 lang=cpp
 *
 * [100122] 区分黑球与白球
 */

// @lc code=start
class Solution {
public:
    long long minimumSteps(string s) {
        long long res = 0;
        int n =s.size();
        int l=0, r=n-1;
        while(l<r){
            while(l<n && s[l]=='0')++l;
            while(r>=0 && s[r]=='1')--r;
            if(l<r){
                res += r-l;
                ++l;
                --r;
            }
        }
        return res;
    }
};
// @lc code=end

