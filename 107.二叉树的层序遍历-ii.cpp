/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层序遍历 II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result = levelOrder(root);
        reverse(result.begin(),result.end());
        return result;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return{};
        queue<TreeNode*> q;
        vector<vector<int>> result;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            vector<int> levelResult(count);
            for(int idx = 0;idx<count;++idx){
                TreeNode* node = q.front();
                q.pop();
                levelResult[idx] = node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            result.emplace_back(levelResult);
        }
        return result;
    }
};
// @lc code=end

