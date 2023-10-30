/*
 * @lc app=leetcode.cn id=2856 lang=cpp
 *
 * [2856] 删除数对后的最小数组长度
 */

// @lc code=start
class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int len = nums.size();
        int maxC = 0,pre = 0,count = 0;
        for(auto& n : nums){
            if(pre != n){
                pre = n;
                maxC = std::max(maxC,count);
                count = 1;
            }
            else{
                ++count;
            }
        }
        maxC = std::max(maxC,count);
        if(len % 2 == 0){
            if(maxC <= len /2) return 0;
            else{
                return maxC*2 - len;
            }
        }else{
            if(maxC <= len /2) return 1;
            else{
                return maxC*2 - len;
            }
        }
    }
};
// @lc code=end