/*
 * @lc app=leetcode.cn id=649 lang=cpp
 *
 * [649] Dota2 参议院
 */
#include <queue>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r,d;
        for(int i = 0;i<senate.size();++i){
            if(senate[i] == 'R') r.push(i);
            else d.push(i);
        }
        while(!r.empty() && !d.empty()){
            if(r.front() < d.front()){
                r.push(r.front() + senate.size());
            }else{
                d.push(d.front() + senate.size());
            }
            r.pop();
            d.pop();
        }
        return r.size() > d.size() ? "Radiant" : "Dire";
    }
};
// @lc code=end

