/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        dfs(root,"",result);
        return result;
    }

    void dfs(TreeNode* node, string s, vector<string>& result){
        s += std::to_string(node->val);
        if(!node->left && !node->right){
            result.emplace_back(s);
            return;
        }
        s+="->";
        if(node->left) dfs(node->left,s,result);
        if(node->right) dfs(node->right,s,result);
    }
};
// @lc code=end

