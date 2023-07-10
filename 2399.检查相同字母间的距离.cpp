/*
 * @lc app=leetcode.cn id=2399 lang=cpp
 *
 * [2399] 检查相同字母间的距离
 */

// @lc code=start
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.length();
        for(int i = 0;i<n;++i){
            int idx = s[i] - 'a';
            if(distance[idx] != -1){
                int idx2 = distance[idx] + i + 1;
                if(idx2 >= n || s[idx2] != s[i]) return false;
                distance[idx] = -1;
            }
        }
        return true;
    }
};
// @lc code=end

