class Solution {
public:
    int maxSales(vector<int>& sales) {
        int pre = 0, max = sales[0];
        for(auto &s : sales){
            pre = std::max(pre + s, s);
            max = std::max(max, pre);
        }
        return max;
    }
};