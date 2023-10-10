/*
 * @lc app=leetcode.cn id=1381 lang=cpp
 *
 * [1381] 设计一个支持增量操作的栈
 */

// @lc code=start
class CustomStack {
public:
    int* stack;
    int idx;
    int size;
    CustomStack(int maxSize) {
        stack = new int[maxSize];
        memset(stack, 0, sizeof(int)*maxSize);
        idx = 0;
        size = maxSize;
    }

    void push(int x) {
        if(idx < size){
            stack[idx++] = x;
        }
    }

    int pop() {
        if(idx == 0) return -1;
        int res = stack[idx-1];
        --idx;
        return res;
    }

    void increment(int k, int val) {
        int max = std::min(k,idx);
        for(int i = 0;i< max;++i)
            stack[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
// @lc code=end

