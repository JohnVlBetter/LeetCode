/*
 * @lc app=leetcode.cn id=451 lang=cpp
 *
 * [451] 根据字符出现频率排序
 */

// @lc code=start
class Solution {
public:
    string frequencySort(string s) {
        int map[75];
        memset(map,0,sizeof(map));
        for(auto& c : s){
           ++map[c-'0'];
        }
        string res = "";
        for(int j = 0;j<62;++j){
            int max = -1,idx = -1;
            for(int i = 0;i<75;++i){
                if(map[i] > max){
                    max = map[i];
                    idx = i;
                }
            }
            if(max == 0) return res;
            char c = idx + '0';
            for(int i = 0;i<map[idx];++i){
                res.push_back(c);
            }
            map[idx] = 0;
        }
        return res;
    }
};
// @lc code=end

