/*
 * @lc app=leetcode.cn id=LCR 174 lang=cpp
 *
 * [LCR 174] 寻找二叉搜索树中的目标节点
 */

// @lc code=start
class Solution {
public:
    int cnt,res;
    int findTargetNode(TreeNode* root, int cnt) {
        this->cnt = cnt;
        dfs(root);
        return this->res;
    }
    void dfs(TreeNode* node){
        if(node == nullptr) return;
        dfs(node->right);
        if(cnt == 0) return;
        if(--cnt == 0) res = node->val;
        dfs(node->left);
    }
};
// @lc code=end

