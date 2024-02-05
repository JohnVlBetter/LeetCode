/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for (int i = 2; i <= n; ++i) {
            string str = "";
            int start = 0, num = 0;
            while (num < res.size()) {
                while (num < res.size() && res[num] == res[start]) {
                    num++;
                }
                str += to_string(num - start) + res[start];
                start = num;
            }
            res = str;
        }

        return res;
    }
};
// @lc code=end

