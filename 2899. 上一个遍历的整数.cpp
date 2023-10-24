/*
 * @lc app=leetcode.cn id=2899 lang=cpp
 *
 * [2899] 上一个遍历的整数
 */

// @lc code=start
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> num;
        vector<int> res;
        int prevC = 0;
        for(auto& word : words){
            if(word[0] == 'p'){
                res.push_back(++prevC > num.size()?-1:num[num.size()-prevC]);
            }else{
                prevC = 0;
                num.push_back(std::stoi(word));
            }
        }
        return res;
    }
};
// @lc code=end

