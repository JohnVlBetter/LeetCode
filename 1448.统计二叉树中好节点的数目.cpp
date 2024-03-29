/*
 * @lc app=leetcode.cn id=1448 lang=cpp
 *
 * [1448] 统计二叉树中好节点的数目
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

    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return sum;
    }

    void dfs(TreeNode* node, int max) {
        if (node->val >= max) {
            ++sum;
            max = node->val;
        }
        if(node->left) dfs(node->left, max);
        if(node->right) dfs(node->right, max);
    }
};
// @lc code=end

