/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根节点到叶节点数字之和
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
    int sumNumbers(TreeNode* root) {
        dfs(0,root);
        return sum;
    }

    void dfs(int num, TreeNode* node){
        num = num * 10 + node->val;
        if(node->left == nullptr && node->right == nullptr){
            sum += num;
            return;
        }
        if(node->left != nullptr) dfs(num, node->left);
        if(node->right != nullptr) dfs(num, node->right);
    }
};
// @lc code=end

