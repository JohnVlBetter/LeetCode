/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
 */

// @lc code=start
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* newHead = new ListNode(-1000, head);
        ListNode* cur = newHead;
        while(cur->next && cur->next->next){
            if(cur->next->val == cur->next->next->val){
                int val = cur->next->val;
                ListNode* tmp = cur->next->next;
                while(tmp && tmp->val == val) tmp = tmp->next;
                cur->next = tmp;
            }
            else{
                cur = cur->next;
            }
        }
        return newHead->next;
    }
};
// @lc code=end

