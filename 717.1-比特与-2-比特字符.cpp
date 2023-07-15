/*
 * @lc app=leetcode.cn id=717 lang=cpp
 *
 * [717] 1 比特与 2 比特字符
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0,n = bits.size();
        for(;i<n-1;++i){
            if(bits[i] == 1) ++i;
        }
        return i==n-1;
    }
};
// @lc code=end

