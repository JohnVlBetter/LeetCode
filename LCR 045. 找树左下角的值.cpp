/*
 * @lc app=leetcode.cn id=LCR 045 lang=cpp
 *
 * [LCR 045] 找树左下角的值
 */

// @lc code=start
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int res;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode * node = q.front();
            q.pop();
            if (node->right) q.push(node->right);
            if (node->left) q.push(node->left);
            res = node->val;
        }
        return res;
    }
};
// @lc code=end

