/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N 皇后
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> line(n, string(n, '.'));
        vector<vector<string>> result;
        dfs(result,line,0,n);
        return result;
    }

    bool isValid(const vector<string>& line, int i, int j) {
        int n = line.size();
        for (int y = 0; y < n; y++) {
            if (line[y][j] == 'Q') return false;
        }
        for (int y = i, x = j; y >= 0 && x < n; y--, x++) {
            if (line[y][x] == 'Q') return false;
        }
        for (int y = i, x = j; y >= 0 && x >= 0; y--, x--) {
            if (line[y][x] == 'Q') return false;
        }
        return true; 
    }

    void dfs(vector<vector<string>>& result, vector<string>& line, int lineNum, int n){
        if(lineNum == n){
            result.push_back(line);
            return;
        }
        for(int i = 0;i<n;++i){
            if(isValid(line,lineNum,i)){
                line[lineNum][i] = 'Q';
                dfs(result,line,lineNum+1,n);
                line[lineNum][i] = '.';
            }
        }
    }
};
// @lc code=end

