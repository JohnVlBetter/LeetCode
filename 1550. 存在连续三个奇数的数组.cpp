class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) return false;
        int count = 0;
        for(int i = 0;i<n;++i){
            if(arr[i]&1) ++count;
            else count = 0;
            if(count == 3) return true;
        }
        return false;
    }
};
//1550. 存在连续三个奇数的数组