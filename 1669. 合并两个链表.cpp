/*
 * @lc app=leetcode.cn id=1669 lang=cpp
 *
 * [1669] 合并两个链表
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* node = list1;
        --a;
        b-=a;
        while(a--){
            node=node->next;
        }
        ListNode* next = node->next;
        while(b--){
            next=next->next;
        }
        node->next = list2;
        while(node->next != nullptr){
            node=node->next;
        }
        node->next = next;
        return list1;
    }
};
// @lc code=end

