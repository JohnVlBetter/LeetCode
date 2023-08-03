/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */

// @lc code=start
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int idx1 = 0,idx2 = 0;
        int n1 = name.size(),n2 = typed.size();
        while(idx2 < n2){
            if(idx1 < n1 && name[idx1] == typed[idx2]) {
                ++idx1,++idx2;
            }
            else if(idx2>0 && typed[idx2] == typed[idx2 -1]){
                ++idx2;
            } 
            else{
                return false;
            }
        }
        return idx1 == n1;
    }
};
// @lc code=end

