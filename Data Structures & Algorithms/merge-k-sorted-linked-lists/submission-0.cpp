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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
        return nullptr;
    int l = 0;
    int r = lists.size()-1;
     return mergeSort(lists,l,r);
    }
    ListNode* merge(ListNode *l1, ListNode *l2){
    ListNode dummy(0);
    ListNode *p = &dummy;
     while(l1 && l2){
        if(l1->val < l2->val)
        {
            p->next = l1;
            l1=l1->next;
            p=p->next;
        }else{
            p->next = l2;
            l2=l2->next;
            p=p->next;
        }
     }
     if(l1)
     p->next=l1;
     if(l2)
     p->next=l2;
     return dummy.next;
   }
   ListNode* mergeSort(vector<ListNode*>& lists,int l, int r){
    { 
        if(l>=r)
        return lists[l];

        int  mid = (l+r)/2;
       ListNode *left = mergeSort(lists,l,mid);
       ListNode *right = mergeSort(lists,mid+1,r);
        return merge(left,right);

   }
   

   }
};
