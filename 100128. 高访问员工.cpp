/*
 * @lc app=leetcode.cn id=100128 lang=cpp
 *
 * [100128] 高访问员工
 */

// @lc code=start
class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        vector<string> res;
        unordered_map<string, vector<string>> map;
        for(auto& t : access_times){
            map[t[0]].push_back(t[1]);
        }
        for(auto [key, val] : map){
            if(val.size() < 3) continue;
            int count;
            vector<string> time = val;
            sort(time.begin(),time.end());
            for(int i = 2;i< val.size();++i){
                if(stoi(time[i]) - stoi(time[i-2]) < 100){
                    res.push_back(key);
                    break;
                }
            }
        }
        return res;
    }
};
// @lc code=end

