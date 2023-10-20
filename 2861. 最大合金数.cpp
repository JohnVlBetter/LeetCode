/*
 * @lc app=leetcode.cn id=2861 lang=cpp
 *
 * [2861] 最大合金数
 */

// @lc code=start
class Solution {
public:
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        int res = 0;
        for(auto com : composition){
            int l = 0, r = *min_element(stock.begin(), stock.end()) + budget + 1;
            while(l < r){
                int m = (1 + l + r) / 2;
                if(check(m,n,k,budget,com,stock,cost)){
                    l = m;
                }else{
                    r = m-1;
                }
            }
            res = std::max(res, l);
        }
        return res;
    }
    bool check(long num,int n, int k, int budget, vector<int>& composition, vector<int>& stock, vector<int>& cost){
        long long money = 0;
        for (int i = 0; i < n; i++) {
            long long tmp = composition[i] * num;
            if (stock[i] < tmp) {
                tmp -= stock[i];
                money += tmp * cost[i];
                if (money > budget) {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

