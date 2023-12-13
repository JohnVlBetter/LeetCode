/*
 * @lc app=leetcode.cn id=1414 lang=cpp
 *
 * [1414] 和为 K 的最少斐波那契数字数目
 */

// @lc code=start
class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> f;
        int a = 1;
        int b = 1;
        f.push_back(1);
        int c = 0;
        while(a + b <= k){
            c = a + b;
            f.push_back(c);
            a = b;
            b = c;
        }
        int res = 0;
        for(int i = f.size()-1;i>=0 && k > 0;--i){
            if(k >= f[i]){
                k-=f[i];
                ++res;
            }
        }
        return res;
    }
};
// @lc code=end

