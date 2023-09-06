/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N 叉树的后序遍历
 */

// @lc code=start

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(!root) return {};
        stack<Node*> s;
        s.push(root);
        vector<int> res;
        while(!s.empty()){
            Node* node = s.top();
            int n = node->children.size();
            if(n){
                for(int i = n-1;i>=0;--i){
                    s.push(node->children[i]);
                }
                node->children.clear();
            }else{
                res.push_back(node->val);
                s.pop();
            }
        }
        return res;
    }
};
// @lc code=end

