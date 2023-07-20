/*
 * @lc app=leetcode.cn id=445 lang=cpp
 *
 * [445] 两数相加 II
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;
        ListNode *h1 = l1,*h2 = l2;
        while(h1){
            s1.emplace(h1->val);
            h1 = h1->next;
        }
        while(h2){
            s2.emplace(h2->val);
            h2 = h2->next;
        }
        int d = 0;
        ListNode* pre = nullptr;
        while(!s1.empty() || !s2.empty()){
            int num = (s1.empty()?0:s1.top()) + (s2.empty()?0:s2.top()) + d;
            if(!s1.empty())s1.pop();
            if(!s2.empty())s2.pop();
            d = num / 10;
            num %= 10;
            ListNode* newNode = new ListNode(num,pre);
            pre = newNode;
        }
        if(d){
            ListNode* newNode = new ListNode(1,pre);
            pre = newNode;
        }
        return pre;
    }
};
// @lc code=end

