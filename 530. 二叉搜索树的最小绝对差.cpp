/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
 */

// @lc code=start
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int pre = -1, val = 100001;
        dfs(root, pre, val);
        return val;
    }

    void dfs(TreeNode* node, int& pre, int& val){
        if(node == nullptr) return;
        dfs(node->left,pre,val);
        if(pre == -1){
            pre = node->val;
        }else{
            val = std::min(val,node->val-pre);
            pre = node->val;
        }
        dfs(node->right,pre,val);
    }
};
// @lc code=end

