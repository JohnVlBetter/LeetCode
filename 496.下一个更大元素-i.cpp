/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int vals[10000];
        //memset(vals,-1,sizeof(vals));
        stack<int> s;
        for(int i = n-1;i>=0;--i){
            while(!s.empty() && s.top() <= nums2[i]){
                s.pop();
            }
            if(s.empty()){
                s.push(nums2[i]);
                vals[nums2[i]] = -1;
            }
            else{
                vals[nums2[i]] = s.top();
                s.push(nums2[i]);
            }
        }
        n = nums1.size();
        vector<int> result(n);
        for(int i = 0;i< n;++i) result[i] = vals[nums1[i]];
        return result;
    }
};
// @lc code=end

