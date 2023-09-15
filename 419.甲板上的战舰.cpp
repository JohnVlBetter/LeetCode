/*
 * @lc app=leetcode.cn id=419 lang=cpp
 *
 * [419] 甲板上的战舰
 */

// @lc code=start
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
        int res = 0;
        for(int i = 0;i < n;++i){
            for(int j = 0;j < m;++j){
                if(board[i][j] == 'X'){
                    if(j>0 && board[i][j-1] == 'X') continue;
                    if(i>0 && board[i-1][j] == 'X') continue;
                    ++res;
                }
            }
        }
        return res;
    }
};
// @lc code=end

