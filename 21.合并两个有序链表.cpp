/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start

//Definition for singly-linked list.
#include <vector>
using namespace std;

/*struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* head = nullptr;
        ListNode* ptr = nullptr;
        if(list1->val <= list2->val){
            head = list1;
            ptr = list1;
            list1 = list1->next;
        }else{
            head = list2;
            ptr = list2;
            list2 = list2->next;
        }
        while (list1!=nullptr && list2!=nullptr)
        {
            if(list1->val <= list2->val){
                ptr->next = list1;
                ptr = ptr->next;
                list1 = list1->next;
            }else{
                ptr->next = list2;
                ptr = ptr->next;
                list2 = list2->next;
            }
        }
        if(list1 == nullptr) ptr->next = list2;
        else if(list2 == nullptr) ptr->next = list1;
        
        return head;
    }
};
// @lc code=end

