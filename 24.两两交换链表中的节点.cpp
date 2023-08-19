/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* l = head;
        if (l == nullptr)return nullptr;
        ListNode* r = head->next;
        if (r == nullptr)return head;
        ListNode* result = new ListNode(0, r);
        ListNode* pre = new ListNode(0, l);
        while (l != nullptr && r != nullptr) {
            l->next = r->next;
            r->next = l;
            pre->next = r;
            pre = l;
            l = l->next;
            if (l != nullptr)r = l->next;
        }
        return result->next;
    }
};
// @lc code=end

