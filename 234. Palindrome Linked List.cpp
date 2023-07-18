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
    bool isPalindrome(ListNode* head) {
        string s="";
        while(head){
            s.push_back(head->val);
            head=head->next;
        }
        string s2="";
        for(int i=s.size()-1;i>=0;i--){
            s2.push_back(s[i]);
        }
        return (s==s2);
        
    }
};