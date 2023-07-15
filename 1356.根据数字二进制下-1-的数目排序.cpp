/*
 * @lc app=leetcode.cn id=1356 lang=cpp
 *
 * [1356] 根据数字二进制下 1 的数目排序
 */

// @lc code=start
class Solution {
public:
    int get(int num){
        int res = 0;
        while (num) {
            num &= (num - 1);
            res++;
        }
        return res;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](int x, int y){
            int bitX = get(x);
            int bitY = get(y);
            if (bitX < bitY) return true;
            else if (bitX > bitY) return false;
            else return x < y;
        });
        return arr;
    }
};
// @lc code=end

