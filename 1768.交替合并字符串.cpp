/*
 * @lc app=leetcode.cn id=1768 lang=cpp
 *
 * [1768] 交替合并字符串
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length(),n2 = word2.length(),i1=0,i2=0,i3=0;
        string result(n1+n2,'0');
        while(i1<n1 && i2 <n2){
            result[i3++] = word1[i1++];
            result[i3++] = word2[i2++];
        }
        while(i1<n1) result[i3++] = word1[i1++];
        while(i2<n2) result[i3++] = word2[i2++];
        return result;
    }
};
// @lc code=end

