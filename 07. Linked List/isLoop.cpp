#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void display(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=tail->next;

    
}

int isLoop(node* &head){
    node* p;
    node* q;
    p=q=head;

    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);
    
    if(p==q)
        return 1;
    else
        return 0;
}

int main(){
    node* temp=new node(5);
    node* head=temp;
    node* tail=temp;

    insert(tail,4);
    insert(tail,21);
    insert(tail,2);
    insert(tail,98);
    insert(tail,7);

    display(head);
    cout<<isLoop(head);

return 0;
}