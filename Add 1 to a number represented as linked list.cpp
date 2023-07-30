//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    Node * reverse(Node* head){
        Node * p=head;
        Node * q=NULL;
        Node * r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        return head;
    }
    public:
    Node* addOne(Node *head) 
    {
       head=reverse(head);
       Node * cur=head;
       Node *  prev=head;
       int sum=cur->data+1;
       cur->data=sum%10;
       int carry=sum/10;
       cur=cur->next;
       while(cur){
           sum=cur->data+carry;
           cur->data=sum%10;
           carry=sum/10;
           prev=cur;
           cur=cur->next;
       }
       if(carry){
           prev->next=new Node(carry);
       }
       head=reverse(head);
       return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    Node * reverse(Node* head){
        Node * p=head;
        Node * q=NULL;
        Node * r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        return head;
    }
    public:
    Node* addOne(Node *head) 
    {
       head=reverse(head);
       Node * cur=head;
       Node *  prev=head;
       int sum=cur->data+1;
       cur->data=sum%10;
       int carry=sum/10;
       cur=cur->next;
       while(cur){
           sum=cur->data+carry;
           cur->data=sum%10;
           carry=sum/10;
           prev=cur;
           cur=cur->next;
       }
       if(carry){
           prev->next=new Node(carry);
       }
       head=reverse(head);
       return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends