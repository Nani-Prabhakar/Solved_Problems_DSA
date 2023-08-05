2807. Insert Greatest Common Divisors in Linked List

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
    int findGCD(int a, int b) {
        // Ensure that a is greater than b
        if (b > a)
            swap(a, b);

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        if (!head || !head->next) return head;

        while (temp->next != NULL) {
            int gcd = findGCD(temp->val, temp->next->val);
            ListNode* GCD = new ListNode(gcd);
            GCD->next = temp->next;
            temp->next = GCD;
            temp = GCD->next;
        }
        return head;
    }
};
