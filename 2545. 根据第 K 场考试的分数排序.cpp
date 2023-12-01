/*
 * @lc app=leetcode.cn id=2545 lang=cpp
 *
 * [2545] 根据第 K 场考试的分数排序
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        std::sort(score.begin(),score.end(), [&](const vector<int>& a, const vector<int>& b){
            return a[k] > b[k];
        });
        return score;
    }
};
// @lc code=end

