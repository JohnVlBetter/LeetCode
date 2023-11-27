/*
 * @lc app=leetcode.cn id=1372 lang=cpp
 *
 * [1372] 二叉树中的最长交错路径
 */

// @lc code=start
class Solution {
public:
    int res = 0;
    int longestZigZag(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        dfs(root->left, true, 0);
        dfs(root->right, false, 0);
        return res;
    }
    void dfs(TreeNode* node, bool isLeft, int len){
        if(node == nullptr){
            res = std::max(res, len);
            return;
        }
        if(isLeft){
            dfs(node->left, true, 0);
            dfs(node->right, false, len + 1);
        }else{
            dfs(node->left, true, len + 1);
            dfs(node->right, false, 0);
        }
    }
};
// @lc code=end

