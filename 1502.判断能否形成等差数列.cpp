/*
 * @lc app=leetcode.cn id=1502 lang=cpp
 *
 * [1502] 判断能否形成等差数列
 */

// @lc code=start
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        if(n <= 2) return true;
        sort(arr.begin(),arr.end());
        int diff = arr[1] - arr[0];
        for(int i=2;i<n;++i){
            if(arr[i] - arr[i-1] != diff) return false;
        }
        return true;
    }
};
// @lc code=end

