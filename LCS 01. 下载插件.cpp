class Solution {
public:
    int leastMinutes(int n) {
        int speed = 1, num = 0;
        while(speed<n){
            speed <<= 1;
            ++num;
        }
        return num + 1;
    }
};