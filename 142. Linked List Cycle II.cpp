class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head,*fast=head;
        while(slow and fast){
            slow=slow->next;
            fast=fast->next;
            if(fast)fast=fast->next;
            if(slow==fast)break;
        }
        if(!slow or !fast)return NULL;
        slow=head;
  

        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};