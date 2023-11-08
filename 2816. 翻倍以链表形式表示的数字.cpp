/*
 * @lc app=leetcode.cn id=2816 lang=cpp
 *
 * [2816] 翻倍以链表形式表示的数字
 */

// @lc code=start
class Solution {
public:
    int dfs(ListNode* node){
        if(node == nullptr) return 0;
        node->val = dfs(node->next) + node->val * 2;
        if(node->val > 9){
            node->val -= 10;
            return 1;
        }
        return 0;
    }
    ListNode* doubleIt(ListNode* head) {
        int val = dfs(head);
        if(val){
            ListNode* res = new ListNode(1, head);
            return res;
        }
        return head;
    }
};
// @lc code=end

