/*
 * @lc app=leetcode.cn id=2843 lang=cpp
 *
 * [2843] 统计对称整数的数目
 */

// @lc code=start
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        for(int n = low;n<=high;++n){
            int i = n;
            if((i>=0 &&i<=9)||(i>=100 &&i<=1000) || i==10000)continue;
            else if(i >= 10 && i<=99){
                if(i==11||i==22||i==33||i==44||i==55||i==66||i==77||i==88||i==99) ++res;
            }
            else{
                int sum = 0;
                sum += i%10;
                i/=10;
                sum += i%10;
                i/=10;
                sum -= i%10;
                i/=10;
                sum -= i%10;
                i/=10;
                if(sum == 0)++res;
            }
        }
        return res;
    }
};
// @lc code=end

