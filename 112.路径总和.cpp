/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, targetSum);
    }

    bool dfs(TreeNode* node, int targetSum){
        if(node == nullptr) return false;
        if(node->val == targetSum && !node->left && !node->right){
            return true;
        }
        return dfs(node->left, targetSum - node->val) || dfs(node->right, targetSum - node->val);
    }
};
// @lc code=end

