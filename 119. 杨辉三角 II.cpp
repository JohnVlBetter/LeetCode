class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex+1);
        result[0] = 1;
        for(int i =1 ;i<=rowIndex;++i){ 
            result[i] = (long)result[i - 1] * (rowIndex - i + 1) / i;
        }
        return result;
    }
};
//119. 杨辉三角 II