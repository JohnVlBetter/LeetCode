/*
 * @lc app=leetcode.cn id=2391 lang=cpp
 *
 * [2391] 收集垃圾的最少总时间
 */

// @lc code=start
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int res = 0;
        int n = garbage.size();
        int m = 0, p = 0, g = 0;
        for(int i = n-1;i>=0;--i){
            res += garbage[i].size();
            for(auto& c : garbage[i]){
                if(c == 'M') m = std::max(m, i);
                else if(c == 'P') p = std::max(p, i);
                else g = std::max(g, i);
            }
        }
        for(int i = 0;i< n;++i){
            if(i<m) res += travel[i];
            if(i<p) res += travel[i];
            if(i<g) res += travel[i];
        }
        return res;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
// @lc code=end

