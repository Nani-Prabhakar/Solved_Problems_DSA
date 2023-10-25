floor in BST
int Floor(BinaryTreeNode<int> *node, int input)
{
		/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/ 
	int floor=-1;
	while(node){
		if(node->data==input)return input;
		if(node->data<=input){
			floor=node->data;
			node=node->right;
		}
		else node=node->left;
	}
	return floor;

}
