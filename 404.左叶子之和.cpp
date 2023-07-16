/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    int sum = 0;

    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return sum;
    }

    int dfs(TreeNode* node){
        if(!node) return 0;
        if(!node->left && !node->right){
            return node->val;
        }
        sum += dfs(node->left);
        dfs(node->right);
        return 0;
    }
};
// @lc code=end

