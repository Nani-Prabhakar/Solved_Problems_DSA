//concatenate two Linked Lists::

void Concat(Node *head1,Node* head2){

	Node *p=head1;
	while(p->next!=NULL){

		p=p->next;

	}
	p->next=head2;
	head2=NULL;
	

}