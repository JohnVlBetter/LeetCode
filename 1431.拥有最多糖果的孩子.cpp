/*
 * @lc app=leetcode.cn id=1431 lang=cpp
 *
 * [1431] 拥有最多糖果的孩子
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = -1;
        for(auto c : candies) if(max < c) max = c;
        for(auto c : candies) result.push_back(c + extraCandies >= max);
        return result;
    }
};
// @lc code=end

