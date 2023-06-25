/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    int Sum(TreeNode* root, long targetSum) {
        if (!root) return 0;

        int result = 0;
        if (root->val == targetSum) ++result;

        result += Sum(root->left, targetSum - root->val);
        result += Sum(root->right, targetSum - root->val);
        return result;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;

        int result = Sum(root, targetSum);
        result += pathSum(root->left, targetSum);
        result += pathSum(root->right, targetSum);
        return result;
    }
};
// @lc code=end

