//creating linked list using Insert::

void Insert(int pos,int x){

	Node *p,*t;
	t=new Node;
	t->data=x;
	if(pos<0||count(p)>pos)return;
	if(pos==0){
		t=new Node;
		t->data=x;
		t->next=first;
		first=t;
	}
	else if(pos>0){
		p=first;
		for(int i=0;i<pos-1&&p;i++)
			p=p->next;
		
		t->next=p->next;
		p->next=t;
			
			
		
	}


}