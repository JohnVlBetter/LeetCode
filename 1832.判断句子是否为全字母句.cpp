/*
 * @lc app=leetcode.cn id=1832 lang=cpp
 *
 * [1832] 判断句子是否为全字母句
 */

// @lc code=start
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int res = 0;
        for(auto& c : sentence){
            res |= (1 << (c-'a'));
        }
        return res == 0b00000011111111111111111111111111;
    }
};
// @lc code=end

