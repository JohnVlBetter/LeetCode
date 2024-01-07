/*
 * @lc app=leetcode.cn id=100187 lang=cpp
 *
 * [100187] 捕获黑皇后需要的最少移动次数
 */

// @lc code=start
class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if(a == e){
            if(a != c){
                return 1;
            }else{
                if(b > f){
                    if(d>b || d<f) return 1;
                }else{
                    if(d>f || d<b)return 1;
                }
            }
        }
        if(b == f){
            if(b != d){
                return 1;
            }else{
                if(a > e){
                    if(c>a || c<e) return 1;
                }else{
                    if(c>e || c<a)return 1;
                }
            }
        }
        if(std::abs(c-e) == std::abs(d-f)){
            int x1 = std::abs(c-e);
            int y1 = std::abs(d-f);
            int x2 = std::abs(c-a);
            int y2 = std::abs(d-b);
            if(x2 - y2 != x1 - y1){
                return 1;
            }else{
                if(c > e){
                    if(a>c || a<e) return 1;
                }else{
                    if(a>e || a<c)return 1;
                }
            }
        }
        return 2;
    }
};
// @lc code=end

