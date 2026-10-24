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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next == nullptr)
        return head;
        ListNode* p = head;
            ListNode *q = p;
            ListNode *r = q;
            if(q->next)
            p=q->next;
        while(q){
         if(q==head)
         q->next=nullptr;
         else
         q->next = r;
         r=q;
         q=p;
         if(p)
         p=p->next;
        }
        head=r;
        return head;
    }
};
