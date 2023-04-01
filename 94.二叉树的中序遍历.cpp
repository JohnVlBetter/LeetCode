/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

#include <vector>
#include <stack>
using namespace std;

// @lc code=start
//**
 //* Definition for a binary tree node.
/*struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};*/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;
        stack<TreeNode*> s;
        s.push(root);
        while (s.size()) {
            TreeNode* cur = s.top();
            if (cur->left != nullptr) {
                s.push(cur->left);
                cur->left = nullptr;
            }
            else {
                result.push_back(cur->val);
                s.pop();
                if (cur->right != nullptr)s.push(cur->right);
            }
        }
        return result;
    }
};
// @lc code=end

