/*
 * @lc app=leetcode.cn id=872 lang=cpp
 *
 * [872] 叶子相似的树
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left, right;
        GetLeafList(root1,left);
        GetLeafList(root2,right);
        if(left.size() != right.size()) return false;
        return left == right;
    }

    void GetLeafList(TreeNode* root, vector<int>& result){
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* node = s.top();
            s.pop();
            if(node->left == nullptr && node->right == nullptr) result.push_back(node->val);
            else{
                if(node->left != nullptr) s.push(node->left);
                if(node->right != nullptr) s.push(node->right);
            }
        }
    }
};
// @lc code=end

