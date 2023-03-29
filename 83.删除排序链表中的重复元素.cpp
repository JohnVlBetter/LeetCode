/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start

//Definition for singly-linked list.
/*struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* l = head, * r = head;
        while (l->next != nullptr) {
            if (r->next == nullptr) {
                if (r->val == l->val) l->next = nullptr;
                else {
                    l->next = r;
                    l = r;
                }
                break;
            }
            else while (r->next != nullptr)
            {
                if (r->val == l->val) r = r->next;
                else {
                    l->next = r;
                    l = r;
                    break;
                }
            }
        }
        return head;
    }
};
// @lc code=end

