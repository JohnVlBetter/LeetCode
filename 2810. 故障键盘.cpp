/*
 * @lc app=leetcode.cn id=2810 lang=cpp
 *
 * [2810] 故障键盘
 */

// @lc code=start
class Solution {
public:
    string finalString(string s) {
        deque<char> q;
        bool tail = true;
        for(auto c : s){
            if(c == 'i') tail = !tail;
            else if (tail) q.push_back(c);
            else q.push_front(c);
        }
        return tail?string(q.begin(),q.end()):string(q.rbegin(),q.rend());
    }
};
// @lc code=end

