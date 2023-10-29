/*
 * @lc app=leetcode.cn id=100102 lang=cpp
 *
 * [100102] . 数组的最小相等和
 */

// @lc code=start
class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int zeroCount1 = 0,zeroCount2 = 0;
        long long sum1 = 0,sum2 = 0;
        for(auto& n : nums1){
            if(n==0) ++zeroCount1;
            sum1 += n;
        }
        for(auto& n : nums2){
            if(n==0) ++zeroCount2;
            sum2 += n;
        }
        if(sum1<sum2){
            if(zeroCount1 == 0) return -1;
            else if(zeroCount2 == 0 && (sum2-sum1)<zeroCount1)return -1;
            return max(zeroCount2+sum2,zeroCount1+sum1);
        }
        else if(sum1>sum2){
            if(zeroCount2 == 0) return -1;
            else if(zeroCount1 == 0 && (sum1-sum2)<zeroCount2)return -1;
            return max(zeroCount2+sum2,zeroCount1+sum1);
        }else{
            if((zeroCount1==0&&zeroCount2!=0)||(zeroCount2==0&&zeroCount1!=0))return -1;
            return max(zeroCount1,zeroCount2)+sum1;
        }
    }
};
// @lc code=end

