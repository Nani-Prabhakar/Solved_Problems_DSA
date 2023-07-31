/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    if(head->next==NULL||!head){
        //delete head;
        return nullptr;
    }
    Node* temp=head;
    Node* cur=NULL;
    while(temp->next){
        cur=temp;
        temp=temp->next;
    }
    cur->next=NULL;
    return head;

}
