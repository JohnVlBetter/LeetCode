/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {};
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            double sum = 0.0;
            //double f = 1.0 / (double)count;
            for(int idx = 0;idx<count;++idx){
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);
                sum += node->val;
            }
            sum /= count;
            res.push_back(sum);
        }
        return res;
    }
};
// @lc code=end

