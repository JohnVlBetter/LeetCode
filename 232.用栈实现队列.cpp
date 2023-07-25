/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
public:
    stack<int> main,tmp;
    MyQueue() {

    }

    void push(int x) {
        main.emplace(x);
    }

    int pop() {
        while(!main.empty()){
            tmp.emplace(main.top());
            main.pop();
        }
        int result = tmp.top();
        tmp.pop();
        while(!tmp.empty()){
            main.emplace(tmp.top());
            tmp.pop();
        }
        return result;
    }

    int peek() {
        while(!main.empty()){
            tmp.emplace(main.top());
            main.pop();
        }
        int result = tmp.top();
        while(!tmp.empty()){
            main.emplace(tmp.top());
            tmp.pop();
        }
        return result;
    }

    bool empty() {
        return main.empty();
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

