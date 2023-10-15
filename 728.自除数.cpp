/*
 * @lc app=leetcode.cn id=728 lang=cpp
 *
 * [728] 自除数
 */

// @lc code=start
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int l = left; l <= right; ++l){
            int num = l;
            bool flag = true;
            while(num){
                int dight = num % 10;
                if(dight == 0 || l % dight != 0){
                    flag = false;
                    break;
                }
                num /= 10;
            }
            if(flag) res.emplace_back(l);
        }
        return res;
    }
};
// @lc code=end

