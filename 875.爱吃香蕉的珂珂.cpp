/*
 * @lc app=leetcode.cn id=875 lang=cpp
 *
 * [875] 爱吃香蕉的珂珂
 */

// @lc code=start
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = -1;
        for(auto pile : piles) max = std::max(pile, max);
        int l = 1, r = max;
        while(l<r){
            int mid = (r - l) / 2 + l;
            int time = h;
            for(auto pile : piles){
                time -= (pile - 1) / mid + 1;
            }
            if(time < 0) l = mid +1;
            else r = mid;
        }
        return l;
    }
};
// @lc code=end

