/*
 * @lc app=leetcode.cn id=1678 lang=cpp
 *
 * [1678] 设计 Goal 解析器
 */

// @lc code=start
class Solution {
public:
    string interpret(string command) {
        string res = "";
        for(int i = 0;i<command.size();){
            if(command[i] == 'G'){
                res.push_back('G');
                ++i;
            }
            else{
                if(command[i+1] == 'a'){
                    res.append("al");
                    i+=4;
                }else{
                    res.push_back('o');
                    i+=2;
                }
            }
        }
        return res;
    }
};
// @lc code=end

