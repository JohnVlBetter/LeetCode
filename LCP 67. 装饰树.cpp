/*
 * @lc app=leetcode.cn id=LCP 67 lang=cpp
 *
 * [LCP 67] 装饰树
 */

// @lc code=start
class Solution {
public:
    TreeNode* expandBinaryTree(TreeNode* root) {
        dfs(root);
        return root;
    }

    void dfs(TreeNode* node){
        if(node == nullptr) return;
        if(node->left){
            node->left = new TreeNode(-1,node->left,nullptr);
            dfs(node->left->left);
        }
        if(node->right){
            node->right = new TreeNode(-1,nullptr,node->right);
            dfs(node->right->right);
        }
    }
};
// @lc code=end