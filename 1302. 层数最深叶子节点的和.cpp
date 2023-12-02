/*
 * @lc app=leetcode.cn id=1302 lang=cpp
 *
 * [1302] 层数最深叶子节点的和
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
    int deepestLeavesSum(TreeNode* root) {
        int level = 0;
        queue<TreeNode*> q;
        q.emplace(root);
        int res = 0;
        while(!q.empty()){
            int n = q.size();
            res =0;
            for(int i = 0;i< n;++i){
                TreeNode* node = q.front();
                q.pop();
                res += node->val;
                if(node->left!=nullptr) q.emplace(node->left);
                if(node->right!=nullptr) q.emplace(node->right);
            }
        }
        return res;
    }
};
// @lc code=end

