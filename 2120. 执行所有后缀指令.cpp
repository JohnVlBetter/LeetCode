/*
 * @lc app=leetcode.cn id=2120 lang=cpp
 *
 * [2120] 执行所有后缀指令
 */

// @lc code=start
class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m = s.size();
        vector<int> answer(m,0);
        for(int i = 0;i<m;++i){
            int x = startPos[0], y = startPos[1];
            for(int j = i;j<m;++j){
                if(s[j] == 'U') --x;
                else if(s[j] == 'D') ++x;
                else if(s[j] == 'L') --y;
                else ++y;
                if(x<0||x>=n||y<0||y>=n) break;
                ++answer[i];
            }
        }
        return answer;
    }
};
// @lc code=end

