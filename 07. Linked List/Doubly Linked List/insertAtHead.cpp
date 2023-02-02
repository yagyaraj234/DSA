#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

// Traversing The linked List and print data of the node
void display(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

// Inserting at head of Doubly Linked List
void insertAtHead(node* &head,int d){
    node* temp=head;
    node* newNode=new node(d);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
int main(){
    node* temp= new node(5);
    node* head=temp;

    display(head);
    insertAtHead(head,10);
    insertAtHead(head,15);
    display(head);

return 0;
}