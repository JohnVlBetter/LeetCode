class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> m;
        for(const auto& v : items1) m[v[0]] += v[1];
        for(const auto& v : items2) m[v[0]] += v[1];
        vector<vector<int>> result;
        for(const auto& [v,w] : m){
            result.push_back({v,w});
        }
        return result;
    }
};
//2363. 合并相似的物品