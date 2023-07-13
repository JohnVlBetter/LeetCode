class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int i = 0;i<nums.size();++i){
            //if((nums[i]>=10&&nums[i]<=99)||(nums[i]>=1000&&nums[i]<=9999) || nums[i] == 100000) ++result;
            if((int)(log10(nums[i]) + 1) % 2 == 0) ++result;
        }
        return result;
    }
};
//1295. 统计位数为偶数的数字