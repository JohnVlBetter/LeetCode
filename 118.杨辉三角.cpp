/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        result[0] = {1};
        for(int i = 1;i<numRows;++i){
            vector<int> temp(i+1);
            for(int j = 0; j<i+1; ++j){
                if(j == 0 || j == i) temp[j] = 1;
                else temp[j] = result[i-1][j-1] + result[i-1][j];
            }
            result[i] = temp;
        }
        return result;
    }
};
// @lc code=end

