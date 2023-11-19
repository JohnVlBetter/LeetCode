/*
 * @lc app=leetcode.cn id=100131 lang=cpp
 *
 * [100131] 使三个字符串相等
 */

// @lc code=start
class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1 = s1.size();
        int n2 = s2.size();
        int n3 = s3.size();
        int n = std::min(std::min(n1,n2),n3);
        int i = 0;
        for(;i<n;++i){
            if(s1[i]!=s2[i] || s2[i]!=s3[i])
                break;
        }
        int res = n1-n+n2-n+n3-n+(n-i)*3;
        if(res >= n1+n2+n3) return -1;
        return res;
    }
};
// @lc code=end

