//725. Split Linked List in Parts


class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,nullptr);
        ListNode* it=head;
        int len=0;
        while(it){
            len++;
            it=it->next;
        }
        int n=len/k,r=len%k;
        ListNode* node=head;ListNode* pre=nullptr;
        for(int i=0;i<len&&node;i++,r--){
            ans[i]=node;
            for(int j=0;j<n+(r>0);j++){
                pre=node;
                node=node->next;
            }
            pre->next=nullptr;
        }
       return ans;
    }
};