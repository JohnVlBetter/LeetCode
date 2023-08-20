/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] 二叉树展开为链表
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
    stack<TreeNode*> stk;
    void flatten(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return;
        TreeNode* tmp = root;
        stk.push(root);
        while(!stk.empty()){
            TreeNode* node = stk.top();
            stk.pop();
            if(node->right!=nullptr)stk.push(node->right);
            if(node->left!=nullptr)stk.push(node->left);
            tmp->right = node;
            tmp->left = nullptr;
            tmp = node;
        }
    }
};
// @lc code=end

