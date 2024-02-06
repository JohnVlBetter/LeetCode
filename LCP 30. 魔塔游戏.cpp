/*
 * @lc app=leetcode.cn id=LCP 30 lang=cpp
 *
 * [LCP 30] 魔塔游戏
 */

// @lc code=start
class Solution {
public:
    int magicTower(vector<int>& nums) {
        int res = 0;
        priority_queue<int, vector<int>, greater<int>> q;
        long long hp = 1, delay = 0;
        for (int num: nums) {
            if (num < 0) {
                q.push(num);
            }
            hp += num;
            if (hp <= 0) {
                delay += q.top();
                hp -= q.top();
                q.pop();
                ++res;
            }
        }
        hp += delay;
        return hp <= 0 ? -1 : res;
    }
};
// @lc code=end

