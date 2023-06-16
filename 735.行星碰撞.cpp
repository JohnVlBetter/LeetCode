/*
 * @lc app=leetcode.cn id=735 lang=cpp
 *
 * [735] 行星碰撞
 */

// @lc code=start
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for (int i = 0; i < asteroids.size(); ++i) {
            bool isAlive = true;
            while (!result.empty() && asteroids[i] < 0 && isAlive && result.back() > 0) {
                isAlive = -asteroids[i] > result.back();
                if (-asteroids[i] >= result.back()) result.pop_back();
            }
            if (isAlive) result.push_back(asteroids[i]);
        }
        return result;
    }
};
// @lc code=end

