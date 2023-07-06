/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
class Solution {
public:
    string addBinary(string a, string b) {
        int bl = b.length(), al = a.length();
        while(bl < al){
            b = '0' + b;
            ++bl;
        }
        while(al < bl){
            a = '0' + a;
            ++al;
        }
        int num = 0;
        for(int i = al - 1; i>=0; --i){
            int sum = a[i] - '0' + b[i] - '0' + num;
            a[i] = (sum) % 2 + '0';
			num = sum / 2;
        }
        if (num > 0) a = '1' + a;
		return a;
    }
};
// @lc code=end

