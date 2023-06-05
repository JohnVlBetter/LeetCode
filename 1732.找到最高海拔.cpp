/*
 * @lc app=leetcode.cn id=1732 lang=cpp
 *
 * [1732] 找到最高海拔
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0,sum = 0;
        for(auto g : gain){
            sum += g;
            max = std::max(sum,max);
        }
        return max;
    }
};
// @lc code=end

