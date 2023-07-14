/*
 * @lc app=leetcode.cn id=1507 lang=cpp
 *
 * [1507] 转变日期格式
 */

// @lc code=start
class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string,string> umap = {
            {"Jan", "01"},
            {"Feb", "02"},
            {"Mar", "03"},
            {"Apr", "04"},
            {"May", "05"},
            {"Jun", "06"},
            {"Jul", "07"},
            {"Aug", "08"},
            {"Sep", "09"},
            {"Oct", "10"},
            {"Nov", "11"},
            {"Dec", "12"}
        };
        stringstream ss(date);
        string day,mon,year;
        ss>>day>>mon>>year;
        day = day.substr(0,day.length()-2);
        if(day.length() == 1) day = '0'+day;
        return year+'-'+umap[mon]+'-'+day;
    }
};
// @lc code=end

