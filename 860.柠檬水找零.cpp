/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0,ten = 0;
        for(const auto& b : bills){
            if(b == 5) ++five;
            else if(b == 10){
                if(five < 1) return false;
                ++ten;
                --five;
            }
            else{
                if(ten > 0){
                    if(five > 0){
                        --five;
                    }else{
                        return false;
                    }
                    --ten;
                }else{
                    if(five > 2){
                        five -= 3;
                    }else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
// @lc code=end

