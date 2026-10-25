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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)
        return list2;
        if(list2==nullptr)
        return list1;
        
        ListNode *p = list1;
        ListNode *q = list2;
        ListNode *t = nullptr;
        ListNode *head=nullptr;
        if(p->val < q->val){
            head=p;
            t=p;
            p=p->next;
        }
        else{
            head=q;
            t=q;
            q=q->next;
        }
       
        while(p&&q){
          if(p->val<q->val)
          {
            t->next=p;
            t=p;
            p=p->next;
          }   else{
            t->next=q;
            t=q;
            q=q->next;
        }  
        }
        if(p)t->next=p;
        if(q)t->next=q;
        return head;
    }
};
