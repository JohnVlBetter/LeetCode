/*
 * @lc app=leetcode.cn id=2397 lang=cpp
 *
 * [2397] 被列覆盖的最多行数
 */

// @lc code=start
class Solution {
private:
    void backtracking(const vector<int>& masks, int numSelect, int n, int idx, int s, int& max){
        if(numSelect == 0){
            int coverRows = 0;
            for(auto& mask: masks){
                coverRows += 1 - min(1, mask & ~s);     
            }
            max = std::max(max, coverRows);
            return;
        }
        if(idx == n){
            return;
        }
        backtracking(masks, numSelect, n, idx + 1, s, max);
        s |= (1 << idx);
        backtracking(masks, numSelect - 1, n, idx + 1, s, max);
    }

public:
    int maximumRows(vector<vector<int>>& matrix, int numSelect) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> masks(m, 0);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                masks[i] |= (matrix[i][j] << j);
            }
        }
        int max = 0;
        backtracking(masks, numSelect, n, 0, 0, max);
        return max;
    }
};
// @lc code=end

