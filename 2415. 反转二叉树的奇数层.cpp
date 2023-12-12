/*
 * @lc app=leetcode.cn id=2415 lang=cpp
 *
 * [2415] 反转二叉树的奇数层
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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int idx = 0;
        while(!q.empty()){
            int n = q.size();
            vector<TreeNode*> vec(n,nullptr);
            for(int i = 0;i< n;++i){
                TreeNode* node = q.front();
                vec[i] = node;
                q.pop();
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
            }
            if(idx % 2 == 1){
                for(int i = 0;i< n/2;++i){
                    int tmp = vec[i]->val;
                    vec[i]->val = vec[n-1-i]->val;
                    vec[n-1-i]->val = tmp;
                }
            }
            ++idx;
        }
        return root;
    }
};
// @lc code=end

