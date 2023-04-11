/*
 * @lc app=leetcode.cn id=989 lang=cpp
 *
 * [989] 数组形式的整数加法
 */

// @lc code=start
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int n = num.size();
        for (int i = n - 1; i >= 0; --i) {
            int sum = num[i] + k % 10;
            k /= 10;
            if (sum >= 10) {
                k++;
                sum -= 10;
            }
            result.push_back(sum);
        }
        while(k > 0) {
            result.push_back(k % 10);
            k /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

