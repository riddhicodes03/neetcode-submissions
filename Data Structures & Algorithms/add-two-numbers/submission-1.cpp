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
        ListNode dummy(0);
        ListNode *p = &dummy;
        int add_on = 0;
        while(l1 && l2){
            int val = l1->val+l2->val;
            p->next=new ListNode(val%10+add_on);
            add_on = val>9?1:0;
            p=p->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int val = l1->val+add_on;
            p->next = new ListNode(val%10);
            add_on = val>9?1:0; 
            p=p->next;
            l1=l1->next;
        }
        while(l2){
            int val = l2->val+add_on;
            p->next = new ListNode(val%10);
            add_on=val>9?1:0;
            p=p->next; 
            l2=l2->next;
        }
       

        if(add_on==1)
        p->next=new ListNode(add_on);
        return dummy.next;
    }
};
