/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        ListNode* head = new ListNode(0);
        ListNode* tmpPtr = head;
        ListNode* nPtr = new ListNode(0,tmpPtr);
        ListNode* l1Ptr = l1;
        ListNode* l2Ptr = l2;
        int num = 0;
        while(l1Ptr != nullptr || l2Ptr != nullptr){
            int curNum = 0;
            if(l1Ptr == nullptr){
                curNum = l2Ptr->val + num;
                if(curNum >= 10){
                    num = 1;
                    curNum -= 10;
                }else{
                    num = 0;
                }
                l2Ptr = l2Ptr->next;
                tmpPtr->val = curNum;
                tmpPtr->next = new ListNode(curNum);
                nPtr = nPtr->next;
                tmpPtr = tmpPtr->next;
            }else if(l2Ptr == nullptr){
                curNum = l1Ptr->val + num;
                if(curNum >= 10){
                    num = 1;
                    curNum -= 10;
                }else{
                    num = 0;
                }
                l1Ptr = l1Ptr->next;
                tmpPtr->val = curNum;
                tmpPtr->next = new ListNode(curNum);
                nPtr = nPtr->next;
                tmpPtr = tmpPtr->next;
            }else{
                curNum = l2Ptr->val + l1Ptr->val + num;
                if(curNum >= 10){
                    num = 1;
                    curNum -= 10;
                }else{
                    num = 0;
                }
                l1Ptr = l1Ptr->next;
                l2Ptr = l2Ptr->next;
                tmpPtr->val = curNum;
                tmpPtr->next = new ListNode(curNum);
                nPtr = nPtr->next;
                tmpPtr = tmpPtr->next;
            }
        }
        if(num == 1){
            tmpPtr->val = num;
            tmpPtr->next = new ListNode(num);
            nPtr = nPtr->next;
        }
        nPtr->next = nullptr;
        return head;
    }
};
// @lc code=end

