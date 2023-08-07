/*
 * @lc app=leetcode.cn id=289 lang=cpp
 *
 * [289] 生命游戏
 */

// @lc code=start
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
			int width = board[0].size(), height = board.size();

			vector<vector<int>> result(height, vector<int>(width, 0));

			int xDir[8] = {-1,0,1,1,1,0,-1,-1};
			int yDir[8] = {1,1,1,0,-1,-1,-1,0};

			for(int j = 0;j<height;++j){
				for(int i = 0;i<width;++i){
					int sum = 0;
					for(int k = 0;k<8;++k){
						int x = i + xDir[k];
						int y = j + yDir[k];
						if(x < 0 || y< 0 || x>=width||y>=height) continue;
						sum += board[y][x];
					}
					if(sum < 2 && board[j][i]) result[j][i] = 0;
					else if(sum > 3 && board[j][i]) result[j][i] = 0;
					else  if(sum == 3 && !board[j][i]) result[j][i] = 1;
					else result[j][i] = board[j][i];
				}
			}

			board = result;
    }
};
// @lc code=end

