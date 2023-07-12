class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return root;
        stack<TreeNode*>s;
        s.emplace(root);
        TreeNode* tmp = nullptr;
        while(!s.empty()){
            TreeNode* node = s.top();
            s.pop();
            tmp = node->left;
            node->left = node->right;
            node->right = tmp;
            if(node->left) s.emplace(node->left);
            if(node->right) s.emplace(node->right);
        }
        return root;
    }
};
//226. 翻转二叉树