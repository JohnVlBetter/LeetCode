/*
 * @lc app=leetcode.cn id=443 lang=cpp
 *
 * [443] 压缩字符串
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int l = 0, r = 1, c = 1;
        int len = chars.size();
        char preC = chars[0];
        for (; r < chars.size(); ++r) {
            if (chars[r] == preC) {
                ++c;
                if (r != len - 1) continue;
            }
            char tmp = chars[r];
            chars[l++] = preC;
            if (c != 1) {
                string s = std::to_string(c);
                for(auto& c : s) chars[l++] = c;
                c = 1;
            }
            if (r == len - 1) {
                if(preC != tmp) chars[l++] = tmp;
                --l;
            }
            preC = tmp;
        }
        return l + 1;
    }
};
// @lc code=end

