/*
 * @lc app=leetcode.cn id=2336 lang=cpp
 *
 * [2336] 无限集中的最小数字
 */

// @lc code=start
class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    std::vector<bool> map;
    SmallestInfiniteSet() {
        map = std::vector<bool>(1001,true);
        for(int i = 1;i <= 1000; ++i){
            pq.push(i);
        }
    }

    int popSmallest() {
        int result = pq.top();
        pq.pop();
        map[result] = false;
        return result;
    }

    void addBack(int num) {
        if(num > 1000 || map[num]) return;
        map[num] = true;
        pq.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
// @lc code=end

