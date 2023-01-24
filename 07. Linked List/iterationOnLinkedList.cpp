#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(node* &head,int d){

    node* temp= new node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(node* &tail,int d){

    node* temp= new node(d);
    tail->next=temp;
    tail=tail->next;
}


void displayLinkedList(node* &head){

    node* temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    
}

int main(){

    node *temp;
    temp=new node(4);
    node* head=temp;
    node* tail=temp;

    insertAtHead(head,45);
    insertAtHead(head,34);
    insertAtHead(head,32);
    insertAtHead(head,5);
    insertAtTail(tail,43);
    insertAtTail(tail,76);
    insertAtTail(tail,123);

    displayLinkedList(head);
return 0;
}