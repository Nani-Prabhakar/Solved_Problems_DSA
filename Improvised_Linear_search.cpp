//Improvised Linear Search
//key value should be brought to the begining(Move to head Method):

//Iteratively::
Node* Search(Node *p,int key){

	Node* q=NULL;
	while(p){
		if(key==p->data){
			q->next=p->next;
			p->next=first;
			first=p;
			
		}
		q=p;
		p=p->next;

	}
	
	



}
//recursively::
Node* R_Search(Node* p,int key){

	Node* q=NULL;
	if(p==NULL){
		return NULL;
	}
	if(key==p->data){
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
			
	}
	q=p;
	return R_Search(p->next,key);

}