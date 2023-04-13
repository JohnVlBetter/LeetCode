/*
 * @lc app=leetcode.cn id=640 lang=cpp
 *
 * [640] 求解方程
 */
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string solveEquation(string equation) {
        int factor = 0, result = 0;
        int i = 0, n = equation.size(), sign1 = 1; 
        while (i < n) {
            if (equation[i] == '=') {
                sign1 = -1;
                i++;
                continue;
            }

            int sign2 = sign1, curN = 0;
            bool resultid = false;
            if (equation[i] == '-' || equation[i] == '+') {
                sign2 = (equation[i] == '-') ? -sign1 : sign1;
                i++;
            }
            while (i < n && isdigit(equation[i])) {
                curN = curN * 10 + (equation[i] - '0');
                i++;
                resultid = true;
            }

            if (i < n && equation[i] == 'x') {
                factor += resultid ? sign2 * curN : sign2;
                i++;
            } else {
                result += sign2 * curN;
            }
        }
        if (factor == 0) {
            return result == 0 ? "Infinite solutions" : "No solution";
        }
        return string("x=") + to_string(-result / factor);
    }
};
// @lc code=end

