/*
 * @lc app=leetcode.cn id=901 lang=cpp
 *
 * [901] 股票价格跨度
 */

// @lc code=start
class StockSpanner {
public:
    std::stack<pair<int,int>> s;
    int idx;
    StockSpanner() {
        idx = 0;
        s.emplace(idx,INT_MAX);
    }

    int next(int price) {
        while(price >= s.top().second) s.pop();
        int result = (++idx) - s.top().first;
        s.emplace(idx, price);
        return result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
// @lc code=end

