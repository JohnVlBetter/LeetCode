/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {stack<TreeNode*> s;
        vector<int> result;
        if(!root) return result;
        s.emplace(root);
        while(!s.empty()){
            auto node = s.top();
            s.pop();
            if(!node) continue;
            result.emplace_back(node->val);
            s.emplace(node->left);
            s.emplace(node->right);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

