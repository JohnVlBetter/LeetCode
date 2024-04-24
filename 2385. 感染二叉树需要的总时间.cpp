/*
 * @lc app=leetcode.cn id=2385 lang=cpp
 *
 * [2385] 感染二叉树需要的总时间
 */

// @lc code=start
TreeNode* father[100001];

class Solution {
    int start;
    TreeNode* start_node;

    void dfs(TreeNode* node, TreeNode* from) {
        if (node == nullptr) {
            return;
        }
        father[node->val] = from;
        if (node->val == start) {
            start_node = node;
        }
        dfs(node->left, node);
        dfs(node->right, node);
    }

    int maxDepth(TreeNode* node, TreeNode* from) {
        if (node == nullptr) {
            return -1;
        }
        int res = -1;
        if (node->left != from) {
            res = max(res, maxDepth(node->left, node));
        }
        if (node->right != from) {
            res = max(res, maxDepth(node->right, node));
        }
        if (father[node->val] != from) {
            res = max(res, maxDepth(father[node->val], node));
        }
        return res + 1;
    }

public:
    int amountOfTime(TreeNode* root, int start) {
        this->start = start;
        dfs(root, nullptr);
        return maxDepth(start_node, start_node);
    }
};
// @lc code=end