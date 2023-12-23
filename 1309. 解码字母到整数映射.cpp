/*
 * @lc app=leetcode.cn id=1828 lang=cpp
 *
 * [1309] 解码字母到整数映射
 */

// @lc code=start
class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string res;
        for(int i = 0; i < n;){
            if(i < n - 2 && s[i+2] == '#'){
                res += char((s[i] - '0') * 10 + (s[i + 1] - '1') + 'a');
                i += 3;
            }else{
                res += char(s[i] - '1' + 'a');
                ++i;
            }
        }
        return res;
    }
};
// @lc code=end

