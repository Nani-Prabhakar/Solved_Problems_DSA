//create Linked List Using last::

void create_Last(int x){
	Node* t=new Node;
	t->data=x;
	t->next=NULL;
	if(first==NULL){
		first=last=t;
	}
	last->next=t;
	last=t;

}