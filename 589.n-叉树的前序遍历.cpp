/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N 叉树的前序遍历
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
    vector<int> preorder(Node* root) {
        if(!root) return {};
        vector<int> result;
        stack<Node*> s;
        s.emplace(root);
        while(!s.empty()){
            Node* node = s.top();
            s.pop();
            result.emplace_back(node->val);
            for(int i = node->children.size()-1;i>=0;--i){
                s.emplace(node->children[i]);
            }
        }
        return result;
    }
};
// @lc code=end

