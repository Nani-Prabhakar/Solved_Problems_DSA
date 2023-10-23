//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}









// } Driver Code Ends
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
    bool isLeaf(Node* node){
        return !node->left and !node->right;
    }
    void Left_boundary_nodes(Node* node,vector<int>&res){
        Node* cur=node->left;
        while(cur){
            if(!isLeaf(cur))res.push_back(cur->data);
            if(cur->left)cur=cur->left;
            else cur=cur->right;
        }
    }
    void Leaf_nodes(Node* root,vector<int>&res){
        if(root==NULL)return;
        if(isLeaf(root))res.push_back(root->data);
        Leaf_nodes(root->left,res);
        Leaf_nodes(root->right,res);
        
    }
    void Reverse_right_boundary_nodes(Node* node,vector<int>&res){
        Node* cur=node->right;
        stack<int>st;
        while(cur){
            if(!isLeaf(cur))st.push(cur->data);
            if(cur->right)cur=cur->right;
            else cur=cur->left;
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
    }
public:
    vector <int> boundary(Node *root)
    {
        vector<int>res;
        if(!root)return res;
        if(!isLeaf(root))res.push_back(root->data);
        Left_boundary_nodes(root,res);
        Leaf_nodes(root,res);
        Reverse_right_boundary_nodes(root,res);
        return res;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends