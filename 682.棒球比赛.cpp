/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int idx = -1;
        for(auto& s : operations){
            if(s == "+"){
                score.emplace_back(score[idx] + score[idx-1]);
                ++idx;
            }else if(s == "D"){
                score.emplace_back(score[idx]*2);
                ++idx;
            }else if(s == "C"){
                score.pop_back();
                --idx;
            }else{
                score.emplace_back(stoi(s));
                ++idx;
            }
        }
        int result = 0;
        for(auto i : score) result += i;
        return result;
    }
};
// @lc code=end

