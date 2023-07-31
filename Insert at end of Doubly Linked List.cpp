/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    Node * new_node=new Node(k);
    if (head == nullptr) {
      head = new_node;
      return head;;
    }
    Node *temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->prev=temp;

    return head;
}
