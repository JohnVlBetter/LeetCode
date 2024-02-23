/*
 * @lc app=leetcode.cn id=2583 lang=cpp
 *
 * [2583] 二叉树中的第 K 大层和
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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            long long count = q.size();
            long long sum = 0;
            for(int idx = 0;idx<count;++idx){
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(sum);
        }
        if(res.size() < k) return -1;
        sort(res.begin(), res.end());
        return *(res.end() - k );
    }
};
// @lc code=end

