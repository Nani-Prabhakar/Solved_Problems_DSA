Intersection of two sorted Linked lists

//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* temp1, Node* temp2)
    {
        // code goes here.
        //auto temp1=head1,temp2=head2;
        //vectro
        Node *cur=NULL,*prev=NULL;
        while(temp1 and temp2){
            if(temp1->data>temp2->data){
                temp2=temp2->next;
            }else if(temp1->data<temp2->data){
                temp1=temp1->next;
            }else{
                if(!cur){ prev=cur=new Node(temp1->data);}
                else{
                cur->next=new Node(temp1->data);
                cur=cur->next;}
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return prev;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends