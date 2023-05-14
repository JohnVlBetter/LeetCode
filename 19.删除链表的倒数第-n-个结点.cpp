/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list. */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* headPre = new ListNode(0,head);
        ListNode* l = headPre,*r = head;
        while(n--){
            r = r->next;
        }
        while(r){
            r = r->next;
            l = l->next;
        }
        
        l->next = l->next->next;

        return headPre->next;
    }
};
// @lc code=end

