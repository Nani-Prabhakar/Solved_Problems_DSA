int delete_Node(Node *head,int pos){
    int x=-1;
    Node *p=head,*q=NULL;
    if(pos==0){
        q=p;
        p=p->next;
        x=q->data;
        delete q;
    }
    else{
        for(int i=0;i<pos-1&&p;i++){
            q=p;
            p=p->next;
        }
        if(p){
            q-next=p->next;
            x=p->data;
            delete p;
        }

    }
    return x;
}