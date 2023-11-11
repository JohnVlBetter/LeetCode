/*
 * @lc app=leetcode.cn id=2785 lang=cpp
 *
 * [2785] 将字符串中的元音字母排序
 */

// @lc code=start
class Solution {
public:
    bool check(char c){
        return c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' || c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U';
    }
    string sortVowels(string s) {
        vector<char> vec;
        for(auto& c : s){
            if(check(c)){
                vec.push_back(c);
                c = '0';
            }
        }
        sort(vec.begin(),vec.end());
        int idx= 0;
        for(int i = 0;i< s.size();++i){
            if(s[i] == '0')  s[i] = vec[idx++];
        }
        return s;
    }
};
// @lc code=end

