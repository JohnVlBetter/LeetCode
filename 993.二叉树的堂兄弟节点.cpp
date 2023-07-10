/*
 * @lc app=leetcode.cn id=993 lang=cpp
 *
 * [993] 二叉树的堂兄弟节点
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
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return false;
        dfs(root,0,nullptr,x,y);
        if(xD == 0 || yD == 0) return false;
        return xD==yD && xP != yP;
    }
    TreeNode* xP = nullptr,*yP = nullptr;
    int xD = 0, yD = 0;
    void dfs(TreeNode* node, int depth, TreeNode* parent, int x, int y){
        if(xP && yP) return;
        if(node->val == x){
            xD = depth;
            xP = parent;
        }else if(node->val == y){
            yD = depth;
            yP = parent;
        }else{
            if(node->left) dfs(node->left,depth+1,node,x,y);
            if(node->right) dfs(node->right,depth+1,node,x,y);
        }
    }
};
// @lc code=end

