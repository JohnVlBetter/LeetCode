/*
 * @lc app=leetcode.cn id=1476 lang=cpp
 *
 * [1476] 子矩形查询
 */

// @lc code=start
struct History{
    int row1;
    int col1;
    int row2;
    int col2;
    int newValue;

    History(int row1, int col1, int row2, int col2, int newValue):row1(row1),col1(col1),row2(row2),col2(col2),newValue(newValue){}
};
class SubrectangleQueries {
public:
    vector<vector<int>> rectangleMap;
    vector<History> historyVec;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rectangleMap = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        History history = History(row1,col1,row2,col2,newValue);
        historyVec.push_back(history);
    }

    int getValue(int row, int col) {
        for(int i = historyVec.size()-1;i>=0;--i){
            const History& history = historyVec[i];
            if(row<=history.row2 && row >= history.row1 &&col>=history.col1 && col <= history.col2){
                return history.newValue;
            }
        }
        return rectangleMap[row][col];
    }
};
// @lc code=end

