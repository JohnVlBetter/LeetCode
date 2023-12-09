/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N 叉树的层序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == nullptr) return {};
        vector<vector<int>>res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> vec;
            for(int i = 0;i<n;++i){
                Node* node = q.front();
                q.pop();
                vec.push_back(node->val);
                for(auto& c : node->children){
                    q.push(c);
                }
            }
            res.emplace_back(move(vec));
        }
        return res;
    }
};
// @lc code=end

