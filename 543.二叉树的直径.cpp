/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
 */

// @lc code=start
/**
 * Definition for a binary tree node. */
#include <stack>

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
    int max;
    int diameterOfBinaryTree(TreeNode* root) {
        max = 1;
        depth(root);
        return max-1;
    }

    int depth(TreeNode* root){
        if(root == nullptr) return 0;
        int left = depth(root->left);
        int right = depth(root->right);
        max = std::max(max, left+right+1);
        return std::max(left, right)+1;
    }
};
// @lc code=end

