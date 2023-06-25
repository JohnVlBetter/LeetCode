/*
 * @lc app=leetcode.cn id=1161 lang=cpp
 *
 * [1161] 最大层内元素和
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
    int maxLevelSum(TreeNode* root) {
        if(!root)return 0;
        int max = root->val, level = 1;
        vector<TreeNode*> v = {root};
        for(int i = 1;!v.empty();++i){
            vector<TreeNode*> tmp;
            int sum = 0;
            for(int j = 0;j<v.size();++j){
                sum += v[j]->val;
                if(v[j]->left) tmp.emplace_back(v[j]->left);
                if(v[j]->right) tmp.emplace_back(v[j]->right);
            }
            if(max < sum){
                max = sum;
                level = i;
            }
            v.clear();
            v = move(tmp);
        }
        return level;
    }
};
// @lc code=end

