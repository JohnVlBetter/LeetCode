/*
 * @lc app=leetcode.cn id=617 lang=cpp
 *
 * [617] 合并二叉树
 */
#include <stack>
// @lc code=start
/**
 * Definition for a binary tree node.*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* result = dfs(root1,root2);
        return result;
    }

    TreeNode* dfs(TreeNode* root1,TreeNode* root2){
        if(root2 == nullptr) return root1;
        else if(root1 == nullptr) return root2;
        else{
            TreeNode* root = new TreeNode(root2->val + root1->val);
            root->left = dfs(root1->left,root2->left);
            root->right = dfs(root1->right,root2->right);
            return root;
        }
    }
};
// @lc code=end

