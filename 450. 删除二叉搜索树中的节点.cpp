/*
 * @lc app=leetcode.cn id=450 lang=cpp
 *
 * [450] 删除二叉搜索树中的节点
 */

// @lc code=start
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if (root == nullptr)    return nullptr;
        if (key > root->val)    root->right = deleteNode(root->right, key);
        else if (key < root->val)    root->left = deleteNode(root->left, key);
        else 
        {
            if (! root->left)   return root->right;
            if (! root->right)  return root->left;
            TreeNode* node = root->right;
            while (node->left)
                node = node->left;
            node->left = root->left;
            root = root->right; 
        }
        return root;    
    }
};

// @lc code=end

