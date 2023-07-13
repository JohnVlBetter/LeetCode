class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* ptr = head;
        while(ptr->next){
            if(ptr->val == ptr->next->val)
                ptr->next = ptr->next->next;
            else ptr = ptr->next;
        }
        return head;
    }
};
//83. 删除排序链表中的重复元素