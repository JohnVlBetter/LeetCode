/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,int>> q;
        q.emplace(root,1);
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int d = q.front().second;
            q.pop();
            if(!node->left && !node->right) return d;
            if(node->left) q.emplace(node->left,d+1);
            if(node->right) q.emplace(node->right,d+1);
        }
        return 0;
    }
};
// @lc code=end

