/*
 * @lc app=leetcode.cn id=1046 lang=cpp
 *
 * [1046] 最后一块石头的重量
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int,vector<int>,less<int>>q(stones.begin(),stones.end());
        while(q.size() > 1){
            int stone1 = q.top();
            q.pop();
            int stone2 = q.top();
            q.pop();
            if(stone1 != stone2){
                q.push(stone1 - stone2);
            }
        }
        if(q.empty()) return 0;
        else return q.top();
    }
};
// @lc code=end

