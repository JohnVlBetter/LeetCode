/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> map;
        for (int i = 0; i < arr2.size(); ++i) {
            map[arr2[i]] = i;
        }
        sort(arr1.begin(), arr1.end(), [&](int x, int y) {
            if (map.count(x)) {
                return map.count(y) ? map[x] < map[y] : true;
            }
            else {
                return map.count(y) ? false : x < y;
            }
        });
        return arr1;
    }
};
// @lc code=end

