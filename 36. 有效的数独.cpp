/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool map[9];
        for(int i = 0;i<9;++i){
            memset(map,false,sizeof(map));
            for(int j = 0;j<9;++j){
                if(board[i][j] == '.')  continue;
                int val= board[i][j]-'1';
                if(map[val]) return false;
                map[val] = true;
            }
        }

        for(int i = 0;i<9;++i){
            memset(map,false,sizeof(map));
            for(int j = 0;j<9;++j){
                if(board[j][i] == '.')  continue;
                int val= board[j][i]-'1';
                if(map[val]) return false;
                map[val] = true;
            }
        }

        for(int i = 0;i<3;++i){
            for(int j = 0;j<3;++j){
                memset(map,false,sizeof(map));
                for(int ii = 0;ii<3;++ii){
                    for(int jj = 0;jj<3;++jj){
                        char c = board[i*3+ii][j*3+jj];
                        if(c == '.') continue;
                        int val= c-'1';
                        if(map[val]) return false;
                        map[val] = true;
                    }
                }
            }
        }

        return true;
    }
};
// @lc code=end

