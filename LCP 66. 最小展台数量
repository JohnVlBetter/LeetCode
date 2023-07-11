class Solution {
public:
    int minNumBooths(vector<string>& demand) {
        int map[26],cur[26];
        memset(map, 0, sizeof(map));
        for(const string& s :demand){
            memset(cur, 0, sizeof(cur));
            for(const char& c : s){
                ++cur[c-'a'];
            }
            for(int i = 0; i< 26;++i){
                map[i] = std::max(map[i],cur[i]);
            }
        }
        return accumulate(map,map+26,0);
    }
};