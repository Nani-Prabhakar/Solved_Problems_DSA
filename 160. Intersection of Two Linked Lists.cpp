/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public:
    //aproach-1::
    int length(ListNode *head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }
       int lenA=length(headA);
        int lenB=length(headB);
        if(lenA>lenB){
            while(lenA>lenB){
                headA=headA->next;
                lenA--;
            }
        }
        else if(lenB>lenA){
            while(lenB>lenA){
                headB=headB->next;
                lenB--;
            }
        }
        while(headA&&headB){
            if(headA->next==headB->next)return headA->next;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;

 



    // aproach-2::
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)return NULL;
        ListNode *d1=headA;
        ListNode *d2=headB;
       while(d1!=d2){
           d1=d1==NULL?headB:d1->next;
           d2=d2==NULL?headA:d2->next;
       }
       return d1;
     
    }

};