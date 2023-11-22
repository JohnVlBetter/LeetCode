/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    stack<pair<int,int>> s;
    int min;
    MinStack() {
        min = INT_MAX;
    }

    void push(int val) {
        min = std::min(val, min);
        s.push(pair<int,int>(val,min));
    }

    void pop() {
        s.pop();
        min = s.empty()?INT_MAX:getMin();
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};
// @lc code=end

