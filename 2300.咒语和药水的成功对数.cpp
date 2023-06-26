/*
 * @lc app=leetcode.cn id=2300 lang=cpp
 *
 * [2300] 咒语和药水的成功对数
 */

// @lc code=start
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> pairs(spells.size(), 0);
        for(int i = 0;i<spells.size();++i){
            pairs[i] = GetNum(potions, (success + spells[i] - 1) / spells[i]);
        }
        return pairs;
    }

    int GetNum(const vector<int>& potions, long long success){
        int l = 0, r= potions.size()-1;
        while(l<r){
            int mid = (r - l) / 2 + l;
            if(potions[mid] >= success){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return potions[l] >= success ? potions.size() - l : 0;
    }
};
// @lc code=end

